#include "../Template.hpp"

VI sortTheOdd(VI ar)
{
    VI odds;
    bool oddFlag[ar.size()];
    memset(oddFlag, false, sizeof(oddFlag));
    for (int t = 0; t < ar.size(); t++)
    {
        if (ar[t] & 1)
        {
            oddFlag[t] = true;
            odds.pb(ar[t]);
        }
    }
    sort(odds.begin(), odds.end());

    for (int t = 0; t < ar.size(); t++)
    {
        if (oddFlag[t])
        {
            ar[t] = odds[t];
        }
    }
    return ar;
}

int main()
{
    sws;
    tieNULL;

    VI res;
    res.pb(5);
    res.pb(3);
    res.pb(2);
    res.pb(8);
    res.pb(1);
    res.pb(4);
    res = sortTheOdd(res);

    for (auto t : res)
        cout << t << " ";

    cout << endl;
    return 0;
}

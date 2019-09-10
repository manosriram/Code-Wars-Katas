#include "../Template.hpp"

bool exesOhs(string in)
{
    int x = 0, o = 0;
    for (int t = 0; t < in.length(); t++)
    {
        if (in[t] == 'x' || in[t] == 'X')
        {
            x++;
        }
        else if (in[t] == 'o' || in[t] == 'O')
        {
            o++;
        }
    }
    return (x == o);
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    ld T;
    string in;
    cin >> in;
    cout << exesOhs(in) << endl;

    return 0;
}

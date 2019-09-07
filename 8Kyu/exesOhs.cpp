#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define forn(t, n) for (ld t = 0; t < n; t++)
#define pb push_back
#define mod 1000000007
#define c_sort(a) sort(a, a + sizeof(a) / sizeof(a[0]))
#define NL cout << '\n';
#define INF (int)1e9
using namespace std;
typedef vector<int> vI;

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

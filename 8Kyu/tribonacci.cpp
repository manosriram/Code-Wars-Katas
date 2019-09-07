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

vI Tribonacci(ld n)
{
    vI store;
    int first = 1, second = 1, third = 1, next;
    for (int t = 0; t < n; t++)
    {
        next = first + second + third;
        store.push_back(first);
        first = second;
        second = third;
        third = next;
    }
    return store;
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    ld T;
    cin >> T;
    Tribonacci(T);

    return 0;
}

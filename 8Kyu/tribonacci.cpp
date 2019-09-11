#include "../Template.hpp"

VI Tribonacci(ld n)
{
    VI store;
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

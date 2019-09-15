#include "../Template.hpp"
using namespace std;

vector<int> foldArray(vector<int> array, int runs) {
    int n = array.size();
    bool odd = (n & 1);
    int mid = n - 1 / 2;
    int fr = 0, bk = n - 1;
    while (runs--) {
        while (fr < bk) {
            array[fr] += array[bk];
            fr++;
            bk--;
        }
        fr = 0;
        bk = n / 2;
        n = bk;
    }
    if (odd)
        array.erase(array.begin() + n + 1, array.end());
    else
        array.erase(array.begin() + n, array.end());

    return array;
}

int main() {
    VI ar;
    int runs;
    cin >> runs;
    ar.push_back(1);
    ar.push_back(2);
    ar.push_back(3);
    ar.push_back(4);
    ar.push_back(5);
    // ar.push_back(6);

    ar = foldArray(ar, runs);

    for (auto t : ar)
        cout << t << " ";
}
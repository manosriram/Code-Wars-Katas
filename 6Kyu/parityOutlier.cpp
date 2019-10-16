#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int FindOutlier(std::vector<int> arr) {
    int evenCount;
    std::vector<int>::iterator res;
    for (auto r : arr) {
        if (r % 2 == 0)
            evenCount++;
    }

    if (evenCount > 1) {
        res = find_if(arr.begin(), arr.end(), [](auto x) { return x % 2 != 0; });
    } else {
        res = find_if(arr.begin(), arr.end(), [](auto x) { return x % 2 == 0; });
    }

    return *res;
}

int main() {
    vector<int> v;
    int a;
    ifstream Inp("IN.txt");
    if (Inp.is_open()) {
        while (Inp >> a) {
            v.__emplace_back(a);
        }
        Inp.close();
    }

    cout << FindOutlier(v) << '\n';
}
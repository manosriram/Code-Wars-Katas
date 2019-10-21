#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

string solve(vector<string> a) {
    sort(a.begin(), a.end());

    for (auto t : a) {
        int hrs = stoi(t.substr(0, 2));
        int mins = stoi(t.substr(3, 5));
    }

    return "";
}

int main() {
    vector<string> in;
    in.__emplace_back("23:00");
    in.__emplace_back("04:22");
    in.__emplace_back("18:05");
    in.__emplace_back("06:24");

    cout << solve(in) << '\n';
}
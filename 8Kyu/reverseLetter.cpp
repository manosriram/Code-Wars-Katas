#include "../Template.hpp"
using namespace std;

string reverseLetter(string in) {
    string temp;
    for (int t=in.length() - 1; t>=0;t--) {
        if (in[t] - 'a' >= 0 && in[t] - 'a' < 26)
            temp += in[t];
    }
    return temp;
}


int main() {
    string in;
    cin >> in;
    in = reverseLetter(in);
    cout << in << endl;
}
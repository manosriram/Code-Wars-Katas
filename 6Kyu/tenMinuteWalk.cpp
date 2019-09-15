#include "../Template.hpp"
using namespace std;

bool isValidWalk(vector<char> walk) {
    int dist = 0;
    if (walk.size() != 10)
        return false;

    for (auto itr = walk.begin(); itr != walk.end(); itr++) {
        if (*itr == 'n' || *itr == 'w')
            dist += 1;
        else if (*itr == 's' || *itr == 'e')
            dist -= 1;
    }
    return (dist == 0);
}

int main() {
    sws;
    tieNULL;

    vector<char> walk;

    char temp;
    while (true) {
        cin >> temp;
        if (temp != 'z')
            walk.push_back(temp);
        else
            break;
    }

    cout << isValidWalk(walk) << endl;
}
#include <iostream>

using namespace std;

int main() {

    int megaBytes, months, usedMB, remainingMB;
    string line = " ";

    getline(cin, line);
    megaBytes = stoi(line);
    remainingMB = megaBytes;

    getline(cin, line);
    months = stoi(line);

    for(int i = 0; i < months; i++){
        getline(cin, line);
        usedMB = stoi(line);
        remainingMB += (megaBytes - usedMB);
    }

    cout << remainingMB << endl;

    return 0;
}
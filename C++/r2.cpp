//
// Created by Aniisa Bihi on 2020-11-27.
//
#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int R1, R2, S;
    string line;

    getline(cin, line);
    istringstream ss(line);
    ss >> R1 >> S;

    R2 = (S * 2) - R1;

    cout << R2 << endl;

    return 0;
}


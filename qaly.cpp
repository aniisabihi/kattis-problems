//
// Created by Aniisa Bihi on 2020-11-26.
//
#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int constantQALY;
    float periodQALY, period, QALY = 0;
    string line = " ";

    getline(cin, line);
    istringstream s(line);
    constantQALY = stoi(line);

    for(int i = 0; i < constantQALY; i++)
    {
        getline(cin, line);
        istringstream ss(line);
        ss >> periodQALY >> period;

        QALY += (periodQALY*period);
    }

    cout << QALY << endl;

    return 0;
}

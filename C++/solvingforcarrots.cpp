//
// Created by Aniisa Bihi on 2020-11-26.
//

#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int contestants, solvedProblems, carrots = 0;
    string line = " ";

    getline(cin, line);
    istringstream ss(line);
    ss >> contestants >> solvedProblems;
    carrots = solvedProblems;

    cout << carrots << endl;

    return 0;
}

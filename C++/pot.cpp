//
// Created by Aniisa Bihi on 2020-11-26.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, line, base, exp, X = 0;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> line;

        exp = line % 10;
        base = line / 10;
        X += pow(base, exp);
    }

    cout << X << endl;

    return 0;
}
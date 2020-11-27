//
// Created by Aniisa Bihi on 2020-11-27.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N;
    long points = 2;

    cin >> N;

    while( N > 0){
        points *= 2;

        points--;
        N--;
    }

    points = pow(points, 2);

    cout << points << endl;

    return 0;
}

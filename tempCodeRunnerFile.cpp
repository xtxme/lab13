#include <iostream>
#include <cmath>
using namespace std;

void showImage(bool image[N][M]) {
cout<<"------------------------------------------------------------------------";
    for (int i = 0; i < N; ++i) {
    cout<< "\n|                                                                      |";
        for (int j = 0; j < M; ++j) {
            if (image[i][j] == 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    }

}
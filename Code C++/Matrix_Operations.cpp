#include <stdio.h>
#include<bits/stdc++.h>
#include <cctype>
using namespace std;

const int row = 2, col = 2;

class Matrix_Operations {
    int a[row][col], b[row][col];
    int temp[row][col];
public:
    void readmatrix();
    void displaymatrix();
    void multiply();
    void add();
    void sub();
};

void Matrix_Operations::readmatrix() {

    // Enter the elements
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> a[i][j];
    cout << "\n";

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> b[i][j];
    cout << "\n";
}

void Matrix_Operations::displaymatrix() {
    cout << "\n Elements are: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << temp[i][j] << " ";
        cout << "\n";
    }
}

void Matrix_Operations::add() {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            temp[i][j] = a[row][col] + b[row][col];
    displaymatrix();
}

void Matrix_Operations::multiply() {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            temp[i][j] = a[row][col] + b[row][col];
}

void Matrix_Operations::sub() {
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            temp[i][j] = a[row][col] + b[row][col];
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Matrix_Operations m;
    m.readmatrix();
    int ch;
    //cout << "Enter you choice: \n 1. Read \n 2. Display \n 3. Add \n 4. Subtract \n 5. Multiply \n";
    cin >> ch;
    switch (ch) {
    case 1: m.displaymatrix(); break;
    case 2: m.add(); break;
    case 3: m.sub(); break;
    case 4: m.multiply(); break;
    }

    return 0;
}
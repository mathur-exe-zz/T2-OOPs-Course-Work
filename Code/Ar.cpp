#include <stdio.h>
#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, s, ar;
    cout << "enter the dimension \n";
    cin >> a >> b;
    cout << "Shape? \n 1. Rectangle \n 1. Triangle \n";
    cin >> s;
    switch (s) {
    case 1:
        ar = a * b;
        cout << "Area: " << ar;
        break;
    case 2:
        ar = a * b / 2;
        cout << "Area: " << ar;
        break;
    }
    return 0;

}
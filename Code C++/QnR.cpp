#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, div, rem;
    cout << "enter the numbers \n";
    cin >> a >> b;
    div = a > b ? a / b : b / a;
    rem = a > b ? a % b : b % a;
    cout << "Q : " << div << "\n";
    cout << "R : " << rem << "\n";
    return 0;

}
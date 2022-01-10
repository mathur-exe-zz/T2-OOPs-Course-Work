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
    char ch;
    cout << "enter the char \n";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') cout << "V";
    else cout << "C";

    return 0;

}
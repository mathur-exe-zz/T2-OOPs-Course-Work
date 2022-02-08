#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    cout << "enter the numbers \n";
    cin >> a >> b;
    c = a + b;
    cout << "Sum : " << c;
    return 0;

}
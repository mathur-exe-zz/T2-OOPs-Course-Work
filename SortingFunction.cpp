#include <stdio.h>
#include<bits/stdc++.h>
#include <cctype>
using namespace std;

void read(int a[], int &);
void disp(int a[], int);
void sort(int a[], int);
void swap(int &, int &);

void read(int a[], int &n)
{
    // cout << "Enter no. of elements: \n\n";
    cin >> n;
    // cout << "Enter array elements \n\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void disp(int a[], int n)
{
    cout << "Array elements are" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

void sort(int a[], int n) {
    for (int i = 0; i < (n - 1); i++) {
        for (int j = 0; j < ((n - 1) - i); j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void swap(int &p, int &q)  //Reference variable
{
    int t = p;
    p = q;
    q = t;
}


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a[10], n;
    read(a, n);
    disp(a, n);
    sort(a, n);
    cout << "\nAfter sorting ";
    disp(a, n);
}
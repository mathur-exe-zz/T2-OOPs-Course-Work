#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
class ar {
    // float l, b;
public:
    // void read();
    // void disp();
    int area(int);
    int area(int,int);
    float area(float);
    float area(float,float);
};

int area(int s) {
    return(s*s);
}
int area(int l,int b) {
    return(l*b);
} 
float area(float r) {
    return(3.14*r*r);
}
float area(float bs,float ht) {
    return((bs*ht)/2);
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   
   ar a;
   int l, b;
   float r, br, ht;
   int ch;
   cin >> ch;
   switch(ch) {
    case 1:
        cout << "Dimension of sq: ";
        cin >> l;
        cout << a.area(l);
        break;
    case 2:
        cout << "Dimension of circle: ";
        cin >> l;
        cout << a.area(l);
        break;
    case 3:
        cout << "Dimension of Triangle: ";
        cin >> l >> b;
        cout << a.area(br, ht);
        break;
    case 4:
        cout << "Dimension of Rectangle: ";
        cin >> l >> b;
        cout << a.area(l, b);
   }
    return 0;
}
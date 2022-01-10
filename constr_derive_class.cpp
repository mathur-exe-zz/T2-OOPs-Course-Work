#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class dimen {
    float l,w;
public:
    dimen (float a, float b){
        l =a; w =b;
    }
    void rect(){
        cout<<"length :"<<l<<endl;
        cout<<"breadth :"<<w<<endl;
        float area= l*w;
        cout<<"area :"<<area<<endl;
    }
};
class peri : public dimen {
    float perimeter;
public:
    peri(float a, float b): dimen(a,b) {perimeter = 2*(a+b);}
    void display(){
        cout<<"Perimeter :"<<perimeter<<endl;
    }
};

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    peri ob(5,7);
    ob.rect();
    ob.display();

    return 0;
}
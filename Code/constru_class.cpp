#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class Box {
    float l, w, ht;
public:
    Box () {
        l =10;
        w =5;
        ht =6;
    }
    void find()
    {
        cout<<"l :"<<l<<endl;
        cout<<"w :"<<w<<endl;
        cout<<"ht :"<<ht<<endl;
        float vol= l *w*ht;
        cout<<"volume :"<<vol<<endl;
    }
};

class Boxwt : public Box
    {
    float wt;
    public:
    void display() {
       cout<<"wt :"<<wt <<endl;
    }
};

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Boxwt ob;
    ob.find();
    ob.display();

    return 0;
}
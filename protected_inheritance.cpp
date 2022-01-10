#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class student {
    protected string name;
    protected int rollno;
public:
    void get() {
        cout << "Enter name and roll no \n";
        cin  >> name >> rollno;
    }
    void print() {
        cout << "Name : " << name<<"\n";
        cout << "Roll No: " << rollno<<"\n";
    }
};
// ------------------------------------------
class result : public student {
    int sub1, sub2, sports, total;
public:
    void read();
    void find_total();
    void display();
};

void result::read() {
    get();
    cout << "Enter Marks: "<<"\n";
    cin  >> sub1 >> sub2 >> sports;
}

void result::find_total() {
    total=sub1+sub2+sports;
}

void result::display(){
    print();
    cout<<"Sub1 Marks: "<<sub1<<"\n";
    cout<<"Sub2 Marks: "<<sub2<<"\n";
    cout<<"SportsS Marks: "<<sports<<"\n";
    cout<<"Total Marks: "<<total<<"\n";
}
// -------------------------------------------------------
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    result ob;
    // ob.get();
    // ob.print();
    ob.read();
    ob.find_total();
    ob.display();

    return 0;
}
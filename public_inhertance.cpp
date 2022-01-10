#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class student {
    string name;
    int rollno;
public:
    void get() {
        cout << "Enter name and roll no \n";
        cin  >> name >> rollno;
    }
    void print() {
        cout << "Name : " << name << "\n";
        cout << "Roll No: " << rollno << "\n";
        // cout << "\n";
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
    cout << "Enter Marks: ";
    cin  >> sub1 >> sub2 >> sports;
    // cout << "\n";
}

void result::find_total() {
    total=sub1+sub2+sports;
}

void result::display(){
    print();
    cout<<"Sub1 Marks: "<<sub1 << "\n";
    cout<<"Sub2 Marks: "<<sub2 << "\n";
    cout<<"Sports Marks: "<<sports << "\n";
    cout<<"Total Marks: "<<total << "\n";
    cout<<"\n";
}
// -------------------------------------------------------
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    result ob;
    ob.get();
    ob.print();
    ob.read();
    ob.find_total();
    ob.display();

    return 0;
}
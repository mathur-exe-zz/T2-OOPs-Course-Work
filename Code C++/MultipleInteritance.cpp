#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class employee {
string name;
int ID;
int age;
public:
    void get() {
        cout<<"Enter details"<<endl;
        getline(cin,name);
        cin>>ID>>age;
    }
    void print() {
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<ID<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
//-----------------------------------------------------
class emp_salary {
    float salary;
public:
    void get() {
    cout<<"Enter salary"<<endl;
    cin>>salary;
    }
    void print()
    {
    cout<<"Salary: "<<salary<<endl;
    }
};
//-------------------------------------------------------
class database:private employee, public emp_salary {
    string desig;
public:
    void get3(); //overridden function
    void display();
};
    
void database::get3() {
    //get();
    employee::get();
    cout<<"Enter Designation"<<endl;
    cin>>desig;
}
void database::display() {
    //print1();
    employee::print();
    cout<<"Designation : "<<desig<<endl;
}
//-------------------------------------------------------
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    database ob;
    //ob.employee::get();
    ob.emp_salary::get();
    ob.get3();
    //ob.employee::print();
    ob.emp_salary::print();
    ob.display();
    return 0;
}
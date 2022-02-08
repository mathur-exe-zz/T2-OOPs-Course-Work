#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

class complex
{
    float real, img;
public:
    void read();
    void disp();
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    complex operator/(complex);
    complex operator~();
};

void complex::read() {
    cout << "Enter real and imaginary parts: \n";
    cin >> real >> img;
}

// complex::complex(float x, float y)
// {
//     real = x;
//     img = y;
// }

void complex::disp()
{
    if (img >= 0)
        cout << real << "+" << img << "i" << endl;
    else
        cout << real << img << "i" << endl;
}

complex complex::operator+(complex c2)
{
    complex s;
    s.real=real+c2.real;
    s.img=img+c2.img;
    return s;
}
complex complex::operator-(complex c2)
{
    complex s;
    s.real=real-c2.real;
    s.img=img-c2.img;
    return s;
}

complex complex::operator*(complex c2)
{
    complex s;
    s.real=real*c2.real-img*c2.img;
    s.img=real*c2.img+img*c2.real;
    return s;
}

complex complex::operator/(complex c2)
{
    // complex c3, c4, dv;
    // int a;
    // a = c2.real * c2.real + c2.img * c2.img;
    // c3 = c2.conj();
    // c4 = mul(c3);
    // dv.real = c4.real / a;
    // dv.img = c4.img / a;
    // return dv;

    complex c3,c4,dv;
    int a;
    a=(pow(c2.real,2))+(pow(c2.img,2));
    c3=~c2;
    c4=(*this)*c3;          //this=&c1
    dv.real=c4.real/a;
    dv.img=c4.img/a;
    return dv;
}

complex complex::operator~()
{
    // complex c;
    // c.real = real;
    // c.img = -img;
    // return c;

    complex s;
    s.real=real;
    s.img=-img;
    return s;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    complex c1,c2,sum,diff,prod,DV,C1,C2;
    int ch;
    cin >> ch;
    cout<<"Enter real and img part of c1\n";
    c1.read();
    cout<<"Enter real and img part of c2\n";
    c2.read();
    switch(ch){
            case 2: c1.disp();
                c2.disp();
                break;
            case 3: sum=c1+c2;          //sum=c1.operator+c2
                cout<<"Addition:\n";
                sum.disp();
                break;
            case 4: diff=c1-c2;
                cout<<"Difference:\n";      //diff=c1.operator-c2
                diff.disp();
                break;
            case 5: prod=c1*c2;
                cout<<"Product:\n";     //prod=c1.operator*c2
                prod.disp();
                break;
            case 6: DV=c1/c2;
                cout<<"Division:\n";        //div=c1.operator/c2
                DV.disp();
                break;
            case 7: C1=~c1;
                cout<<"Conjugate of 1st:\n";
                C1.disp();
                C2=~c2;
                cout<<"Conjugate of 2nd:\n";
                C2.disp();
        }
    return 0;
}
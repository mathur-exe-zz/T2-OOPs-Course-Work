#include <stdio.h>
//#include<bits/stdc++.h>
//#include <cctype>
using namespace std;
#include<iostream>
#include<math.h>

class complex
{
    float real, img;
public:
    complex(float, float);   //parameterized constructor
    complex() { }            //do nothing constructor
    ~complex() {  }          //destructor
    void display();
    complex add(complex);
    complex sub(complex);
    complex mul(complex);
    complex div(complex);
    complex conj();
};

complex::complex(float x, float y)
{
    real = x;
    img = y;
}

void complex::display()
{
    if (img >= 0)
        cout << real << "+" << img << "i" << endl;
    else
        cout << real << img << "i" << endl;
}

complex complex::add(complex c2)
{
    complex s;
    s.real = real + c2.real;
    s.img = img + c2.img;
    return s;
}
complex complex::sub(complex c2)
{
    complex d;
    d.real = real - c2.real;
    d.img = img - c2.img;
    return d;
}

complex complex::mul(complex c2)
{
    complex p;
    p.real = real * c2.real - img * c2.img;
    p.img = real * c2.img + img * c2.real;
    return p;
}

complex complex::div(complex c2)
{
    complex c3, c4, dv;
    int a;
    a = c2.real * c2.real + c2.img * c2.img;
    c3 = c2.conj();
    c4 = mul(c3);
    dv.real = c4.real / a;
    dv.img = c4.img / a;
    return dv;
}

complex complex::conj()
{
    complex c;
    c.real = real;
    c.img = -img;
    return c;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    complex c1(5.2, 3.3), c2(6, 8), sum, diff, prod, C, DV;

    c1.display();
    c2.display();

    sum = c1.add(c2);
    cout << "Addition is:\n";
    sum.display();

    diff = c1.sub(c2);
    cout << "Subtraction is:\n";
    diff.display();

    prod = c1.mul(c2);
    cout << "Product is:\n";
    prod.display();

    DV = c1.div(c2);
    cout << "Division is:\n";
    DV.display();

    C = c1.conj();
    cout << "Conjugate is:\n";
    C.display();
    return 0;

}
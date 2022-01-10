#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class string{
	char str[20];
public: 
	void getdata(){
		gets(str);
	}
	int operator== (string s){
		if(!stremp(str, s.str)) return 1;
		return 0;
	}
}
int main() {
	String s1, s2;
	cout << "Enter the strings";
	s1.getdata();
	s2.getdata();
	if(s1==s2) cout<<"\n Strings are equal";
	else cout<<"\n Strings are unequal";
	return 0;
} 
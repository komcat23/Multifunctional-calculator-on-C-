#include<iostream>
#include<cmath>
using namespace std;

int main(){
	cout << "calculator" << endl;
	int a;
	cin >> a;
	int b;
	cin >> b;
	char c[99];
	cin >> c;
	if(strcmp(c, "plus") == 0 || (c, "+") == 0){
		int f = a+b;
		cout << f << endl;
	}
	else if(strcmp(c, "-") == 0 || (c, "minus") == 0){
		int f = a-b;
		cout << f << endl;
	}
	else if(strcmp(c, "*") == 0 || (c, "multiple") == 0){
		int f = a*b;
		cout << f << endl;
	}
	else if(strcmp(c, "**") == 0){
		long f = pow(a,b);
		cout << f << endl;
	}
	return 0;
}

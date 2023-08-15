#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	float a,b;
	char op;
	cout<<"enter the numbers on which you want calculation \n";
	cout<<"enter the first number\n";
	cin>>a;
	cout<<"enter the second number\n";
	cin>>b;
	cout<<"Enter the opression (for example : + - * /)\n";
	cin>>op;
	
	switch(op){
		case '+':
			cout<< a << " + " << b << "=" << a+b;
			break;
		case '-':
			cout<< a << " + " << b << "=" << a-b;
			break;
		case '*':
			cout<< a << " + " << b << "=" << a*b;
			break;
		case 'X':
			cout<< a << " + " << b << "=" << a*b;
			break;
		case 'x':
			cout<< a << " X " << b << "=" << a*b;
			break;
		case '/':
			cout<< a << " / " << b << "=" << a/b;
			break;
		case '÷':
			cout<< a << " / " << b << "=" << a/b;
			break;
		default :
			cout<<"operator is incorrect";
			break;
	}
	return 0;
}

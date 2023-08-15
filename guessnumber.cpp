#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	string name;
	char in;
	int inputbyuser;
	cout<< "enter username "; //taking username from user
	getline(cin,name);
	cout << endl;
	do{
		srand(0);
		int n = rand()%10+1; //rand is used to select number between 1 to 10
		cout<<"Enter any number between 0 to 10  ";
		cin>>inputbyuser; //taking input from user inbetween 1 to 10
	if(inputbyuser<10){
	
		if(inputbyuser==n){
			cout<<"congo you guess correctly";
			
		}
		else
		{
			cout<<"Incorect guess\n";
		}
		cout<<"Wanna try again if yes then enter Y if No then enter N  ";
		cin>>in;
		cout<<endl;
			}
	else{
		cout<<"please enter number inbetween 1 to 10";
		}
}
	
	
	while(in !='N');
	cout<<"Game over"<<endl;
}
	

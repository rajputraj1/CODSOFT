#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	string name;
	char in;
	int inputbyuser;
	cout<< "enter username "; //taking username from user
	getline(cin,name);
	cout << endl;
jump :	srand(time(0));
	int n = rand()%10+1; //rand is used to select number between 1 to 10
	int tries=0;
	do{
		//tries = 0;
		//srand(time(0));
		cout<<"Enter any number between 1 to 10  ";
		cin>>inputbyuser; //taking input from user inbetween 1 to 10
		tries++;
	if(inputbyuser>10){
			cout<<"please enter number inbetween 1 to 10";
		}
	
	else if(inputbyuser>n){
			cout<<"just little bit less you are very close\n";
			
		}
			
	else if(inputbyuser<n)
		{
			cout<<"just little bit more you are very close\n";
				
		}
	else
		{
			cout<<"Congratulation you guess it correctly in "<< tries << " tries\n";
		}
		//cout<<"Wanna try again if yes then enter Y if No then enter N  ";
		//cin>>in;
		//cout<<endl;
			
	
}
	
	
	while(inputbyuser != n);
	
	
	//cout<<"Game over"<<endl;
	cout<<"Wanna try again if yes then enter Y if No then enter N  ";
	cout<<endl;
	cin>>in;
	if(in != 'Y'){
		cout<<"GAME OVER";
	}
	else{
		goto jump;
	}
	
}
	

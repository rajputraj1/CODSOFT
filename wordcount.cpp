#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char filename[100];
	ifstream inputfile;
	cout << "Enter the file name to be opened:";
	cin>> filename;
	ifstream fin(filename);
    char word[5000]; int count=0;
    if(fin == NULL){
        cout << "Error : Not able to open the file";

    }
    else{
        
        while(!fin.eof()){
        	
        	fin >> word;
        	//cout << word;
            count++;
        }
        fin.close();
        cout << "Number of words " << count;
    }
    return 0;
}

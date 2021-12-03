#include <iostream>
using namespace std;
//137114 Matthew Chomba Muchangi

//The Function Prototype for Check Even 
double checkEven(int a);

//The Function Declaration for Check Even
double checkEven(int a){
	double result;
	result = a%2;
	return result;
}

int main(){
	double a;
	bool r;
	char response;
	do{
		cout<<"This is my CheckEven Calculator \n"<<endl;
		cout<<"Input any number : \n\n";
		cin>>a;
		cout<<"\n";
		r = checkEven(a);
		if(r == 0){
		cout<<"The number "<<a<<" is even!!! \n";
		cout<<"Do you want to try another number ? (Y/N)";
		cout<<"\n";
		cin>>response;	
		}else{
		cout<<"The number "<<a<<" is not even!!! \n";
		cout<<"Do you Want to try another number ? (Y/N)";
		cout<<"\n";
		cin>>response;
		}
	}while(response=='Y');
	return 0;
}

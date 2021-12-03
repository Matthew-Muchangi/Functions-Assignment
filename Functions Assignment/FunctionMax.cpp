#include <iostream>
using namespace std;
//137114 Matthew Chomba Muchangi

int main(){
	
	int i;
	int n;
	
	float array [3];
	
	
	cout<<"Input three intergers : \n";
	n = 3;
	cout<<"\n";
	
	
	for(i = 0; i < n; ++i){
       cout << "Input integer " << i + 1 << " : ";
       cin >> array[i];
    }
    
    
    for(i = 1;i < n; ++i){
       if(array[0] < array[i])
           array[0] = array[i];
    }
    cout << "The Largest integer  is : " << array[0] << endl;

    return 0;
}

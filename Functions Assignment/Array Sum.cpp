#include <iostream>
using namespace std;
//137114 Matthew Chomba Muchangi

int main(){
	
   int array[5];
   int n = 5, sum = 0;
   int i = 0;
   
   
	cout<<"Please input five intergers : \n";
	cout<<"\n";
	
   	
	for(i = 0;i < n; ++i){
       cout << "Input integer " << i + 1 << " : ";
       cin >> array[i];
    }
   
   for(int i = 0; i<n ; i++){
      sum+=array[i];
   }
   cout<<"\n";
   cout<<"The sum of the five integers within the array is : "<<sum;
   return 0;
}

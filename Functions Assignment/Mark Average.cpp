#include <iostream>
using namespace std;
//137114 Matthew Chomba Muchangi

int main(){
	
   int array[7];
   int n = 7, sum = 0;
   int i = 0;
   int count = 0;
   float markAverage;
   
   	
	cout<<"Input seven student marks : \n";
	cout<<"\n";
	
	
	for(i = 0; i < n; ++i){
       cout << "Input student mark " << i + 1 << " : ";
       cin >> array[i];
    }
	
	
	 for(int i = 0; i<n ; i++){
      sum+=array[i];
   }
    
    markAverage = sum / n;
    cout<<"\n";
    cout << "The average of the marks of the 7 students are : " << markAverage;
 
    return 0;
}

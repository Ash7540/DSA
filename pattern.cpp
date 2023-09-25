#include <iostream>
using namespace std;

int main(){

// star pattern	
//	int a ;
//	cin  >> a;
//	
//	int i = 1;
//	
//	while (i <= a){
//		int j = 1;
//		while (j<=a){
//		   	cout<<"*";
//		   	j += 1;
//		}
//		cout<<endl;
//		i += 1;
//	}


// number pattern

   int a;
   cout<<"Enter number ";
   cin>> a;
   
   int i = 1;
   while (i<=a){
   	  int j = i;
//    int j = 1;
   	  while(j<=a){
   		  cout<<i;
   		  j += 1;
	    }
	  cout<<endl;
	  i += 1;
	
   }
   
}
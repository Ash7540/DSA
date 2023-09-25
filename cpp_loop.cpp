#include <iostream>
using namespace std;
int main()
{
     int a;
     cout<<"Enter the number ";
     cin>>a;
     
//     int i = 1;
//     int sum = 0;
//     while(i<=a){
//     	sum += i;
//     	i += 1;
//	 }
//	 cout<<"Value of sum is "<<sum<<endl;

// prime and not prime
     int i = 2;
     while(i<a){
     	if(a%i == 0){
     		cout<<"Not Prime for "<<i<<endl;
		 }
		 else{
		 	cout<<"Prime for "<<i<<endl;
		 }
		 i += 1;
	 }

}
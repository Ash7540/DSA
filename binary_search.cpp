#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start = 0;
	int end = size - 1;
	
	int mid = start + (end - start)/2;
	
	while (start <= end){
		if (arr[mid] == key){
			return mid;
		}
		// go to right part
		if (key > arr[mid]){
			start = mid +1;
		}
		else{
			end = mid - 1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}

int main(){
	int even[6] = {2,4,6,8,12,18};
	int odd[5] = {1,3,5,7,9};
	
	int index_even = binarySearch(even, 6, 4);
	cout<<"Index of 4 is "<<index_even<<endl;
	
	int index_odd = binarySearch(odd, 5, 7);
	cout<<"Index of 4 is "<<index_odd<<endl;
	
	return 0;
}
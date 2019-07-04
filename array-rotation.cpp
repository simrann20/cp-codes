#include <iostream>
using namespace std;
int FindSortedArrayRotation(int arr[], int n) {
    * Taking input
    int i,minindex,min;
  minindex=0;
  min=arr[0];
  for(i=0;i<n;i++)
  { if(arr[i]<min) {
    min = arr[i];
    minindex=i;
  	}
  }
  return minindex;
}
 
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindSortedArrayRotation(input,size);
	
	return 0;

}

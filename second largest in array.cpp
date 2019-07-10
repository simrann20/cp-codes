///This code is used to find out the second largest element in an array using the optimized approach
#include <iostream>
#include<climits>
using namespace std;
int FindSecondLargest(int arr[], int n){
  int i,j,max;
  max=arr[0];
  if(n<=1)
    return INT_MIN;
  for(i=0;i<n;i++)
  {   if(arr[i]>max)
       max=arr[i];
  }
  int secmax=INT_MIN;
  for(i=0;i<n;i++)
  {
    if(arr[i]<max&&arr[i]>secmax)
    {
      secmax=arr[i];
    }    
}
  return secmax;  
}
int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cout<<FindSecondLargest(input,size);
	return 0;
}

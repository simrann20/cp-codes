#include <iostream>
using namespace std;
#include<climits>
int FindSecondLargest(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
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

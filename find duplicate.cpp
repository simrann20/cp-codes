#include <iostream>
using namespace std;
int MissingNumber(int arr[], int size){    
  int i,j;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
        return arr[i];
    }
  } 
}
int main() {
	int size;
	cin>>size;
	int * input=new int[1+size];
	for(int i=0;i<size;i++)
		cin>>input[i];
	cout<<MissingNumber(input,size);	
	
	return 0;
}

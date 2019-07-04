#include <iostream>
using namespace std;
void PushZeroesEnd(int arr[], int n){
  int a[1000000],i,j;
  for(i=0, j =0;i<n;i++)
  {
    if(arr[i]!=0) {
      a[j]=arr[i];
    	j++;
    } 
  }
for(;j<n;j++, i++)
  a[j]=0;
  
  for(i = 0; i < n; i++) {
    arr[i] = a[i];
  }
}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	
	return 0;

}

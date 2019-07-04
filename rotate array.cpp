#include <iostream>
using namespace std;
void Rotate(int arr[], int d, int size) {
   
int i,k,a[1000];
  for(i=0;i<d;i++)
  {
    a[i]=arr[i];
  }
  
  for(k=d;k<=size-1;k++)
  {
    arr[k-d]=arr[k];
  }
  for(int j=size-d,i=0;j<size;j++){
  arr[j]=a[i++];
  }
}
int main() {

	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;
    
    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}

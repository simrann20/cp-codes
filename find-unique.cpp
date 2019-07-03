#include<iostream>
#include <algorithm>
using namespace std;
int FindUnique(int * arr, int size){
  
  int i,j;
  for(i=0;i<size;i++)
  {
   int  count = 0;
    for(j=0;j<size;j++)
    {
      if(arr[i]==arar[j])
        count++;
    }
    if(count == 1)
    {
      return arr[i];
    }
  }  

    
}
int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}


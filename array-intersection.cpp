#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;


int main() {

	int size1,size2;

	cin>>size1;
	int *input1=new int[1+size1];	
	
	for(int i=0;i<size1;i++)
		cin>>input1[i];

	cin>>size2;
	int *input2=new int[1+size2];	
	
	for(int i=0;i<size2;i++)
		cin>>input2[i];
	
	
	intersection(input1,input2,size1,size2);

		
	return 0;
}

void intersection(int input1[], int input2[], int size1, int size2) {
   
        int i,j;
  for(i=0;i<size1;i++)
  {
    for(j=0;j<size2;j++)
    
    { if(input1[i]==input2[j]) {
        input2[j]=INT_MAX;
        cout<<input1[i]<<endl;
     break;
    }
    
 
  }
}
  
}

#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int n, int m){
  int i,j;
  for(j=0;j<m;j++)
  {  
    if(j%2==0)
    {
    for(i=0;i<n;i++)
      cout<<input[i][j]<<" ";
    }
      else
      {  for(i=n-1;i>=0;i--)
       
     cout<<input[i][j]<<" ";
      }

    }
 
}  
int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    wavePrint(input, row, col);
}

#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int n, int m){
	
      int rs=0,re=n-1,cs=0,ce=m-1;
    int cnt=0,i;
  while(cnt<=n*m)
  {
    i=cs;
    while(i<=ce)
    {
      cout<<input[rs][i]<<" ";
      cnt++;
      i++;
    }
    if(cnt==n*m)
    return;
    rs++;
    i=rs;
    while(i<=re)
    {
      cout<<input[i][ce]<<" ";
      cnt++;
      i++;
    }
   if(cnt==n*m)
     return;
    ce--;
    i=ce;
    while(i>=cs)
    {
      cout<<input[re][i]<<" ";
      cnt++;
      i--;
    }
    if(cnt==n*m)
      return;
    re--;
    i=re;
    
    while(i>=rs)
    {
      cout<<input[i][cs]<<" ";
      cnt++;
      i--;
    }
    if(cnt==n*m)
      return;
    cs++;
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
    spiralPrint(input, row, col);
}

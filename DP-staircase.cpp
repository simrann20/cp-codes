#include<iostream>
#include<climits>
using namespace std;
int countStepsTo1(int n){

  if(n<=1)
    return 0;
  int a=INT_MAX,b=INT_MAX,c=INT_MAX;
 if(n%2==0) 
    a=countStepsTo1( n/2);
  if(n%3==0)
     b=countStepsTo1( n/3);

     c=countStepsTo1( n-1);
return min(a,min(b,c))+1;

}

int main(){

  int n;
  cin  >> n;
  cout << countStepsTo1(n) << endl;

}



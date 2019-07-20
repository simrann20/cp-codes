///this code is used for printing the min no. of steps used for going to a particular step in a staircase using DP
#include<iostream>
#include<climits>
using namespace std;

int c(int n,int*output)
{
  int a=INT_MAX,b=INT_MAX,c=INT_MAX;
  if(n<=1)
    return 0;
  if(n==2||n==3)
    return 1;
 output[0]=0;
 output[1]=0;
 output[2]=1;
 output[3]=1;
  for(int i=4;i<=n;i++)
  {
    if(i%3==0)
    {
      if(i%2==0)
      {  a=output[i/2];
          b=output[i/3];
          c=output[i-1];
       output[i]=min(a,min(a,b))+1;
    }
      else
      {
         b=output[i/3];
          c=output[i-1];
       output[i]=min(b,c)+1;
      }
        
    }
    else if(i%2==0)
    { b=output[i/2];
      
     c=output[i-1];
    output[i]=min(b,c)+1;
  }  
  
    else
     output[i]=output[i-1]+1;
    
  
  }
 return output[n]; 
}
int countStepsTo1(int n){

  int* output=new int[n+1];
  for(int i=0;i<=n;i++)
  {
    output[i]=-1;
  }
    return c(n,output);
}


int main(){

  int n;
  cin  >> n;
  cout << countStepsTo1(n) << endl;

}





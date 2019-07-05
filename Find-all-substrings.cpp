#include<iostream>
#include<string.h>
using namespace std;

void printSubstrings(char str[]){

int i=0,j,k;
  int n=strlen(str);
  for(;i<n;i++)
  {
  for(k=i;k<n;k++)
  {
    
    for(j=i;j<=k;j++)
    {
      cout<<str[j];
   
    }
    cout<<'\n'; 
  }
  }
}

int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}


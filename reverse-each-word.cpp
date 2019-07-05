#include <iostream>
#include "solution.h"
using namespace std;
// input - given string
// Update in the given input itself. No need to return or print anything
#include<string.h>
void reverseEachWord(char input[]) {
    // Write your code here
  int i,k,s=0,e=0,temp,j;
  int l=strlen(input);
  for(i=0;i<=l;i++)
  {
    if(input[i]==' ' || input[i]=='\0'){
     
      e=i-1;
  
   for(j=s,k=e;j<k;j++,k--)
     {
       temp=input[j];
       input[j]=input[k];
     input[k]=temp;
     }
      s=i+1;
    }
  
  
  }
  }
    
  
    


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
}

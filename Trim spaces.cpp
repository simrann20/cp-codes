#include <iostream>
#include<string.h>
using namespace std;
void trimSpaces(char input[]) {
      int i,j;
  int l=strlen(input);
  for(i=0;input[i]!='\0';)
  {
    if(input[i]==' ')
      
    {
      for(j=i;j<l;j++)
    
      input[j]=input[j+1];
    }  
    else
    {
      i++;
    }
    
  }
  
}


int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}



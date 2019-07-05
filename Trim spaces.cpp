#include <iostream>
using namespace std;
#include<string.h>
void trimSpaces(char input[]) {
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */
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



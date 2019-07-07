#include <iostream>
using namespace std;

void removeX(char a[]) {
    // Write your code here
 
     if(a[0]=='\0')
       return ;
  if(a[0]=='x')
  {     
    for(int i=0;a[i]!='\0';i++)
    {
       
      a[i]=a[i+1];
    }
    removeX(a);
  }                                                                      
  removeX(a+1);
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

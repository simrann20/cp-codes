#include <iostream>
#include<cstring>
void pairStar(char a[]) {
   
     int i;
  int l=strlen(a);
  if(l<=1)
    return ;
    pairStar(a+1);
  int h=strlen(a);
  
  if(a[0]==a[1])
  {
    for(i=h;i>=1;i--)
      a[i+1]=a[i];
      a[1]='*';
  }
  else
  return;
  
  
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

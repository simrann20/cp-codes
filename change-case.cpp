#include <iostream>
using namespace std;
void convertStringToLowerCase(char input[]) {
 
  int i;
  for(i=0;input[i]!='\0';i++)
  {
    if(input[i]==' ')
      continue;
    else
      input[i]+=32;
  }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    convertStringToLowerCase(input);
    cout << input << endl;
}

/// This code is used to extract unique features from a string using the STL implemented hashmaps
#include<iostream>
#include<string.h>
#include<unordered_map>
#include<vector>
using namespace std;
char* uniqueChar(char *str){
   
  char *s=new char[1000];
unordered_map<char,int>m;
  int key,i;
  for(i=0;i<strlen(str);i++)
  {
           key=str[i];

    if(m.count(key)==1)
      m[key]=1;
    else
      m[key]++;
  }
         

    for(int j=0,k=0;j<strlen(str);j++)
    {  
      if(m.count(str[j])==1)
      {
       s[k++]=str[j];
       m.erase(str[j]);
      }
    }
  return s;
}

int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
	return 0
}

#include <iostream>
#include <string>
using namespace std;

void printPermutations(string input,string output=""){
  
   
  if(input.size()==0){
   cout<<output<<endl;
    return;
  }
  int s=input.size();
    for(int i=0;i<input.size();i++)

    {       
      if(i==0){
        printPermutations(input.substr(1),input[0]+output);
      }
      else if(i==input.size()-1){
        printPermutations(input.substr(0,i),input[s-1]+output);
      }
      else{
        printPermutations(input.substr(0,i)+input.substr(i+1),input[i]+output);
      }
    }
}
int main(){
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}

  

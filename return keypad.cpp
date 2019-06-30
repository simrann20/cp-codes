#include <string>
using namespace std;
string helper(int n)
{
  string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  string last=mapping[n];
  return last;
}

int keypad(int n, string output[]){
    
  string temp[1000];
  int r=0;

  if(n==0)
  {   output[0]="";
    return 1;
  }
  //recursive call
  int s=keypad(n/10,temp);
  //small calv
  string l=helper(n%10);
  for(int i=0;i<s;i++)
  {
    for(int j=0;j<l.size();j++)
    {
      output[r]=temp[i]+l[j];
      r++;
  }
  
}
return s*l.size();
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

#include<stack>
#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for(int i = 0; i < size; i++) {
    	cin >> input[i];
    }
    int *output = stockSpan(input, size);
    for(int i = 0; i < size; i++) {
    	cout << output[i] << " ";
    }
}

int* stockSpan(int *price, int size) {
	// Write your code here
 int *out =new int [size];
  out[0]=1;
  
         stack<int> s;

  s.push(0);
  for(int i=1;i<size;i++)
  {
    if(price[i]<=price[s.top()])
     {  out[i]=i-s.top();
             s.push(i);  
     }
     else {
       while(!s.empty()&&price[s.top()]<price[i])
       s.pop();
     
    if(s.empty()) {
      out[i]=i+1;
    }
    else {
      out[i]=i-s.top();
    }
    s.push(i);
     }
  }
   return out;
}

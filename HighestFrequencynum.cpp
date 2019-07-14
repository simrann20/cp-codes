#include<iostream>
using namespace std;
#include<climits>
#include<unordered_map>
	int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
      int key;
      unordered_map<int,int>m;
      for(int i=0;i<n;i++)
      {    key=input[i];
       // to check if that key is present before
         if(m.count(key)==0)
           m[key]=1;
         else
             m[key]++;
   
      
      }
     	int max=INT_MIN;
      int d;
      
      for(int i=0;i<n;i++)
      {
        if(max<m[input[i]])
        { max=m[input[i]];
        d=input[i];
      }
      }
     	return d;
 	}


int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    int maxKey= highestFrequency(input, n);
    cout<<maxKey;
    return 0;
}



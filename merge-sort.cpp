#include<iostream>
using namespace std;
void merge_sort(int [],int,int);
void mergeSort(int input[], int size){
  merge_sort(input,0,size-1);       
}

void merge_sort(int arr[],int si,int ei)
{
  if(si>=ei)
    return;
   int mid=(si+ei)/2;
 merge_sort(arr,si,mid);
 merge_sort(arr,mid+1,ei);
   int i,j,k=0;
  int new_size=ei-si+1;
 int *s=new int[new_size];
  for(i=si,j=mid+1;i<=mid&&j<=ei;)
  {
      if(arr[i]<arr[j])
       s[k++]=arr[i++]; 
       else
    s[k++]=arr[j++];  
  }
  for(;i<mid+1;i++)
    s[k++]=arr[i];
    
   for(;j<=ei;j++)
   s[k++]=arr[j];
  
  for(int h=0;h<k;h++)
    arr[si+h]=s[h];
     delete []s;
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}

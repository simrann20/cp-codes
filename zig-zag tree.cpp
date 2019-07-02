#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void zigZagOrder(BinaryTreeNode<int> *root) {

   stack <BinaryTreeNode<int>* > s1,s2;
  s1.push(root);
  while(s1.size()!=0||s2.size()!=0)
  
  {
    while(!s1.empty())
    {   BinaryTreeNode<int>*curr=s1.top();
      s1.pop();
    if(curr!=NULL)
     cout<<curr->data<<" ";
      if(curr->left!=NULL)
        s2.push(curr->left);
     if(curr->right!=NULL)
         s2.push(curr->right);

    }
cout<<"\n";
  
  while(!s2.empty())
  {
     BinaryTreeNode<int>* curr1=s2.top();
      s2.pop();
         if(curr1!=NULL)
    cout<<curr1->data<<" ";
     if(curr1->right!=NULL)
        s1.push(curr1->right);
     if(curr1->left!=NULL)
         s1.push(curr1->left);
    
    
  }
  cout<<"\n";
    
    
  } 
      
  }
   
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

 

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};


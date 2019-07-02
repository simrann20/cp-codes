#include<iostream>
#include<string>
#include<queue>
using namespace std;
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

void helper(BinaryTreeNode<int> *root, int k, int a[],int s) {
   
  if(root==NULL||k<0)
  return;
 if(root->left==NULL&&root->right==NULL&&root->data==k)
  {
   s++;
   a[s-1]=root->data;
   for( int i=0;i<s;i++)
     cout<<a[i]<<" ";
   cout<<'\n';
  }
  int i,temp[1000];
  for(i=0;i<s;i++)
  
    temp[i]=a[i];
  
  temp[i]=root->data;
  s++;
   helper(root->left,  k-root->data,temp, s) ;
   helper(root->right, k-root->data ,temp,s) ;

  
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) 
{     
  int a[1000];
  helper(root,k,a,0);
   
}


BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int k;
    cin >> k;
    rootToLeafPathsSumToK(root, k);
    delete root;
}



// Following is the Binary Tree node structure
 
 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };
 
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


Node<int>* constructBST(BinaryTreeNode<int>* root) {
  
    if(root==NULL)
      return NULL;
 
   Node<int>* x=new  Node<int>(root->data);
  Node<int>* a= constructBST( root->left);
  Node<int>* b=constructBST(root->right);
    if(a==NULL)
  {
    x->next=b;
    return x;
  }

  Node<int>* t=a;
  while(t->next!=NULL)
  {
    t=t->next;
  }
  t->next=x;
  x->next=b;
  return a;
 
}

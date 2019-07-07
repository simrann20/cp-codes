//Check if a linked list is a palindrome
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
} 
  bool check_palindrome(node* head)
  {   
   if(head==NULL)
    return true;
    //write your code here
  node*temp=head;
    node*t=head;
  node *prev=NULL;
  while(t->next!=NULL)
  {  prev=t;
    t=t->next;
  }
    if(temp->data==t->data)
    {
      prev->next=NULL;
      //delete t;
         
      return  check_palindrome(head->next);

    }
    else
      return false;
    
  }

int main()
{
    node*head=takeinput();
    bool ans=check_palindrome(head);
    if(ans)
        cout<<"true";
    else 
        cout << "false";
    return 0;
}

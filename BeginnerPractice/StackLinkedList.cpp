#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *link;
};

class StackLinkedList
{   public:
    Node *top = NULL;
    StackLinkedList();
    StackLinkedList(int);
    ~StackLinkedList();
    int push(int);
    int pop();
    void display();
    int peek(int);
    int isFull(){
        return(0);
    };
};

StackLinkedList :: StackLinkedList(){
    this->top = new Node;
    this->top->data= 101;
    this->top->link= NULL;
}
StackLinkedList :: StackLinkedList(int x){
    this->top = new Node;
    this->top->data= x;
    this->top->link= NULL;
}
StackLinkedList :: ~StackLinkedList(){
    while(top !=NULL){
        Node *t = this->top;
        top = top->link;
        delete t;
    }
    cout<<"\nThe stack is deleted."<<endl;
}
int StackLinkedList :: push(int x){
    if(isFull())
    {
        cout<<"Overflow, No space for new element."<<endl;
        return(0);
    }
    else
    {
        Node *newNode = new Node;
        newNode->data = x;
        newNode->link = top;
        top = newNode;
        return(1);
    }
}
int StackLinkedList :: pop(){
    if(this->top == NULL)
    {
        cout<<"Underflow, Cannot Pop."<<endl;
        return(0);
    }
    else
    {
        Node *t = this->top;
        int x = t->data;
        this->top = this->top->link;
        delete t;
        return(x);
    }
}
void StackLinkedList :: display(){
    if(this->top == NULL){
        cout<<"the stack is empty."<<endl;
    } else
    {   Node *t = this->top;
        int pos=1;
        while (t != NULL)
        {   cout<<pos<<" : "<<t->data<<endl;
            t=t->link;
            pos++;
        } 
    }
    cout<<"------------------"<<endl;
}
int StackLinkedList :: peek(int pos){
    Node *t= top;
    while(pos > 1){
        pos--;
        t= t->link;
    }
    return(t->data);
}

int  main()
{
    StackLinkedList s;
    int A[]={3,5,7,19,33,82};
    for(int i=0; i<5 ;i++){
        s.push(A[i]);
    }
    s.display();
    cout<<s.peek(6)<<endl;

return(0);
}
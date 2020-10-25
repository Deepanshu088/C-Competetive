#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node *link;
};

class QueueLinkedList
{   
    public:
    Node *f,*r;
    QueueLinkedList(){
        Node *newNode =  new Node;
        newNode->data =101;
        newNode->link = NULL;
        f=r=newNode;
    }
    QueueLinkedList(int x){
        Node *newNode =  new Node;
        newNode->data =x;
        newNode->link = NULL;
        f=r=newNode;
    }
    ~QueueLinkedList(){
        while (f != NULL)
        {
            Node *t = f;
            f= f->link;
            delete t;
        }
        cout<<"\nThe list has been deleted."<<endl;
    }
    void Enqueue(int);
    int Dequeue();
    void display();
    int isEmpty(){
        return(f==NULL);
    }
    int isFull(){
        Node *t=NULL;
        t= new Node;
        if(t == NULL){
            return(1);
        }
        return(0);
    }
};
void QueueLinkedList :: Enqueue(int x){
    if(isFull()){
        cout<<"\nMemory is full"<<endl;
    } else
    {
        Node *newNode = new Node;
        newNode->data =x;
        newNode->link =NULL;
        if(isEmpty()){
            f=r=newNode;
        } else
        {
            r->link = newNode;
            r= newNode;
        }
    }
}
int QueueLinkedList :: Dequeue(){
    if(isEmpty()){
        cout<<"\nQueue is Empty."<<endl;
        return(-1);
    } else
    {
        Node *t= f;
        int x= t->data;
        f=f->link;
        delete t;
        return(x);
    }
}
void QueueLinkedList :: display(){
    cout<<"-------------------"<<endl;
    Node *t =f;
    while (t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->link;
    }
    cout<<"-------------------"<<endl;
}

int  main()
{
    int A[]= {3,9,13,33,85};
    QueueLinkedList q;
    for (int i = 0; i < 5; i++)
    {
        q.Enqueue(A[i]);
    }
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.Dequeue()<<endl;
    q.Enqueue(728);
    q.Enqueue(34);
    q.Dequeue();
    q.display();


return(0);
}
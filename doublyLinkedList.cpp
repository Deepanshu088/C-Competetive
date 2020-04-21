#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node *next;
    Node *prev;
};

class DoublynextedList
{   public:
    Node *head;
    DoublynextedList(){
        head = new Node;
        head->data = 101;
        head->next = NULL;
        head->prev = NULL;
    };
    DoublynextedList(int x){
        head = new Node;
        head->data = x;
        head->next = NULL;
        head->prev = NULL;
    }
    ~DoublynextedList(){
        Node *t,*p = head;
        while(p!=NULL){
            t=p;
            p= p->next;
            delete t;
        }
        cout<<"List has been deleted"<<endl;
    };
    int search(int x){
        //there are unique elements in the list
        int flag =0,pos=0;
        Node *p = head;
        while(p!= NULL){
            pos++;
            if(p->data == x){
                flag=1;
                break;   
            }
            p=p->next;
        }
        return(flag ? pos : -1); 
    }
    void insert(int x,int pos){
        pos--;
        Node *newNode = new Node;
        newNode->data = x;
        if(pos == 0){
            //Head
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next =newNode;
            head->prev = newNode;
            head = newNode;
        } else if (pos>0)
        {   Node *p = head;
            for(int i=0; i < pos-1 ;i++){
                p=p->next;
            }
            newNode->next = p->next;
            newNode->prev = p;
            p->next->prev = newNode;
            p->next = newNode;
        }
    }
    void insert(int x){
        Node *p = head,*newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
        while(p->next !=NULL){
            p= p->next;
        }
        newNode->prev =p;
        p->next = newNode;
    }
    void display(){
        int pos=0;
        Node *p = head;
        while(p!= NULL){
            cout<<++pos<<": "<<p->data<<endl;
            p=p->next;
        }
        cout<<"----------------"<<endl;
    }
    void deleteNode(int x){
        int flag=0;
        if(head->data == x){
            Node *t = head;
            head=head->next;
            head->prev=NULL;
            delete t;
            flag=1;
        } else
        {
            Node *p = head;
            p=p->next;
            while(p!=NULL){
                if(p->data == x){
                    p->next->prev= p->prev;
                    p->prev->next = p->next;
                    delete p;
                    flag=1;
                    break;
                } else
                {
                    p=p->next;
                }
                 
            }
        }
    }
    int isSorted(){
        Node *q=head,*p=head;
        p= p->next;
        int i=0;
        while(p != NULL){
            if(p->data < q->data){
                return(0);
            }
            q=p;
            p= p->next;
        }
        return(1);
    }
    void removeDuplicates(){
        if(isSorted()){
            Node *q=head,*p=head->next;
            while(p !=NULL){
                if(q->data == p->data){
                    q->next =  p->next;
                    if(p->next !=NULL)    
                        p->next->prev= p->prev;
                    delete p;
                    p=q->next;
                } else
                {
                    q=p;
                    p= p->next;
                }  
            }
        } else
        {
            cout<<"List is not sorted. Duplicated Cannot be removed."<<endl;
        }
    }
    int count(){
        Node *p = head;
        int x=0;
        while(p!=NULL){
            x++;
            p= p->next;
        }
        return(x);
    }
    void reverse(){
        Node *p,*q,*t;
        p=head;
        q=t=NULL;
        int flag=0;
        while (!flag)
        {
            q=p;
            p=p->next;

            t = q->next;
            // cout<<q->data<<endl;
            q->next =q->prev;
            q->prev=t;
            t=NULL;
            
            if(p == NULL){
                flag=1;
                head=q;
                break;
            }
        }
    }
};

int  main()
{
    int A[10]={3,5,7,19,19,19,19,33,82,82};
    // int A[]={3,5,7,19,33,82};
    DoublynextedList l(3);
    for(int i=0; i<10;i++){
        l.insert(A[i]);
    }
    l.display();
    l.removeDuplicates();
    l.display();

    // cout<<l.head->next->next->next->next->next->data<<endl;

    l.reverse();
    l.display();


return(0);
}
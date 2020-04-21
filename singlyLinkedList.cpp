#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node *link;
};

class SinglyLinkedList
{   public:
    Node *head;
    SinglyLinkedList(){
        head = new Node;
        head->data = 101;
        head->link = NULL;
    };
    SinglyLinkedList(int x){
        head = new Node;
        head->data = x;
        head->link = NULL;
    }
    ~SinglyLinkedList(){
        Node *t,*p = head;
        while(p!=NULL){
            t=p;
            p= p->link;
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
            p=p->link;
        }
        return(flag ? pos : -1); 
    }
    void insert(int x,int pos){
        pos--;
        Node *newNode = new Node;
        newNode->data = x;
        if(pos == 0){
            //Head
            newNode->link = head;
            head = newNode;
        } else if (pos>0)
        {   Node *p = head;
            for(int i=0; i < pos-1 ;i++){
                p=p->link;
            }
            newNode->link = p->link;
            p->link = newNode;
        }
    }
    void insert(int x){
        Node *p = head,*newNode = new Node;
        newNode->data = x;
        newNode->link = NULL;
        while(p->link !=NULL){
            p= p->link;
        }
        p->link = newNode;
    }
    void display(){
        int pos=0;
        Node *p = head;
        while(p!= NULL){
            cout<<++pos<<": "<<p->data<<endl;
            p=p->link;
        }
        cout<<"----------------"<<endl;
    }
    void deleteNode(int x){
        int flag=0;
        if(head->data == x){
            Node *t = head;
            head=head->link;
            delete t;
            flag=1;
        } else
        {
            Node *p = head;
            Node *q = p;
            p=p->link;
            while(p!=NULL){
                if(p->data == x){
                    q->link = p->link;
                    delete p;
                    p=q->link;
                    flag=1;
                    break;
                } else
                {
                    q=p;
                    p=p->link;
                }
                 
            }
        }
    }
    int isSorted(){
        Node *q=head,*p=head;
        p= p->link;
        int i=0;
        while(p != NULL){
            if(p->data < q->data){
                return(0);
            }
            q=p;
            p= p->link;
        }
        return(1);
    }
    void removeDuplicates(){
        if(isSorted()){
            Node *q=head,*p=head;
            p= p->link;
            while(p !=NULL){
                if(q->data == p->data){
                    q->link =  p->link;
                    delete p;
                    p=q->link;
                } else
                {
                    q=p;
                    p= p->link;
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
            p= p->link;
        }
        return(x);
    }
    void reverse(){
        Node *p,*q,*r;
        p=head;
        q=r=NULL;
        int flag=0;
        while (!flag)
        {   
            r=q;
            q=p;
            p=p->link;
            q->link = r;
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
    SinglyLinkedList l(3);
    for(int i=0;i<10;i++){
        l.insert(A[i]);
    }
    l.removeDuplicates();
    l.display();
    l.reverse();
    l.display();


return(0);
}
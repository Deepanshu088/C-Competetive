#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node *link;
};

class CircularSinglyLinkedList
{   public:
    Node *head;
    CircularSinglyLinkedList(){
        head = new Node;
        head->data = 101;
        head->link = head;
    };
    CircularSinglyLinkedList(int x){
        head = new Node;
        head->data = x;
        head->link = head;
    }
    ~CircularSinglyLinkedList(){
        Node *t,*p = head;
        while(p!=head){
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
        while(p != head){
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
        newNode->link = head;
        while(p->link != head){
            p= p->link;
        }
        p->link = newNode;
    }
    void display(){
        int pos=0;
        Node *p = head;
        if(head !=NULL){
            do{
                cout<<++pos<<": "<<p->data<<endl;
                p=p->link;
            }while(p!= head);
        } else
        {
            cout<<"List is Empty"<<endl;
        }
        
        cout<<"----------------"<<endl;
    }
    void deleteNode(int x){
        int flag=0;
        if(head->data == x){
            Node *t = head;
            while (t->link != head){
                t=t->link;
            }
            t->link = head->link;
            Node *temp = head;
            head=head->link;
            delete temp;
            flag=1;
        } else
        {
            Node *p = head->link;
            Node *q = head;
            while(p!= head){
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
        Node *q=head,*p=head->link;
        int i=0;
        while(p != head){
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
            Node *q=head,*p=head->link;
            while(p !=head){
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
        if(head!=NULL){
            do{
                x++;
                p= p->link;
            }while(p!=NULL);
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
            if(p == head){
                head->link=q;
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
    // int A[10]={5,10,15,20,25,30};

    CircularSinglyLinkedList l(3);
    for(int i=0; i<10; i++){
        l.insert(A[i]);
    }
    l.removeDuplicates();
    l.display();
    l.reverse();
    l.display();


return(0);
}
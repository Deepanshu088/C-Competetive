#include<iostream>
using namespace std;

class Node
{   public:
    int data;
    Node *next;
    ~Node(){
        delete this;
    }
};

void Add(Node **p, int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(*p == NULL){
        *p= newNode;
    } else
    {
        Node *t = *p;
        while(t->next != NULL){
            t= t->next;
        }
        t->next = newNode;
        t= t->next;
    }    
}
void deleteNode(Node **p,int x){
    Node *q, *t = *p;
    int flag =0;
    while(t!= NULL){
        if(t->data == x){
            flag=1;
            q->next =  t->next;
            delete t;
            break;           
        }
        q=t;
        t=t->next;
    }
    if(flag == 0){
        cout<<"The Element not found."<<endl;
    } else
    {
        cout<<"Element has been deleted."<<endl;
    }
}
int search(Node *p, int x){
    //there are unique elements in the list
    int flag =0,pos=0;
    while(p!= NULL){
        pos++;   
        if(p->data == x){
            flag=1;
            break;   
        }
        p=p->next;
    }
    if(flag == 0){
        return(-1);
    } else
    {   
        return(pos);
    }
}
void displayList(Node *p){
    int pos=0;
    while(p!= NULL){
        cout<<++pos<<": "<<p->data<<endl;
        p=p->next;
    }
}
int isSorted(Node *p){
    Node *q=p;
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
void removeDuplicates(Node **p){
    Node *q,*t=*p;
    if(isSorted(t)){
        while(t !=NULL){
            if(q->data == t->data){
                q->next =  t->next;
                delete t;
                t=q->next;
            } else
            {
                q=t;
                t= t->next;
            }  
        }
    } else
    {
        cout<<"List is not sorted. "<<endl;
    }
    

}

int  main()
{
    int A[10]={2,3,3,4,6,6,7,9,11,11};
    Node *first = NULL;

    for(int i=0 ; i<10 ; i++){
        Add(&first, A[i]);
    }
    displayList(first);
    cout<<isSorted(first)<<endl;
    removeDuplicates(&first);
    displayList(first);


return(0);
}
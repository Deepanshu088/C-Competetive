#include<iostream>
using namespace std;

class CircularQueueArray
{   
    public:
    // front -> f // rear ->r
    int *A,f,r,size;
    CircularQueueArray(){
        size =10;
        f=r=-1;
        A = new int[10];
    };
    CircularQueueArray(int x){
        this->size =x;
        f=r=-1;
        A = new int[x];
    };
    ~CircularQueueArray(){
        delete A;
        cout<<"\nQueue has been deleted."<<endl;
    };
    void Enqueue(int);
    int Dequeue();
    void display();
    int isEmpty(){
        return(f==r);
    }
    int isFull(){
        return(((r+1)%size) == f);
    }
};
void CircularQueueArray :: Enqueue(int x){
    if(f==-1 && r==-1){
        f=0;
        r=1;
        A[r]=x;
    } else
    {
        if(isFull()){
            cout<<"\nQueue is full."<<endl;
        } else
        {
            r=(r+1)%size;
            A[r]= x;
        }
    }
    
}
int CircularQueueArray :: Dequeue(){
    if(isEmpty()){
        cout<<"\nQueue is Empty."<<endl;
        return(0);
    } else
    {
        f=(f+1)%size;
        int x= A[f];
        A[f]=0;
        return(x);
    }
}
void CircularQueueArray :: display(){
    if(isEmpty()){
        cout<<"\nThe queue is empty."<<endl;
    } else
    { 
        int t= f+1;
        do{
            cout<<A[t]<<endl;
            t= (t+1)%size;
        }while(t != ((r+1)%size));
    }
    cout<<"----------------------"<<endl;
}


int  main()
{
    int A[]= {3,9,13,33,85};
    CircularQueueArray q(4);
    for(int i=0; i<5 ; i++){
        q.Enqueue(A[i]);
    }
    q.display();
    // cout<<q.isFull()<<endl;

    q.display();



return(0);
}
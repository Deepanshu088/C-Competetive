#include<iostream>
#include<string.h>
using namespace std;

class StackArray
{   public:
    int *Arr;
    int size;
    int top = -1;

    StackArray();
    StackArray(int x,int size);
    ~StackArray();
    int push(int x);
    int pop();
    void display();
    int peek(int);
    int isEmpty();
};

StackArray :: StackArray(){
    this->size=5;
    this->Arr = new int[size];
    this->Arr[0]=101;
    this->top++;
}
StackArray :: StackArray(int x, int size){
    this->size = size;
    this->Arr = new int[size];
    this->Arr[0]=x;
    this->top++;
}
StackArray :: ~StackArray(){
    delete Arr;
    cout<<"\nThe stack is deleted."<<endl;
}
int StackArray :: push(int x){
    if(this->top == this->size -1)
    {
        cout<<"Overflow, No space for new element."<<endl;
        return(0);
    }
    else
    {
        this->top++;
        this->Arr[this->top]= x;
        return(1);
    }
}
int StackArray :: pop(){
    if(this->top == -1)
    {
        cout<<"Underflow, Cannot pop."<<endl;
        return(0);
    }
    else
    {
        int x = this->Arr[this->top];
        this->top--;
        return(x);
    }
}
void StackArray :: display(){
    if(this->top == -1){
        cout<<"the stack is empty."<<endl;
    } else
    {
        for(int i=0; i<= this->top; i++){
            cout<<i+1<<" : "<<this->Arr[i]<<endl;
        }
    }
    cout<<"------------------"<<endl;
}
int StackArray :: peek(int pos){
    if(pos< 1 || pos>(top+1) ){
        cout<<"Invalid position"<<endl;
        return(-1);
    }
    else
        return(this->Arr[this->top -pos +1]);
}

int  main()
{
    StackArray s(23,7);
    int A[]={3,5,7,19,33,82};
    for(int i=0; i<5 ;i++){
        s.push(A[i]);
    }
    s.display();

return(0);
}
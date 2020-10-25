#include<iostream>
#include"Stack.h"
using namespace std;

class Tab{
    public:
    int data;
    Tab *left;
    Tab *right;
};

class Tree{
    public:
    Tab *root = NULL;
    Tree(){
        int A[9]={8,4,2,1,3,6,5,7,9};
        int pos=0;
        Tab *p,*newTab = new Tab;
        newTab->data = A[pos++];
        newTab->left = newTab->right = NULL;
        StackLinkedList <Tab> s;
        p=root = newTab;
        s.push(newTab);
        int flag =0;
        while (pos<9)
        {
            if(A[pos]< s.top->data->data){
                if(A[pos]< p->data){
                    cout<<"a"<<endl;
                    Tab *newTab = new Tab;
                    newTab->data= A[pos++];
                    newTab->left = newTab->right = NULL;
                    p->left = newTab;
                    s.push(p);
                    p= newTab;
                }else
                {
                    cout<<"b"<<endl;
                    Tab *newTab = new Tab;
                    newTab->data= A[pos++];
                    newTab->left = newTab->right = NULL;
                    p->right = newTab;
                    s.push(p);
                    p= newTab;
                }
            }else
            {
                if(!flag){
                    cout<<"c"<<endl;
                    p = s.pop();
                    cout<<p->data<<endl;
                    if(p->data ==root->data){
                        cout<<"e"<<endl;
                        flag =1;
                        Tab *newTab = new Tab;
                        newTab->data= A[pos++];
                        newTab->left = newTab->right = NULL;
                        p->right = newTab;
                        s.push(p);
                        p= newTab;
                    }
                }else
                {
                    cout<<"d";
                    if(A[pos]< p->data){
                        cout<<"a"<<endl;
                        Tab *newTab = new Tab;
                        newTab->data= A[pos++];
                        newTab->left = newTab->right = NULL;
                        p->left = newTab;
                        s.push(p);
                        p= newTab;
                    }else
                    {
                        cout<<"b"<<endl;
                        Tab *newTab = new Tab;
                        newTab->data= A[pos++];
                        newTab->left = newTab->right = NULL;
                        p->right = newTab;
                        s.push(p);
                        p= newTab;
                    }
                }
            }
        }
    }
};


int  main()
{
    // int A[]={4,2,5,1,6,3,7};//Inorder
    int A[7]={4,2,1,3,6,5,7};//Preorder

    Tree t;
    // int A[]={4,2,5,1,6,3,7};//Postorder

    
    cout<<t.root->data<<endl;
    cout<<t.root->left->data<<endl;
    cout<<t.root->left->left->data<<endl;
    cout<<t.root->left->left->left->data<<endl;
    cout<<t.root->left->left->right->data<<endl;
    cout<<t.root->left->right->data<<endl;

    
    cout<<t.root->right->data<<endl;
    // cout<<t.root->right->left->data<<endl;
    // cout<<t.root->right->right->data<<endl;
    


return(0);
}
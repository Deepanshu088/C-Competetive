#include<iostream>
#include"Stack.h"
using namespace std;

class TreeNode{
    public:
    int data;
    int height;
    TreeNode *left;
    TreeNode *right;
};

class AVLTree
{
public:
    TreeNode *root;
    AVLTree();
    AVLTree(int);
    ~AVLTree();
    void insert(int);
    void deleteNode(int);
    void InorderDisplay();
    void PreorderDisplay();
    int Height(TreeNode*);
    TreeNode* predecessor(TreeNode *t){
        if(t==NULL)
            return 0;
        if(!t->left)
            return 0;
        t=t->left;
        while (t->right)
        {
            t=t->right;
        }
        return t;
    }

    TreeNode* successor(TreeNode *t){
        if(t==NULL)
            return 0;
        if(!t->right)
            return 0;
        t=t->right;
        while (t->left)
        {
            t=t->left;
        }
        return t;
    }

    int BalanceFactor(TreeNode *t){
        if(!t)
            return 0;
        int hl = t->left ? t->left->height:0;
        int hr = t->right ? t->right->height:0;
        return(hl-hr);
    }
    TreeNode* LLrotation(TreeNode*);
    TreeNode* LRrotation(TreeNode*);
    TreeNode* RRrotation(TreeNode*);
    TreeNode* RLrotation(TreeNode*);
};


AVLTree::AVLTree()
{
    TreeNode *newNode = new TreeNode;
    newNode->data=101;
    newNode->height=1;
    newNode->left = newNode->right=NULL;
    root = newNode;
}
AVLTree::AVLTree(int x)
{
    TreeNode *newNode = new TreeNode;
    newNode->data=x;
    newNode->height=1;
    newNode->left = newNode->right=NULL;
    root = newNode;
}
AVLTree::~AVLTree()
{
}

void AVLTree ::InorderDisplay(){
    StackLinkedList <TreeNode> l;
    if(!root){
        cout<<"Tree is NULL!!!\n";
        return;
    }
    TreeNode *t =root;
    while(t || !l.isEmpty()){
        while(t){
            l.push(t);
            t=t->left;
        }
        t=l.pop();
        cout<<t->data<<" "<<t->height<<" "<<BalanceFactor(t)<<endl;
        t=t->right;
    }
    cout<<endl;
}
void AVLTree ::PreorderDisplay(){
    StackLinkedList <TreeNode> l;
    TreeNode *t =root;
    while(t || !l.isEmpty()){
        while(t){
            l.push(t);
            cout<<t->data<<" ";
            t=t->left;
        }
        t=l.pop();
        t=t->right;
    }
    cout<<endl;
}

int AVLTree ::Height(TreeNode *t){
    int hl = t->left ? t->left->height : 0;
    int hr = t->right ? t->right->height : 0;
    return(hl>hr ? hl+1: hr+1);
}

void AVLTree ::insert(int x){
    StackLinkedList <TreeNode> l;
    if(!root)
        return;
    TreeNode *t =root;
    while (t)
    {
        l.push(t);
        if(x < t->data){
            t=t->left;
        }else if(x > t->data){
            t=t->right;
        }else{
            cout<<"Duplicate Data\n";
            return;
        }
    }
    t=l.pop();
    TreeNode *newNode = new TreeNode;
    newNode->data=x;
    newNode->height=1;
    newNode->left=newNode->right=NULL;
    if(x < t->data)
        t->left = newNode;
    else if(x > t->data)
        t->right = newNode;
    
    TreeNode *par = l.pop();
    while (t)
    {
        t->height = Height(t);
        int flag=0;
        if(t==root)
            flag=1;
        if(BalanceFactor(t)==2 && BalanceFactor(t->left)==1)
            t=LLrotation(t);
        else if(BalanceFactor(t)==2 && BalanceFactor(t->left)==-1)
            t=LRrotation(t);
        else if(BalanceFactor(t)==-2 && BalanceFactor(t->right)==-1)
            t=RRrotation(t);
        else if(BalanceFactor(t)==-2 && BalanceFactor(t->right)==1)
            t=RLrotation(t);
        
        if(flag){
            root=t;
            return;
        }else{
            if(t->data < par->data)
                par->left=t;
            else if(t->data > par->data)
                par->right=t;
            t=par;
            if(par != root)
                par =l.pop();
        } 
    }
    return;
}

TreeNode* AVLTree ::LLrotation(TreeNode *a){
    cout<<"LLrot\n";
    TreeNode *b;
    b=a->left;
    a->left = b->right;
    b->right=a;
    a->height =Height(a);
    b->height =Height(b);
    return(b);
}
TreeNode* AVLTree ::LRrotation(TreeNode *a){
    cout<<"LRrot\n";
    TreeNode *b,*c;
    b= a->left;
    c=b->right;
    a->left=c->right;
    b->right=c->left;
    c->left=b;
    c->right=a;
    a->height =Height(a);
    b->height =Height(b);
    c->height =Height(c);
    return c;
}
TreeNode* AVLTree ::RRrotation(TreeNode *a){
    cout<<"RRrot\n";
    TreeNode *b;
    b=a->right;
    a->right = b->left;
    b->left=a;
    a->height =Height(a);
    b->height =Height(b);
    return(b);
}
TreeNode* AVLTree ::RLrotation(TreeNode *a){
    cout<<"RLrot\n";
    TreeNode *b,*c;
    b= a->right;
    c=b->left;
    a->right=c->left;
    b->left=c->right;
    c->right=b;
    c->left=a;
    a->height =Height(a);
    b->height =Height(b);
    c->height =Height(c);
    return c;
}

void AVLTree ::deleteNode(int x){
    if(!root){
        cout<<"Tree is Empty\n";
        return;
    }
    TreeNode *t=root;
    StackLinkedList <TreeNode>l;

    while (t)
    {
        if(x < t->data){
            l.push(t);
            t=t->left;
        }else if(x > t->data){
            l.push(t);
            t=t->right;
        }else{
            TreeNode *temp,*par;
            if(!t->left){
                par =l.top->data;
                if(par->data < t->data)
                    par->right = t->right;
                else if(par->data > t->data)
                    par->left = t->right;
                else
                    par->left = t->right;
                cout<<t->data<<" has been deleted\n";
                delete t;
                break;
            }else if(!t->right){
                par =l.top->data;
                if(par->data < t->data)
                    par->right = t->left;
                else if(par->data > t->data)
                    par->left = t->left;
                else
                    par->left = t->left;
                cout<<t->data<<" has been deleted\n";
                delete t;
                break;
            }else{
                temp =predecessor(t);
                t->data =temp->data;
                l.push(t);
                x = temp->data;
                t=t->left;
            }
        }
    }
    while (!l.isEmpty())
    {
        t=l.pop();
        t->height=Height(t);
        if(BalanceFactor(t)==2 && BalanceFactor(t->left)==-1)
            t=LRrotation(t);
        else if(BalanceFactor(t)==2)
            t=LLrotation(t);
        else if(BalanceFactor(t)==-2 && BalanceFactor(t->right)==1)
            t=RLrotation(t);
        else if(BalanceFactor(t)==-2)
            t=RRrotation(t);
    }
    root =t;
    return;
}


int main()
{
    AVLTree t(4);
    // int A[]={4,2,6,1,3,5,7};
    int A[]={7,6,5,4,3,2,1};
    for(int i=0;i<7;i++){
        t.insert(A[i]); 
    }
    cout<<"------------------------\n";
    t.InorderDisplay();
    cout<<"------------------------\n";
    t.deleteNode(4);
    cout<<"------------------------\n";
    t.InorderDisplay();
    cout<<"------------------------\n";
    t.PreorderDisplay();
    cout<<"------------------------\n";
  
return 0;
}
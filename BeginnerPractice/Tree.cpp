// Binary Search Tree
#include<iostream>
#include"Stack.h"
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
};

class Tree{
    public: 
    TreeNode *root;
    Tree(){
        TreeNode *newNode = new TreeNode;
        newNode->data =101;
        newNode->left = newNode->right =NULL;
        root = newNode;
    }
    Tree(int x){
        TreeNode *newNode = new TreeNode;
        newNode->data =x;
        newNode->left = newNode->right =NULL;
        root = newNode;
    }
    ~Tree(){
        TreeNode *t = root;
        deleteTree(t);
        cout<<"\nTree has been Deleted.";
    }
    void deleteTree(TreeNode *t){
        if(!t)return;
        deleteTree(t->left);
        deleteTree(t->right);
        cout<<"\nDeleting Node :"<<t->data<<endl;
        delete t;
    }

    void insert(int x){
        TreeNode *p,*t;
        p=root;
        while(p){
            if(p->data < x){
                t=p;
                p=p->right;
            }else if(p->data > x)
            {
                t=p;
                p=p->left;
            }else
            {
                cout<<"The element already exist. \n";
                return;
            }
            
        }
        TreeNode *newNode = new TreeNode;
        newNode->data = x;
        newNode->left=newNode->right = NULL;
        if(t->data < x){
            t->right = newNode;
        } else
        {
            t->left = newNode;
        }
        
    }
    
    void inOrderDisplay(){
        cout<<"\n Inorder Display: ";
        StackLinkedList <TreeNode> l;
        TreeNode *t = root;
        while ((t!=NULL) || (l.top !=NULL))
        {
            while (t)
            {
                l.push(t);
                t=t->left;
            }
            t= l.pop();
            cout<<t->data<<" ";
            t=t->right;
        }
        cout<<endl;
    }

    void preOrderDisplay(){
        cout<<"\n PreOrder Display: ";
        StackLinkedList <TreeNode> l;       
        TreeNode *t = root;
        while ((t!=NULL) || (l.top !=NULL))
        {
            while (t)
            {
                l.push(t);
                cout<<t->data<<" ";
                t=t->left;
            }
            t= l.pop();
            t=t->right;
        }
        cout<<endl; 
    }

    void postOrderDisplayWithTwoStacks(){
        cout<<"\n PostOrder Display With Two Stacks: ";
        StackLinkedList <TreeNode> l1;
        StackLinkedList <TreeNode> l2;
        TreeNode *t = root;
        l1.push(t);
        while (!l1.isEmpty())
        {
            t= l1.pop();
            l2.push(t);
            if(t->left)
                l1.push(t->left);
            if(t->right)
                l1.push(t->right);
        }
        Node<TreeNode> *n = l2.top;
        while (n)
        {
            cout<<n->data->data<<" ";
            n=n->link;
        }
        cout<<endl;
    }

    void postOrderDisplaySingleStack(){
        cout<<"\n PostOrder Display With Single Stack: ";
        StackLinkedList <TreeNode> l;

        TreeNode *t=root;
        if(!t)
            return;
            
        do{
            while (t)
            {
                if(t->right)
                    l.push(t->right);
                l.push(t);
                t=t->left;
            }
            t=l.pop();
            if(t->right && l.top && (t->right == l.top->data)){
                l.pop();
                l.push(t);
                t=t->right;
            }else
            {
                cout<<t->data<<" ";
                t=NULL;
            }
        } while (l.top != NULL);

        cout<<endl;
    }

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

    void deleteRecursive(int key){
        deleteNodeRecursively(root,key);
    }
    TreeNode* deleteNodeRecursively(TreeNode *t,int key){
        cout<<t->data<<"yo\n";
        if(!t)
            return 0;
        if(t->data > key)
        {
            t->left= deleteNodeRecursively(t->left,key);
            return t;
        }
        else if(t->data < key)
        {
            t->right= deleteNodeRecursively(t->right,key);
            return t;
        }
        else
        {   cout<<"c\n";
            TreeNode *temp;
            if(!t->left){
                cout<<"d\n";
                temp = t->right;
                delete t;
                return temp;
            }else if(!t->right){
                cout<<"e\n";
                temp = t->left;
                delete t;
                return temp;
            }else
            {cout<<"f\n";
                temp= predecessor(t);
                if(temp){
                    cout<<temp->data<<"f\n";
                    t->data = temp->data;
                    t->left = deleteNodeRecursively(t->left,temp->data);
                    return t;
                }
            }
        }
    }

    void deleteIteratively(int key){
        TreeNode *t = root;
        if(!t)
            return;
        StackLinkedList <TreeNode> l;
        while(1){            
            if(key < t->data){
                l.push(t);
                t=t->left;
            } else if(key > t->data){
                l.push(t);
                t=t->right;
            } else{
                TreeNode *temp,*par;
                par = l.pop();
                if(!t->left){
                    if(par->data < t->data)
                        par->right = t->right;
                    else if(par->data > t->data)
                        par->left = t->right;
                    else
                        par->left = t->right;
                    delete t;
                    return;
                }else if(!t->right){
                    if(par->data < t->data)
                        par->right = t->left;
                    else if(par->data > t->data)
                        par->left = t->left;
                    else
                        par->left = t->right;
                    delete t;
                    return;
                }else{
                    temp = predecessor(t);
                    t->data = temp->data;
                    l.push(t);
                    key = temp->data;
                    t=t->left;
                }
            }
        }
    }




};

int main(){
    Tree t(4);
    int A[10]={4,2,6,1,3,5,7};
    for(int i =0; i<7;i++){
        t.insert(A[i]);
    }

    // cout<<t.root->data<<endl;
    // cout<<t.root->left->data<<endl;
    // cout<<t.root->right->data<<endl;
    
    // cout<<t.root->left->left->data<<endl;
    // cout<<t.root->left->right->data<<endl;

    // cout<<t.root->right->left->data<<endl;
    // cout<<t.root->right->right->data<<endl;
    
    
    cout<<"-------------------\n";
    t.inOrderDisplay();
    cout<<"-------------------\n";
    t.deleteIteratively(4);
    cout<<"-------------------\n";
    t.inOrderDisplay();
    cout<<"-------------------\n";
    // t.preOrderDisplay();
    // cout<<"-------------------\n";
    // t.postOrderDisplaySingleStack();
    // cout<<"-------------------\n";
    // cout<<t.predecessor(t.root)->data<<endl;
    // cout<<t.successor(t.root)->data<<endl;


return(0);
}
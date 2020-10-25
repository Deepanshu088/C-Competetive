// AVL Search Tree
#include<iostream>
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
    TreeNode* insert(TreeNode*,int);
    TreeNode* deleteNode(TreeNode*,int);
    void InorderDisplay(TreeNode*);
    void PreorderDisplay(TreeNode*t);
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

int AVLTree::Height(TreeNode* t){
    int hl,hr;
    hl= t && t->left ? t->left->height : 0;
    hr= t && t->right ? t->right->height : 0;
    return(hl>hr ?hl+1:hr+1);
}

void AVLTree ::InorderDisplay(TreeNode* t){
    if(!t)
        return;
    InorderDisplay(t->left);
    cout<<t->data<<" "<<t->height;
    cout<<BalanceFactor(t)<<endl;
    InorderDisplay(t->right);
    return;
}
void AVLTree ::PreorderDisplay(TreeNode* t){
    if(!t)
        return;
    cout<<t->data<<" "<<t->height;
    cout<<BalanceFactor(t)<<endl;
    PreorderDisplay(t->left);
    PreorderDisplay(t->right);
    return;
}

TreeNode* AVLTree ::insert(TreeNode *t,int x){
    if(!t){
        t = new TreeNode;
        t->data = x;
        t->height = 1;
        t->left = t->right = NULL;
        return(t);
    }
    if(x < t->data){
        t->left = insert(t->left,x);
    }else if(x > t->data){
        t->right = insert(t->right,x);
    }else if(x == t->data){
        cout<<"Data is being repeated.\n";
        return(t);
    }
    t->height = Height(t);
    if(BalanceFactor(t)==2 && BalanceFactor(t->left)==1)
        t=LLrotation(t);
    else if(BalanceFactor(t)==2 && BalanceFactor(t->left)==-1)
        t=LRrotation(t);
    else if(BalanceFactor(t)==-2 && BalanceFactor(t->right)==-1)
        t=RRrotation(t);
    else if(BalanceFactor(t)==-2 && BalanceFactor(t->right)==1)
        t=RLrotation(t);
    return(t);
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

TreeNode* AVLTree ::deleteNode(TreeNode *t,int x){
    if(!t){
        cout<<"Element doesn't exist\n";
        return NULL;
    }
    if(x < t->data){
        t->left = deleteNode(t->left,x);
    }else if(x > t->data){
        t->right = deleteNode(t->right,x);
    }else{
        TreeNode *temp;
        if(!t->left){
            temp=t->right;
            delete t;
            return(temp);
        }else if(!t->right){
            temp=t->left;
            delete t;
            return(temp);
        }else{
            temp = predecessor(t);
            t->data = temp->data;
            t->left = deleteNode(t->left,temp->data);
        }
    }
    t->height = Height(t);
    if(BalanceFactor(t)==2 && BalanceFactor(t->left)==-1)
        t=LRrotation(t);
    else if(BalanceFactor(t)==2)
        t=LLrotation(t);
    else if(BalanceFactor(t)==-2 && BalanceFactor(t->right)==1)
        t=RLrotation(t);
    else if(BalanceFactor(t)==-2)
        t=RRrotation(t);
    return(t);
}

int main()
{
    AVLTree t(4);
    // int A[]={4,2,6,1,3,5,7};
    int A[]={7,6,5,4,3,2,1};
    for(int i=0;i<6;i++){
        t.root=t.insert(t.root,A[i]); 
    }
    
    cout<<"------------------------\n";
    t.InorderDisplay(t.root);
    t.root = t.deleteNode(t.root,2);
    t.root = t.deleteNode(t.root,3);
    t.root = t.deleteNode(t.root,1);
    cout<<"------------------------\n";
    t.InorderDisplay(t.root);
    cout<<"------------------------\n";
    t.PreorderDisplay(t.root);
    cout<<"------------------------\n";
  
return 0;
}
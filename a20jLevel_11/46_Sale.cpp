// Sale
// https://codeforces.com/problemset/problem/34/B

#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void QuickSort(int A[], int l, int h){
    int p=A[l],i=l,j=h;
    
    if(l<h){
        while(i<j){
            do{i++; }while(p>A[i]);
            do{j--; }while(p<A[j]);
            if(i>=j)
                break;
            swap(A[i],A[j]);
        }
        swap(A[l],A[j]);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }

return;
}

void func(){
    int m,n,A[100],s=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    QuickSort(A,0,n);
    for(int i=0;i<m;i++){
        if(A[i]>=0)
            break;
        s += A[i];
    }
    cout<<abs(s);
return;
}
int main(){
    func();

return 0;
}
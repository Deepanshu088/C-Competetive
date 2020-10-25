//https://codeforces.com/problemset/problem/266/B
//Queue at the School

#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void func(){
    int i,n,t,j;
    char A[50],B[50];

    cin>>n>>t;

    for(i=0; i<n; i++){
        cin>>A[i];
    }
    for(i=0;i<t;i++){
        for(j=0;j<n-1;j++){
            if(A[j] < A[j+1]){
                swap(A[j],A[j+1]);
                j++;
            }
        }
    }
    for(i=0; i<n; i++){
        cout<<A[i];
    }
return;
}

int main(){
    func();

return 0;
}
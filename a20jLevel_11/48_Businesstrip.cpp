// Business trip
// https://codeforces.com/problemset/problem/149/A

#include<iostream>
#include<conio.h>
using namespace std;

void DisplayArray(int A[], int n){
    for(int i=0; i< n ;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return;
}
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void func(){
    int k,A[12],x,s=0,n=1;
    cin>>k;

    cin>>A[0];
    for(int i=1;i<12;i++){
        cin>>x;
        int j=n;
        while (x<A[j-1] && j>0){
            A[j] = A[j-1];
            j--;
        }
        A[j]=x;
        n++;
    }
    int i=0;
    while(s<k){
        s += A[n-1-i] ;
        i++;
    }

    if(i>12)
        cout<<-1; 
    else
        cout<<i;
    

return;
}
int main(){
    func();

return 0;
}
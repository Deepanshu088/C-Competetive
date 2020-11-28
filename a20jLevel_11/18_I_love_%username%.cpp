// https://codeforces.com/problemset/problem/155/A
//I_love_%username%

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,l,h,c=0;
    cin>>n;
    unsigned int *A = new unsigned int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    l=h=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>h){
            h=A[i];
            c++;
        }
        if(A[i]<l){
            l=A[i];
            c++;
        }
    }
    cout<<c;
return;
}
int main(){
    func();

return 0;
}
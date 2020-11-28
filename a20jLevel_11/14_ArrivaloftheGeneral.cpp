// https://codeforces.com/problemset/problem/144/A
// Arrival of the General

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    int n,A[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int pmax = 0, pmin= 0;
    for(int i=1; i<n;i++){
        if(A[i]>A[pmax])
            pmax=i;
        if(A[i]<=A[pmin])
            pmin =i;
    }
    int count = 0;
    if(pmax > pmin)
        count += pmax - pmin + n-2 ;
    if(pmax < pmin)
        count = pmax + n-1 - pmin;
    cout<<count;
}
int main(){
    func();

return 0;
}
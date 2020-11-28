// https://codeforces.com/problemset/problem/248/A
//Cupboards

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,l=0,r=0,mid,result=0;
    cin>>n;
    mid = (n+1)/2;
    bool *A = new bool [n];
    bool *B = new bool [n];
    for(int i=0;i<n;i++){
        cin>>A[i]>>B[i];
        if(A[i])
            l++;
        if(B[i])
            r++;
    }
    if(l<mid)
        result += l;
    else
        result += n-l;
    if(r<mid)
        result += r;
    else
        result += n-r;
    cout<<result;

return;
}
int main(){
    func();

return 0;
}
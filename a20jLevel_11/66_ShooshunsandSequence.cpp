// Shooshuns and Sequence
// https://codeforces.com/problemset/problem/222/A

#include<iostream>
using namespace std;

void func(){
    int n,k;
    int A[100001];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>A[i];

    for(int i=k-1;i<n-1;i++)
        if(A[i] !=A[i+1]){
            cout<<-1;
            return;
        }    

    for(int i=k-1;i>0;i--)
        if(A[i]!=A[i-1]){
            cout<<i;
            return;
        }
    
    cout<<0;

    
return;
}
int main(){
    func();

return 0;
}
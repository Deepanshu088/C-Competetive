//https://codeforces.com/problemset/problem/227/B
//Effective Approach

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    unsigned int n,m,ltr=0,rtl=0;
    cin>>n;
    unsigned int *A = new unsigned int[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    cin>>m;
    unsigned int *B = new unsigned int[m];
    for(int i=0;i<m;i++)
        cin>>B[i];
    for(int i=0;i<m;i++){
        int j=0;
        for(j=0;j<n;j++)
            if(B[i] == A[j])
                break;
        ltr +=j+1;
        for(j=n-1;j>=0;j--)
            if(B[i] == A[j])
                break;
        rtl += n-j;
    }
    cout<<ltr<<" "<<rtl;
return;
}
int main(){
    func();

return 0;
}
// Unlucky Ticket
// https://codeforces.com/problemset/problem/160/B

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,A[100],B[100];
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
        A[i]=s[i]-48;
    for(int i=0;i<n;i++)
        B[i]=s[i+n]-48;
    
    sort(A,A+n);
    sort(B,B+n);
    if(A[0] > B[0]){
        for(int i=0;i<n;i++){
            if(A[i]<=B[i]){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }else if(A[0] < B[0]){
        for(int i=0;i<n;i++){
            if(A[i]>=B[i]){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }else
        cout<<"NO";


return 0;
}
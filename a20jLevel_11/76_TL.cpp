// TL
// https://codeforces.com/problemset/problem/350/A

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m,A[100],B[100],v;
    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&B[i]);

    sort(A,A+n);
    sort(B,B+m);
    if(A[n-1]>=B[0]){
        cout<<-1;
        return 0;
    }
    if(A[0]*2 < B[0]){
        if(A[0]*2 <= A[n-1])
            cout<<A[n-1];
        else
            cout<<A[0]*2;
    }else{
        cout<<-1;
    }
    

return 0;
}
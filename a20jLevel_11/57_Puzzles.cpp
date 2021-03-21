// Puzzles
// https://codeforces.com/problemset/problem/337/A

#include<iostream>
#include<algorithm>
using namespace std;

void func(){
    int n,m,min=INT16_MAX;
    int A[50];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>A[i];
    }
    sort(A,A+m);
    for(int i=0;i+n-1<m;i++){
        if(A[i+n-1]-A[i] < min)
            min = A[n+i-1]-A[i];
    }
    cout<<min;

    
return;
}
int main(){
    func();

return 0;
}
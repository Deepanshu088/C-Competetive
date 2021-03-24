// Yaroslav and Permutations
// https://codeforces.com/problemset/problem/296/A

#include<iostream>
using namespace std;

int main(){
    int n,A[1001]={0},x;
    scanf("%d",&n);
    if(n==1){
        cout<<"YES";
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        A[x]++;
    }
    n=(n+1)/2;
    for(int i=1;i<=1000;i++)
        if(A[i]>n){
            cout<<"NO"<<endl;
            return 0;
        }
    cout<<"YES";

return 0;
}
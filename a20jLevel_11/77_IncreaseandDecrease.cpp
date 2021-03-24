// Increase and Decrease
// https://codeforces.com/problemset/problem/246/B

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    unsigned int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum += x;
    }
    if(sum%n)
        cout<<n-1;
    else
        cout<<n;



return 0;
}
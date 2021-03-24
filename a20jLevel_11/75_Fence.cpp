// Fence
// https://codeforces.com/problemset/problem/363/B

#include<iostream>
using namespace std;

int main(){
    unsigned int n,k,A[150001];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    
    
    unsigned int sum=0,min,pos=1;
    for(int j=0;j<k;j++)
        sum += A[j];
    min =sum;

    for(int i=1;i<n-k+1;i++){
        sum += A[i+k-1] -A[i-1] ; 
        if(min > sum){
            min=sum;
            pos=i+1;
        }
    }
    cout<<pos;
return 0;
}
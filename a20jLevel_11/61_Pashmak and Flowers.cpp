// Pashmak and Flowers
// https://codeforces.com/problemset/problem/459/B

#include<iostream>
#include<algorithm>
using namespace std;

void func(){
    unsigned int n,max,l=0,h=0;
    cin>>n;
    unsigned int *A = new unsigned int[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    max = A[n-1]-A[0];
    unsigned long long int r;
    unsigned int i=0,j=n-1;
    if(max==0){
        int fact=1;
        for(i=1; i<n; i++)
            fact=fact*i;
        cout<<max<<" "<<fact;
        return;
    }
    for(int i=0;i<n;i++){
        if(A[i]==A[0]){
            l++;
        }
        if(A[i]==A[n-1]){
            h++;
        }
    }
    // while (A[i++] == A[0]) l++;
    // while (A[j--] == A[n-1]) h++;
    
    r=l*h;
    cout<<max<<" "<<r;

    
return;
}
int main(){
    func();

return 0;
}
//https://codeforces.com/problemset/problem/272/A
//Dima and Friends

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n;
    cin>>n;
    int A[100],sum=0,c=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        sum += A[i];
    }
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1) != 1)
            c++;
    }
    cout<<c;
return;
}
int main(){
    func();

return 0;
}
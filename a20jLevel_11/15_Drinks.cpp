// https://codeforces.com/problemset/problem/200/B
//Drinks

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void func(){
    int n,A[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    double result=0;
    for(int i =0;i<n;i++){
        result = result +A[i];
    }
    result = result/n;
    cout<<fixed<<setprecision(12)<<result;
}
int main(){
    func();

return 0;
}
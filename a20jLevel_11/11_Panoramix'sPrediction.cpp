// https://codeforces.com/problemset/problem/80/A
// Panoramix's Prediction

#include<iostream>
#include<conio.h>
#include<bitset>
#include<string>
#define M 16
using namespace std;

void func(){
    int n,m,flag=1,i;
    cin>>n;
    cin>>m;
    for(i=n+1; i< m+1; i++){
        flag=1;
        for(int j=2; j<i ; j++){
            if(i%j == 0){
                flag=0;
                break;
            }
        }
        if(flag)
            break;
    }
    if(m==i)
        cout<<"YES";
    else
     cout<<"NO";
}
int main(){
    func();

return 0;
}
//  Xenia and Ringroad
// https://codeforces.com/problemset/problem/339/B

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    unsigned long long int m,n,x,y,res;
    cin>>n>>m;

    cin>>x;
    res=x-1;

    for(int i=0; i<m-1;i++){
        cin>>y;
        if(x==y)
            continue;
        if(y<x){
            res = res+  n-x + y;
            x=y;
            continue;
        }
        res= res+ y-x;

        x=y;
    }
    cout<<res;

return;
}
int main(){
    func();

return 0;
}
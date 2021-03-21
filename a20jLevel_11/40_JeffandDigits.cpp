// Jeff and Digits
// https://codeforces.com/problemset/problem/352/A

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,fc=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5)
            fc++;
    }
    if(fc==n){
        cout<<-1;
        return;
    }
    int hc = fc- fc%9;
    if(hc == 0){
        cout<<0;
        return;
    }
    for(int i=0;i<hc;i++){
        cout<<5;
    }
    for(int i=0;i<n-fc;i++){
        cout<<0;
    }


return;
}
int main(){
    func();

return 0;
}
// Football
// https://codeforces.com/problemset/problem/43/A

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,ac=0,bc=0;
    string a,b="**",s;
    cin>>n;
    cin>>s;
    a=s;
    ac++;
    for(int i=0;i<n-1;i++){
        cin>>s;
        if(a==s)
            ac++;
        else{
            b=s;
            bc++;
        }
    }
    if(b=="**"){
        cout<<a;
        return;
    }
    if(ac>bc)
        cout<<a;
    else
        cout<<b;


return;
}
int main(){
    func();

return 0;
}
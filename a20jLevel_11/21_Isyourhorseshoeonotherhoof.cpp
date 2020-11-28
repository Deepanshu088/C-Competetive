//https://codeforces.com/problemset/problem/228/A
//Is your horseshoe on the other hoof?

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    unsigned long int a,b,c,d;
    int count=0;
    cin>>a>>b>>c>>d;
    if(a==b)
        count++;
    if(a==c)
        count++;
    if(a==d)
        count++;
    if(b==c)
        count++;
    if(d==b)
        count++;
    if(d==c)
        count++;
    
    if(count==3){
        cout<<2;
        return;
    }
    if(count==6){
        cout<<3;
        return;
    }
    if(count<3)
        cout<<count;

return;
}
int main(){
    func();

return 0;
}
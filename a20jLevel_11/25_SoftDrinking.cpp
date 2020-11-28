//https://codeforces.com/problemset/problem/151/A
//Soft Drinking

#include<iostream>
#include<conio.h>

using namespace std;

void func(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int td,tl,ts;
    td = (k*l)/nl;
    tl=(c*d);
    ts = p/np;
    if(td<=tl && td<=ts)
        cout<<td/n;
    else if(tl<=td && tl<=ts)
        cout<<tl/n;
    else
        cout<<ts/n;
    

return;
}
int main(){
    func();

return 0;
}
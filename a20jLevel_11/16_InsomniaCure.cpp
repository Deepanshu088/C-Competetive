// https://codeforces.com/problemset/problem/148/A
//Insomnia cure

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void func(){
    int k,l,m,n,d,pn=0,pnl=0;
    cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1){
        cout<<d;
        return;
    }
    for(int i=2;i<=d;i++){
            if(i%k==0) pn++;
            else{
                if(i%l==0) pn++;
                else
                {
                    if(i%m==0) pn++;
                    else
                    {
                        if(i%n==0) pn++;
                    }
                    
                }
            }
    }
    cout<<pn;
return;
}
int main(){
    func();

return 0;
}
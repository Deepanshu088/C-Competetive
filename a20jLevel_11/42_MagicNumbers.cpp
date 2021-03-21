// Magic Numbers
// https://codeforces.com/problemset/problem/320/A

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    unsigned int n,c=0,y;
    cin>>n;
    while(n){
        y = n%10;
        if(y != 1 && y!=4){
            cout<<"NO";
            return;
        }
        if(y==4){
            c++;
            if(c>2){
                cout<<"NO";
                return;
            }
        }
        if(y==1)
            c=0;

        n=n/10;
    }
    if(y!=1){
        cout<<"NO";
        return;
    }
    cout<<"YES";

return;
}
int main(){
    func();

return 0;
}
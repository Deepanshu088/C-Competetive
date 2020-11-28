// https://codeforces.com/problemset/problem/61/A
// Ultra-Fast Mathematician

#include<iostream>
#include<conio.h>
#include<bitset>
#include<string>
#define M 16
using namespace std;

void func(){
    string x,y,z;
    cin>>x;
    cin>>y;
    z=x;
    for(int i=0; i<x.length();i++){
        if(x[i]!=y[i])
            z[i]=49;
        else 
            z[i]=48;
    }
    cout<<z;
}

void funcALternate(){
    unsigned int x,y,z;
    string sx="1010100",sy="0100101",sz;
    int n = sx.length();
    x = (int) bitset<M>(sx).to_ulong();
    y = (int) bitset<M>(sy).to_ulong();
    cout <<n;
    z = x ^ y;
    sz = bitset<M>(z).to_string();
    cout<<sz;
return;
}
int main(){
    func();

return 0;
}
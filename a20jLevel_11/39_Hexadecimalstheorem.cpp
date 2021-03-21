// Hexadecimal's theorem
// https://codeforces.com/problemset/problem/199/A

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
     int a, b = 0, c = 1, n;
    cin>>n;
    // n=1;
    if(n==0){
        cout<<0<<0<<0;
        return;
    }

    do{
        a = b;
        b = c;
        c = a + b;
    }while(c != n);
    cout<<b<<a<<0;

return;
}
int main(){
    func();

return 0;
}
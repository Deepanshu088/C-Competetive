// https://codeforces.com/problemset/problem/110/A
// Nearly Lucky Number

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    string s;
    unsigned long long int x;
    cin>>x;
    int flag=1,l=0;
    while(flag && x){
        if(x%10 == 4 || x%10 == 7){
            l++;
        }
        x=x/10;
    }
    if(l==4 || l==7)
        cout<<"YES";
    else
        cout<<"NO";

return;
}
int main(){
    func();

return 0;
}
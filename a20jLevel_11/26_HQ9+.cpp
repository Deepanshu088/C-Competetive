//https://codeforces.com/problemset/problem/133/A
//HQ9+

#include<iostream>
#include<conio.h>

using namespace std;

void func(){
    string s;
    getline(cin,s);
    for(int i =0 ;i< s.length(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
       
return;
}
int main(){
    func();

return 0;
}
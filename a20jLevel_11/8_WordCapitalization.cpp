// https://codeforces.com/problemset/problem/281/A
//Word Capitalization

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    string s;
    getline(cin,s);
    if(islower(s[0]))
        s[0]=s[0]-32;
    cout<<s;
return;
}
int main(){
    func();

return 0;
}
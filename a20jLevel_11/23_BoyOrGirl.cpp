//https://codeforces.com/problemset/problem/236/A
//Boy or Girl

#include<iostream>
#include<conio.h>
#include<bitset>
#include<string.h>

using namespace std;

void func(){
    string s;
    cin>>s;
    int a=1,c=1;
    a = a<<abs((int)s[0]-96);
    for(int i=1;i<s.length();i++){
        int b=1;
        b= b<<abs((int)s[i]-96);
        if((a&b) == 0){    
            a = a|b;
            c++;
        }
    }
    if(c%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";    
return;
}
int main(){
    func();

return 0;
}
//https://codeforces.com/problemset/problem/59/A
//Word

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void func(){
    string s;
    getline(cin,s);
    int uc=0,lc=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>64 && s[i]<91)
            uc++;
        else
            lc++;
    }
    if(uc>lc){
        //turn into uc
        for(int i=0; i<s.length();i++){
            if(islower(s[i]))
                s[i]-=32;
        }
    }else
    {
        //turn into lc
        for(int i=0; i<s.length();i++){
            if(isupper(s[i]))
                s[i]+=32;
        }
    }
    cout<<s;
    

return;
}
int main(){
    func();

return 0;
}
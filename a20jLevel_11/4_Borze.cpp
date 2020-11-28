//https://codeforces.com/problemset/problem/32/B
//Borze
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void func(){
    int i,j,n,code[200],ni=0;
    char s[200];
    cin>>s;
    for (n = 0; s[n]; n++);
    for(i=0,j=0; i<n; i++,j++){
        if(s[i]=='.'){
            code[j]=0;
        }else if(s[i]=='-'){
            if(s[i+1]=='.'){
                code[j]=1;
            }else if(s[i+1]=='-')
            {
                code[j]=2;
            }
            i++;
        }
        ni++;
    }
    for(i=0; i<ni; i++){
        cout<<code[i];
    }
return;
}
int main(){
    func();
return 0;
}
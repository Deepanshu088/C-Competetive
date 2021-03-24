// Pawri Meme
// https://www.codechef.com/COOK127C/problems/PAWRI

#include<iostream>
#include<string>
using namespace std;

void func(){
    int t;
    string s,sub="party";
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        int p=-1;
        int k=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==sub[k])
                k++;
            else
                k=0;

            if(k==5){
                s[j]='i';
                s[j-1]='r';
                s[j-2]='w';
            }
        }
        cout<<s;
        if(i<t-1)
            cout<<endl;
    }


return;
}

int main(){
    func();

return 0;
}
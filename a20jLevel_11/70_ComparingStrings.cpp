// Comparing Strings
// https://codeforces.com/problemset/problem/186/A

#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    char C[2];
    cin>>s1>>s2;
    int ft=0;
    
    if(s1.length()==s2.length()){
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                if(!ft){
                    ft++;
                    C[0]=s1[i];
                    C[1]=s2[i];
                }else{
                    if(C[0]==s2[i] && C[1]==s1[i]){
                        if(ft==1){
                            ft=5;
                            continue;
                        }
                        else if(ft==5){
                            cout<<"NO";
                            return 0;
                        }
                    }else{
                        cout<<"NO";
                        return 0;
                    }
                }
            }
        }
        if(ft==5)
            cout<<"YES";
        else
            cout<<"NO";
    }else
        cout<<"NO";

return 0;
}
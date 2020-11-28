//https://codeforces.com/problemset/problem/339/A
//Helpful Maths

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void func(){
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n-1;j+=2){
            if(s[j+2] < s[j])
                swap(s[j+2],s[j]);
        }
    }
    cout<<s;
return;
}

void func2(){
    string s;
    getline(cin,s);
    int n = s.length();
    int A[4]={0};
    for(int i=0; i<n; i+=2){
        A[s[i]-48]++;
    }
    int j=0;
    for(int i=1;i<4;i++){
        while(A[i] != 0){
            s[j]=i+48;
            A[i]--;
            j+=2;
        }
    }
    cout<<s;
}
int main(){
    func2();

return 0;
}
// Boys and Girls
// https://codeforces.com/problemset/problem/253/A

#include<iostream>
using namespace std;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>m){
        for(int i=0;i<n-m;i++){
            printf("B");
        }
        for(int i=0;i<m;i++){
            printf("GB");
        }
    }else if(m>n){
        for(int i=0;i<m-n;i++){
            printf("G");
        }
        for(int i=0;i<n;i++){
            printf("BG");
        }
    }else{
        for(int i=0;i<m;i++){
            printf("GB");
        }
    }



return 0;
}
// Two Bags of Potatoes
// https://codeforces.com/problemset/problem/239/A

#include<iostream>
using namespace std;

int main(){
    int x,y,k,n;
    cin>>y>>k>>n;
    bool flag=0;
    if(n-y > 0 && k<=n){
        x=k- y%k; 
        while (x<=n-y)
        {
            printf("%d ",x);
            flag=1;
            x += k;
        }  
        if(!flag)
            cout<<-1;
    }else{
        cout<<-1;
    }



return 0;
}
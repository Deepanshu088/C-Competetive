// Bicycle Chain
// https://codeforces.com/problemset/problem/215/A

#include<iostream>
#include<conio.h>
using namespace std;

void func(){
    int n,m,max=0,x,c=0;
    float y,a[50],b[50];
    // x=16/5;
    // y=16.0/5;
    // cout<<x<<endl;
    // cout<<y<<endl;
    
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x=b[j]/a[i];
            y=b[j]/a[i];
            // cout<<x<<y<<endl;

            if(x==y){
                if(y==max){
                    c++;
                }
                if(x>max){
                    max=x;
                    c=1;
                }
            }
        }
    }
    cout<<c;


return;
}
int main(){
    func();

return 0;
}
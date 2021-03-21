// Present from Lena
// https://codeforces.com/problemset/problem/118/B

#include<iostream>
using namespace std;

void func(){
    int n,i,j,k;
    // n=2;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=0;j<2*i-1;j++){
            cout<<" ";
        }
        for(j=n;j>=i;j--){
            cout<<" "<<n-j;
        }
        for(j=n-i-1;j>=0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    cout<<"0";
    for(int k =1;k<n;k++){
        cout<<" "<<k;
    }
    for(int k =n;k>=0;k--){
        cout<<" "<<k;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=0;j<2*i-1;j++){
            cout<<" ";
        }
        for(j=n;j>=i;j--){
            cout<<" "<<n-j;
        }
        for(j=n-i-1;j>=0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    

    
return;
}
int main(){
    func();

return 0;
}
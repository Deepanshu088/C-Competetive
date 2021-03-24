// Weight Balance
// https://www.codechef.com/COOK127C/problems/WEIGHTBL

#include<iostream>
using namespace std;

void func(){
    int t,a,b,m,n,Z;
    cin>>t;
    for(int k=0 ; k<t ; k++){
        cin>>a>>b>>m>>n>>Z;
        int min,max;
        max = n*Z;
        min = m*Z;

        if((b-a) >= min && (b-a) <= max){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }


return;
}

int main(){
    func();

return 0;
}
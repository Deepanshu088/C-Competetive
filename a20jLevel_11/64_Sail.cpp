// Sail
// https://codeforces.com/problemset/problem/298/B


#include<iostream>
using namespace std;

void func(){
    int t,ix,iy,fx,fy,rx,ry;
    int A[4] = {0};
    cin>>t>>ix>>iy>>fx>>fy;
    string s;
    cin>>s;
    rx=fx-ix;
    ry=fy-iy;

    if(rx>=0)
        A[1]=abs(rx);
    else
        A[2]=abs(rx);

    if(ry>=0)
        A[0]=abs(ry);
    else
        A[3]=abs(ry);


    for(int i=0;i<t;i++){
        if(s[i]=='N')
            A[0]--;
        else if(s[i]=='E')
            A[1]--;
        else if(s[i]=='W')
            A[2]--;
        else if(s[i]=='S')
            A[3]--;

        if(A[0]<=0  && A[1]<=0 && A[2]<=0 && A[3]<=0){
            cout<<i+1;
            return;
        }
    }
    cout<<-1;
    
return;
}
int main(){
    func();

return 0;
}
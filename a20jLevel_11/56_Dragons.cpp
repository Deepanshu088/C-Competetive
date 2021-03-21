// Dragons
// https://codeforces.com/problemset/problem/230/A

#include<iostream>
#include<algorithm>
using namespace std;

class Arr{
    public:
    int x;
    int y;
};
bool test(Arr a, Arr b){
    return(a.x < b.x);
}
void func(){
    int s,n;
    cin>>s>>n;
    Arr A[1000];
    for(int i=0;i<n;i++){
        cin>>A[i].x>>A[i].y;
    }

    sort(A,A+n,test);

    for(int i=0;i<n;i++){
        if(A[i].x < s)
            s += A[i].y;
        else{
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    

    
return;
}
int main(){
    func();

return 0;
}
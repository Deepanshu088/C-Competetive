// Airport
// https://codeforces.com/problemset/problem/218/B

#include<iostream>
#include<algorithm>
using namespace std;

void func(){
    int m,n,max=0,min=0;
    cin>>n>>m;

    
    int *a = new int[m];
    int *b = new int[m];
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        a[i]=x;
        b[i]=x;
    }
    sort(a,a+m);
    sort(b,b+m,greater<int>());
    int i=0,j=n;
    while (j>0)
    {   
        while(a[i] > 0 && j > 0){
            min += a[i]--;
            j--;
        }
        i++;
    }
    j=n;
    i=0;
    while (j>0)
    {
        if(b[i]==b[i+1]){
            max += b[i]--;
            j--;
            i++;
        }
        else{
            max += b[i]--;
            j--;
            i=0;
        }
    }
    
    cout<<max<<" "<<min;
    


    delete[] a;
    delete[] b;
return;
}
int main(){
    func();

return 0;
}                
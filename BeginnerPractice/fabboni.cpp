#include<iostream>
using namespace std;

static int n = 6;

int fabboni(int n){
    static int i =0;
    i++;
    if(i<=n){

    } else
    {
        exit(0);
    }
    
}

int  main()
{
    // fabboni(4);
    int a=0,b=1,sum=0;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<n;i++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }

return(0);
}
#include<iostream>
using namespace std;

static float x = 3;

//Method 1

int fact(int n){
    // n!
    if(n==1){
        return(1);
    } else
    {
        return(n* fact(n-1));
    }
    
}

float power(float m,int n){
    // m^n;
    if(n==1){
        return(m);
    } else
    {
        return(m*power(m,n-1));
    }
    
}

float sum(int n){
    //sum of n numbers
    if(n==0){
        return(1);
    } else 
    {   float term;
        term = power(x,n)/fact(n);
        return(term + sum(n-1));
    }
}

//Method 2
//Horner Method
float horner(int n){
    static int i = 1;
    if(n==i){
        return(0);
    } else
    {
        return(1 + ((x/i++)*horner(n-1)));
    }
    
}

int main(){

    // cout<<fact(6);
    // cout<<power(10,5);
    // cout<<sum(10);
    cout<<"horner  - "<<horner(17);

return(0);
}
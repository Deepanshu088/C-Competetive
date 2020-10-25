#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

static int count = 0;

void swap(int &x, int &y)
{   count++;
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    system("CLS");
    int a=10 , b=20;
    
    cout<<"before = "<<a<<b<<endl;
    swap(a,b);
    cout<<"after = "<<a<<b;
return(0);
}
#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{  
    T a;
    T b;

public:
    Arithmatic(T a, T b);\
    void showdata(){
        cout<<"a= "<<this->a<<" b="<<this->b;
    }
    T sum(){
        return (this->a + this->b);
    }
    T diff();

};
template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{ 
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmatic<T>::diff(){
    return(this->a - this->b);
}




int  main()
{
    Arithmatic <int>a1(5,8);
    cout<<a1.diff()<<"  "<<a1.sum()<<endl;
    Arithmatic <float>a2(3.1536,563.831);

    cout<<a2.diff()<<"  "<<a2.sum();

return(0);
}
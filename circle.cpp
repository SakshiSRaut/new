#include<iostream>
using namespace std;
class base
{
    public:
    float radius;
    float pi;
    virtual void fun(){
        cout<<"inside base fun";
    }
};

//adding comments in main file 

void Subtract()
{
int iNo1,iNo2;
cout<<iNo1-iNo2;
}
class derived:public base
{
    public:
    virtual void fun(){
        cout<<"inside derived fun"<<endl;
    }
};

class derivedsecond:public derived
{
    
};

int iNo1=11;
int main()
{
    derivedsecond obj1;
    derived obj2;
    base obj3;
    base * dp =NULL; 
    dp=&obj1;  
    dp->fun();
    cout<<"inside main"<<endl;
    
}

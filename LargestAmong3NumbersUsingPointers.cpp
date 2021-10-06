#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    cout<<"enter the three number"<<endl;
    cin>>a>>b>>c;
    p1=&a;
    p2=&b;
    p3=&c;
    
    if(*p1>=*p2  && *p1>=*p3 )
    {
        cout<<" greater is p1: "<<*p1<<endl;
    }
     if(*p2>=*p1  && *p2>=*p3 )
    {
        cout<<" greater is p2: "<<*p2<<endl;
    }
     if(*p3>=*p1  && *p3>=*p2 )
    {
        cout<<" greater is p3: "<<*p3<<endl;
    }
    return 0;
}

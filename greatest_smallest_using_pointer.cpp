#include<iostream>
using namespace std;
#define MAX(a,b,c) (*a>*b ? (*a>*c ? *a:*c) : (*b>*c ? *b:*c))
#define MIN(a,b,c) (*a<*b ? (*a<*c ? *a:*c) : (*b<*c ? *b:*c))
int main()
{
    int a,b,c;
    int *n1,*n2,*n3;
    cout<<"enter the three number"<<endl;
    cin>>a>>b>>c;
    n1=&a;
    n2=&b;
    n3=&c;

    cout<<" greatest "<<MAX(n1,n2,n3)<<endl;
    cout<<" smallest "<<MIN(n1,n2,n3)<<endl;
    return 0;
}

/*Addition,substraction, multiplication,division in 1d array*/

#include <iostream>

using namespace std;

int main()
{
    int A[3], B[3], i, add[3], sub[3], mul[3], div[3];
  
    
 cout<<"Enter the numbers for array A : "<<endl;
    for(int i=0;i<3;i++)
	{
        cin>>A[i];
    }
    
 cout<<"Enter the numbers for array B : "<<endl;
    for(int i=0;i<3;i++)
	{
        cin>>B[i];
    }
    
 cout<<"Addition of the array A and B is "<<endl;
    for(int i=0;i<3;i++)
    {
        add[i]= A[i]+B[i];
    }
     for(int i=0;i<3;i++)
     {
    cout<<add[i]<<" ";
     }
    
cout<<"\nSubstraction of the array A and B is "<<endl;
     for(int i=0;i<3;i++)
    {
        sub[i]= A[i]-B[i];
    }
     for(int i=0;i<3;i++)
     {
    cout<<sub[i]<<" ";
     }
   
 cout<<"\nMultiplication of the array A and B is "<<endl;
     for(int i=0;i<3;i++)
    {
        mul[i]= A[i]*B[i];
    }
     for(int i=0;i<3;i++)
     {
    cout<<mul[i]<<" ";
     }
     
 cout<<"\nDivision of the array A and B is "<<endl;
     for(int i=0;i<3;i++)
    {
        div[i]= A[i]/B[i];
    }
     for(int i=0;i<3;i++)
     {
    cout<<div[i]<<" ";
     }
   
   
    return 0;
}

/*2-D array initialization, take input, display output,
addition, subtraction*/

#include <iostream>

using namespace std;

int main()
{
int i,j,arrA[2][2],arrB[2][2];
int add[2][2],sub[2][2],mul[2][2];

cout<<"Enter the elements of array A :"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>arrA[i][j];
}
}

cout<<"Enter the elements of array B :"<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>arrB[i][j];
}
}

cout<<endl<<"**Addition of 2-D array A and B : "<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
add[i][j] = arrA[i][j] + arrB[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<add[i][j]<<" ";
}
cout<<endl;
}

cout<<endl<<"**Substraction of 2-D array A and B : "<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
sub[i][j] = arrA[i][j] - arrB[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<sub[i][j]<<" ";
}
cout<<endl;
}

cout<<endl<<"**Multiplication of 2-D array A and B : "<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
mul[i][j] = arrA[i][j] * arrB[i][j];
}
}
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<mul[i][j]<<" ";
}
cout<<endl;
}

return 0;
}
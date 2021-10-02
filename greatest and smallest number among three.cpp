#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;  //declare the variables
    cout << "Enter the first number: ";
    cin>>num1;//get input from user for num1
    cout << "Enter the second number: ";
    cin>>num2;//get input from user for num2
    cout << "Enter the third number: ";
    cin>>num3;//get input from user for num3
    cout<<"\n\nThe greatest number is: ";
    if((num1>num2)&&(num1>num3)){
        cout<<num1;
    }
    else if(num2>num3){
       cout<<num2;
    }
    else{
        cout<<num3;
    }
    cout<<"\n\nThe smallest number is: ";
    if((num1<num2)&&(num1<num3)){
        cout<<num1;
    }
    else if(num2<num3){
        cout<<num2;
    }
    else{
        cout<<num3;
    }
    getch();
    return 0;
}

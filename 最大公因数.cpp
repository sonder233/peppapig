#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two integers: ";
    int num1,num2,common_divisor;
    cin>>num1>>num2;

    int temp;
    if(num1<num2)
    {
        temp=num2;
        num2=num1;
        num1=temp;
    }

    for(int i=1; i<=num2; i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            common_divisor=i;
        }
    }

    cout<<common_divisor<<endl;

    return 0;
}

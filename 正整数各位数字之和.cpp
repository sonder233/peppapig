#include<iostream>
using namespace std;
int main()
{
    int num,result=0;
    cout<<"ÊäÈëÕûÊı: ";
    cin>>num;
    while(num !=0){
        result+=num%10;
        num=num/10;
    }
    cout<<result;
    return 0;
}

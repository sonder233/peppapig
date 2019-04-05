#include<iostream>
using namespace std;

long factorial( long number)  //这个函数就是求阶乘的函数
{
    if(number<=1)
    {
        return number;
    }
    else
    {
        return number*factorial(number-1);
    }
}

int combinator(int n,int m)
{
    int temp;
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    return factorial(n)/(factorial(m)*factorial(n-m));
}

int permutation(int n,int m)
{
    int temp;
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    return factorial(n)/factorial(n-m);
}

int main()
{
    cout<<"你算什么东西？:";
    int choice;
    cin>>choice;
    if(choice==1)
    {
        int a,b,result;
        cout<<"enter two integer: ";
        cin>>a>>b;
        result=combinator(a,b);
        cout<<result<<endl;
    }
    else{
        int c,d,result1;
        cout<<"enter two integer: ";
        cin>>c>>d;
        result1=permutation(c,d);
        cout<<result1;
    }

    return 0;
}

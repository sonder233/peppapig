#include<iostream>
using namespace std;
int main()
{
    int demo[100];
    int length,sum=0;
    for(int i=0; i<100; i++)
    {
        cin>>demo[i];
        if(demo[i]==0||demo[i]<0)
        {
            length=i;
            break;
        }
    }

    for(int j=0; j<length; j++)
    {
        if((demo[j]%2)!=0){
            sum+=demo[j];
        };
    }

    cout<<sum;

    return 0;
}

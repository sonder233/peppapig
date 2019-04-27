#include<iostream>
using namespace std;
int main()
{
    int demo[10]= {0,1,2,3,4,5,6,7,8,9};

    int temp=demo[0];
    for(int i=0; i<10; i++)
    {
        if(i<9)
        {
            demo[i]=demo[i+1];
        }
        else{
            demo[i]=temp;
        }
    }

    for(int i=0; i<10; i++)
    {
        cout<<demo[i]<<" ";
    }
    return 0;
}

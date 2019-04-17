#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array: ";
    int length;
    cin>>length;

    int demo[length];        //create a array
    for(int m=0; m<length; m++)
    {
        cout<<"Enter your number: ";
        cin>>demo[m];
    }

    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(demo[i]<demo[j])
            {
                int temp;
                temp=demo[j];
                demo[j]=demo[i];
                demo[i]=temp;
            }
        }

    }

    for(int m=0;m<length;m++){
        cout<<demo[m]<<endl;
    }
    return 0;
}

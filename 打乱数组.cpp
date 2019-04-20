#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"Input the number of integers: ";
    int num;
    cin>>num;

    int demo[num];
    cout<<"Input your numbers: ";
    for(int m=0;m<num;m++){
        cin>>demo[m];
    }

    srand(time(0));
    int j=rand()%6;

    int temp;
    for(int i=0;i<num;i++){
        temp=demo[i];
        demo[i]=demo[j];
        demo[j]=temp;
    }

    cout<<"The scrambled array is: ";
    for(int k=0;k<num;k++){
        cout<<demo[k]<<" ";
    }
    return 0;
}

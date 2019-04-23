#include<iostream>
using namespace std;
int main()
{
    int demo[10]= {1,2,2,3,3,3,4,5,5,6};
    cout<<sizeof(demo)<<endl;
    cout<<sizeof(*demo)<<endl;
    cout<<sizeof(demo)/sizeof(*demo)<<endl;


    return 0;
}

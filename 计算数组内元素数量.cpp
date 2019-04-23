#include<iostream>
using namespace std;
int main()
{
    int demo[10];
    cout<<sizeof(demo)<<endl;
    cout<<sizeof(*demo)<<endl;
    cout<<sizeof(demo)/sizeof(*demo)<<endl;


    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    double number;
    cin>>number;

    int i=2;
    for(; i<=number; i++)
    {
        double a=number/i;
        if(a==int(a))
        {
            cout<<i<<endl;
            number=a;
            i=2;
        }
    }
    return 0;
}

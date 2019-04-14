#include<iostream>
using namespace std;
int main()
{
    const int number_of_elements=4;
    double numbers[number_of_elements];

    double sum=0;
    for(int i=0; i<number_of_elements; i++)
    {
        cout<<"Enter a new number: ";
        cin>>numbers[i];
        sum+=numbers[i];
    }

    double average=sum/number_of_elements;
    cout<<"The average is: "<<average<<endl;

    int apple=0;

    for(int j=0; j<number_of_elements; j++)
    {
        if(numbers[j]>average)
        {
            apple++;
        }
    }
    cout<<apple;
    return 0;
}

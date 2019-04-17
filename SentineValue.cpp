#include<iostream>
using namespace std;
char Tax(double num)
{
    char result;
   if(num>1000){
    result= 'A';
   }
   else{
    result= 'B';
   }
   return result;

}
int main()
{
    cout<<"Enter a number: ";
    int number;
    cin>>number;

    cout<<Tax(number);

    return 0;
}

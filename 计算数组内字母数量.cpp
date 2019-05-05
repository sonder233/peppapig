#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int number_of_letters=26;
const int number_of_random_letters=100;

void createArray(char[]);
void displayArray(const char[]);
void countLetters(const char [],int []);
void displayCounts(const int[]);

int main()
{
    char chars[number_of_random_letters];

    createArray(chars);//创造数组

    cout<<"The lowercase letters are: "<<endl;
    displayArray(chars);

    int counts[number_of_letters];


    countLetters(chars,counts);

    cout<<"\nThe occurrences of each letter are: "<<endl;
    displayCounts(counts);

    return 0;
}

void createArray(char chars[])
{
    srand(time(0));
    for(int i=0; i<number_of_random_letters; i++)
    {
        chars[i]=static_cast<char>('a'+rand()%('z'-'a'+1));
    }
}

void displayArray(const char chars[])
{
    for(int i=0; i<number_of_random_letters; i++)
    {
        if((i+1)%20==0)
        {
            cout<<chars[i]<<" "<<endl;
        }
        else
        {
            cout<<chars[i]<<" ";
        }
    }
}

void countLetters(const char chars[],int counts[])
{
    for(int i=0; i<number_of_letters; i++)
    {
        counts[i]=0;
    }

    for(int i=0; i<number_of_random_letters; i++)
    {
        counts[chars[i]-'a']++;
    }
}

void displayCounts(const int counts[])
{
    for(int i=0;i<number_of_letters;i++)
    {
        if((i+1)%10==0)
        {
            cout<<counts[i]<<" "<<static_cast<char>(i+'a')<<endl;
        }
        else
        {
            cout<<counts[i]<<" "<<static_cast<char>(i+'a')<<" ";
        }
    }
}

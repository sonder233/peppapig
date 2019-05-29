#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
int main()
{
    cout<<"Input your N: ";
    int N;
    cin>>N;

    int demo[10][10];
    int num=1;

    for(int k=0; k<(N+1)/2; k++)
    {
        for(int j=k; j<=N-k-1; j++)
        {
            demo[k][j]=num++;
        }
        for(int j=k+1; j<N-k-1; j++)
        {
            demo[j][N-k-1]=num++;
        }
        for(int j=N-k-1; j>k; j--)
        {
            demo[N-k-1][j]=num++;
        }
        for(int j=N-k-1; j>k; j--)
        {
            demo[j][k]=num++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<setw(4)<<demo[i][j];
        }
        cout<<endl;
    }
    system("pause");

    return 0;
}

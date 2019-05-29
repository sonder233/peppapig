#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

const int row=5;
const int col=16;

void inputArray(char demo[row][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<demo[i][j];
        }
        cout<<endl;
    }

}

int main()
{
    //ÃÔ¹¬Ç½±Ú
//    cout<<" ###############"<<endl
//        <<" #     #####    "<<endl
//        <<"   ### ##### ###"<<endl
//        <<" #####       ###"<<endl
//        <<" ###############"<<endl;
    char wall[5][16]=
    {
        {'O','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
        {' ','#',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' '},
        {' ',' ',' ','#','#','#',' ','#','#','#','#','#',' ','#','#','#'},
        {' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ','#','#','#'},
        {' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    };
    inputArray(wall);

    char A='a';
    char D='d';
    char W='w';
    char S='s';

    int irow=0,icol=0;

    char key;
    while(1)
    {
        if(_kbhit())
        {
            system("cls");
            wall[irow][icol]=' ';
            key=_getch();
            if(key==A)
            {
                if(wall[irow][icol-1]==' ')
                    icol--;
            }
            else if(key==D)
            {
                if(wall[irow][icol+1]==' ')
                    icol++;
            }
            else if(key==S)
            {
                if(wall[irow+1][icol]==' ')
                    irow++;
            }
            else if(key==W)
            {
                if(wall[irow-1][icol]==' ')
                    irow--;
            }
            wall[irow][icol]='O';
            inputArray(wall);
            if(irow==1 && icol==15){
                system("cls");
                cout<<"You did it!";
                break;
            }
        }
    }




//    char demo[row][col];
//
//    cout<<col<<" "<<row<<endl;
//    for(int i=0; i<row; i++)
//    {
//        for(int j=0; j<col; j++)
//        {
//            demo[i][j]='O';
//            cout<<demo[i][j];
//        }
//        cout<<endl;
//    }
//
//    char ch;
//
//
//    while(true)
//    {
//        if(_kbhit())
//        {
//            system("cls");
//            ch=_getch();
//            if(ch==A)
//            {
//                col--;
//            }
//            else if(ch==D)
//            {
//                col++;
//            }
//            else if(ch==S)
//            {
//                row++;
//            }
//            else if(ch==W)
//            {
//                row--;
//            }
//
//            cout<<col<<" "<<row<<endl;
//            for(int i=0; i<row; i++)
//            {
//                for(int j=0; j<col; j++)
//                {
//                    if(i==row-1&&j==col-1)
//                    {
//                        cout<<'O';
//                    }
//                    else
//                    {
//                        demo[i][j]=' ';
//                        cout<<demo[i][j];
//                    }
//                }
//                cout<<endl;
//            }
//
//
//
//            for(int i=0; i<row-1; i++)
//            {
//                cout<<endl;
//            }
//            for(int i=0; i<col-1; i++)
//            {
//                cout<<" ";
//            }
//            cout<<"O";
//        }
//    }
    return 0;
}

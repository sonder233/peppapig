#include<iostream>
#include<cstring>
using namespace std;
int main(){

    string str1;
    getline(cin,str1);
    int len_1=str1.length();

    string str2;
    getline(cin,str2);
    int len_2=str2.length();

    int sum=0;
    for(int i=0;i<len_2;i++){
        for(int j=0;j<len_1;j++){
            if(str2[i]==str1[j]){
                sum++;
            }
        }
    }
    if(sum==len_2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}

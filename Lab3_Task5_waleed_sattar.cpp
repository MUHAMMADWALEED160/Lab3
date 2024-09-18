#include<iostream>
using namespace std;
int main(){
    int a[6];
    cout<<"Enter 6 values"<<endl;
    for(int i=0 ; i<6; i++)
    {
        cin>>a[i];
    }
    if(a[0]==a[5] && a[1]==a[4] && a[2] ==a[3])
    {
        cout<<"Entered numbers are palindrome"<<endl;
    }
    else
    cout<<"Entered number is not palindrome"<<endl;

    return 0;
}
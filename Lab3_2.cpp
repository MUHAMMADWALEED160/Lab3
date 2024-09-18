#include<iostream>
using namespace std;
int main(){
    int searchvalue;
    cout<<"Enter search value: "<<endl;
    cin>>searchvalue;
    bool found =false;
    int numbers[5]={12,14,10,15,17};
    for(int i=0; i<5; i++)
    {
        if(numbers[i]==searchvalue)
        {
            found=true;
            cout<<"*** Search Found ***"<<endl;
            break;
        }
        }
        if(!found)
        {
            cout<<"*** Search not Found ***"<<endl;
        }
    return 0;
}
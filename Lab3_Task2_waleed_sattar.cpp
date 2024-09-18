#include<iostream>
using namespace std;
int main(){
    int searchvalue;
    cout<<"Enter search value: "<<endl;
    cin>>searchvalue;
    bool found =false;
    int numbers[10]={12,14,10,15,17,45,32,44,77,14};
    for(int i=0; i<10; i++)
    {
        if(numbers[i]==searchvalue)
        {
            found=true;
            cout<<"*** Search Found *** and it's index is "<<i+1<<endl;
            break;
        }
        }
        if(!found)
        {
            cout<<"*** Search not Found ***"<<endl;
        }
    return 0;
}
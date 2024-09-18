#include<iostream>
using namespace std;
int main(){
    int searchvalue;
    cout<<"Enter search value: "<<endl;
    cin>>searchvalue;
    bool found =false;
    int numbers[4][4]={12,14,10,15,17,45,32,44,77,14,45,32,47,86,65,97};
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
        if(numbers[i][j]==searchvalue)
        {
            found=true;
            cout<<"*** Search Found *** \nIt's ROW Index is: "<<i+1<<endl;
            cout<<"And it's column Index is: "<<j+1<<endl;
            break;
        }
        }
        if (found) break;
        }
        if(!found)
        {
            cout<<"*** Search not Found ***"<<endl;
        }
    return 0;
}
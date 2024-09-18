#include<iostream>
using namespace std;
int main(){
    int array[5]={31,26,32,48,55};
    int* ipoint = &array[0];
    for(int i=0; i<100; i++)
    {
        *ipoint =i;
        cout<<ipoint<<endl;
        ipoint =ipoint +1;
    }
    for(int i=0; i<5; i++)
    {
        cout<<array[i];
    }
    return 0;
}
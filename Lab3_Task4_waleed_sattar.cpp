#include<iostream>
using namespace std;

int main()
{
    int arr[10],n,index,x;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the index you want to delete ";
    cin>>index;

    arr[index-1]=0;
   
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}
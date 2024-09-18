#include<iostream>
using namespace std;

int main()
{
    int arr[10],n,pos,x;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the insertion Location ";
    cin>>pos;
    cout<<"Enter the value to insert";
    cin>>x;

    for(int i=n-1; i>=pos-1; i--){
        arr[i+1]=arr[i];
    }

    arr[pos-1]=x;
    n++;

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}
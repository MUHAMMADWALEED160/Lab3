#include<iostream>
using namespace std;
int main()
{
    int alpha = 5;
    int beta = 20;
    int *alphaPtr = alpha;
    int *betaPtr = &beta;
    cout<<alpha<<endl;
    cout<<&alpha<<endl;
    cout<<*alphaPtr<<endl;
    cout<<betaPtr<<endl;
    cout<<"Hello World !"<<endl;
    return 0;
}
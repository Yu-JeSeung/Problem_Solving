#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int x=1;x<=a;x++)
    {
        for(int i=1+x;i<=a;i++)
        {
            cout<<" ";
        }
        for(int j=1;j<x+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

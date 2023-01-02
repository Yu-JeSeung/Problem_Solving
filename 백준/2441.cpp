#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int x=0;x<a;x++)
    {
        for(int i=a-x;i<a;i++)
        {
            cout<<" ";
        }
        for(int j=x;j<a;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}

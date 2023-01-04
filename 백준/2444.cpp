#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int max_S = 2*a-1;
    int cen_S;
    if(max_S%2==1)cen_S = max_S/2+1;
    for(int x=1;x<=cen_S;x++)
    {
        for(int y=x;y<a;y++)
        {
            cout<<" ";
        }
        for(int i=1;i<=2*x-1;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int x=cen_S-1;x>=1;x--)
    {
        for(int j=x;j<cen_S;j++)
        {
            cout<<" ";
        }
        for(int i=1;i<2*x;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}


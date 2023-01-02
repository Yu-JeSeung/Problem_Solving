#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int Max_s=2*a-1;
    int Cen_s;
    if(Max_s%2==1)Cen_s=Max_s/2+1;
    for(int x=1;x<=a;x++)
    {
        for(int i=x;i<Cen_s;i++)
        {
            cout<<" ";
        }
        for(int j=0;j<x*2-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}

#include<iostream>
using namespace std;
int stop=1;
int calcul(int value)
{
    for(int x=2;x<=value;x++)
    {
        if(value%x==0)
        {
            cout<<x<<endl;
            value=value/x;
            break;
        }
        if(value%x==0)stop=0;
    }
    if(value == 1){
        stop = 0;
    }
    return value;
}
int main()
{
    int a;
    cin>>a;
    while(stop)
    {
        int ret = calcul(a);
        a=ret;
    
    }
    
    return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

vector<string>v;
string str;
vector<int>i;

void pop()
{
    if(v.size()==0)i.push_back(-1);
    else {
        i.push_back(stoi(v[0]));
        v.erase(v.begin());
    }
}

void empty()
{
    int value=(int)v.size();
    if(value!=0)i.push_back(0);
    else i.push_back(1);
}

void front()
{
    if(v.size()==0)i.push_back(-1);
    else {
        i.push_back(stoi(v[0]));
    }
}

void back()
{
    if(v.size()==0)i.push_back(-1);
    else {
        i.push_back(stoi(v.back()));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a;
    cin>>a;
    for(int x=0;x<a;x++)
    {
        string push_v;
        cin>>str;
        
        if(str=="push"){
            cin>>push_v;
            v.push_back(push_v);
        }
        if(str=="pop"){
            pop();
        }
        if(str=="size"){
            i.push_back((int)v.size());
        }
        if(str=="empty"){
            empty();
        }
        if(str=="front"){
            front();
        }
        if(str=="back"){
            back();
        }
    }
   
    for(int x=0;x<i.size();x++)
    {
        cout<<i[x]<<endl;
    }
    
    return 0;
}


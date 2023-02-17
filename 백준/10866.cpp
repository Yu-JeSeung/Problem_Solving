#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int ans;
string str;
vector<int>v; // 저장
vector<int>i; // 출력

void push_front()
{
    int a;
    cin>>a;
    v.insert(v.begin(),a);
}

void push_back()
{
    int a;
    cin>>a;
    v.push_back(a);
}

void pop_front()
{
    if(v.empty())i.push_back(-1);
    else {
        i.push_back(v[0]);
        v.erase(v.begin());
    }
}

void pop_back()
{
    if(v.empty())i.push_back(-1);
    else {
        i.push_back(v.back());
        v.pop_back();
    }
}

void empty()
{
    if(v.empty())i.push_back(1);
    else i.push_back(0);
}

void front()
{
    if(v.empty())i.push_back(-1);
    else{
        i.push_back(v[0]);
    }
}

void back()
{
    if(v.empty())i.push_back(-1);
    else{
        i.push_back(v.back());
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>ans;
    
    for(int x=0;x<ans;x++)
    {
        cin>>str;
        if(str=="push_front"){
            push_front();
        }
        if(str=="push_back"){
            push_back();
        }
        if(str=="pop_front"){
            pop_front();
        }
        if(str=="pop_back"){
            pop_back();
        }
        if(str=="size"){
            i.push_back(v.size());
        }
        if(str=="empty"){
            empty();
        }
        if(str=="front")
        {
            front();
        }
        if(str=="back")
        {
            back();
        }
    }
    
    for(int x=0;x<i.size();x++)
    {
        cout<<i[x]<<endl;
    }
    return 0;
}

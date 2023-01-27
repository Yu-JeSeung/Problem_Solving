#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s,str;
    vector<string>v;
    
    // 공백포함 문자열 입력
    getline(cin,s);
    if(s[0]==' ')s.erase(0,1);
    
    
    // 공백을 기준으로 문자열 나누기
    stringstream ss(s);

    while(getline(ss, str, ' '))
    {
        v.push_back(str);
    }
    cout<<v.size();
    
    return 0;
}

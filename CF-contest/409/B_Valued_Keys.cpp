/*----------------------------------------
    author:  Imam
    created: 27.12.2024 22:13:52
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string a,b;
    cin>>a>>b;
    string z;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[i])
            z.push_back('z');
        else z.push_back(b[i]);
    }
    string tmp;
    for(int i=0;i<a.length();i++)
        tmp.push_back(min(a[i],z[i]));
    
    if(tmp==b) cout<<z<<'\n';
    else cout<<-1<<'\n';
    return 0;
}
/*----------------------------------------
    author:  Imam
    created: 01.01.2025 16:03:06
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    string s; cin>>s;
    int ans=0,x=0,y=0;
    for(int i=0;i<n-1;i++){
        (s[i]=='U')?x++:y++;
        if(x==y && s[i]==s[i+1]) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
///problem link: https://codeforces.com/contest/282/problem/A
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int t,x=0;
        cin>>t;
        while(t--)
        {
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                char p='+';
                char q='-';
                if(s[i]==p){
                x++;
                break;
                }
                else if(s[i]==q){
                x--;
                break;
                }
                
            }
        }
        cout<<x<<endl;
    }

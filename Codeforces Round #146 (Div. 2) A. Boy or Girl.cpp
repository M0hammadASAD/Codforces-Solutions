//problem: 
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main() {
        string s;
        cin>>s;
        set <char> k;
        for(int i=0;i<s.size();i++)
        {
            k.insert(s[i]);
        }
        int d=k.size();
        if(d%2!=0)
        {
            cout<<"IGNORE HIM!";
        }
        else
        cout<<"CHAT WITH HER!";
        
    }

//problem:https://codeforces.com/contest/339/problem/A
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main() {
        vector <char> vec;
        string s;
        cin>>s;
        for(int i=s.size();i>=0;i--)
        {
            if(s[i]!='+')
            {
                vec.push_back(s[i]);
            }
        }
        int d=vec.size();
        int m=0;
        sort(vec.begin(),vec.end());
        for(auto it=vec.begin()+1;it!=vec.end();it++){
            cout<<*it;
            m++;
            if(m<d-1)
            cout<<"+";
     
        }
            cout<<endl;
        
    }

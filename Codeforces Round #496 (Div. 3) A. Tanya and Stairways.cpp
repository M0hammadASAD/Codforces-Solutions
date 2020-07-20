///problem : https://codeforces.com/contest/1005/problem/A
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main() {
        int n;
        cin>>n;
        int a[n],t=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1){
            t++;
            }
        }
        vector <int> v;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
            {
                v.push_back(a[i-1]);
            }
        }
        v.push_back(a[n-1]);
        cout<<t<<endl;
        for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
        cout<<endl;
        
    }

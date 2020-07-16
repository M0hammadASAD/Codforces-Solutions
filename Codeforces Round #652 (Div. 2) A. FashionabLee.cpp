///problem : https://codeforces.com/contest/1369/problem/A
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long int x;
            cin>>x;
            if((x>=4) && (x%4==0))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }

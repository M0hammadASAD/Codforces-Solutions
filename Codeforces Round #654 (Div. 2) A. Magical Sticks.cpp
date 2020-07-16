//problem : https://codeforces.com/contest/1371/problem/A
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main() {
        int t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            if(n==1)
            {
                cout<<1<<endl;
            }
            else if(n%2==0)
            {
                ll x;
                x=n/2;
                cout<<x<<endl;
            }
            else if(n%2!=0)
            {
                ll y,z;
                y=n-1;
                z=y/2;
                z=z+1;
                cout<<z<<endl;
                
                
            }
        }
    	
    	return 0;
    }

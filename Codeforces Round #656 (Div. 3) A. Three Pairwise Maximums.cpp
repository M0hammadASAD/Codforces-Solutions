//problem: https://codeforces.com/contest/1385/problem/A
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main() {
        ll t;
        cin>>t;
        while(t--)
        {
            int a[3];
            cin>>a[0]>>a[1]>>a[2];
            sort(a,a+3);
            if(a[1]==a[2])
            {
                cout<<"YES"<<endl<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
            
            }
            else 
            cout<<"NO"<<endl;
            
        }
    	return 0;
    }


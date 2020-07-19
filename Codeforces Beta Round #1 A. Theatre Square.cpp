//problem: https://codeforces.com/contest/1/problem/A
    #include <iostream>
    #define ll long long int
    using namespace std;
     
    int main() {
        ll n,m,a,x,y;
        cin>>n>>m>>a;
        if(m%a==0)
        {
            x=m/a;
        }
        else
        x=m/a+1;
        if(n%a==0)
        y=n/a;
        else
        y=n/a+1;
        cout<<x*y<<endl;
        
    }

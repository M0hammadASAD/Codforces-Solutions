///problem link: https://codeforces.com/contest/50/problem/A
    #include <iostream>
    using namespace std;
     
    int main() {
        int m,n;
        cin>>m>>n;
        int x=m*n;
        if(x%2!=0)
        {
            int l=x-1;
            l=l/2;
            cout<<l<<endl;
        }
        else
        {
            int l=x/2;
            cout<<l<<endl;
        }
    	return 0;
    }

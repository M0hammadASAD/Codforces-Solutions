//problem : https://codeforces.com/contest/1373/problem/A
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	    long long int a,b,c;
    	    int ans;
    	    cin>>a>>b>>c;
    	    if(c>a)
    	        cout<<"1 ";
    	        else
    	        cout<<"-1 ";
    	        
    	   if(a*b>c)
    	   cout<<b<<endl;
    	   else
    	   cout<<"-1"<<endl;
    	    
    	}
    	return 0;
    }

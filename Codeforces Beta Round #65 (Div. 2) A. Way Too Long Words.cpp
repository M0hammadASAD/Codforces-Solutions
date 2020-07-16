//problem link : https://codeforces.com/contest/71/problem/A
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int n;
    	cin>>n;
    	while(n--)
    	{
    	    string s;
    	    cin>>s;
    	    char a,b;
    	    for(int i=0;i<1;i++)
    	    a=s[i];
    	    int j=s.size();
    	    for(int i=j-1;i<j;i++)
    	    b=s[i];
    	    if(s.size()<=10)
    	    cout<<s<<endl;
    	    else
    	    cout<<a<<s.size()-2<<b<<endl;
    	}
    	return 0;
    }

///problem : https://codeforces.com/contest/231/problem/A
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int n;
    	int cnt=0;
    	cin>>n;
    	for(int i=0;i<n;i++)
    	{
    	   int a=0,b=0,c=0;
    	   cin>>a;
    	   cin>>b;
    	   cin>>c;
    	   if(a+b+c>=2)
    	    cnt++;
    	   
    	}
    	cout<<cnt<<endl;
    	return 0;
    }

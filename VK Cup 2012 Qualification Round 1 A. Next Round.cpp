///problem link : https://codeforces.com/contest/158/problem/A
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,k,min,c=0;
        cin>>n>>k;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i+1==k)
                min=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>=min && a[i]>0)
                c++;
        }
        cout<<c<<endl;
        return 0;
    }

    ///https://codeforces.com/contest/999/problem/A
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,k,c=0;
        cin>>n>>k;
        int p[n];
        for(int i=1; i<=n; i++)
        {
            cin>>p[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(p[i]<=k)
            {
                c++;
                p[i]--;
            }
            else
                break;
        }
        for(int i=n; i>=1; i--)
                {
                    if(p[i]<=k)
                    {
                        c++;
                        p[i]--;
                    }
                    else
                        break;
                }
           if(c==2*n)
            cout<<n<<endl;
        else
            cout<<c<<endl;
    }

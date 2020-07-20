    ///problem : https://codeforces.com/contest/977/problem/A
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int n,cnt=0,k;
        cin>>n>>k;
        for(int i=0; i<k; i++)
        {
            if(cnt<k)
                {
     
                if(n%10==0)
                {
                    n=n/10;
                    cnt++;
                }
                else if(n%10 != 0)
                {
                    n=n-1;
                    cnt++;
                }
            }
        }
        cout<<n<<endl;
    }

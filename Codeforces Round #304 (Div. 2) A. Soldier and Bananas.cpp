//problem : https://codeforces.com/contest/546/problem/A
    #include<iostream>
    using namespace std;
    int main()
    {
        long long int k,n,w,t=0;
        cin>>k>>n>>w;
        for(int i=1;i<=w;i++)
        {
            t=t+(i*k);
        }
        if(n>=t)
            cout<<0<<endl;
        else
            cout<<t-n<<endl;
    }

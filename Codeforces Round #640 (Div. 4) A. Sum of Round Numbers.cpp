    ///problem : https://codeforces.com/contest/1352/problem/A
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,p,m=1;
            vector <int> vec;
            cin>>n;
            while(n>0){
            p=n%10;
            p=p*m;
            m=m*10;
            if(p>0)
                vec.push_back(p);
            n=n/10;
            }
            cout<<vec.size()<<endl;
            for(int i = 0; i <vec.size(); i++)
                cout<<vec[i]<<" ";
                cout<<endl;
     
        }
    }

    ///problem : https://codeforces.com/contest/978/problem/A
    #include<bits/stdc++.h>
    using namespace std;
     
    #define ld long double
    long long int cnt[1000]; ///global e array declare korle shob guloi 0 thake
    int main()
    {
        long long n,i; ///n=6
        cin >> n;
        long long arr[n];
        vector<long long int>v;
        for(i=0;i<n;i++)
            cin >> arr[i];  ///arr = 1 5 5 1 6 1
        for(i=n-1;i>=0;i--)  /// 2
        {
            if(cnt[arr[i]]==0)   ///arr[2]=5; cnt[5]=1
                {
                    v.push_back(arr[i]);  /// vec :  6 1 5
                    cnt[arr[i]]++;
                }
        }
        cout << v.size() << endl; ///3
        for(i=v.size()-1;i>=0;i--) ///i=2
            cout << v[i] << " ";   ///1
        cout << endl;
    }

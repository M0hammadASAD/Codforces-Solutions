//problem: https://codeforces.com/contest/118/problem/A
    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main() {
        string a;
        cin>>a;
        for(int i=1;i<=a.size();i++)
        {
            a[i-1]=tolower(a[i-1]);
        }
        a.erase(remove(a.begin(), a.end(), 'a'), a.end());
        a.erase(remove(a.begin(), a.end(), 'e'), a.end());
        a.erase(remove(a.begin(), a.end(), 'i'), a.end());
        a.erase(remove(a.begin(), a.end(), 'o'), a.end());
        a.erase(remove(a.begin(), a.end(), 'u'), a.end());
        a.erase(remove(a.begin(), a.end(), 'y'), a.end());
        for(int i=0;i<a.size();i++)
        {
            cout<<'.';
            cout<<a[i];
        }
        cout<<endl;
    }

//problem: https://codeforces.com/contest/96/problem/A
    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        char s[101];
        cin >> s;
        int d=strlen(s);
     
        int c = 1;
        for (int i = 1; i < d; i++)
        {
            if (s[i] == s[i - 1])
            {
                c = c + 1;
                if (c == 7)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            else
            {
                c = 1;
            }
        }
     
        cout << "NO" << endl;
        return 0;
    }

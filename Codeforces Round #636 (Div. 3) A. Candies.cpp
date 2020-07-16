//problem :https://codeforces.com/contest/1343/problem/A
    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            int n,x,k;
            cin>>n;
            for(k=2;k<=35;k++)
            {
                int l=pow(2,k)-1;
                if(n%l)
                continue;
                x=n/l;
                break;
                
            }
            cout<<x<<endl;
            
        }
    }

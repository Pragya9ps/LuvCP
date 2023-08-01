#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define l long;
#define for(x,n) for(int x = 0; x < n; ++ x)
const double pi = 3.141592653;
int n, f;
long double volume[100000];
const long double eps = 1e-6;

bool isPieSufficient(long double vol)
{
    int val = 0;
    for(i,n)
    {
        val += (int)floor(volume[i]/vol);
        if(val>= f) return true; 
    }
    return val>=f;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>f;
        ++f;
        long double hi =0;
        for(x,n)
        {
            int a;
            cin>>a;
            long double pie = pi*a*a;
            volume[x] = pie;
            hi = max(volume[x], hi);
        }

        //f(x)---> TTTTFFFFFF OR FFFFFTTTTTT
        long double lo=0, mid, ret =0;
        while(hi-lo> eps)
        {
            mid = (hi+lo)/2;
            if(isPieSufficient(mid))
            {
                ret = mid;
                lo = mid+eps;
            }
            else{
                hi = mid-eps;
            }
        }
        cout<<setprecision(6)<<ret<<endl;
    }
    return 0;
}

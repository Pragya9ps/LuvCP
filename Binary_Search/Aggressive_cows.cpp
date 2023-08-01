#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int n, C;
int stalls[N];

bool minDistance(int minDist)
{
    int last_cw = -1;
    int cows = C;
    for(int i =0; i<n; ++i)
    {
        if(stalls[i]-last_cw >=minDist || last_cw == -1)
        {
            cows--;
            last_cw = stalls[i];
        }
        if(cows == 0) break;
    }
    return cows==0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>C;
        for(int i = 0; i<n; ++i)
        {
            cin>>stalls[i];
        }
        sort(stalls, stalls+n);
        // T T T T F F F F
        int lo = 0, hi =1e9, mid;
        while(hi-lo>1)
        {
            mid = (hi+lo)/2;
            if(minDistance(mid))
            {
                lo = mid;
            }
            else{
                hi = mid-1;
            }
        } 
        if(minDistance(hi))
        {
            cout<<hi<<endl;
        }
        else{
            cout<<lo<<endl;
        }

    }
    
}
#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &v, int t){
    int lo, hi;
    lo = 0;
    hi = v.size()-1;
    int mid = (lo + hi)/2;
    while(hi-lo > 1)
    {
        mid = (lo + hi)/2;
        if(v[mid]<t)
        {
            lo = mid+1; 
        }
        else{
            hi = mid;
        }
        
    }
    if(v[lo]>=t)
    {
        return lo;
    }
    if(v[hi]>=t)
    {
        return hi;
    }
    return -1;

}

int upperbound(vector<int> &v, int t){
    int lo, hi;
    lo = 0;
    hi = v.size()-1;
    int mid = (lo + hi)/2;
    while(hi-lo > 1)
    {
        mid = (lo + hi)/2;
        if(v[mid]<=t)
        {
            lo = mid+1; 
        }
        else{
            hi = mid;
        }
    }
    if(v[lo]>t)
    {
        return lo;
    }
    if(v[hi]>t)
    {
        return hi;
    }
    return -1;

}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cin>>target;
    sort(v.begin(), v.end());
    // vector<int> :: iterator lb = lower_bound(v.begin(), v.end(), target);
    // vector<int> :: iterator ub = upper_bound(v.begin(), v.end(), target);
    // cout<< (*lb) <<endl;
    // cout<< (*ub) <<endl;

    int l = lowerbound(v, target);
    int b = upperbound(v, target);

    cout<< (l!= -1 ? v[l] : -1)<<endl;
    cout<< (b!= -1 ? v[b] : -1)<<endl;

}
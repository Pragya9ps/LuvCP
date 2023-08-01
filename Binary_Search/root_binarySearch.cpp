#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;

int main()
{
    double n;
    cin>>n;
    double lo = 1, hi = n, mid;
    while(hi-lo > eps)
    {
        mid = (hi +lo) / 2;
        if(mid*mid <n)
        {
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout<< lo << endl;
    cout<<pow(n, 1.0/2)<<endl;

}

// Log(n*(10^d)) ---------> time complexity
//for Nth root N*Log(n*(10^d))
#include<bits/stdc++.h>
#define in(x) cin>>x;
#define out(x) cout<<x<<endl;
using namespace std;
#define ll long long;
#define l long;
#define ld long double;
// #define for(x,n) for(int x = 0; x < n; ++ x)
 
int main()
{
        string A;
        getline(cin, A);
        string ans  = "", word="";
        stack<string> st;


        for(int i=0; i<A.length(); i++)
        {
            if((A[i]==' ' && i!=0||(A[i]==' ' && i!=A.length()-1 )))
            {
                if(!word.empty())
                {
                    st.push(word);
                    word = "";
                }
                // word = A.substr(i+1,count);
                // ans += word;
                // if (!ans.empty()) {
                // ans += " "; 
                // }
                // word = "";
                // count = 0;
            }
            else
            {
                word +=A[i];
            }
        }
        if(!word.empty())
                {
                    st.push(word);
                    word = "";
                }

        while(!st.empty())
        {
            if(!ans.empty())
             ans  = ans + " " + st.top();
            else 
             ans = ans + st.top();
            st.pop();
        }
        cout<<ans<<endl;
    return 0;
}
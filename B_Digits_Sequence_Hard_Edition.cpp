   
   #include<bits/stdc++.h>  
   using namespace std;

//-----------------------------------------------------------------------------------------
   #define db_bhai        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   #define test           int T; cin>>T; for(int t=1;t<=T;t++)
   #define ll             long long
   #define lli            long long int
   #define ld             long double
   #define yes            cout<<"YES"<<endl
   #define no             cout<<"NO"<<endl
   #define f(i,x,n)       for(int i = x; i < n; i++)
   #define fo(i,x,n)      for(int i=x;i>=n;i--)
   #define pb             push_back
   #define pp             pop_back()
   #define all(v)         (v).begin(), (v).end()
   #define array_le_le    lli a[n]; f(i,0,n){cin>>a[i];}
   #define vector_le_le   vector<lli>v; f(i,0,n){int x; cin>>x; v.pb(x);}
//-----------------------------------------------------------------------------------------
   const long long        INF=1e18;
   const int32_t          MM=998244353;
   const int              N=1e7+5;
   const int32_t          M=1e9+7;
//-----------------------------------------------------------------------------------------
   #ifndef ONLINE_JUDGE  
   #define debug(x)       cout<<#x<<" "<<x<<endl
   #else
   #define debug(...)     
   #endif
//-----------------------------------------------------------------------------------------



void solve()
{           
    lli n;  
    cin>>n; 
    // 100
    vector<ll>v;
    f(i,0,12)
    {
        v.pb(9*(pow(10,i)));
    }
    vector<ll>g;
    g=v;
    f(i,1,12)
    {
        g[i]+=g[i-1];
    }
    f(i,1,12)
    {
          v[i]*=(i+1);
          v[i]+=v[i-1];
    }
    int op=lower_bound(all(v),n)-v.begin();
    // op++;
    if(op)
     n-=v[op-1];
    ll ans=0;
    // op digit ma
     if(op)
     ans=g[op-1];
     op++;
     ans+=(n/op);
     ll rem=n%op;
     string s="";
    string h=to_string(ans);
    s.pb(h.back());
    ans++;
    string f=to_string(ans);
    s+=f;
    // cout<<ans<<endl;
    cout<<s[rem];
}

int main()
{
    db_bhai;
    // test
    {
        //cout<<"Case #"<<t<<": "; 
        solve();
    }
    return 0;
}
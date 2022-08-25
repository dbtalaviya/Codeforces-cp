   
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

ll answer(map<ll,ll>&mp,ll c)
{
    ll ans=0;
    for(auto h:mp)
    {
        if(h.second<c)ans+=h.second;
        else if(h.second>c)ans+=h.second-c;
    }
    return ans;
}

void solve()
{           
    lli n;  
    cin>>n;
    array_le_le
    map<ll,ll>mp;
    f(i,0,n)
    {
        mp[a[i]]++;
    }
    vector<ll>v,v2;
    map<ll,ll>mp2;

    for(auto g:mp)
    {
       v.pb(g.second);
       if(mp2[g.second]==0)
       {
          v2.pb(g.second);
       }
       mp2[g.second]++;
    }

    sort(all(v));
    sort(all(v2));
    ll pref[v.size()];
    f(i,0,v.size())
    {
       pref[i]=v[i];
       if(i)
       pref[i]+=pref[i-1];
       debug(pref[i]);
    }
    ll ans=INT_MAX;
    f(i,0,v2.size())
    {
      int x=lower_bound(all(v),v2[i])-v.begin();
      int y=upper_bound(all(v),v2[i])-v.begin();
      if(x-1>=0)
      {
         ll op=pref[x-1]+pref[v.size()-1]-pref[y-1]-(v2[i]*(v.size()-y));
         debug(op);
         ans=min(ans,op);
      }
      else
      {
         ll op=pref[v.size()-1]-pref[y-1]-(v2[i]*(v.size()-y));
         debug(op); 
         ans=min(ans,op);
      }
    }
    cout<<ans<<endl;

}

int main()
{
    db_bhai;
    test
    {
        //cout<<"Case #"<<t<<": "; 
        solve();
    }
    return 0;
}






// 1 3
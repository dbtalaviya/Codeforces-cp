   
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
    map<ll,ll>mp;
    array_le_le
    sort(a,a+n);
    ll size=0;
    f(i,0,n)
    {
        ll x=a[i];
        if(mp[x]==0)
        {
            mp[x]++;
            size++;
        }
        else if(mp[x-1]==0&&x-1>0)
        {
            mp[x-1]++;
            size++;
        }
        else if(mp[x+1]==0)
        {
            mp[x+1]++;
            size++;
        }

    }
    cout<<size<<endl;
                

    
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







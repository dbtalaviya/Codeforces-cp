void build(ll a[],ll s[],ll id,ll l,ll r)
{
   if(l==r)
   {
      s[id]=a[l];
      return;
   }
 
   ll mid=(l+r)/2;
 
   build(a,s,id*2+1,l,mid);
 
   build(a,s,id*2+2,mid+1,r);
 
   s[id]=min(s[id*2+1],s[id*2+2]); 

}
 
ll query(ll s[],ll x,ll y,ll id,ll l,ll r)
{
   // no overlap
 
   if(y<l or x>r)
   {
      //check it
      return LLONG_MAX;
   }

   //completely lies
   if(y>=r and x<=l)
   {
      return s[id];
   }
   // partial overlap
   
   ll mid=(l+r)/2;

   // check it
   return min(query(s,x,y,id*2+1,l,mid),query(s,x,y,id*2+2,mid+1,r));

}

// readme: 
// all array 0 based index
// array a:your actual arry n is size of a
// array s:segment is 4*n size
// id is zero based no issues
// this is segment to find minimum number from l to r change it accordingly
// for max also return LLong_min 
// in query x and y is your actual query (l to r ), and l to r is 0 to n-1

// build :: build(a,seg,0,0,n-1)
// query for l to r :: query(seg,l,r,0,0,n-1)
// use mind

/*
*Problem Link : https://www.spoj.com/problems/KQUERY/
*Platform: Spoj
*Status: correct
*Author: Zawed Akhtar
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=100005;

ll arr[N];
struct treeNode
{
 vector<ll>tree[N*4];
 void buildTree(ll s,ll e,ll index)
 {
   //base case
   if(s==e)
   {
     tree[index].push_back(arr[s]);
     return;
   }
   ll mid=(s+e)/2;
   buildTree(s,mid,2*index);
   buildTree(mid+1,e,2*index+1);
   merge(tree[2*index].begin(),tree[2*index].end(),tree[2*index+1].begin(),tree[2*index+1].end(),back_inserter(tree[index]));
 }
 int Kquery(ll s,ll e,ll l,ll r,ll k,ll index)
 {
   //no overlap
   if(r<s||l>e)
   {
     return 0;
   }
   //complete overlap
   if(s>=l && e<=r)
   {
     return tree[index].size()-(upper_bound(tree[index].begin(),tree[index].end(),k)-tree[index].begin());
   }
   ll mid=(s+e)/2;
   ll left=Kquery(s,mid,l,r,k,2*index);
   ll right=Kquery(mid+1,e,l,r,k,2*index+1);
   return left+right;
 }
}tree;

int main()
{
  ll n;
  cin>>n;
  for(ll i=0;i<n;i++)
  {
   cin>>arr[i];
  }
  tree.buildTree(0,n-1,1);
  ll t;
  cin>>t;
  while(t--)
  {
    ll l,r,k;
    cin>>l>>r>>k;
    l--;
    r--;
    ll ans=tree.Kquery(0,n-1,l,r,k,1);
    cout<<ans<<endl;
  }
  return 0;
}

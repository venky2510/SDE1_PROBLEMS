#include<bits/stdc++.h>
using namespace std;

int main()
 {
 int t,i,n,j;
 cin>>t;
 while(t--)
 {
     cin>>n;
     int s[n];
     int e[n];
     for(i=0;i<n;i++)
     cin>>s[i];
     for(i=0;i<n;i++)
     cin>>e[i];
     map<pair<int,int>,int> m;
     vector<pair<int,int>> v;
     for(i=0;i<n;i++)
     {
         v.push_back(make_pair(e[i],s[i]));
         m[make_pair(e[i],s[i])]=i+1;
     }
     
     sort(v.begin(),v.end());
     pair<int,int> sample=v[0];
     cout<<m[sample]<<" ";
     for(i=1;i<n;i++)
     {
         if(sample.first<=v[i].second)
         {
             
             cout<<m[v[i]]<<" ";
             sample=v[i];
         }
         
     }
     cout<<"\n";
    
 }
	
	return 0;
}
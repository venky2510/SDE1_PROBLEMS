
//error is coming in this code pls check in your free time
//will update once the error is rectified
//hello

#include<bits/stdc++.h>
using namespace std;
static  bool compare(pair<double,double>a,pair<double,double>b)
{
    return a.first> b.first;
}
int main()
 {
 double t,i,n,j,w,val,wt;
 cin>>t;
 while(t--)
 {
     cin>>n>>w;
     vector<pair<double,double>> v;
     for(i=0;i<n;i++)
     {
         cin>>val>>wt;
         v.push_back(make_pair((val/wt),wt)); // now i am having ratio corresponding to the given weights
         
    }
    sort(v.begin(),v.end(),compare);
    //int t=0;
    //while(w-v[t].second`)
    /*for(auto c:v)
    {
        cout<<c.first<<" "<<c.second<<" ";
    }*/
    int t=0;
    double  totalsum=0;
    while(w-v[t].second>0 && t<n)
    {
        w=w-v[t].second;
        totalsum+=v[t].first*v[t].second;
        t++;
        if(w-v[t].second<0)
        {
            t--;
            break;
        }
    }
    cout<<w<<" ";
  //  t--;
  
    if(t<n)
    {
        //frac=(w/v[t].second);
        //cout<<frac;
        
        totalsum+= (double)((w*v[t].first*v[t].second)/v[t].second);
    }
    cout<<totalsum<<"\n";
}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int long long count=0,n,i;
    cin>>n;
    vector<long long>a(n);
    for( i=0;i<n;i++){
        cin>>a[i];
    }
     sort(a.begin(),a.end());
     while(a[n-1]!=0)
    {
      for(i=0;i<n;i++)
    {
            if(a[i]%2!=0)
        {
           a[i]--;
           count++;
        }
    }
     for(i=0;i<n;i++)
    {
       a[i]/=2;
    }
       count++;
    }
    cout<<count-1;
}

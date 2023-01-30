#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,i;
    cin>>n;
    int a[n];
    cin>>t;
    p = t;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        if (t-a[i]>=0){
            t = t - a[i];}
    }
    cout<<p-t<<endl;
    return 0;
    
}

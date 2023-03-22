#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
const int N=1e5+10;
using namespace std;

int arr[N];
int dp[N];

int minCost(int n,int k){

if(n==0){
    return 0;
}

int cost=INT_MAX;

if(dp[n]!=-1){
    return dp[n];
}

for(int i=1;i<=k;++i){

   if(n-i>=0){
        cost=min(cost,minCost(n-i,k)+abs(arr[n]-arr[n-i]));
   }

}

return dp[n]=cost;

}



int main(){

int a,k;
cin>>a>>k;


for(int i=0;i<a;i++){
    cin>>arr[i];
}
memset(dp,-1,sizeof(dp));

cout<<minCost(a-1,k)<<endl;


return 0;
}

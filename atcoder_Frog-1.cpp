#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
const int N=1e5+10;
using namespace std;

int arr[N];
int dp[N];

int minCost(int n){

if(n==0){
    return 0;
}

int cost=INT_MAX;

if(dp[n]!=-1){
    return dp[n];
}
cost= min(cost,minCost(n-1)+abs(arr[n]-arr[n-1]));
if(n>1){
cost=min(cost,minCost(n-2)+abs(arr[n]-arr[n-2]));
}
return dp[n]=cost;

}



int main(){

int a;
cin>>a;


for(int i=0;i<a;i++){
    cin>>arr[i];
}
memset(dp,-1,sizeof(dp));

cout<<minCost(a-1)<<endl;;


return 0;
}

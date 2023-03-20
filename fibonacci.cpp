#include<iostream>
#include<bits/stdc++.h>
const int N=1e5+10;
using namespace std;

//nth fionacci using only recursion
int fibOnlyRec(int n){

if(n==0){
    return 0;
}
if(n==1){
    return 1;
}

return fibOnlyRec(n-2)+fibOnlyRec(n-1);


}


///nth fibonacci using recursion with dynamic programing top down approach

int dp[N];


int fibRecDPTD(int n){

if(n==0){
    return dp[0]=0;
}
if(n==1){
    return dp[1]=1;
}

if(dp[n]!=-1){
    return dp[n];
}

return dp[n]=fibOnlyRec(n-1)+fibOnlyRec(n-2);


}

///fibonacci with bottom up approach
int fibBottomUP(int n){

       dp[0]=0;


        dp[1]=1;


    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];

}





int main(){


cout<<fibOnlyRec(30)<<endl;

memset(dp,-1,sizeof(dp));   //memoise


cout<<fibRecDPTD(30)<<endl;
memset(dp,-1,sizeof(dp));
cout<<fibBottomUP(30)<<endl;

return 0;
}

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=1e7+10;
int dp[N];
int minCoins(int n,int c,int arr[]){

if(n==0){
    return 0;
}
    int ans=INT_MAX;

    for(int i=0;i<c;i++){

        int subAns=0;
        if((n-arr[i])>=0){
                if(dp[(n-arr[i])]!=-1){
                   subAns=dp[(n-arr[i])];
                   }else{
                     subAns=minCoins((n-arr[i]),c,arr);
                   }



            if(subAns!= INT_MAX && subAns+1<ans){
                ans=subAns+1;
            }



        }


    }

return dp[n]=ans;


}



int main(){
int n=18;
int c=3;
int arr[]={7,5,1};

memset(dp,-1,sizeof(dp));
dp[0]=0;
cout<<minCoins(n,c,arr)<<endl;
for(int i=1;i<n;i++){
    cout<<dp[i]<<endl;
}





return 0;
}




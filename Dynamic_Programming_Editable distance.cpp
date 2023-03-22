#include<bits/stdc++.h>
#include<string.h>
using namespace std;

const int n=1e2+10;
#include<math.h>
int dp[n][n];
int editableDistance(string s1, int m,string s2,int n){




    for(int i=0;i<=m;i++){

            dp[0][i]=i;
    }

    for(int j=0;j<=n;j++){
        dp[j][0]=j;
    }

   for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++){

            if(s1[j-1]==s2[i-1]){

                dp[i][j]=dp[i-1][j-1];

            }else{
            dp[i][j]=(min(min(dp[i-1][j],dp[j-1][i]),dp[i-1][j-1]))+1;

            }

           }
    }


return dp[n][m];

}


int main(){


string s1="ABCAB";
string s2="EACB";

cout<<editableDistance(s1,5,s2,4)<<endl;




return 0;
}

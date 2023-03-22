
package dynamic.programming;

import java.util.Arrays;

/**
 * Dynamic Programming concept
 * LeetCode problem- Coin Change
 * @author M. A. Murad
 * input n=amount to be match
 * input arr[]=array including variety of coins
 */


public class CoinChange {
    
    //main method start
    public static void main(String[] args){
        
        int n=18;
        int arr[]={7,5,1};
        int dp[]=new int[n+1];
        Arrays.fill(dp,-1);
        dp[0]=0;
        
        System.out.println(minCoin(n,arr,dp));
        
        for(int x:dp){
            System.out.println(x);
        }
        
        
        
    }
    
    //main method end
    
    
    
    ///minCoins method start which takes two parameter;amount to be match, variety of cons array
    
    static int minCoin(int n,int arr[],int dp[]){
        if(n==0){
            return 0;
        }
        
        
        int ans=Integer.MAX_VALUE;
        
        for(int i=0;i<arr.length;i++){
            int subAns=0;
            if(n-arr[i]>=0){
                if(dp[n-arr[i]]!=-1){
                
             subAns=dp[n-arr[i]];
             
                }else{
             subAns=minCoin(n-arr[i],arr,dp);
                }
            if(subAns!=Integer.MAX_VALUE && subAns+1<ans){
                ans=subAns+1;
            }
            
            }
        }
        
        return dp[n]=ans;
     
        
    }
    
    
    
    ///minCoins method end
    
    
    
    
}

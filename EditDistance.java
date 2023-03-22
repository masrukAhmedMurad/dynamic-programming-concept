
package dynamic.programming;

/**
 *
 * @author Asus
 */
public class EditDistance {
    
    
    public static int editDistance(String s1,String s2){
        
        
        int m=s1.length();
        int n=s2.length();
        
        int dp[][]=new int[n+1][m+1];
        
        for(int i=0;i<=m;i++){
            dp[0][i]=i;
        }
        
        for(int j=0;j<=n;j++){
            dp[j][0]=j;
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                
                if(s1.charAt(j-1)==s2.charAt(i-1)){
                    dp[i][j]=dp[i-1][j-1];
                }else{
                    dp[i][j]=Math.min(Math.min(dp[i-1][j-1], dp[i-1][j]),dp[i][j-1])+1;
                }
                
            }
        }
        
        return dp[n][m];
        
    }
    
    
    
    
    public static void main(String[] args){
        
        String s1="ABCAB";
        String s2="EACB";
        
        System.out.println(editDistance(s1,s2));
        
        
        
    
    }
    
    
    
    
}

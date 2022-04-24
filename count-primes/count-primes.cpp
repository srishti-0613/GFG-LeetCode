class Solution {
public:
    int countPrimes(int n) {
       vector<int>p(n,1);
        if(n==0||n==1) return 0;
        p[1]=p[0]=0;
        for(int i=2;i*i<=n;i++){
            if(p[i]){
                for(int j=2*i;j<n;j=j+i){
                    p[j]=0;
                }
            }  
        } 
        
        return count(p.begin(),p.end(),1);   
    }
};
vector<long long> printFibb(int n) 
    
    {  
        vector<long long>ans;
        long long int f1=1;
        long long int f2=1;
        ans.push_back(f1);
        for(int i=1;i<n;i++){
            ans.push_back(f2);
            long long int temp=f1+f2;
            f1=f2;
            f2=temp;
        }
        return ans;
        
        
    }
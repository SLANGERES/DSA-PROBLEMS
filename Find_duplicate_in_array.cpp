    vector<int> duplicates(int arr[], int n) {
      int result[n]={0};
      vector<int>ans;
      for(int i=0;i<n;i++){
          result[arr[i]]+=1;
      }
      for(int i=0;i<n;i++){
          if(result[i]>1){
              ans.push_back(i);
              
          }
        
      }
      if(ans.size()==0){
          ans.push_back(-1);
      }
      return ans;
    }

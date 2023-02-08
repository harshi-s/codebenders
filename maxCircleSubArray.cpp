 public:
    int kadanes(int arr[], int num){
       int maxi=INT_MIN;      
       int sum=0;

       for(int i=0; i<num; i++){
       sum += arr[i];
       maxi=max(maxi, sum);
       if(sum<0) sum=0;
        }
       return maxi;
    }
   
    int circularSubarraySum(int arr[], int num){
      
        int k=kadanes(arr,num);
        
        if(k<0) return k;
        
        int sum=0;
        for(int i=0;i<num;i++){
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        
        int p = sum + kadanes(arr,num);
        
        return max(k,p);
        
    }

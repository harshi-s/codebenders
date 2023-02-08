    bool checkPossibility(vector<int>& nums) {
            int n=nums.size();
            int mini=INT_MIN;
            int cnt=1;
            
        for(int i=0; i<n-1; i++){
                        if(nums[i] <= nums[i+1]) {
                                mini=nums[i];
                        }
                        else{
                                if(nums[i+1] < mini){
                                        swap(nums[i],nums[i+1]);
                                }
                                cnt --;
                        }
                }
      
        if(cnt < 0) return false;
        else return true;
    }

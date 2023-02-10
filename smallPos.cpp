 long long smallestpositive(vector<long long> array, int n)
    { 
        sort(array.begin(), array.end());
        long long res=1;
        
        for(int i=0; i<n; i++){
            if(res < array[i]){
                return res;
            }
            else{
                res += array[i];
            }
        }
        return res;
    }

void solve(vector<string> &v, string s, int n, int m){
             
        if(n==0 && m==0) {
             v.push_back(s);
             return;
        }
     
        if(n > 0){ 
                solve (v, s+"(", n-1, m+1); 
        }   

        if(m > 0){ 
                solve (v, s+")", n, m-1); 
        }    
     }   
        
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(res, "", n, 0);
        return res;
    }

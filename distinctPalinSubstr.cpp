bool isPalindrome(string S){
    int i=0,j;
    j = S.size() - 1;
    while (i < j) {

        if (S[i] != S[j]){
            return false;
        }
        
        i++; j--;
    }
    return true;
}

    int palindromeSubStrs(string s) {

       int n=s.size();

       string str="";

       set<string>st;

       int cnt=0;

       for(int i=0;i<n;i++){

           str="";

           for(int j=i;j<n;j++){

               str+=s[j];

           if( isPalindrome(str)) {

               st.insert(str);

           }  

           }

       }

       return st.size();

    }

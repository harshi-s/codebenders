class Solution {
public:
string longestPalindrome(string s) {

    if(s.size() <= 1) return s;

    int n=s.size();
    int start=0;
    int maxLen=1;

    // ODD LENGTH

    for(int i=0; i<n-1; i++){
    int l=i;
    int r=i;

    while(l>=0 && r<n){
        if(s[l]==s[r]){
            l--, r++;
        }
        else break;
    }
    int len = r-l-1;
    if(len > maxLen) {
    maxLen=len;
    start = l+1;
       }
    }

    // EVEN LENGTH

    for(int i=0; i<n-1; i++){
    int l=i;
    int r=i+1;

    while(l>=0 && r<n){
        if(s[l]==s[r]){
            l--, r++;
        }
        else break;
    }
    int len = r-l-1;
    if(len > maxLen) {
    maxLen=len;
    start = l+1;
 
    }
    }
    return s.substr(start, maxLen);
}
};

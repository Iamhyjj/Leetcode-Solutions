int lengthOfLongestSubstring(char * s){
    //create hash array to record the presence of characters
    int* hash=(int*)calloc(128,sizeof(int));
    int left=0,right=0,result=0,len=0;
    while(s[right]){
        if(hash[s[right]]){
            if(len>result){
                result=len;
            }
            len--;
            hash[s[left++]]--;
        }
        else{
            hash[s[right]]++;
            right++;
            len++;
        }
    }
    if(len>result){
        result=len;
    }
    return result;
}

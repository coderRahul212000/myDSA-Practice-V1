class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while( i < n){
            int j = i+1;

            while( j < n && chars[i] == chars[j]){
                j++;
            }

            //yahan kab aoge
            //ya toh vector poora traverse krdia
            //ya fir new/different character encounter  kia hai
            
            //oldChar store karlo
            chars[ansIndex++] = chars[i];

            int count = j-i;
            
            if( count > 1){
                //converting counting into single digit and saving in answer
                string cnt = to_string(count);
                for( char ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};
class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> count;
        // here we are using the hash map and from this we can easily found out the which have the frequency which is repeating 

        for(char ch:s){
            count [ch]++;
            
        }
        for(int i=0; i<s.length();i++){

            if (count[s[i]]==1) return i;
        }

        return -1;
        
    }
};
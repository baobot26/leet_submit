class Solution {
public:
    bool isVowel(char c){
        if(c == 'a') return true;
        if(c == 'e') return true;
        if(c == 'i') return true;
        if(c == 'o') return true;
        if(c == 'u') return true;
        return false;

    }
    int maxFreqSum(string s) {
        int v_freq = 0; // frequency of vowel
        int c_freq = 0; // frequency of consonant
        int temp;
        for(int i = 0; i < s.size(); ++i){
            temp = 0;
            if(isVowel(s[i])){
                for(int j = i; j < s.size(); ++j){
                    if(s[j] == s[i]) ++temp;
                }
                if(temp > v_freq) v_freq = temp;
            }
            else{
                for(int j = i; j < s.size(); ++j){
                    if(s[j] == s[i]) ++temp;
                }
                if(temp > c_freq) c_freq = temp;
            }
        }
        return v_freq + c_freq;
    }
};
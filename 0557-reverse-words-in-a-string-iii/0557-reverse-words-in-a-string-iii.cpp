class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;

        int end = start; //find the end of current word 
        while(start < n){
        int end = start;
        //move end until a space or string end is reached 
        while(end < n && s[end] != ' '){
        end++;
        }
        int left = start;
        int right = end - 1;

        //reverse the current word
        while(left < right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        start = end+1;
        }
        return s;
    }
};
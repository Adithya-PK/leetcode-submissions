class Solution {
public:
    bool find132pattern(vector<int>& nums) { // TC : O(N)+O(N) = O(N) & SC : O(N)

        //nums[i] Can store possible 1's
        //second Can store possible 2's
        //st Can store possible 3's

        stack<int>st;

        int second = INT_MIN;

        for(int i=nums.size()-1;i>=0;i--){

            if(nums[i] < second){
                return true;
            }

            while(!st.empty() && st.top() < nums[i]){// Overall, this while loop contributes time complexity of O(N) Because every element is once pushed into the stack and popped out once
                second = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};
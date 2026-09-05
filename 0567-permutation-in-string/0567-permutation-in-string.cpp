class Solution {
public:
    bool checkInclusion(string s1, string s2){

        int n=s1.size();
        int m=s2.size();

        if(n>m) return false;

        vector<int>mp2(26);
        vector<int>mp1(26);

        for(int i=0;i<n;i++){
            mp1[s1[i]-'a']++;
        }

        int i=0;
        int j=n-1;

        for(int k=0;k<=j;k++){
            mp2[s2[k]-'a']++;
        }

        while(j<m){

            bool flag=true;

            for(int k=0;k<26;k++){
                if(mp1[k]!=mp2[k]){
                    flag=false;
                    break;
                }
            }

            if(flag) return true;

            mp2[s2[i]-'a']--;
            i++;

            j++;
            if(j<m) mp2[s2[j]-'a']++;

        }


        return false;

    }
};
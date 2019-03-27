class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char>mySet;
        queue <char>myQue;
        int maxNum = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            myQue.push(s[i]);
            if(mySet.find(s[i]) == mySet.end()){
                mySet.insert(s[i]);
                int tmp = mySet.size();
                maxNum = max(maxNum, tmp);
            }
            else{
                while(mySet.find(s[i]) != mySet.end()){
                    mySet.erase(myQue.front());
                    myQue.pop();
                }
                mySet.insert(s[i]);
            }
        }
        return maxNum;
    }
};
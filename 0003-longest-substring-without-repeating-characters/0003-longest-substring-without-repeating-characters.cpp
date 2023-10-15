class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int count=0;
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            if(map.count(s[i]) && map[s[i]]!=-1)
            {
                count=i-map[s[i]];
                for(auto j:map)
                {
                    if(j.first != s[i]) if(j.second<map[s[i]]) map[j.first]=-1;
                }
                map[s[i]]=i;
            }
            else
            {
                map[s[i]]=i;
                count++;
            }
        //     for(auto i:map)
        //     {
        //         cout<<i.first<<" "<<i.second<<endl;
        //     }
        //     cout<<count<<endl;
             if(count>max)max=count;
        }

        return max;
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
         string ans="";
         if(numRows==1) return s;
        for(int i=0;i<numRows;i++)
        {
            int lower_gap= (numRows-i)-1;
            int upper_gap=i;
            int alt=0;
            for(int j=i;j<s.length();)
            {
                ans+=s[j];
                if(lower_gap==0)
                {
                    j+=upper_gap+upper_gap;
                }
                else if(upper_gap==0)
                {
                    j+=2*lower_gap;
                }
                else if(alt%2==0)
                {
                    j+=2*lower_gap;
                }
                else 
                {
                    j+=upper_gap+upper_gap;
                }
                alt++;
            }
        }
        return ans;



        //brute force

        // string ans="";
        // vector<vector<char>> arr;
        // int j=0;
        // int sign=1;
        // for(int i=0;i<numRows;i++) arr.push_back(vector<char>());
        // for(int i=0;i<s.length();i++)
        // {
        //     arr[j].push_back(s[i]);
        //     j+=sign;
        //     if(j==numRows) 
        //     {
        //         sign=-1;
        //         j-=2;
        //         if(j<0)j=0;
        //     }
        //     if(j==0) sign=1;
        // }
        // for(int i=0;i<arr.size();i++)
        // {
        //     for(int j=0;j<arr[i].size();j++)
        //     {
        //         //cout<<arr[i][j]<<" ";
        //         ans+=arr[i][j];
        //     }
        //     cout<<endl;
        // }
        // return ans;
    }
};
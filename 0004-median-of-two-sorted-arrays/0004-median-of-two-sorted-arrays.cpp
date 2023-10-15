class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        double mid=(n+m)/2.00;
        if(mid!=(int)mid) mid=(int)mid+1;
        double median=0;
        int count=0;
        if((n+m)%2==0)
        {
            count=2;
        }
        else
        {
            count=1;
        }
        int current;
        //cout<<count<<endl;
        for(int i=0,j=0;i<n || j<m;)
        {
            if(count==0) {
                //cout<<current;
                break;
            }
            if(j==m)
            {
                current=nums1[i];
                i++;
            }
            else if(i==n)
            {
                current=nums2[j];
                 j++;
            }
            else if(nums1[i]<=nums2[j])
            { 
                current=nums1[i];
                i++;
            }
            else
            {
                current=nums2[j];
                j++;
            }

            //cout<<endl<<count<<" "<<current<<" "<<i+j<<" "<<mid<<endl;
            if(i+j>=mid)
            {
                count--;
                median+=current;
            }
        }
        if((n+m)%2==0) return median/2.00;
        else return median;
    }
};
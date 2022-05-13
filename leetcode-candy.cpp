class Solution {
public:
    int candy(vector<int>& r) {
        int ans=0;
        int n=r.size();
        vector<int> a(r.size(),1);
        vector<int> b(r.size(),1);
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(r[i]>r[i-1])
            {
                a[i]=++count;
            }
            else
                count=1;
        }
         count=1;
        for(int i=n-2;i>=0;i--)
        {
            if(r[i]>r[i+1])
                b[i]=++count;
            else 
                count=1;
        }
        for(int i=0;i<n;i++)
        {
            ans=ans+max(a[i],b[i]);
        }
       
        return ans;
    }
};

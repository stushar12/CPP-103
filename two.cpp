class Solution
{
public:
    int setBits(int n)
    {
        int res=0;
        int i=0;
        int k=n;
        while(k>0)
        {
            if((n>>i)&1==1)
            {
            res++;
            }
            k=k>>1;
            i++;
        }
        return res;
    }
};
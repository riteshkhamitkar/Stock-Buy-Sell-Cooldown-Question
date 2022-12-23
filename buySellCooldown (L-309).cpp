class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int sold=0;
		int res=0;
		int hold=INT_MIN;
		for(auto x:prices){
			int pre_sold=sold;
			int pre_hold=hold;
			hold=max(hold,res-x);
			sold=pre_hold+x;
			res=max(res,pre_sold);
		}
		return max(sold,res);
	}
};

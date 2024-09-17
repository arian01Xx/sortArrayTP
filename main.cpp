#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>
#include <string>

using namespace std;

class SolutionEleven{
private:
	void swaper(vector<int>& nums, int& index){
		for(int i=0; i<nums.size(); i++){
			if(nums[i]%2==0){
				swap(nums[i],nums[index]);
				index++;
			}
		}
	}
public:
	vector<int> sortArrayByParty(vector<int>& nums){
		int index=0;
		swaper(nums,index);
		return nums;
	}
};
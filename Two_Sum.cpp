//O(n^2) solution

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int curr1, curr2 = 0;
        int sum = 0;
        for(int i = 0; i < (nums.size()-1); i++){
            for(int j = i+1; j < nums.size(); j++){
                curr1 = nums[i];
                curr2 = nums[j];
                sum = curr1 + curr2;
                if (sum == target){
                    std::vector<int> answer ({i, j});
                    return answer;
                }
            }
        }
    }
};

//O(n) solution
class Solution2 {
public:
    int complement = 0;
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map = {
            {nums[0], 0}
        };

        for (int i = 0; i < nums.size(); i++){
            complement = target - nums[i];
            if (map.contains(complement)){
                return new std::vector {map.find(complement), i};
            }
            map[nums[i]] = i;
        }
    }
};

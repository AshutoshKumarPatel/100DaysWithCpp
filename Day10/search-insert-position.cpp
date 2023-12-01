#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int beg = 0;
        int end = nums.size()-1;
        while(beg <= end){
            int mid = (beg + end)/2;
            if(target > nums[mid]){
                beg = mid + 1;
            }else if(target < nums[mid]){
                end = mid - 1;
            }else{
                return mid;
            }
        }
        return beg;      
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = solution.searchInsert(nums, target);
    std::cout << "The index where " << target << " should be inserted is: " << result << std::endl;
    
    return 0;
}
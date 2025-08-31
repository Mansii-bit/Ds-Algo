class Solution {
public:
    int findMin(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) {
            low = mid + 1; // pivot in right half
        } else if (nums[mid] < nums[high]) {
            high = mid;    // pivot in left half (including mid)
        } else {
            high--;        // nums[mid] == nums[high], shrink search
        }
    }
    return nums[low];
}

};
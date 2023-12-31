int binarySearch(vector<int> nums, int s, int e, int key){
    //base case
    if (s > e) {
      return -1;
    }
    int mid = s + (e-s)/2;

    if (nums[mid] == key) {
      return mid;
    } else {
      if (nums[mid] > key) {
        return binarySearch(nums, s, mid - 1, key);
      } else
        return binarySearch(nums, mid + 1, e, key);
    }
}

int search(vector<int>& nums, int target) {
    // Write Your Code Here

    return binarySearch(nums,0,nums.size()-1,target);
}
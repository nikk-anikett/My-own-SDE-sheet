sort
max
min
priority queue
set 
custom comparator
__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1
  int maxProduct(vector<int>& nums) {
        // build heap: O(n)
        make_heap(begin(nums), end(nums));
        // heapify: O(logn)
        pop_heap(begin(nums), end(nums));
        // biggest * second biggest
        return (nums.back() - 1) * (nums.front() - 1);
    }


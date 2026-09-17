class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        seen=set()
        for i in range(len(nums)):
            if nums[i] not in seen:
                seen.add(nums[i])
            else:
                nums.pop(i)
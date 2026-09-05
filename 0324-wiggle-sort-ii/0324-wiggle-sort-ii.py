
class Solution:
    def wiggleSort(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        size: int = len(nums)
        nums.sort()

        temp: list[int] = [0] * size

        i: int = 1
        end: int = size - 1
        while i < size:
            temp[i] = nums[end]
            end -= 1
            i += 2

        i = 0
        while i < size:
            temp[i] = nums[end]
            end -= 1
            i += 2

        for i in range(0, size):
            nums[i] = temp[i]
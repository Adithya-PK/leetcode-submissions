class Solution:
    def findSecondMinimumValue(self, root):
        min_val = [float('inf'), float('inf')]

        def find(root):
            if root is None:
                return

            if root.val < min_val[0]:
                min_val[1] = min_val[0]
                min_val[0] = root.val

            elif min_val[0] < root.val < min_val[1]:
                min_val[1] = root.val

            find(root.left)
            find(root.right)

        find(root)

        return -1 if min_val[1] == float('inf') else min_val[1]
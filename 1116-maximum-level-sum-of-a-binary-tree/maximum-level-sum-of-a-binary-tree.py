# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxLevelSum(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        if not root:
            return[]
        queue = deque([root])
        maxSum = float('-inf')
        level = 0
        maxLevel = float('-inf')
        while queue:
            levelSize = len(queue)
            level += 1
            sum = 0
        
            for _ in range(levelSize):
                node = queue.popleft()
                sum += node.val
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            if sum > maxSum: 
                maxSum = sum
                maxLevel = level
        return maxLevel
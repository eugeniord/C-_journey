class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        rows = [set() for _ in range(9)]
        columns = [set() for _ in range(9)]
        boxes = [set() for _ in range(9)]
        for r in range(0,9):
            for c in range(0, 9):
                num = board[r][c]
                if num == '.':
                    continue
                if num in rows[r] or num in columns[c] or num in boxes[(r//3)*3 + c//3]:
                    return False

                rows[r].add(num)
                columns[c].add(num)
                boxes[(r//3)*3 + c//3].add(num)
        return True

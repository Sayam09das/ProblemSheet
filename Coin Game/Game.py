class Solution:
    def winningPlayer(self, x: int, y: int) -> str:
        moves = min(x,y // 4)
        if moves % 2 == 1:
            return "Alice"
        else:
            return "Bob"
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        cnt = 0
        for i in jewels:
            if i in stones:
                cnt = cnt+stones.count(i)
        
        return cnt
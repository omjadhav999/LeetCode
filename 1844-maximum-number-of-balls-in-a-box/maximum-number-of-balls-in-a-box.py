class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        mp = {}
        num = 0
        tmp = 0
        maxi = float('-inf')

        for i in range(lowLimit, highLimit+1):
            num = i
            tmp = 0
            while num>0:
                tmp = tmp + num%10
                num = num // 10

            mp[tmp] = mp.get(tmp, 0)+1
            maxi = max(maxi, mp[tmp])

        return maxi
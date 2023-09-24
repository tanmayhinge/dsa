from collections import defaultdict

class Solution:
    def topKFrequent(self, nums, k):

        ret = defaultdict(list)

        for i in nums:
            if i in ret:
                ret[i] += 1
            else:
                ret[i] = 1

        ret = sorted(ret.items(), reverse=True, key=lambda x:x[1])

        res = []
        for i in range(k):
            res.append(ret[i][0])

        return res


s = Solution()

print(s.topKFrequent([1,1,2,2,3, 3, 3, 3, 3], 2))
class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        d = dict()
        res = list()
        for i in range(len(list1)):
            d[list1[i]] = i
        minSum = math.inf
        for j in range(len(list2)):
            if list2[j] in d:
                current = d[list2[j]] + j
                if (current < minSum):
                    res = [list2[j]]
                elif current == minSum:
                    res.append(list2[j])
                minSum = min(minSum, current)
        return res

class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        min = math.inf
        res = list()
        for i in range(len(list1)):
            for j in range(len(list2)):
                if list1[i] == list2[j]:
                    if i + j <= min: min = i + j
        for i in range(len(list1)):
            for j in range(len(list2)):
                if i + j == min and list1[i] == list2[j]: res.append(list1[i])
        return res

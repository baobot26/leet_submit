class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        d1 = dict()
        for i in range(len(list1)):
            for j in range(len(list2)):
                if list1[i] == list2[j]:
                    if i + j not in d1:
                        d1[i + j] = list()
                        d1[i + j].append(list1[i])
                    else: 
                        d1[i + j].append(list1[i])
        idx = math.inf
        for k in d1:
            idx = min(idx, k)
        return d1[idx]
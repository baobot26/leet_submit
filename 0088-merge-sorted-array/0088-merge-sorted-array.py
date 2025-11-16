class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        heap = []
        for i in range(m):
            heapq.heappush(heap, nums1[i])
        for i in range(n):
            heapq.heappush(heap, nums2[i])
        for i in range(m + n):
            nums1[i] = heap[0]
            heapq.heappop(heap)
        
        
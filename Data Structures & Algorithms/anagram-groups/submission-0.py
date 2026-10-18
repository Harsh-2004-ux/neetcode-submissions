from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map=defaultdict(list)

        for s in strs:
            t=tuple(sorted(s))
            anagram_map[t].append(s)

        return list(anagram_map.values())

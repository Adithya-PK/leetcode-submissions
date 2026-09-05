class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        n,k,pz = len(s),len(p),Counter(p)
        return n>=k and [i-k for i,z in enumerate(accumulate(range(n),
            lambda z,i:z+Counter({s[i]:1})+Counter({s[i-k]:i>=k and -1}),
                initial=Counter())) if z==pz] or []
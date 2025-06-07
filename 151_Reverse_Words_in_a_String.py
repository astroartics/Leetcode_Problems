import re

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        st = re.split(r"(\s)", s)
        st = [item for item in st if item.strip()]
        st.reverse()

        # Two pointer approach
        # j = len(st) - 1
        # i = 0
        # while i < j:
        #     tmp = st[i]
        #     st[i] = st[j]
        #     st[j] = tmp
        #     j -= 1
        #     i += 1

        return " ".join(st)
        

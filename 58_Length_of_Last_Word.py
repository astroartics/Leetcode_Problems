import re

class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        words = re.split(r"\s+", s.strip())
        words = [item.replace(" ", "") for item in words]
        return len(words[len(words) - 1])

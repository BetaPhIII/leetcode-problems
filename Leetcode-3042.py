class Solution(object):
    def countPrefixSuffixPairs(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        count = 0
        for i in range(len(words)):
            for j in range(len(words)):
                if j <= i:
                    continue
                if(Solution.isPrefixAndSuffix(self,words[i], words[j])):
                    count+=1
        return count

    def isPrefixAndSuffix(self,str1, str2):
        i = False
        j = False
        print(str1,str2)
        for char in range(len(str1)):
            if char>=len(str2):
                return False
            print(char, str1[char], str2[char])
            if str1[char] == str2[char]:
                i = True
            
            else:
                return False
        
        print(i)
        char2 = len(str2)-1
        char1 = len(str1)-1
        
        while char1>=0 and char2>=0:
            if str1[char1] == str2[char2]:
                char1-=1
                char2-=1
                j=True
            else:
                return False
        print(j)
        if i == True and j == True:
            return True
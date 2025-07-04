class Solution:
    def kthCharacter(self, k: int) -> str:
        word="a"
        while(len(word)<k):
            newSub=''
            for i in word:
                num = ord(i)+1
                if num==123:
                    num=97
                char = chr(num)
                newSub+=char
            word+=newSub
        return word[k-1]

        
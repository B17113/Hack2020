class Solution:
    def MultibalanceP(self, str):
        stack = []
        for i in range(len(str)):
            if(str[i] == "("):
                stack.append("(")
            elif(str[i] == "{"):
                stack.append("{")
            elif(str[i] == "["):
                stack.append("[")
            elif(str[i] == ")"):
                if(len(stack) == 0):
                    return 0
                stack.pop()
            elif(str[i] == "}"):
                if(len(stack) == 0):
                    return 0
                stack.pop()
            elif(str[i] == "]"):
                if(len(stack) == 0):
                    return 0
                stack.pop()

        if(len(stack) == 0):
            return 1
        else:
            return 0
            

        




if __name__ =="__main__":
    str = "{7-(3-2)+[8+(99-11)]}"
    sol = Solution()
    s = sol.MultibalanceP(str)
    # print(s)
    if(s == 1):
        print("Parenthesis is balance")
    else:
        print("Parenthesis is not balance")

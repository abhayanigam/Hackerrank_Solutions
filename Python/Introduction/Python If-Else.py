#1st method
import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())

    if n%2 ==0 :
        for i in range(2,5):
            # print(i)
            if(n==i):
                print("Not Weird")
                break

        for i in range(6,21):
            # print(i)
            if (n == i):
                print("Weird")
                break

        if (n>21):
            print("Not Weird")

    else:
        print("Weird")


# 2nd Method.
if __name__ == '__main__' :
    n = int(input())
    
    if n % 2 == 1:
        print("Weird")
    elif n % 2 == 0 and 2 <= n <= 5:
        print("Not Weird")
    elif n % 2 == 0 and 6 <= n <= 20:
        print("Weird")
    else:
        print("Not Weird")
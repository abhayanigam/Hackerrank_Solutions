def swap_case(s):
    #Using swapcase() function, convert all lowercase letters to uppercase letters and vice versa.
    return s.swapcase()

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
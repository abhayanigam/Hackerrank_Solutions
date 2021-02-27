l = []
for _ in range(int(input())):
    name = input()
    score = float(input())
    l.append([name,score])

s = sorted(set([x[1] for x in l]))
# print (s)
for name in sorted(x[0] for x in l if x[1] == s[1]):
    print (name)

#------------------------------------------------------------------
# To Understand Nested list.
# my_list = [[4,'red'],[2,'black'],[1,'white'],[3,'blue']]
# print my_list
# #prints --> [[4, 'red'], [2, 'black'], [1, 'white'], [3, 'blue']]

# print my_list[1]
# #prints --> [2, 'black']

# print my_list[0][1]
# #prints --> red

# print my_list[1][0]
#prints --> 2
if __name__ == '__main__':
    N = int(input())
    operations = []

    for i in range(N):

        task = input().split()

        if task[0] == "insert":
            operations.insert(int(task[1]),int(task[2]))

        elif task[0] == 'print':
            print (operations)

        elif task[0] == 'remove':
            operations.remove(int(task[1]))

        elif task[0] == 'append':
            operations.append(int(task[1]))

        elif task[0] == 'sort':
            operations.sort()

        elif task[0] == 'pop':
            operations.pop()

        elif task[0] == 'reverse':
            operations.reverse()
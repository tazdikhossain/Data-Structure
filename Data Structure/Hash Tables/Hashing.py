hashTable = [[] for _ in range(5)]

def checkPrime(n):
    if n == 1 or n == 0:
        return 0

    for i in range(2, n // 2):
        if n % i == 0:
            return 0

    return 1


def getPrime(n):
    if n % 2 == 0:
        n = n + 1

    while not checkPrime(n):
        n += 2

    return n


def hashFunction(key):
    capacity = getPrime(10)
    return key % capacity


def insertValue(key, value):
    index = hashFunction(key)
    found = False
    for i, k in enumerate(hashTable[index]):
        if k[0] == key:
            hashTable[index][i] = (key, value) 
            found = True
            break
    if not found:
        hashTable[index].append((key, value)) 


def removeValue(key):
    index = hashFunction(key)
    for i, kv in enumerate(hashTable[index]):
        if kv[0] == key:
            del hashTable[index][i]
            break

insertData(213, "orange") 

removeData(123)

print(hashTable)
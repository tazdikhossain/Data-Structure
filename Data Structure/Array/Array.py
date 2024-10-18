import array as arr
a = arr.array('i', [1,2,3,4,5])
for i in range(0,5):
    print(a[i])

a.insert(5,6)
for i in a:
    print(i)

a.append(7)
for i in a:
    print(i)

a.pop(5)
for i in a:
    print(i)

a.reverse()
print(a)
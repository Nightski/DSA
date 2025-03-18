def prefix(arr):
  arr.sort()

  one = arr[0]
  two = arr[-1]
  i = 0
  size = min(len(one), len(two))

  while i < size and one[i] == two[i]:
    i += 1
  return one[:i]

arr = input("Enter series of strings with space: ").split()
x = prefix(arr)
if x:
  print(x)
else:
  print("No common prefix")

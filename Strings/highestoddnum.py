def odder(n):
  for i in range(len(n) - 1,-1, -1):
    if int(n[i]) % 2 == 1:
      return n[:i+1]
  return ""


n = input("Enter any number: ")
print(odder(n))

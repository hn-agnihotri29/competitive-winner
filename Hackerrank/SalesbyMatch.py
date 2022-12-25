arr = [10, 20, 20, 10, 10, 30, 50, 10, 20]

dict = {}

#initializing the dict

for i in range(len(arr)):
  key = arr[i]
  if key not in dict:
    dict[key] = 1
  elif key in dict:
    dict[key] += 1

print(dict)

#getting the pair value
pair = 0

for key in dict.values():
  x = key // 2
  pair += x

print(pair)

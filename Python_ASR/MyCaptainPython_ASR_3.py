import os
name = input("Enter File name:")
start,end = os.path.splitext(name)
print(end)

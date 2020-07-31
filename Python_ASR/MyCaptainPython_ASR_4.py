import collections

def most_frequent(str):
    d = collections.defaultdict(int)
    for c in str:
        d[c] += 1

    for c in sorted(d, key=d.get, reverse=True):
        if d[c] >= 1:
            print('%s %d' % (c, d[c]))



str = input("Enter the string:")
most_frequent(str)
print("End")

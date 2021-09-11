b = [1,2,3,5,6,7,8,9,10,11,12,13,14,15]
y = 5
#b = int(a)
#print(b)
a =[float(x) if x>5 else int(x) for x in b if x%2==0]
print(a)

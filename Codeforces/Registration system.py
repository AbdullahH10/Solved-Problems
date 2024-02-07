n=int(input())
res=[]
names={}

for i in range(n):
	st=input()
	if st in names:
		names[st]=names[st]+1
		res.append(st+str(names[st]))
	else:
		names[st]=0
		res.append("OK")

for i in res:
	print(i)
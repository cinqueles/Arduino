s=int(raw_input("Introduce un numero: "))
print 1
def primo(j):
	i=2
	while (i<j):
		resto=j%i
		if (resto==0):
			return 0
		i=i+1
	print str(j)
	return 1

j=2
cp=0
while (cp<s):
	a=primo(j)
	j=j+1
	if a==1:
		cp=cp+1


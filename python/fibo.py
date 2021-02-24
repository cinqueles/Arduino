nterminos=int(raw_input("Numero de terminos a mostrar: "))

n1=0
n2=1
nt=2

print "Termino 1 :"+str(n1)
print "Termino 2 :"+str(n2)

while (nt!=nterminos):
	st=n1+n2
	nt=nt+1
	print "Termino "+str(nt)+": "+str(st)
	n1=n2
	n2=st

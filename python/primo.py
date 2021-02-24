num=int(raw_input("Introduce un numero: "))
raiz=num**0.5
esprimo=True
divisor=2

while (divisor<raiz):
	resto=num%divisor
	if(resto==0):
		esprimo=False
		break
	divisor=divisor+1
if esprimo:
	print str(num) + " Es primo"
else:
	print str(num) + " No es primo"

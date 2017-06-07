#1 Declarar el mapa de colores
c={'negro':0,'cafe':1,'rojo':2,'naranja':3,'amarillo':4,'verde':5,'azul':6,'violeta':7,'gris':8,'blanco':9}
#2 Leer y formatear la cadena
s=list(map(lambda w: w.lower(),input("Ingrese los colores: ").split()))
#3 Declaracion de la funcion lambda ohms
ohms=lambda x,y,z: str(c[x])+str(c[y])+('0'*c[z])	
#4 Verificacion de condiciones
if sum(map(lambda w: w in c,s))==len(s) and len(s)==3 and s[0]!='negro':
	#5 Impresion del resultado
	print("El resultado es %g Ohms" %int(ohms(s[0],s[1],s[2])))



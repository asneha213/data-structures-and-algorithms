import sys
b= sys.stdin.readlines()
op = 0;
l=list();
m=list()
for line in b:
	c=line.strip('\n');
	a=c.split()
	for x in a:
		c=0
		if x =='+':
			if len(l)>=2: 
				l.append(l.pop()+l.pop());
			else:
				print "ERROR"
				c=1
				break
		elif x =='*':
			if len(l)>=2:
				l.append(l.pop()*l.pop());
			else:
				print "ERROR"
				c=1
				break
		elif  x=='-':
			if len(l)>=2:
				op= l.pop()
				l.append(l.pop()-op);
			else:
				print "ERROR"
				c=1
				break
		elif  x=='/':
			if len(l)>=2:
				op= l.pop()
				if op!=0:
					l.append(l.pop()/op);
				else:
					print "ERROR"
					c=1
					break
			else:
				print "ERROR"
				c=1
				break
		else:
			l.append(float(x))
	if c==0 and len(l)==1:
		print '%.4f' %l[0]
	else:
		if c==0:
			print "ERROR"
	l[:]=[]
	
	

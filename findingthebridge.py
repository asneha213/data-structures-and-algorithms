import sys
import string
global index;
index = 0;
s=list();
def main():
	b= sys.stdin.readlines()
	for i in range(len(b)):        
		  b[i] = b[i].strip('\n');
	data = list();
	data = b[0].split();
	n = int(data[0]);
	m = int(data[1]);
	del b[0];
	index =0;
	from collections import defaultdict
	graph = defaultdict(list)
	for line in b:
		a = line.split();
		if len(graph[int(a[0])]) == 0:
			graph[int(a[0])].append(0);
			graph[int(a[0])].append(-1);
			graph[int(a[0])].append(-1);
			
		if len(graph[int(a[1])]) == 0:
			graph[int(a[1])].append(0);
			graph[int(a[1])].append(-1);
			graph[int(a[1])].append(-1);
		
		graph[int(a[0])].append(int (a[1]));
		
		graph[int(a[1])].append(int (a[0]));
		
	dfs(0,-1,graph);
	

def dfs(k,p,g):
	global index;
	
	g[k][0] = 1;
	g[k][1] = index;
	g[k][2] = index;
	
	index = index +1;
	
	el = g[k];
	
	for i in range(3, len(el)):
		if el[i] == p:
			continue
		if g[el[i]][0] == 0:
			dfs(el[i],k,g);
			
			g[k][2] = min(g[k][2],g[el[i]][2]);
			
			if g[el[i]][2] > g[k][1] and g[el[i]][1] == g[el[i]][2]:
				if el[i] > k:
					print min(el[i],k), max(el[i],k);
		else: 
			g[k][2] = min(g[k][2],g[el[i]][1]);
	

if __name__ == "__main__":
    main()

		

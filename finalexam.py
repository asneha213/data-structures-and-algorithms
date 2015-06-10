import sys
import string
count = 0;
visit = 0;
stack = list();
scc = list();
def main():
	b= sys.stdin.readlines()
	for i in range(len(b)):        
		  b[i] = b[i].strip('\n');
	data = list();
	data = b[0].split();
	n = int(data[0]);
	m = int(data[1]);
	del b[0];
	
	from collections import defaultdict
	graph = defaultdict(list)
	for line in b:
		a = line.split();
		if len(graph[a[0]]) == 0:
			graph[a[0]].append(0);
			graph[a[0]].append(1000);

		if len(graph[a[1]]) == 0:
			graph[a[1]].append(0);
			graph[a[1]].append(1000);
		
		graph[a[0]].append(a[1]);
		graph[a[0]].append(int(a[2]));
		graph[a[1]].append(a[0]);
		graph[a[1]].append(int(a[2]));

	for key in graph:
		
		if graph[key][0]== visit:
			
			dfs(key,graph);
			scc.append(key);
			
			dis = list();
			avg = list();
			avgs = list();
			for i in range(0,len(scc)):
				dis = dijkstra(graph,i);
				val = sum(dis)/(1.0*len(dis)) ;
				avg.append(val);
				
			val1 = min(avg);
			id0 = [i for i, j in enumerate(avg) if j == val1];
			scc[:] = [item for i, item in enumerate(scc) if i in id0];
			val2 = min(scc);
			stack.append(val2);
			del scc[:];
			
	stack.sort();
	for i in range(0,len(stack)):
		print stack[i];	
	
def dfs(k,g):
	
	g[k][0] = 1;
	el = g[k];
	for i in range(2, len(el)):
		
		if i%2 == 0:
			if g[el[i]][0] == visit:
				scc.append(el[i]);
				dfs(el[i],g);

	

def dijkstra(g,s):
	nb = len(scc);
	dist = [1000000000]*nb;
	fd = [1000000000]*nb;
	v = [0]*nb;
	dist[s] = 0;
	for j in range(0,nb):
		val, idx = min((val, idx) for (idx, val) in enumerate(dist));
		fd[idx] = val;
		dist[idx] = 1000000000;
		v[idx] = 1;
		k = scc[idx];
		sl = g[k];
		
		for i in range(2,len(sl)):
			if i%2 == 0:
				
				idn = scc.index(sl[i])
				if  v[idn]==0 and fd[idx]+ sl[i+1] < dist[idn]:
					dist[idn] = fd[idx]+ sl[i+1];
		
	return fd;
			
	
	
	
	


if __name__ == "__main__":
    main()


	

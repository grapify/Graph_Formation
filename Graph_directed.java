import java.io.*;
import java.util.*;

public class Graph_directed{
	private int V;
	private LinkedList<Integer> adj[];
	private int parent[]
	Graph_directed(int v){
		V=v;
		parent=new Integer[V];
		adj =new LinkedList[v];
		for(int i=0;i<v;i++){
			parent[i]=-1;
			adj[i]= new LinkedList();
		}
	}

	void addEdgeDirected(int v1,int v2){
		parent[v1]=v2;
		adj[v1].add(v2);
	}

	
	void DFSUtil(int v,boolean visited[]){
		visited[v]=true;
		System.out.print(v+" ");

		Iterator<Integer> i=adj[v].listIterator();
		while(i.hasNext()){
			int n=i.next();
			if(visited[n]==false){
				DFSUtil(n,visited);
			}
		}
	}

	
	int find(int parent[],int i){
		if(parent[i]==-1){
			return i;
		}
		return find(parent,parent[i]);
	}


	boolean isCyclicUtilDirected(int v,boolean visited[],boolean recStack[]){
		boolean visited[]=new boolean[V];
		boolean recStack[]= new boolean[V];
		for(int i=0;i<V;i++){
			visited[i]=false;
			recStack[i]=false;
		}
		int count=0;
		for(int i=0;i<V;i++){
			if(isCyclicUtilDirected(i,visited,recStack)){
				return true;
			}
		}
		return false;
	}

	int isCyclicCountDirected(int v,boolean visited[],boolean recStack[]){
		boolean visited[]=new boolean[V];
		boolean recStack[]= new boolean[V];
		for(int i=0;i<V;i++){
			visited[i]=false;
			recStack[i]=false;
		}
		int count=0;
		for(int i=0;i<V;i++){
			if(isCyclicUtilDirected(i,visited,recStack)){
				count++;
			}
		}
		return count;
	}

	void DFS(int v){
		boolean visited=new  boolean[V];
		DFSUtil(v,visited);
	}

	void BFS(int v){
		boolean visited=new visited[V];
		LinkedList<Integer> queue =new LinkedList<Integer>;
		visited[v]=true;
		queue.add(v);
		while(queue.size()!=0){
			s=queue.poll();
			System.out.print(s+" ");
			Iterator<Integer> i=adj[v].listIterator();
			while(i.hasNext()){
				int n=i.next();
				if(visited[n]==false){
					queue.add(n);
				}
			}
		}

	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int v=sc.nextInt();
		graph g=new graph(v);
		int no_of_edges=sc.nextInt();
		for(int i=0;i<no_of_edges;i++){
			int v1=sc.nextInt();
			int v2=sc.nextInt();
			g.addEdge(int v1,int v2);
		}
		int v1=sc.nextInt();
		g.DFS(v1);
		v1=sc.nextInt();
		g.BFS(v1)
	}
}
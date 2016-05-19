import java.io.*;
import java.util.*;

public class Graph_UNdirected{
	private int V;
	private LinkedList<Integer> adj[];
	Graph_UNdirected(int v){
		V=v;
		adj =new LinkedList[v];
		for(int i=0;i<v;i++){
			adj[i]= new LinkedList();
		}
	}

	void addEdgeUNDirected(int v1 ,int v2){
		adj[v1].add(v2);
		adj[v2].add(v1);
	}


	Boolean isCyclicUtilUNDirected(int v,boolean visited[],int parent){
		visited[v]=true;
		int i;
		Iterator<Integer> it =adj[v].listIterator();
		while(it.hasNext()){
			i=it.next();
			if(visited[i]==false){
				if(isCyclicUtilUNDirected(i,visited,v)){
					return true;
				}
			}
			else if(i!=parent){
				return true;
			}
		}
		return false;
	}
	
	boolean isCyclicUNDirected(){
		boolean visited[] =new boolean[V];
		for(int i=0;i<V;i++){
			visited[i]=false;
		}
		for(int i=0;i<V;i++){
			if(visited[i]==false){
				if(isCyclicUtilUNDirected(i,visited,-1)){
					return true;
				}
			}
		}
		return false;
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
//		int v1=sc.nextInt();
//		g.DFS(v1);
//		v1=sc.nextInt();
//		g.BFS(v1)
	}
}
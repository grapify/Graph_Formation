#include <iostream>
#include <vector>
using namespace std
//create a vector
int no_of_nodes

vector<list<pair<int ,int>> vec;
int i;




int numberOfEdges(int data,int data1,int weight){
        return i;
}


boolean isConnect(int data,int data1){
	list< pair<int, int> >::iterator itr = adjacencyList[i].begin();
	int temp=0;
	while(itr!=vec[data].end()){
    	if((*itr).first==data1){
    		return true;
    		temp=1;
    		break;	
    	}
    }
    if(temp==0){
    	return false;
    }
}

int weight_of_edge(int data,int data1){
	list< pair<int, int> >::iterator itr = adjacencyList[i].begin();
	int temp=0;
	while(itr!=vec[data].end()){
    	if((*itr).first==data1){
    		return (*itr.second);
    		temp=1;
    		break;	
    	}
    }
    if(temp==0){
    	return -1;
    }
}


void shortestPath(){

}


void allPath(){

}

void AddEdge(int data,int data1,int weight){
    vec[data].push_back(make_pair(data1, weight));


}

void menu(){
    cout<<"press one to add node"<<endl;
    cout<<"press two to add edge"<<endl;
    cout<<"press three to find is two given input nodes are directly connected or not"<<endl;

}

int main(){
    cout<<"enter the no of nodes"<<endl;
    cin>>no_of_nodes;
    menu();
    int a=0;
    while(a<5){
        cin>>x;
        if(x==0){
            int data;
            cin>>data;
            addNode(int data);
        }
        if(x==1){
            int data;
            int data1;
            int weight;
            cin>>data>>data1>>weight;
            AddEdge(data,data1,weight);
            i++;
        }
        else if(x==3){
            int data1;
            int data;
            cin>>data>>data1;
            isConnect(int data,int data1);
        }
        else if(x==4){
            int des;
            int start;
            cin>>des>>start;
            shortestPath(des,start);
        }
        else if(x==5){
            int des;
            int start;
            cin>>des>>start;
            allPath(des,start);

        }
    }
    return 0;
}

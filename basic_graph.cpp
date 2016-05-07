#include <iostream>
#include <vector>
#include "list"
#include "utility"
using namespace std;



>>>>>>> 54fcbf2230895ef5ee8853e87dfc36f6cd349588
int no_of_nodes;
//create a vector
typedef vector<pair<int ,int> > adlist;
vector<adlist> vec;
//no of edges
int i=0;

void addNode(int data){
	if(vec[data]==NULL){
		adlist temp ;
		//temp=vec[data];
		temp.push_back(make_pair(NULL,NULL));
		vec[data].push_back(temp);
	}
	else{
		continue;
	}
	
}

void AddEdge(int data,int data1,int weight){
	adlist temp;
	temp=vec[data];
    temp.push_back(make_pair(data1, weight));
    vec[data].push_back(temp);
    temp=vec[data1];
    temp.push_back(make_pair(data,weight));
    vec[data1].push_back(temp);
}


int numberOfEdges(int data,int data1,int weight){
        return i;
}


boolean isConnect(int data,int data1){
	list< pair<int, int> >::iterator itr = vec[data].begin();
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

<<<<<<< HEAD
int weight_of_edge(int data,int data1,int *temp){
	list< pair<int, int> >::iterator itr = vec[data].begin();
	temp=0;
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

=======
>>>>>>> 54fcbf2230895ef5ee8853e87dfc36f6cd349588

void shortestPath(){

}


void allPath(){

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
        else if(x==6){
        	int data;
        	int data1;
        	cin>>data>>data1;
        	int temp=0;
        	int x=weight_of_edge(data,data1,*temp);
        	if(temp!=0){
        		cout<<"weight_of_edge="<<x;
        	}
        	else{
        		cout<<"error:404"<<endl<<"the egde was not found";
        	}
        }

    }
    return 0;
}

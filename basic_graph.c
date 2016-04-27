#include <iostream>
#include <vector>
using namespace std
//create a vector

vector<list<push<int ,int>> vec;
int i;



int numberOfEdges(){
        return i;
}

int numberOfNodes(){
    return vec.size();
}

boolean isConnect(){
        if()
}




void AddEdge(int data,int data1,int weight){
    vec[data].push_back(make_pair(data1, weight));


}

void addNode(int data){
    ve[data].push_back(make_pair(null,null));
}

void menu(){

}

int main(){
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
        else if(x==2){
            printf("%d\n",numberOfNodes);
        }
        else if(x==3){
            printf("%d\n",numberOfEdges);
        }
        else if(x==4){
            int data1;
            int data;
            cin>>data>>data1;
            isConnect(int data,int data1);
        }
        else if(x==5){
            int des;
            int start;
            cin>>des>>start;
            shortestPath(des,start);
        }
        else if(x==6){
            int des;
            int start;
            cin>>des>>start;
            allPAth(des,start);

        }
    }
    return 0;
}

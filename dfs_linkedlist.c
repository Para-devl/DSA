#include<stdio.h>
#include<stdlib.h>
#define max 10

struct node{
    int vertex;
    struct node*next;
};

int visited[max];
struct node*adj[max];

struct node*createNode(int v){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->vertex=v;
    newNode->next=NULL;
}

void addEdge(int src,int dest){
    struct node*newNode=createNode(dest);
    newNode->next=adj[src];
    adj[src]=newNode;

    newNode=createNode(src);
    newNode->next=adj[dest];
    adj[dest]=newNode;
}

void dfs(int vertex){
    visited[vertex]=1;
    printf("%d ",vertex);

    struct node*temp=adj[vertex];
    while(temp!=NULL){
        if(!visited[temp->vertex]){
            dfs(temp->vertex);
        }
        temp=temp->next;
    }
}

int main(){
    int n=6;

    for(int i=0;i<n;i++){
        adj[i]=NULL;
        visited[i]=0;
    }
    addEdge(0,1);
addEdge(0,3);
addEdge(1,2);
addEdge(1,4);
addEdge(2,5);
addEdge(3,4);
addEdge(4,5);

printf("Graph Traversal: ");
dfs(0);

return 0;
}
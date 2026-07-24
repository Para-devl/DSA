#include<stdio.h>
#define max 10

int visited[max];
int graph[max][max];
int n;

void dfs(int vertex){
    visited[vertex]=1;
    printf("%d ",vertex);
    for(int i=0;i<n;i++){
        if(!visited[i] && graph[vertex][i]==1){
            dfs(i);
        }
    }
}

int main(){
    printf("enter no of vertices: ");
    scanf("%d",&n);
    printf("enter adjency matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("(%d %d)",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    int start;
    printf("enter starting point of traversal(0 to %d): ",n-1);
    scanf("%d",&start);
    dfs(start);
    return 0;
}
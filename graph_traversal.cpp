#include <iostream>
#include <vector>
using namespace std;

const int MAX_SIZE = 10000000;
vector<int> graph[MAX_SIZE];
int visited[MAX_SIZE];

void createTree(int n){
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
}

void preOrder(int node){
    visited[node] = 1;
    cout << node << " ";
    for (int child : graph[node])
    {
        if(!visited[child]){
            preOrder(child);
        }
    }
}

void postOrder(int node){
    visited[node] = 1;
    for (int child : graph[node])
    {
        if(visited[child] == 0){
            postOrder(child);
        }
    }
    cout << node << " ";
}

void inOrder(int node){
    visited[node] = 1;
    for(int child : graph[node]){
        if(!visited[child]){
            inOrder(child);
            break;
        }
    }
    cout << node << " ";
    for(int child : graph[node]){
        if(!visited[child]){
            inOrder(child);
        }
    }
}


void clearVisited(){
    for (int i = 0; i < MAX_SIZE; i++)
    {
        visited[i] = 0;
    }
}

int main(){
    int root;
    cout << "Enter root node: ";
    cin >> root;
    int n;
    cout << "Enter number of edges: ";
    cin >> n;
    createTree(n);
    cout << "Preorder: ";
    preOrder(root);
    cout << endl;
    clearVisited();
    cout << "Postorder: ";
    postOrder(root);
    cout << endl;
    clearVisited();
    cout << "Inorder: ";
    inOrder(root);
    cout << endl;
}
#include <iostream>
using namespace std;
#include <stack>

//N = number of Node, M = number of Edge, etop stores the memory location;
int N, M, etop;

struct EDGE
{
    //u = edge start, v = edge end, len = number of edge;
    int u, v, len;
    EDGE *next;
} epool[100001];

struct NODE
{
    EDGE *first;
} nodes[10001];

void addedge(int u, int v, int len)
{
    epool[etop].u = u;
    epool[etop].v = v;
    epool[etop].len = len;
    epool[etop].next = nodes[u].first;
    nodes[u].first = &epool[etop];

    etop++;
}

//iterator DFS
bool visited[10001];
void DFS(int id){
    visited[id] = true;
    cout<<id<<" visited";
    EDGE *e =nodes[id].first;
    while(e!=NULL){
        if(!visited[e->v])
            DFS(e->v);
        e = e->next;
    }
}

//normal search
bool discovered[10001];
stack<int> F;   //DFS
//queue<int> F; //BFS

void search(){
    F.push(1);
    discovered[1] = true;

    while(!F.empty()){
        int id = F.top();
        //int id = F.front();

        F.pop();
        cout<<id<<" id is popped.";
        EDGE *e = nodes[id].first;
        while(e!=NULL){
            if(!discovered[e->v]){
                F.push(e->v);
                discovered[e->v] = true;
            }
            e = e->next;
        }
    }
}

int main()
{
    int i, u, v, len;
    cin >> N >> M;

    for (i = 1; i <= M; i++)
    {
        cin >> u >> v >> len;
        addedge(u, v, len);
        //addedge(v, u, len);
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Graph {
public:
// node가 1,2, 3,.. n 이렇게 순서대로 나열되어있으면, vector로 해도 된다.
    int nums_of_node;
	vector<bool> bigVisited;
	vector<bool> smallVisited;

	vector<vector<int>> bigAdj;
	vector<vector<int>> smallAdj;

    int bigCnt, smallCnt;
	
    Graph(int n);

    // Function to add an edge to graph
	void addBigEdge(int v, int w);
	void addSmallEdge(int v, int w);

	// DFS traversal of the vertices
	void BigDFS(int v);
	void SmallDFS(int v);

    void clear();
};
Graph::Graph(int n){
    nums_of_node = n;
    
    bigAdj.resize(nums_of_node);
    smallAdj.resize(nums_of_node);

    bigVisited.resize(nums_of_node, false);
    smallVisited.resize(nums_of_node, false);
}
void Graph::addBigEdge(int v, int w)
{
	// Add w to v’s list.
	bigAdj[v].push_back(w);
}
void Graph::addSmallEdge(int v, int w)
{
	// Add w to v’s list.
	smallAdj[v].push_back(w);
}


void Graph::BigDFS(int v)
{
	// Mark the current node as visited 
	bigVisited[v] = true;
    bigCnt++;

	// Recur for all the vertices adjacent to this vertex    
	vector<int>::iterator i;
	for (i = bigAdj[v].begin(); i != bigAdj[v].end(); ++i)
 		if (!bigVisited[*i])
			BigDFS(*i);
}
void Graph::SmallDFS(int v)
{
	// Mark the current node as visited and
	smallVisited[v] = true;
    smallCnt++;
	// Recur for all the vertices adjacent to this vertex
    
	vector<int>::iterator i;
	for (i = smallAdj[v].begin(); i != smallAdj[v].end(); ++i)
 		if (!smallVisited[*i])
			SmallDFS(*i);
}

void Graph::clear(){
    // clear values;
    bigCnt = 0; smallCnt = 0;

    for (int i = 0; i < nums_of_node; i++)
    {
        bigVisited[i] = false;
        smallVisited[i] = false;
    }
    
 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m,  baseNum, result = 0;
    int x, y;

    cin >> n >> m;
    // n = 5; m = 4;
    baseNum = n/2;

    Graph graph(n);

//     int x[] = {1, 3, 1, 2};
    // int y[] = {2, 4, 5, 4};
    
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--; y--;
        // x[i]--; y[i]--;
        graph.addBigEdge(y, x); 
        graph.addSmallEdge(x, y); 
    }
    graph.clear();
    
    for (int i = 0; i < n; i++)
    {
        graph.BigDFS(i);
        graph.SmallDFS(i);

        if(graph.bigCnt > baseNum+1 || graph.smallCnt > baseNum+1) result++;
        graph.clear();
    }
    
    cout << result;
    
}
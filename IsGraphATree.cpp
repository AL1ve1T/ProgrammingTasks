#include <iostream>

using namespace std;
const int SIZE = 10;

void inputGraph(int graph[SIZE][SIZE], int _size)
{
    for (int i = 0; i < _size; i++)
        for (int j = 0; j < _size; j++)
        {
            cin >> graph[i][j];
        }
}

bool dfs(int current, int graph[SIZE][SIZE], int _size, bool color[SIZE])
{
    if (color[current])
    {
        return 0;
    }
    color[current] = true;
    for (int i = 0; i < _size; i++)
    {
        if (graph[current][i])
        {
            dfs(i, graph, _size, color);
        }
    }
}

bool IsTreeCondition(int graph[SIZE][SIZE], int _size)
{
    int edges = 0;

    for (int i = 0; i < _size; i++)
        for (int j = i; j < _size; j++)
            if (graph[i][j])
                edges++;
    if (edges != _size - 1)
        return false;
    bool color[_size];
    memset(color, 0, sizeof(color));

    dfs(0, graph, _size, color);
    for (int i = 0; i < _size; i++)
        if (!color[i])
            return false;
    return true;
}

int main() 
{
    int size;
    cin >> size;
    int graph[SIZE][SIZE];
    inputGraph(graph, size);

    if (IsTreeCondition(graph, size))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
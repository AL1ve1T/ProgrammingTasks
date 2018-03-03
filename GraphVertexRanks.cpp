#include <iostream>
 
using namespace std;
 
const int SIZE = 100;
 
void matrix_input(int matrix[][SIZE], int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            cin >> matrix[i][j];
        }
    }
}
 
void node_extend_output(int matrix[][SIZE], int size)
{
    for(int i = 0; i < size; ++i)
    {
        int counter = 0;
        for(int j = 0; j < size; ++j)
        {
            if(matrix[i][j] == 1)
            {
                counter++;
            }
        }
        cout << counter << " ";
    }
}
 
int main()
{
    int mainMatrix[SIZE][SIZE], size;
    cin >> size;
    matrix_input(mainMatrix, size);
    node_extend_output(mainMatrix, size);
    return 0;
}
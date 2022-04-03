/* Declare any non-required functions above main.
 * The duty of main here is to interact with the user, take in input, and manage wrapping output and runtime.
 * Remember, if you are considering putting something in main or a function, double check the specifications.
 * Each function should only do what it is specified to do, and no more.
 */

#include "maze.h"


int main()
{
    int numRows, rowPos, colPos;
    int short numMazes = 0;
    string* maze;
    cin >> numRows;
    while (numRows > 0)
    {
        maze = build_matrix(numRows);
        
        cin.ignore();
        fill_matrix(maze, numRows);

        find_start(maze, numRows, rowPos, colPos);
        
        if (find_exit(maze, rowPos, colPos))
        {
            cout << "Map " << numMazes << " -- Solution found:" << endl;
        }
        else
        {
            cout << "Map " << numMazes << " -- No solution found:" << endl;
        }
        print_matrix(maze, numRows);
        cout << endl;

        delete_matrix(maze);
        numMazes++;
        cin >> numRows;
    } 
    

    return 0;
}


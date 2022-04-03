/* Here in the .cpp you should define and implement everything declared in the .h file.
 */

#include "maze.h"


void get_identity(string &my_id)
{
  my_id = "rjstrd";
}


string * build_matrix(int rows)
{
  string* matrix = new string[rows];
  return matrix;
}


void fill_matrix(string *matrix, int rows)
{
  for (int i = 0; i < rows; i++)
  {
    getline(cin, matrix[i]);
  }
}


void print_matrix(string *matrix, int rows)
{
  for (int i = 0; i < rows; i++)
  {
    cout << matrix[i] << endl;
  }
}

void delete_matrix(string *&matrix)
{
  delete [] matrix;
}


void find_start(string *matrix, int rows, int &row, int &col)
{
  int cols = matrix[0].size();
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == 'N')
      {
        row = i;
        col = j;
      }
    }
  }
}

bool find_exit(string *matrix, int row, int col)
{
  string directions[4] = {"NORTH", "SOUTH", "EAST", "WEST"};

}


bool at_end(string *matrix, int row, int col)
{
  if (matrix[row][col] == 'E')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool valid_move(string *matrix, int row, int col, string direction)
{
  bool valid = false;
  if (direction == "NORTH" && matrix[row - 1][col] == ' ')
  {
    valid = true;
  }
  else if (direction == "SOUTH" && matrix[row + 1][col] == ' ')
  {
    valid = true;
  }
  else if (direction == "EAST" && matrix[row][col + 1] == ' ')
  {
    valid = true;
  }
  else if (direction == "WEST" && matrix[row][col - 1] == ' ')
  {
    valid = true;
  }
  return valid;
}


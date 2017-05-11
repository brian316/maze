#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

map<int,vector<int> > read_maze(string, int&, int&);
bool traverse_maze(map<int,vector<int> >, int, int);

int main()
{
  map<int,vector<int> > maze;

  int start,goal;

  maze = read_maze("lab5_maze.txt",start,goal);


  for (int i = start; i <= goal; i++)
    {
      cout << "from " << i << " to [ ";
      for (int j = 0; j < maze[i].size(); j++)
	cout << maze[i][j] << " ";
      cout << " ]" <<  endl;
    }

  while (true)
    {
      cout << "Immediate neighbors of which node? ";
      int n;
      cin >> n;
      cout << endl;

      vector<int> neighs = maze[n];

      for (int i = 0; i < neighs.size(); i++)
	cout << neighs[i] << " ";
      cout << endl << endl;
    }
  return 0;
}

map<int,vector<int> > read_maze(string mfile, int& from, int& to)
{
  map<int,vector<int> > maze;

  int start = 0;
  int goal =0;

  ifstream inp;
  inp.open(mfile);

  inp >> start >> goal;

  from = start;
  to = goal;

  int n;
  int next;
  for (int i = start; i <= goal; i++)
    {
      inp >> n;
      vector<int> neighs;
      for (int j = 1; j <= n; j++)
	{
	  inp >> next;
	  neighs.push_back(next);
	}
      maze[i] = neighs;
    }
  inp.close();
  return maze;
}


// traverse from start to goal according to algorithm;
// print out nodes as they are being explored (

bool  traverse_maze(map<int,vector<int> > maze, int start, int goal)
{
	
}

#include <map>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	map<int,vector<int> > maze;

	int start, goal;

	ifstream inp;
	inp.open("lab5_maze.txt");

	inp >> start >> goal;

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

	for (int i = start; i <= goal; i++)
	{
		cout << "from " << i << " to [ ";
		for (int j = 0; j < maze[i].size(); j++)
			cout << maze[i][j] << " ";
		cout << " ]" <<  endl;
	}
	system("Pause");
	return 0;
}


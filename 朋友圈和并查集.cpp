
//岛屿的数量
/* static int nextp[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
class Solution {
public:
   void DFS(vector<vector<char>>& grid, int x, int y, int row, int col)
	{
		int nx, ny;
		grid[x][y] = '@';
		for (int i = 0; i < 4; ++i)
		{
			nx = x + nextp[i][0];
			ny = y + nextp[i][1];
			//判断是否越界
			if (nx < 0 || nx >= row || ny < 0 || ny >= col)
			{
				continue;
			}
			if (grid[nx][ny] == '1')
			{
				DFS(grid, nx, ny, row, col);
			}
		}
	}
	int numIslands(vector<vector<char>>& grid)
	{
		if (grid.empty())
		{
			return 0;
		}
		int i, j;
		int ret=0;
		int row = grid.size();//行数
		int col = grid[0].size();//列数

		for (i=0;i<row;++i)
		{
			for (j=0;j<col;++j)
			{
				if (grid[i][j]=='1')
				{
					DFS(grid, i, j,row,col);
					ret++;
				}
			}
		}
		return ret;
	}
}; */

//朋友圈
/* class Solution {
public:
	class UnionFindSet
{
private:
	vector<int> ufs;

public:
	UnionFindSet(int size)
	{
		ufs.resize(size, -1);
	}
	int size()
	{
		int ret=0;
		for (auto &i: ufs)
		{
			if (i<0)
			{
				ret++;
			}
		}
		return ret;
	}
	int FindRoot(int val)
	{
		int n = val;
		while (ufs[n]>=0)
		{
			n = ufs[n];
		}
		return n;
	}
	void Union(int x1, int x2)
	{
		int Root1 = FindRoot(x1);
		int Root2 = FindRoot(x2);
		if (Root1 != Root2)
		{
			ufs[Root1] += ufs[Root2];
			ufs[Root2] = Root1;
		}
	}

};
	int findCircleNum(vector<vector<int>>& M)
	{
		int size = M.size();
	UnionFindSet ufs(size);

	size_t i, j;
	for (i=0;i<M.size();++i)
	{
		for (j=0;j<M[i].size();++j)
		{
			if (i<j && M[i][j]==1)
			{
				ufs.Union(i, j);
			}
		}
	}
	return ufs.size();
	}
}; */
//员工的重要性
/* /*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
//int DFS(unordered_map<int, Employee*> em, int id)
//{
//	int curRet = em[id]->importance;
//	//遍历它的下属
//	for (auto & e : em[id]->subordinates)
//	{
//		curRet += DFS(em, e);
//	}
//	return curRet;
//}
//
//class Solution {
//public:
//	int getImportance(vector<Employee*> employees, int id) {
//		if (employees.empty())
//		{
//			return 0;
//		}
//		unordered_map<int, Employee*> em;
//		for (auto & e : employees)
//		{
//			em[e->id] = e;
//		}
//		return DFS(em, id);
//
//	}
//}; */
/* 并查集，等式可满足性 */
/* class Solution {
public:
	class UnionFindSet
	{
	public:
		UnionFindSet(size_t n)
		{
			_ufs.resize(n, -1);
		}
		int FindRoot(int n)
		{
			//在并查集里面找它的根

			while (_ufs[n] >= 0)
			{
				n = _ufs[n];
			}
			return n;
		}
		void Union(int x1, int x2)
		{
			//根据映射关系完成并查集的合并
			int root1 = FindRoot(x1);
			int root2 = FindRoot(x2);

			if (root1 != root2)
			{
				_ufs[root1] += _ufs[root2];
				_ufs[root2] = root1;
			}
			//有相同的根的时候，说明已经合并过了
		}

		size_t Size()
		{
			size_t n = 0;
			for (auto & e : _ufs)
			{
				if (e < 0)
				{
					++n;
				}
			}
			return n;
		}

	private:
		vector<int> _ufs;
	};
	bool equationsPossible(vector<string>& equations)
	{
		//构造并查集，将所有的相等的元素存到并查集里面
		UnionFindSet ufs(26);
		for (auto & e :equations)
		{
			if (e[1]=='=')
			{
				ufs.Union(e[0]-'a', e[3]-'a');
			}
		}
		for (auto & e : equations)
		{
			if (e[1] != '=')
			{
				int root1 = ufs.FindRoot(e[0]-'a');
				int root2 = ufs.FindRoot(e[3]-'a');
				if (root1==root2)
				{
					return false;
				}
			}
		}
		return true;

	}
};
*/


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define MIN(X,Y) (((X)<(Y))?(X):(Y))

void WriteBuffer(const int * buffer)
{
	while (buffer[1] != 0)
	{
		printf("%d+", *buffer++);
	}
	printf("%d\n", *buffer);
}

void _splitnum(int * buffer, const int x, const size_t pos)
{
	if (x <= 1)
	{
		buffer[pos + 1] = x;
		buffer[pos + 2] = 0;
		WriteBuffer(buffer);
	}
	else
	{
		size_t npos = pos + 1;
		for (int i = 1; i <= MIN(x, buffer[pos]); i++)
		{
			buffer[npos] = i;
			_splitnum(buffer, x - i, npos);
		}
	}
}

void SplitNum(const int x)
{
	if (x <= 0) return;
	int * buffer = (int*)malloc(sizeof(int) * (x + 1));
	for (int i = 1; i < x; i++)
	{
		buffer[0] = i;
		_splitnum(buffer, x - i, 0);
	}
}

int main()
{
	int x = 0;
	 
	cin >> x;
	SplitNum(x);
	system("pause");
	return EXIT_SUCCESS;
}

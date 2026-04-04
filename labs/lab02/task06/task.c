#include<stdio.h>

enum data_name
{
	INT,
	FLOAT,
	CHAR
};

union data
{
	int INT;
	float FLOAT;
	char CHAR;
};

struct full_data
{
	enum data_name dtn;
	union data dt;
};

int main()
{
	struct full_data fd;

	fd.dt.CHAR = 'x';
	fd.dtn = CHAR;

	fd.dt.FLOAT = 1.5;
	fd.dtn = FLOAT;

	fd.dt.INT = 64;
	fd.dtn = INT;

	printf(" %d, %d, %c\n", fd.dt.INT, fd.dt.FLOAT, fd.dt.CHAR);

	return 0;
}

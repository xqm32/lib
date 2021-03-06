#include "../../include/fastrand/rangedom.h"

int init_rangedom()
{
	srand(time(nullptr));
}
int init_rangedom(const int &_seed)
{
	srand(_seed);
}

int rangedom()
{
	return rand();
}
int rangedom(const int &_first, const int &_second)
{
	return _first+rand()%(_second-_first+1);
}
#ifndef kingdom_HPP
#define kingdom_HPP
#include <cmath>
//#include "jsoncpp-master/include/json/json.h"
#include <cmath>
#include <iostream>
using namespace std;
#include <vector>
#include <cstdio>
#include <random>

struct tile
{
	int kingdom;
	int terrain;
};


class kingdom
{
	public:
		int size;
		int money;

		void update()
		{
			money += size;
		}
};

#endif
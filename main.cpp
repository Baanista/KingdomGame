#include <iostream>
using namespace std;
#include "kingdom.hpp"
#include <iostream>
#include <vector>

vector<kingdom> kingdoms;
vector<vector<tile> > Kingdom_Map;
kingdom temp;


int main() 
{
    temp.money = 100;
    temp.size = 100;

    kingdoms.push_back(temp);

    while (true)
    {
        for (int i = 0; i < kingdoms.size(); i++)
        {
            kingdoms[i].update();

            cout << kingdoms[i].money << endl;
        }
    }
}
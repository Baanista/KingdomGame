#include <iostream>
using namespace std;
#include "kingdom.hpp"
#include <iostream>
#include <vector>
//#include <windows.h>  
#include <stdlib.h>

#define ANSI_RED     "\x1b[31m"
#define ANSI_GREEN   "\x1b[32m"
#define ANSI_YELLOW  "\x1b[33m"
#define ANSI_BLUE    "\x1b[34m"
#define ANSI_MAGENTA "\x1b[35m"
#define ANSI_CYAN    "\x1b[36m"
#define ANSI_BLACK   "\x1b[0m"


vector<kingdom> kingdoms;
vector<vector<tile> > Kingdom_Map;
kingdom temp;

vector<vector<tile> > flat_map(int size[2])
{
    vector<vector<tile> > output;

    vector<tile> row;

    tile defaulttile;

    defaulttile.kingdom = -1;
    defaulttile.terrain = 0;
    for (int x = 0; x < size[0]; x++)
    {
        output.push_back(row);
        for (int y = 0; y < size[1]; y++)
        {
            cout << defaulttile.kingdom << endl;
            output[x].push_back(defaulttile);
        }
    }

    return(output);
}

int main() 
{
    Kingdom_Map  = flat_map({10, 10});
    temp.money = 100;
    temp.size = 100;

    kingdoms.push_back(temp);

    
    
    // printf("\x1b[32m green text on regular background \x1b[0m  \n");

    
    
    while (true)
    {
        for (int i = 0; i < kingdoms.size(); i++)
        {
            kingdoms[i].update();

            //cout << kingdoms[i].money << endl;
        }

        for (int x = 0; x < Kingdom_Map.size(); x++)
        {
            for (int y = 0; y < Kingdom_Map[x].size(); y++)
            {
                for (int y = 0; y < Kingdom_Map[x].size(); y++)
            }
        }
    }
}
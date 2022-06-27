#pragma once
#include <iostream>
#include <vector>

using namespace std;

int calculatedistance(int x1, int y1, int x2, int y2)
{
    int xarray[] = {x1, x2 };
    int yarray[] = {y1, y2 };

    int xdistval;
    int ydistval;

    int distance;

    int xmax;
    int ymax;

    if (xarray[0] > xarray[1])
        xdistval = xarray[0] - xarray[1];
    else
        xdistval = xarray[1] - xarray[0];

    if (yarray[0] > yarray[1])
        ydistval = yarray[0] - yarray[1];
    else
        ydistval = yarray[1] - yarray[0];

    distance = xdistval + ydistval;
    return distance;
}

class location1
{
public:
    int x, y;
};

class location2
{
public:
    int x, y;
};

class location3
{
public:
    int x, y;
};

class VectorClass
{
public:
    VectorClass(vector<vector<int>> vect);
    void showvect();
    void flipvector();
    void changeelement(int x, int y);
private:
    vector<vector<int>> vectprivate;
    vector<vector<int>> vectprivateflipped;
};

VectorClass::VectorClass(vector<vector<int>> vect)
{
    vectprivate = vect;
}

void VectorClass::showvect()
{
    for (int x = vectprivate.size() - 1; x >= 0; --x)
    {
        for (int y = 0; y < vectprivate[x].size(); y++)
        {
            cout << vectprivate[x][y] << " ";
        }
        cout << endl;
    }
}

void VectorClass::changeelement(int x, int y)
{
    vectprivate[y][x] = 1;
}
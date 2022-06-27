#include <iostream>
#include <vector>
#include "Header.h"
#include <fstream>

using namespace std;

int main()
{
       
    vector<vector<int>> standardvect
    {
        {9, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
    };

    ofstream myfile;
    myfile.open("Parameters.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();

    int Loc1[2];
    int Loc2[2];
    int Loc3[2];

    cout << "Please enter your locations (x then y)" << endl;
    
    for (int i = 0; i < 2; i++) {
        cout << "Insert element " << i << " for location 1: ";
        cin >> Loc1[i];
    }
    for (int i = 0; i < 2; i++) {
        cout << "Insert element " << i << " for location 2: ";
        cin >> Loc2[i];
    }
    for (int i = 0; i < 2; i++) {
        cout << "Insert element " << i << " for location 3: ";
        cin >> Loc3[i];
    }

    int origin1dist = calculatedistance(0, 0, Loc1[0], Loc1[1]);
    int origin2dist = calculatedistance(Loc1[0], Loc1[1], Loc2[0], Loc2[1]);
    int origin3dist = calculatedistance(Loc2[0], Loc2[1], Loc3[0], Loc3[1]);

    cout << "DISTANCE: ";
    cout << origin1dist << " " << origin2dist << " " << origin3dist << endl;
    cout << "TOTAL DISTANCE MOVED = " << (origin1dist + origin2dist + origin3dist) << endl;

    VectorClass Obj(standardvect);
    Obj.changeelement(Loc1[0], Loc1[1]);
    Obj.changeelement(Loc2[0], Loc2[1]);
    Obj.changeelement(Loc3[0], Loc3[1]);
    Obj.showvect();

    return 0;
}
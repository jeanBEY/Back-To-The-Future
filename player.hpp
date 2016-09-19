/***********************************************************
 **CLASS:            PLAYER
 **
 **DESCRIPTION:      HPP FILE
 **
 **This class contains the player's current location, the
 **number of items they have collected, the vector of items 
 **(strings) and also the iterator for the vector.
 ***********************************************************/

#ifndef PLAYER_hpp
#define PLAYER_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "Era.hpp"
using namespace std;

class Player
{
private:
    string currentLocation;
    int numberOfItems;
    std::vector<string> deLorean;
    std::vector<string>::iterator iter;

public:
    Player();
    
    /*
    **GET METHODS
    */
    string getCurrentLocation();
    int getNumberOfItems();
    
    /*
     **SET METHODS
     */
    void setCurrentLocation(string);
    void addNumberOfItems(int);
    void cleanDeLorean();
    
    void add(string);
    void displayItems();
    void remove(string);
    bool findIt(string);
    
};
#endif
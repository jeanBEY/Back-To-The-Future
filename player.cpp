/***********************************************************
 **CLASS:            PLAYER
 **
 **DESCRIPTION:      CPP FILE
 **
 **This class contains the player's current location, the
 **number of items they have collected, the vector of items
 **(strings) and also the iterator for the vector.
 ***********************************************************/

#include "player.hpp"

/*************************************************************
 **Function:        Player()
 **Description:     Constructor sets numberOfItems to zero
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Player::Player() {

    numberOfItems = 0;
}

/*************************************************************
 **Function:        getCurrentLocation()
 **Description:     Returns currentLocation of player
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
string Player::getCurrentLocation() {
    
    return currentLocation;
}

/*************************************************************
 **Function:        getNumberOfItems()
 **Description:     Returns numberOfItems of player
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
int Player::getNumberOfItems() {
    
    return numberOfItems;
}

/*************************************************************
 **Function:        setCurrentLocation(string)
 **Description:     Sets current location of the player
 **Parameters:          String (current location)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Player::setCurrentLocation(string cl) {
    
    currentLocation = cl;
}

/*************************************************************
 **Function:        addNumberOfItems(int)
 **Description:     Adds to numberOfItems
 **Parameters:          Int (number to increment number of items)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Player::addNumberOfItems(int n) {

    numberOfItems += n;
}

/*************************************************************
 **Function:        cleanDeLorean()
 **Description:     Removes all elements from vector
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Player::cleanDeLorean() {
    
    deLorean.clear();
}

/*************************************************************
 **Function:        add(string)
 **Description:     Adds an item to the DeLorean (vector) by 
 **using the push_back function
 **Parameters:          String (item to add)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Player::add(string item) {

    deLorean.push_back(item);
    
}

/*************************************************************
 **Function:        displayItems()
 **Description:     Goes through vector and displays the item
 **in each subscript, up until the end of the vector
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Player::displayItems() {

    cout << "The DeLorean contains: " <<endl;
    for(int i = 0; i < deLorean.size(); i++)
    {
        cout << i + 1 << ".  " << deLorean[i] <<endl;
    }
    
    cout <<endl;
    
}

/*************************************************************
 **Function:        remove(string)
 **Description:     Uses the vector find function to remove
 **the item, rem (string) from the vector (DeLorean)
 **Parameters:          String (item to remove from DeLorean)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Player::remove(string rem) {

    iter = find(deLorean.begin(), deLorean.end(), rem);
    cout << "Removing " << *iter <<endl;
    deLorean.erase(iter);
}

/*************************************************************
 **Function:        findIt(string)
 **Description:     Returns true if item is found and false if 
 **it is not.  Uses the vector function find().
 **Parameters:          String (item to find in DeLorean)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool Player::findIt(string s) {
    
    bool exists = false;
    int size1 = deLorean.size();
    for(int i = 0; i < size1; i++)
    {
        if(s == deLorean[i])
        {
            exists = true;
        }
    }
    
    return exists;

}





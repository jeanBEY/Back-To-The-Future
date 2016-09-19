/***********************************************************
 **Program Filename:       MAIN
 **
 **Author:                 JEANVALLY G.BEATO
 **
 **Date:                   3/14/16
 **
 **Description:  This program allows the user to play the 
 **part of Marty McFly from the classic 80's movie, Back
 **to the Future.  The player 'travels through time' by 
 **accessing pointers which circularly link derived objects. 
 **The derived objects represent an era of time, such as the
 **1950's, 1960's, 1970's, 1980's, and the 1990's.  Once the
 **player collects certain items using a function that
 **utilizes a random seed generator and activates a hidden
 **pointer, then they are able to "travel" back to the 
 **future.
 **linked derived objects
 **Input:       User choices(ints)
 **Output:      Strings based on user choice and pointer
 **accessed
 ***********************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "Era.hpp"
#include "the1990s.hpp"
#include "the1980s.hpp"
#include "the1970s.hpp"
#include "the1960s.hpp"
#include "the1950s.hpp"
#include "presentDay.hpp"
#include "player.hpp"
using namespace std;

/*
 **FUNCTION PROTOTYPE
 */
Era * travel(Era *&, Player *&);

int main()
{
    
    /*
     **TO USE RANDOM # GENERATOR
     */
    unsigned seed;
    seed = time(0);
    srand(seed);
    
    /*
    **CREATE PLAYER
    */
    Player * player = new Player();
    
    /*
    **CREATE OBJECTS AND ASSIGN TO POINTERS
    */
    Era * nine = new The1990s;
    Era * eight = new The1980s;
    Era * seven = new The1970s;
    Era * six = new The1960s;
    Era * five = new The1950s;
    Era * present = new PresentDay;
    
    /*
    **SET/LINK POINTERS
    */
    nine->setDoors(five, eight, nine, six);
    eight->setDoors(nine, seven, eight, five);
    seven->setDoors(eight, six, seven, nine);
    six->setDoors(seven, five, six, eight);
    five->setDoors(six, nine, five, present);
    present->setDoors(present, present, present, present);
    
    bool play;
    
    do{
        play = false;
        int choice;
        
        cout << "*****Welcome to the Back To The Future game Marty McFly!****" <<endl <<endl;
        cout << "We are sending you back to the future, let's go!" <<endl <<endl;
        cout << "Please enter a # choice:" <<endl;
        cout << "1. Play" <<endl;
        cout << "2. Quit" <<endl <<endl;
        cin >> choice;
        cin.ignore();
        
        /*
        **ASK USER TO PLAY OR QUIT
        */
        if(choice == 1) {
            play = true;
        
            int choice2;
            
            /*
            **ASK TO VIEW RULES OR GO
            */
            cout << "Please enter a # choice:" <<endl;
            cout << "1.  View Rules" <<endl;
            cout << "2.  Go!" <<endl <<endl;
            cin >> choice2;
            cin.ignore();
        
            if(choice2 == 1) {
                cout << "You are Marty McFly!" <<endl;
                cout << "You have traveled back in time on a mission." <<endl;
                cout << "You must travel through the eras to find your Mom, Dad, and two prom tickets." <<endl;
                cout << "However, your DeLorean only has enough juice for you to travel 100 times," <<endl;
                cout << "and, you also must meet Doc at the clock tower before the lightning strikes." <<endl;
                cout << "In order to collect an item from an era you have travelled to, you must correctly " <<endl;
                cout << "guess the lyrics from a song of that era." <<endl;
                cout << "Once you have collected these items in your DeLorean, you must FIND THE ERA" <<endl;
                cout << "that plays that magical song to get your parents to kiss at the prom, " <<endl;
                cout << "therefore ensuring you exist!" <<endl <<endl;
                cout << "Once that song is played, sparks will fly, and you will finally be able to go BACK TO THE FUTURE!" <<endl <<endl;
                
                cout << "***REMEMBER, IF YOU NEVER PLAY that magical song, your parents will never fall in love and kiss" <<endl;
                cout << "AND the PASSAGEWAY to the future will never open up FOR YOU TO TRAVEL BACK TO THE FUTURE." <<endl <<endl;
                
                cout << "Goodluck, Marty McFly!" <<endl;
                cout << "*******************************************" <<endl <<endl;
                
                int choice4;
                Era * go2;
                
                /*
                **ASK WHICH ERA TO TRAVEL TO FIRST
                */
                cout << "Which era would you like to travel to first?" <<endl;
                cout << "1. 1990's" <<endl;
                cout << "2. 1980's" <<endl;
                cout << "3. 1970's" <<endl;
                cout << "4. 1960's" <<endl;
                cout << "5. 1950's" <<endl;
                cin >> choice4;
                cin.ignore();
                
                if(choice4 == 1){
                    go2 = nine;
                }
                if(choice4 == 2){
                    go2 = eight;
                }
                if(choice4 == 3){
                    go2 = seven;
                }
                if(choice4 == 4){
                    go2 = six;
                }
                if(choice4 == 5){
                    go2 = five;
                }
                
                /*
                **First travel
                */
                Era * temp = travel(go2, player);
                
                int timeLimit = 1;
                
                while(timeLimit < 100 && player->getCurrentLocation() != "FUTURE") {
                    Era * temp2 = travel(temp, player);
                    temp = temp2;
                    player->setCurrentLocation(temp->getYear());
                }
                
                if(player->getCurrentLocation() == "FUTURE") {
                    temp->message();
                    player->cleanDeLorean();
                }
                else {
                    cout << "Sorry Marty, you didn't make it back in time to the " <<endl;
                    cout << "clock tower for lightning to strike and give you the power the DeLorean needed " <<endl;
                    cout << "to take you BACK TO THE FUTURE.  Better luck next time!" <<endl <<endl;
                }
                
            }
            else if(choice2 ==2){
                int choice3;
                Era * go;
                
                /*
                **ASK WHICH ERA TO TRAVEL TO FIRST
                */
                 cout << "Which era would you like to travel to first?" <<endl;
                cout << "1. 1990's" <<endl;
                cout << "2. 1980's" <<endl;
                cout << "3. 1970's" <<endl;
                cout << "4. 1960's" <<endl;
                cout << "5. 1950's" <<endl;
                cin >> choice3;
                cin.ignore();
                
                if(choice3 == 1){
                    go = nine;
                }
                if(choice3 == 2){
                    go = eight;
                }
                if(choice3 == 3){
                    go = seven;
                }
                if(choice3 == 4){
                    go = six;
                }
                if(choice3 == 5){
                    go = five;
                }
                
                /*
                **First travel
                */
                Era * temp = travel(go, player);
                
                int timeLimit = 1;
                
                while(timeLimit < 100 && player->getCurrentLocation() != "FUTURE") {
                        Era * temp2 = travel(temp, player);
                        temp = temp2;
                        player->setCurrentLocation(temp->getYear());
                }
                
                if(player->getCurrentLocation() == "FUTURE") {
                    temp->message();
                    player->cleanDeLorean();
                }
                else {
                    cout << "Sorry Marty, you didn't make it back in time to the " <<endl;
                    cout << "clock tower for lightning to strike and give you the power the DeLorean needed " <<endl;
                    cout << "to take you BACK TO THE FUTURE.  Better luck next time!" <<endl <<endl;
                }
                
            }
        }
        else if(choice ==2){
            play = false;
            return 0;                                   //QUIT
        }
     
        
    }while(play == true);
    
     
    return 0;
}

/*************************************************************
 **Function:        travel(Era *&, Player *&)
 **Description:     Once the Era is accessed, it updates 
 **player's current location. 
 **
 **It asks the user if they want to remove anything by letting
 **them display the items, remove one, or ignore and continue.
 **
 **If the correct lyric is guessed, player can collect an item. 
 **
 **Player is given chance to listen to a song.  If the correct
 **song is played, and player has 3 certain items,
 **then the secretPassage pointer is activated and will appear 
 **for the user to choose.  Otherwise, the user is only
 **given the choice of 3 pointers to access--forward, backward,
 **and itself.
 **
 **After player chooses which direction they want to travel
 **to next, the function returns the pointer to that Era. 
 **
 **Parameters:          Era *& (Era to travel to) & Player *&
 **(Player since we are adjusting their private members)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era * travel(Era *& decade, Player *& player) {
    player->setCurrentLocation(decade->getYear());      //SET PLAYER'S CURRENT LOCATION
    
    decade->message();
    
    bool guessedCorrect;
    
    do {
        guessedCorrect = decade->lyric();
        
    }while(guessedCorrect != true);
    
    /*
    **ASK IF USER WANTS TO REMOVE ANYTHING
    */
    int choice3;
    
    do {
        cout << endl << "Would you like to view/remove any items in your DeLorean?" <<endl;
        cout << "1.  Display" <<endl;
        cout << "2.  Remove" <<endl;
        cout << "3.  None of the above.  Continue.." <<endl;
        cin >> choice3;
        cin.ignore();
        if(choice3 == 1){
            if(player->getNumberOfItems() != 0) {
                player->displayItems();
            }
            else{
                cout << "The DeLorean doesn't contain any items" <<endl;
            }
        }
        else if(choice3 == 2) {
            
            if((player->getNumberOfItems()) > 0) {
                cout << "Here are the items in your DeLorean: " <<endl;
                player->displayItems();
                cout << endl << "Please enter the number you want to remove:  " <<endl;
                cout << "1. Mom" <<endl;
                cout << "2. Dad" <<endl;
                cout << "3. Prom_Tickets" <<endl;
                cout << "4. Hoverboard" <<endl;
                cout << "5. Clock" <<endl;
                cout << "6. Doc" <<endl;
                cout << "7. Photograph" <<endl;
                cout << "8. Einstein" <<endl;
                
                int remove;
                string itemToRemove;
                cin >>remove;
                cin.ignore();
                if(remove == 1) { itemToRemove = "Mom";}
                if(remove == 2) { itemToRemove = "Dad";}
                if(remove == 3) { itemToRemove = "Prom_Tickets";}
                if(remove == 4) { itemToRemove = "Hoverboard";}
                if(remove == 5) { itemToRemove = "Clock";}
                if(remove == 6) { itemToRemove = "Doc";}
                if(remove == 7) { itemToRemove = "Photograph";}
                if(remove == 8) { itemToRemove = "Einstein";}
            
                player->remove(itemToRemove);
                cout << "You are trying to remove the item: " << itemToRemove <<endl;
                player->addNumberOfItems(-1);
            }
            else {
                cout << "There are no items in your DeLorean!" <<endl;
            }
        }
    }while(choice3 != 3);

    /*
    **COLLECT AN ITEM
    */
    int choice;
    int choice2;
    /*
     **THIS GIVES ACCESS TO SECRET PASSAGE WAY,
     **IF SONG IS NOT PLAYED,
     **ONLY FORWARD/BACKWARD/ITSELF AVAILABLE
     */
    bool songPlayed = false;
    
    
    string item = decade->collect();
    cout << "You found the item: " << item <<endl <<endl;
    cout << "Would you like to collect it in your DeLorean?" <<endl;
    cout << "1.  Yes" <<endl;
    cout << "2.  No" <<endl;
    cin >> choice;
    cin.ignore();
    if(choice == 1) {
        if(player->getNumberOfItems() < 8) {
            player->add(item);
            player->addNumberOfItems(1);
        }
        else {
            cout << "You already have the limit of 8 items!" <<endl;
            cout << "Better luck next time, you lost your chance to collect" <<endl;
            cout << "Please make sure to make room in your DeLorean for more items :)" <<endl <<endl;
        }
    }
    else if(choice == 2) {
        
    }
    
    /*
    **LISTEN TO A SONG?
    */
    cout << "Would you like to listen to a song?" <<endl;
    cout << "1.  Yes" <<endl;
    cout << "2.  No" <<endl;
    cin >> choice2;
    cin.ignore();
    if(choice2 == 1) {
        decade->song();
        songPlayed = true;
    }
    else if(choice2 == 2) {
        songPlayed = false;
    }
    
    /*
    **CHECK FOR CORRECT ITEMS
    */
    bool correctItems = false;
    bool mother = false;
    bool father = false;
    bool tickets = false;
    
    if(player->getNumberOfItems() != 0) {
        if(player->findIt("Mom")) {
            mother = true;
        }
        if(player->findIt("Dad")) {
            father = true;
        }
        if(player->findIt("Prom_Tickets")) {
            tickets = true;
        }
        /*
        **IF PLAYER HAS ALL ITEMS AND PLAYED THE SPECIAL SONG, 
        **THEY CAN SEE IF THE SECRET PASSAGE TAKES THEM TO THE FUTURE
        */
        if(mother == true && father == true && tickets == true && songPlayed == true) {
            correctItems = true;
        }
    }
        
    /*
    **ASK WHICH DECADE TO TRAVEL TO
    */
    Era * goThere;
    
    /*
    **IF ALL ITEMS ARE THERE, SECRET PASSAGEWAY AVAILABLE
    */
    if(correctItems == true) {
        int move;
        
        cout << "Where will you take the DeLorean to next...?" <<endl;
        cout << "1. Forward" <<endl;
        cout << "2. Backward" <<endl;
        cout << "3. Itself" <<endl;
        cout << "4. Secret" <<endl;
        cin >> move;
        cin.ignore();
        
        if(move == 1) {
            goThere = decade->getForward();
        }
        else if(move == 2) {
            goThere = decade->getBackward();
        }
        else if(move == 3) {
            goThere = decade->getItself();
        }
        else if(move == 4) {
            goThere = decade->getSecret();
        }
    }
    /*
    **IF NOT, ONLY 3 DIRECTIONS AVAILABLE
    */
    else if(correctItems == false) {
        int move2;
        
        cout << "Where will you take the DeLorean to next...?" <<endl;
        cout << "1. Forward" <<endl;
        cout << "2. Backward" <<endl;
        cout << "3. Itself" <<endl;
        cin >> move2;
        cin.ignore();
        
        if(move2 == 1) {
            goThere = decade->getForward();
        }
        else if(move2 == 2) {
            goThere = decade->getBackward();
        }
        else if(move2 == 3) {
            goThere = decade->getItself();
        }
    }

    return goThere;
    

}






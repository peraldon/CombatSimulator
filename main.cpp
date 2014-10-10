#include "Combat.h"
#include <iostream>

using namespace std;

//Sets up the Skeletons starting numbers, attack and defence
class Skeletons{
public:
    //Proxy methods to keep variables private
    int getSkeletonsAlive(){
        return skeletonsAlive;
    }
    int setSkeletonsAlive(int input){
        skeletonsAlive = input;
        return 0;
    }

    int getSkeletonsAttack(){
        return skeletonsAttack;
    }

    int getSkeletonsDefence(){
        return skeletonsDefence;
    }

private:
    int skeletonsAlive;
    int skeletonsAttack = 2;
    int skeletonsDefence = 5;
};


//Sets up the Humans starting numbers, attack and defence
class Humans{
public:
    //Proxy methods to keep variables private
    int getHumansAlive(){
        return humansAlive;
    }
    int setHumansAlive(int input){
        humansAlive = input;
        return 0;
    }
    int getHumansAttack(){
        return humansAttack;
    }
    int getHumansDefence(){
        return humansDefence;
    }

private:
    int humansAlive;
    int humansAttack = 3;
    int humansDefence = 6;

};

int main()
{
    //Setup objects
    Skeletons skeletonObject;
    Humans humanObject;
    Combat combatObject;

    //Declare variables
    int humanStartingCount;
    int skeletonStartingCount;

    //Startup output and input of starting army numbers
    cout << "\\|| Welcome to the Combat Simulator! ||//" << endl << "Please input how many Skeletons are in this fight!" << endl;
    cin >> skeletonStartingCount;
    cout << "Now please input the amount of starting Humans!" << endl;
    cin >> humanStartingCount;

    //Relays this across to the private vars in their corresponding classes
    skeletonObject.setSkeletonsAlive(skeletonStartingCount);
    humanObject.setHumansAlive(humanStartingCount);

    //Prints startup message
    cout << endl  << "-----------------------------" << endl << endl << "Please let the teams of " << skeletonObject.getSkeletonsAlive() << " skeletons, and " << humanObject.getHumansAlive() << " humans prepare for battle!" << endl;
    cout << endl << "-----------------------------" << endl;

    //Sends all the required information over to the Attack method in the Combat class
    combatObject.Attack(skeletonObject.getSkeletonsAlive(), humanObject.getHumansAlive(), skeletonObject.getSkeletonsAttack(), skeletonObject.getSkeletonsDefence(), humanObject.getHumansAlive(), humanObject.getHumansDefence());

    string endProgram = "0";

    cout << "Type something to close" << endl;
    cin >> endProgram;

}


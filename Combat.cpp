#include "Combat.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

//The math for the possibility of a Skeleton killing a Human
int Combat::SkeletonStrike(int skeletonAttack, int humanDefence){

    int skeletonAttackValue = skeletonAttack + (rand() % 6);
    if(skeletonAttackValue >= humanDefence){
        cout << "A human died!" << endl;

        return -1;
    }else{
        return 0;
    }
}

//The math for the possibility of a Human killing a Skeleton
int Combat::HumanStrike(int humanAttack, int skeletonDefence){

    int humanAttackValue = humanAttack + (rand() % 6);
    if(humanAttackValue >= skeletonDefence){
        cout << "A skeleton died!" << endl;
        return -1;
    }else{
        return 0;
    }

}

//The main method; has checks to see that both sides are alive, then continues calling the Strikes until that isn't true
int Combat::Attack(int skeletonsAlive, int humansAlive, int skeletonAttack, int skeletonDefence, int humanAttack, int humanDefence){
    int humansLeft = humansAlive;
    int skeletonsLeft = skeletonsAlive;

    while(skeletonsLeft > 0 && humansLeft > 0){
        humansLeft += SkeletonStrike(skeletonAttack, humanDefence);

        if(humansLeft > 0){
            skeletonsLeft += HumanStrike(humanAttack, skeletonDefence);
        }

    }

//IF statements to check which side won
    if(humansLeft > 0){
        cout << endl << "---------------" << endl << "THE HUMANS WIN!" << endl << "---------------" << endl << "There were " << humansLeft << " humans left after the battle." << endl;

    }else{
        cout << endl << "---------------" << endl << "THE SKELETONS WIN!" << endl << "---------------" << endl << "There were " << skeletonsLeft << " skeletons left after the battle." << endl;
    }
}

//Constructor creates seed for the random generator used in the Strike methods, which is based on time, to ensure that the see changes throughout the simulation
Combat::Combat(){

    srand(time(0));
}

#ifndef COMBAT_H
#define COMBAT_H


class Combat
{
    public:
        Combat();
        int Attack(int skeletonsAlive, int humansAlive, int skeletonAttack, int skeletonDefence, int humanAttack, int humanDefence);
    protected:
    private:
        int SkeletonStrike(int skeletonAttack, int humanDefence);
        int HumanStrike(int humanAttack, int skeletonDefence);
};

#endif // COMBAT_H

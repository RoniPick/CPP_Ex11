#include "doctest.h"
#include "sources/Game.hpp"
#include "sources/Team.hpp"
#include "sources/Schedule.hpp"
#include "sources/League.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>

using namespace ariel;
using namespace std;

TEST_CASE("Wrong checks"){
    vector<Team*> team;
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    CHECK_THROWS(new Team*("Roni", 0));
    CHECK_THROWS(new Team*("Roni", -1));
    CHECK_THROWS(new Team*("Roni", 1.1));

    CHECK_THROWS(new Team*("", 0.8));
    CHECK_THROWS(new Team*(" ", 0.7));
    CHECK_THROWS(new Team*("\n", 0.6));
    CHECK_THROWS(new Team*("\t", 0.5));


    Team* t1 = new Team*("Roni", 0.9);
    team.push_back(t1);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t2 = new Team*("Mish", 0.1);
    team.push_back(t2);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t3 = new Team*("Lior", 0.9);
    team.push_back(t3);
    Team* t4 = new Team*("Nir", 0.33);
    team.push_back(t4);
    Team* t5 = new Team*("Avi", 0.2);
    team.push_back(t5);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t6 = new Team*("May", 0.1);
    team.push_back(t6);
    Team* t7 = new Team*("Itzik", 0.67);
    team.push_back(t7);
    Team* t8 = new Team*("Eli", 0.2);
    team.push_back(t8);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t9 = new Team*("Alia", 0.12);
    team.push_back(t9);
    Team* t10 = new Team*("Bar", 0.9);
    team.push_back(t10);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t11 = new Team*("Anthon", 1);
    team.push_back(t11);
    Team* t12 = new Team*("Gal", 0.99);
    team.push_back(t12);
    Team* t13 = new Team*("Dan", 0.19);
    team.push_back(t13);
    Team* t14 = new Team*("Sela", 0.01);
    team.push_back(t14);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t15 = new Team*("Shimon", 0.96);
    team.push_back(t15);
    Team* t16 = new Team*("Debi", 0.95);
    team.push_back(t16);
    Team* t17 = new Team*("Adi", 0.89);
    team.push_back(t17);
    CHECK_THROWS(league l=new league(team));
    CHECK_THROWS(Schedule s=new league(team));

    Team* t18 = new Team*("Gili", 0.76);
    team.push_back(t18);
    Team* t19 = new Team*("Tal", 0.34);
    team.push_back(t19);
    Team* t20 = new Team*("Neta", 0.32);
    team.push_back(t20);


    CHECK_NOTHROW(league l=new league(team));
    CHECK_NOTHROW(Schedule s=new league(team));




}
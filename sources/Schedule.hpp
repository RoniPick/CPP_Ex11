#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"

using namespace std;

namespace ariel{
    class Schedule{
    public:
        vector<Game*> league;

        Schedule(vector<Team*> teamName){
            if(teamName.size() != 20){
                throw invalid_argument("League must be with 20 teams");
            }
            
        }
        ~Schedule();
    };
    
    Schedule::Schedule(/* args */){
    }
    
    Schedule::~Schedule(){
    }
    
    
}
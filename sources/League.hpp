#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#include "Team.hpp"

using namespace std;

namespace ariel{
    class league{
    private:
        vector<Team*> teams;
       

    public:
        bool leagueEnd = false;
        league(vector<Team*> t);
        ~league();
        
    };
    
    league::league(vector<Team*> t){
        if(t.size() != 20){
            throw invalid_argument("League must be with 20 teams");
        }

        //adding the 20 teams
        for(auto it = t.begin(); it < t.end(); it++){
            teams.push_back(it);
        }

    }
    
    league::~league(){
        for(auto it = t.begin(); it < t.end(); it++){
            delete teams.at((size_t)it);
        }
    }
    
    
}
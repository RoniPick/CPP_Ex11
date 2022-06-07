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
        vector<Team*> sced;

        Schedule(vector<Team*> teamName);
        ~Schedule();

        void startLeague();
    };
    
    Schedule::Schedule(vector<Team*> teamName){
        if(teamName.size() != 20){
            throw invalid_argument("League must be with 20 teams");
        }
            
        //creating the game list
        for(auto h = teamName.begin(); h < teamName.end(); h++){
            for(auto g = teamName.begin(); g < teamName.end(); g++){
                if(teamName.at(h)!=teamName.at(g)){
                    sced.push_back(new Game(*h, *g));
                    sced.push_back(new Game(*g, *h));
                } 
            }   
        }
    }
    
    Schedule::~Schedule(){
        for(auto s = sced.begin(); s < sced.end(); s++){
            delete sced.at((size_t)s);
        }
        
    }
    
    void Schedule::startLeague(){
        for(auto s = sced.begin(); s < sced.end()-1; s++){
            Game g = new Game(*s, *s+1);
        }
    }

    
}
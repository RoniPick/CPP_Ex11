#pragma once
#include<iostream>
#include "Team.hpp"

using namespace std;


namespace ariel{
    class Game{
    private:
        Team* host;
        Team* guest;
        size_t hostScore;
        size_t guestScore;

    public:
        Game(Team* h, Team* g);
        ~Game();
        void result();
        Team* winner();
    };
    
    Game::Game(Team* h, Team* g){
        this->guest = g;
        this->host = h;
        this->guestScore = 0;
        this->hostScore = 0;
        
    }
    
    Game::~Game(){
    }

    void Game::result(){
        this->hostScore = (rand()%(100-56)) + 55;
        this->guestScore = (rand()%(100-51)) + 50;
        this->hostScore += 10*((int)(this->guest->getUniqNum));
        this->guestScore += 10*((int)(this->host->getUniqNum));

        
    }

    Team* Game::winner(){
        if(this->guestScore > this->hostScore){
            this->guest->addWin();
            this->host->addLoss();
            return this->guest;
        }

        else{
            this->host->addWin();
            this->guest->addLoss();
            return this->host;
        }
    }

    
}
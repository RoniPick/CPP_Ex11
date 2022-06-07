#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"

using namespace std;

namespace ariel{
    class Team{
    private:
        string name;
        size_t uniqNum;
        size_t totalScore;
        size_t totalLoss;
        size_t winMaches;
        size_t lossMaches;

    public:
        Team(string n, size_t talent);
        ~Team();
        void addWin();
        void addLoss();
        const size_t getUniqNum();

    };
    
    Team::Team(string n, size_t talent){
        if(n == "" || n=="\n" || n == "\t" || n.empty()){
            throw invalid_argument("Invalid name");
        }
        if(talent < 0 || talent > 1){
           throw invalid_argument("Invalid number"); 
        }
        this->name = n;
        this->uniqNum = talent;
    }
    
    Team::~Team(){
    }
    
    Team::addWin(){
        this->winMaches++;
    }

    Team::addLoss(){
        this->lostMaches++;
    }

    const size_t getUniqNum(){
        return this->uniqNum;
    }
}
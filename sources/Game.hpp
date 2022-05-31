#pragma once
#include <string>

class Game{

public:
    class Team{
        std::string team_name;
        float skill_level;
        public:
        Team(std::string _name, float _skill);
    };

    Game();
};

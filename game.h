#ifndef GAME_H
#define GAME_H

#include "game_meta_data.h"

class Game {
    public:
        Game(){
            // No information about meta data given
            this->metaData = GameMetaData();
        }
        Game(GameMetaData metaData, QString localLocaton, unsigned int listLocation) {
            this->metaData = metaData;
            this->localLocaton = localLocaton;
            this->listLocation = listLocation;
        }
    private:
        GameMetaData            metaData; // Meta data for the game
        QString                 localLocaton; // Location on the local machine

        unsigned int            listLocation; // Location on the game list
};

#endif // GAME_H

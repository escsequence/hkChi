#ifndef GAME_META_DATA_H
#define GAME_META_DATA_H

#include <QString>

enum GameMetaDataPlayerCount {
    GPC_OnePlayer,
    GPC_TwoPlayer,
    GPC_TwoPlayerSim,
};

class GameMetaData
{
public:
    GameMetaData() {
        // Default information, if nothing is entered.
        name = "Untitled game";
        ID = "CLV-0-0000";
        releaseDate = "1900-01-01";
        playerCount = GPC_OnePlayer;
        publisher = "Unknown";
        commandLine = "?";
        compress = false;
    }
    GameMetaData(QString name,QString ID, QString releaseDate, QString publisher, QString commandLine, GameMetaDataPlayerCount playerCount, bool compressable){
        this->name = name;
        this->ID = ID;
        this->releaseDate = releaseDate;
        this->publisher = publisher;
        this->commandLine = commandLine;
        this->playerCount = playerCount;
        this->compress = compressable;
    }

    // Setters
    void setName(QString name){this->name = name;}
    void setID(QString ID){this->ID = ID;}
    void setReleaseDate(QString releaseDate){this->releaseDate = releaseDate;}
    void setPublisher(QString publisher){this->publisher = publisher;}
    void setCommandLine(QString commandLine){this->commandLine = commandLine;}
    void setPlayerCount(GameMetaDataPlayerCount count){this->playerCount = count;}
    void setCompressable(bool flag){this->compress = flag;}

    // Getters
    QString getName(){return this->name;}
    QString getID(){return this->ID;}
    QString getReleaseDate(){return this->releaseDate;}
    QString getPublisher(){return this->publisher;}
    QString getCommandLine(){return this->commandLine;}
    GameMetaDataPlayerCount getPlayerCount(){return this->playerCount;}
    bool getCompressable(){return this->compress;}

private:
    QString                             name;
    QString                             ID;
    QString                             releaseDate;
    QString                             publisher;
    QString                             commandLine;
    GameMetaDataPlayerCount             playerCount;
    bool                                compress;
};

#endif // GAME_META_DATA_H

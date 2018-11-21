#include "mainwindow.h"
#include "ui_mainwindow.h"

const bool DEBUG_RELEASE = false;
const char* DEBUG_RELEASE_POPUP_MSG = "Welcome to hkChi. CAUTION: This is an early build and you risk bricking your device.";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /**
       WARNING MESSAGE, REMOVE ME AFTER EARLY BUILDS ARE DONE,
       OR JUST CHANGE THE MESSAGE OF THE POP-UP.
    **/
    if (DEBUG_RELEASE) {
        QMessageBox Msgbox;
        Msgbox.setText(DEBUG_RELEASE_POPUP_MSG);
        Msgbox.exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAddMoreGames_clicked()
{
    loadGameFromMachine();
}

void MainWindow::loadGameFromMachine()
{
    //QFile gameFile = QFile();

    // Dialog box for local file location
    QString gameLocalFileLocation = QFileDialog::getOpenFileName(this,
            tr("Select game"), "",
            tr("ROM (*.nes *.gb *.gbc *.gba *.smc *.zip);;All Files (*)"));

    //addItemToGameList(gameName);
}

void MainWindow::addGame()
{

}

void MainWindow::addItemToGameList(QString name)
{
    QListWidgetItem *listItem = new QListWidgetItem();
    listItem->setText(name);
    listItem->setCheckState(Qt::Checked);
    ui->listWidgetGames->addItem(listItem);
}

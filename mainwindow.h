#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addGame();
    void loadGameFromMachine();
    void addItemToGameList(QString name = "New game");
    void on_pushButtonAddMoreGames_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

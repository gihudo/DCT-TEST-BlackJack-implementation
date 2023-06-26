#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "BlackJack/scene.h"
#include "BlackJack/game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_hitButton_clicked();

private:
    Ui::MainWindow *ui;
    BlackJack::Scene *scene;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <fstream>
#include "character.h"
#include <QMainWindow>
#include <cstdlib>
#include <ctime>
#include <QScrollArea>
#include <QWidget>
#include <QVBoxLayout>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<Character> characters;
    int indexOfCharacterToGuess;

private slots:
    void on_selectAnswerButton_clicked();

private:
    Ui::MainWindow *ui;
    void printCharacterInformation(int characterIndex);
    void checkCharacterGuess();
};
#endif // MAINWINDOW_H

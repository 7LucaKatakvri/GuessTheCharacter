#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    characters.push_back(Character("Gon", "Männlich", "Schwarz", "Mensch", "1-20", "Verstärkung", "Hunter Exam Arc"));
    characters.push_back(Character("Killua", "Männlich", "Weiß", "Mensch", "1-20", "Transmutation", "Hunter Exam Arc"));
    characters.push_back(Character("Kurapika", "Männlich", "Blond", "Mensch", "1-20", "Materialisation", "Hunter Exam Arc"));
    characters.push_back(Character("Leorio", "Männlich", "Schwarz", "Mensch", "1-20", "Verstärkung", "Hunter Exam Arc"));
    characters.push_back(Character("Hisoka", "Männlich", "Rot", "Mensch", "21-40", "Transmutation", "Hunter Exam Arc"));
    characters.push_back(Character("Chrollo Lucilfer", "Männlich", "Schwarz", "Mensch", "21-40", "Spezifisch", "Yorknew City Arc"));
    characters.push_back(Character("Biscuit", "Weiblich", "Blond", "Mensch", "41+", "Transmutation", "Greed Island Arc"));
    characters.push_back(Character("Neferpitou", "Weiblich", "Weiß", "Chimera Ant", "1-20", "Spezifisch", "Chimera Ant Arc"));
    characters.push_back(Character("Kite", "Männlich", "Weiß", "Mensch", "21-40", "Materialisation", "Chimera Ant Arc"));
    characters.push_back(Character("Alluka", "Weiblich", "Schwarz", "Mensch", "1-20", "Spezifisch", "Hunters Election Arc"));
    characters.push_back(Character("Menthuthuyoupi", "Männlich", "Schwarz", "Chimera Ant", "1-20", "Transmutation", "Chimera Ant Arc"));
    characters.push_back(Character("Shaiapouf", "Männlich", "Blond", "Chimera Ant", "1-20", "Manipulation", "Chimera Ant Arc"));
    characters.push_back(Character("Meruem", "Männlich", "bold", "Chimera Ant", "1-20", "Spezifisch", "Chimera Ant Arc"));
    characters.push_back(Character("Netero", "Männlich", "Weiß", "Mensch", "41+", "Verstärkung", "Hunter Exam Arc"));
    characters.push_back(Character("Ging", "Männlich", "Schwarz", "Mensch", "41+", "Spezifisch", "Hunter Exam Arc"));
    characters.push_back(Character("Uvogin", "Männlich", "Grau", "Mensch", "20-40", "Verstärkung", "Yorknew City Arc"));
    characters.push_back(Character("Machi", "Männlich", "Pink", "Mensch", "1-20", "Transmutation", "Heavens Arena Arc"));
    characters.push_back(Character("Feitan", "Männlich", "Schwarz", "Mensch", "20-40", "Transmutation", "Yorknew City Arc"));


    srand(time(0));
    indexOfCharacterToGuess = rand() % characters.size();



    QWidget *contentWidget = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(contentWidget);
            for (int i = 0; i < 50; ++i) {
             layout->addWidget(new QLabel("Label " + QString::number(i)));
    }
        QScrollArea *scrollArea = new QScrollArea;
     scrollArea->setWidget(contentWidget);
     scrollArea->setWidgetResizable(true);


    ui->setupUi(this);

    for (auto character : characters) {
        ui->charakterList->addItem(character.getName());
    }

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectAnswerButton_clicked()
{
    const int guessedCharacter = ui->charakterList->currentIndex().row();

    printCharacterInformation(guessedCharacter);
    checkCharacterGuess();

}

void MainWindow::printCharacterInformation(int characterIndex)
{
    ui->characterName->setText(QString(characters[characterIndex].getName()));
    ui->characterGender->setText(QString(characters[characterIndex].getGender()));
    ui->characterHairColor->setText(QString(characters[characterIndex].getHairColor()));
    ui->characterSpecies->setText(QString(characters[characterIndex].getSpecies()));
    ui->characterAge->setText(QString(characters[characterIndex].getAge()));
    ui->characterNenType->setText(QString(characters[characterIndex].getNenType()));
    ui->characterFirstArc->setText(QString(characters[characterIndex].getFirstArc()));
}

void MainWindow::checkCharacterGuess()
{
    if (ui->characterName->text() ==  characters[indexOfCharacterToGuess].getName()) { ui->characterName->setStyleSheet("background-color: green");
        ui->characterName->setTextInteractionFlags(Qt::NoTextInteraction);
    }
    else {ui->characterName->setStyleSheet("background-color: red");}

    if (ui->characterGender->text() ==  characters[indexOfCharacterToGuess].getGender()) {ui->characterGender->setStyleSheet("background-color: green");
        ui->characterGender->setTextInteractionFlags(Qt::NoTextInteraction);
    }
    else {ui->characterGender->setStyleSheet("background-color: red");}

    if (ui->characterHairColor->text() ==  characters[indexOfCharacterToGuess].getHairColor()) {ui->characterHairColor->setStyleSheet("background-color: green");}
    else {ui->characterHairColor->setStyleSheet("background-color: red");}

    if (ui->characterSpecies->text() ==  characters[indexOfCharacterToGuess].getSpecies()) {ui->characterSpecies->setStyleSheet("background-color: green");}
    else {ui->characterSpecies->setStyleSheet("background-color: red");}

    if (ui->characterAge->text() ==  characters[indexOfCharacterToGuess].getAge()) {ui->characterAge->setStyleSheet("background-color: green");}
    else {ui->characterAge->setStyleSheet("background-color: red");}

    if (ui->characterNenType->text() ==  characters[indexOfCharacterToGuess].getNenType()) {ui->characterNenType->setStyleSheet("background-color: green");}
    else {ui->characterNenType->setStyleSheet("background-color: red");}

    if (ui->characterFirstArc->text() ==  characters[indexOfCharacterToGuess].getFirstArc()) {ui->characterFirstArc->setStyleSheet("background-color: green");}
    else {ui->characterFirstArc->setStyleSheet("background-color: red");}
}


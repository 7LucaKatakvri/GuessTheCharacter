/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *selectAnswerButton;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_11;
    QListWidget *charakterList;
    QLabel *characterImage;
    QLabel *characterName;
    QLabel *characterGender;
    QLabel *characterHairColor;
    QLabel *characterAge;
    QLabel *characterNenType;
    QLabel *characterSpecies;
    QLabel *characterFirstArc;
    QLabel *label_20;
    QScrollBar *verticalScrollBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1798, 601);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1220, 220, 541, 81));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        pushButton->setFont(font);
        selectAnswerButton = new QPushButton(centralwidget);
        selectAnswerButton->setObjectName(QString::fromUtf8("selectAnswerButton"));
        selectAnswerButton->setGeometry(QRect(1220, 120, 541, 81));
        selectAnswerButton->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 310, 211, 81));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_2->setFrameShape(QFrame::Shape::Box);
        label_2->setLineWidth(3);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(890, 310, 211, 81));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        label_4->setFont(font2);
        label_4->setFrameShape(QFrame::Shape::Box);
        label_4->setLineWidth(3);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(670, 310, 211, 81));
        QFont font3;
        font3.setPointSize(19);
        font3.setBold(true);
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_3->setFont(font3);
        label_3->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_3->setFrameShape(QFrame::Shape::Box);
        label_3->setLineWidth(3);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 310, 211, 81));
        label_9->setFont(font3);
        label_9->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_9->setFrameShape(QFrame::Shape::Box);
        label_9->setLineWidth(3);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1550, 310, 211, 81));
        label_5->setFont(font3);
        label_5->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_5->setFrameShape(QFrame::Shape::Box);
        label_5->setLineWidth(3);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5->setWordWrap(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1110, 310, 211, 81));
        label_10->setFont(font3);
        label_10->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_10->setFrameShape(QFrame::Shape::Box);
        label_10->setLineWidth(3);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1330, 310, 211, 81));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setStyleStrategy(QFont::PreferAntialias);
        label_6->setFont(font4);
        label_6->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_6->setFrameShape(QFrame::Shape::Box);
        label_6->setLineWidth(3);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6->setWordWrap(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 310, 211, 81));
        label_11->setFont(font3);
        label_11->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_11->setFrameShape(QFrame::Shape::Box);
        label_11->setLineWidth(3);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        charakterList = new QListWidget(centralwidget);
        charakterList->setObjectName(QString::fromUtf8("charakterList"));
        charakterList->setGeometry(QRect(10, 11, 431, 281));
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        charakterList->setFont(font5);
        characterImage = new QLabel(centralwidget);
        characterImage->setObjectName(QString::fromUtf8("characterImage"));
        characterImage->setGeometry(QRect(10, 400, 211, 161));
        characterImage->setFont(font3);
        characterImage->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterImage->setFrameShape(QFrame::Shape::Box);
        characterImage->setLineWidth(3);
        characterImage->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterName = new QLabel(centralwidget);
        characterName->setObjectName(QString::fromUtf8("characterName"));
        characterName->setGeometry(QRect(230, 400, 211, 161));
        characterName->setFont(font3);
        characterName->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterName->setFrameShape(QFrame::Shape::Box);
        characterName->setLineWidth(3);
        characterName->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterGender = new QLabel(centralwidget);
        characterGender->setObjectName(QString::fromUtf8("characterGender"));
        characterGender->setGeometry(QRect(450, 400, 211, 161));
        characterGender->setFont(font3);
        characterGender->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterGender->setFrameShape(QFrame::Shape::Box);
        characterGender->setLineWidth(3);
        characterGender->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterHairColor = new QLabel(centralwidget);
        characterHairColor->setObjectName(QString::fromUtf8("characterHairColor"));
        characterHairColor->setGeometry(QRect(670, 400, 211, 161));
        characterHairColor->setFont(font3);
        characterHairColor->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterHairColor->setFrameShape(QFrame::Shape::Box);
        characterHairColor->setLineWidth(3);
        characterHairColor->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterAge = new QLabel(centralwidget);
        characterAge->setObjectName(QString::fromUtf8("characterAge"));
        characterAge->setGeometry(QRect(1110, 400, 211, 161));
        characterAge->setFont(font3);
        characterAge->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterAge->setFrameShape(QFrame::Shape::Box);
        characterAge->setLineWidth(3);
        characterAge->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterNenType = new QLabel(centralwidget);
        characterNenType->setObjectName(QString::fromUtf8("characterNenType"));
        characterNenType->setGeometry(QRect(1330, 400, 211, 161));
        characterNenType->setFont(font3);
        characterNenType->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterNenType->setFrameShape(QFrame::Shape::Box);
        characterNenType->setLineWidth(3);
        characterNenType->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterSpecies = new QLabel(centralwidget);
        characterSpecies->setObjectName(QString::fromUtf8("characterSpecies"));
        characterSpecies->setGeometry(QRect(890, 400, 211, 161));
        characterSpecies->setFont(font3);
        characterSpecies->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterSpecies->setFrameShape(QFrame::Shape::Box);
        characterSpecies->setLineWidth(3);
        characterSpecies->setAlignment(Qt::AlignmentFlag::AlignCenter);
        characterFirstArc = new QLabel(centralwidget);
        characterFirstArc->setObjectName(QString::fromUtf8("characterFirstArc"));
        characterFirstArc->setGeometry(QRect(1550, 400, 211, 161));
        characterFirstArc->setFont(font3);
        characterFirstArc->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        characterFirstArc->setFrameShape(QFrame::Shape::Box);
        characterFirstArc->setLineWidth(3);
        characterFirstArc->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(690, 10, 381, 291));
        label_20->setFont(font3);
        label_20->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        label_20->setFrameShape(QFrame::Shape::Box);
        label_20->setLineWidth(3);
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(1770, 310, 21, 441));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        verticalScrollBar->setInvertedAppearance(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1798, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Charakter anzeigen \360\237\221\200", nullptr));
        selectAnswerButton->setText(QCoreApplication::translate("MainWindow", "Auswahl bes\303\244tigen \342\234\205", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\342\231\200/\342\231\202", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Spezies", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Haarfarbe", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "First Arc", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Alter", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nen Type", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Bild", nullptr));
        characterImage->setText(QString());
        characterName->setText(QString());
        characterGender->setText(QString());
        characterHairColor->setText(QString());
        characterAge->setText(QString());
        characterNenType->setText(QString());
        characterSpecies->setText(QString());
        characterFirstArc->setText(QString());
        label_20->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

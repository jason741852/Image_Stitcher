/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pic_1;
    QLabel *display_1;
    QPushButton *pic_2;
    QLabel *display_2;
    QPushButton *Stitcher;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1028, 634);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pic_1 = new QPushButton(centralWidget);
        pic_1->setObjectName(QStringLiteral("pic_1"));
        pic_1->setGeometry(QRect(70, 370, 261, 131));
        display_1 = new QLabel(centralWidget);
        display_1->setObjectName(QStringLiteral("display_1"));
        display_1->setGeometry(QRect(60, 70, 271, 171));
        pic_2 = new QPushButton(centralWidget);
        pic_2->setObjectName(QStringLiteral("pic_2"));
        pic_2->setGeometry(QRect(470, 370, 261, 131));
        display_2 = new QLabel(centralWidget);
        display_2->setObjectName(QStringLiteral("display_2"));
        display_2->setGeometry(QRect(450, 70, 271, 171));
        Stitcher = new QPushButton(centralWidget);
        Stitcher->setObjectName(QStringLiteral("Stitcher"));
        Stitcher->setEnabled(false);
        Stitcher->setGeometry(QRect(810, 390, 191, 101));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1028, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pic_1->setText(QApplication::translate("MainWindow", "Left Image", 0));
        display_1->setText(QApplication::translate("MainWindow", "Left Image", 0));
        pic_2->setText(QApplication::translate("MainWindow", "Right Image", 0));
        display_2->setText(QApplication::translate("MainWindow", "Right Image", 0));
        Stitcher->setText(QApplication::translate("MainWindow", "Stitch!", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

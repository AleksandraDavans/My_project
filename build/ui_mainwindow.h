/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QPushButton *BtnResetTester;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QWidget *tab_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox;
    QLabel *label;
    QWidget *tab_3;
    QPushButton *BtnCreatePlot;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *read_btn;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuGf;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(703, 532);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("tester_arinc.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BtnResetTester = new QPushButton(centralWidget);
        BtnResetTester->setObjectName(QStringLiteral("BtnResetTester"));
        BtnResetTester->setGeometry(QRect(270, 280, 101, 23));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 671, 461));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 30, 501, 351));
        QFont font;
        font.setPointSize(15);
        groupBox_3->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 60, 221, 161));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 50, 281, 251));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 10, 271, 241));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 300, 241, 71));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 300, 211, 71));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(23, 48, 281, 251));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(2, 5, 271, 241));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        BtnCreatePlot = new QPushButton(tab_3);
        BtnCreatePlot->setObjectName(QStringLiteral("BtnCreatePlot"));
        BtnCreatePlot->setGeometry(QRect(170, 390, 121, 23));
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 521, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_3, QString());
        read_btn = new QPushButton(centralWidget);
        read_btn->setObjectName(QStringLiteral("read_btn"));
        read_btn->setGeometry(QRect(300, 230, 101, 23));
        read_btn->setCheckable(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 190, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_2->raise();
        read_btn->raise();
        BtnResetTester->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 703, 26));
        menuGf = new QMenu(menuBar);
        menuGf->setObjectName(QStringLiteral("menuGf"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGf->menuAction());
        menuBar->addAction(menu->menuAction());
        menuGf->addAction(action);
        menuGf->addAction(action_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Visual Analysis", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\320\262\320\260\320\277\320\262\320\277\320\262\320\260\320\277\320\262\320\277", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\320\276\321\200\320\277\320\276\320\277\320\276", Q_NULLPTR));
        BtnResetTester->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201 \321\202\320\265\321\201\321\202\320\265\321\200\320\260", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\227\320\236\320\235\320\253 \320\232\320\236\320\235\320\242\320\240\320\236\320\233\320\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", Q_NULLPTR));
        label_2->setText(QString());
        groupBox_2->setTitle(QString());
        label_5->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\255\321\202\320\260\320\273\320\276\320\275\320\275\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265</span></p><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">31.12.2016 17:00</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265</span></p><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">02.01.2017 17:00</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\230\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        BtnCreatePlot->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270", Q_NULLPTR));
        read_btn->setText(QApplication::translate("MainWindow", "\320\247\321\202\320\265\320\275\320\270\320\265 \320\272\320\260\320\275\320\260\320\273\320\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
        menuGf->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

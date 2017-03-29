#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QLibrary"
#include <windows.h>
#include "qcustomplot.h"

//extern QLibrary myLib;// файл библиотеки


namespace Ui {
class MainWindow;


}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private:
    //глобальныt переменные, не объявлять их тип повторно!
    Ui::MainWindow *ui;

    QCustomPlot *customPlot;    // Объявляем графическое полотно
    QCPGraph *graphic;          // Объявляем график
        QCPGraph *graphic1;          // Объявляем график

//    Qt::HANDLE COMnum;//handle на ком порт
    // char lpcod[4]; // номер версии библ
//    bool ready;
//    char num_port;
//    char num_buf;
//    QLibrary myLib;
//    int num_word;


private slots:
void slotRangeChanged (const QCPRange &newRange);
    void CreatePlot();// построение графика


};



#endif // MAINWINDOW_H

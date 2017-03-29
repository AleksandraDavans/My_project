
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QInputDialog>
#include <QTimer>
#include <QTime>
#include <QTableWidget>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    //_____________________________Коннект________________________________________


    QObject::connect(ui->BtnCreatePlot,SIGNAL(clicked()),this, SLOT(CreatePlot())); // запись в канал

    //    QPixmap myPixmap( "240.png" );
    //        ui->label->setPixmap( myPixmap );
    //        ui->label->setScaledContents(true);


    //    QPixmap myPixmap2( "2_45.png" );
    //    ui->label_5->setPixmap( myPixmap2);
    //    ui->label_5->setScaledContents(true);

    //        QPainter painter(this);
    //        painter.drawImage(0,0,img);

    //        QPainter p(this);
    //        p.drawPixmap(30, 30, QPixmap("240.png"));
    //    ui->label->setPixmap( QPixmap("240.png"));


    QImage img;
    img.load("240.png");
    ui->label->setPixmap( QPixmap(QPixmap::fromImage(img)));
    ui->label->setScaledContents(true);

    QImage img2;
    img2.load("2_45.png");
    ui->label_5->setPixmap( QPixmap(QPixmap::fromImage(img2)));
    ui->label_5->setScaledContents(true);


    qDebug() << QApplication::applicationDirPath();
    qDebug() << img;
    qDebug() << img2;

    int r = 0,g = 0,b = 0, a = 0;
    for ( int row = 0; row < img.height() ; ++row )
        for ( int col = 0; col < img.width() ; ++col )
        {
            QColor clrCurrent( img.pixel( col, row ) );
            r+=clrCurrent.red();
            g+=clrCurrent.green();
            b+=clrCurrent.blue();
            a+=clrCurrent.alpha();
        }

    qDebug() << "1_________ "
             << "Red: " << r/img.byteCount()
             << " Green: " << g/img.byteCount()
             << " Blue: " << b/img.byteCount()
             << " Alpha: " << a/img.byteCount();

    r = 0;g = 0;b = 0; a = 0;
    for ( int row = 0; row < img2.height() ; ++row )
        for ( int col = 0; col < img2.width() ; ++col )
        {
            QColor clrCurrent( img2.pixel( col, row ) );
            r+=clrCurrent.red();
            g+=clrCurrent.green();
            b+=clrCurrent.blue();
            a+=clrCurrent.alpha();
        }

    qDebug()<< "2_________ "
            << "Red: " << r/img.byteCount()
            << " Green: " << g/img.byteCount()
            << " Blue: " << b/img.byteCount()
            << " Alpha: " << a/img.byteCount();

}


MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::CreatePlot()
{

    customPlot = new QCustomPlot(); // Инициализируем графическое полотно
    ui->gridLayout->addWidget(customPlot,0,0,1,1);  // Устанавливаем customPlot в окно проложения


    customPlot->setInteraction(QCP::iRangeZoom,true);   // Включаем взаимодействие удаления/приближения
    customPlot->setInteraction(QCP::iRangeDrag, true);  // Включаем взаимодействие перетаскивания графика
    customPlot->axisRect()->setRangeDrag(Qt::Horizontal);   // Включаем перетаскивание только по горизонтальной оси
    customPlot->axisRect()->setRangeZoom(Qt::Horizontal);   // Включаем удаление/приближение только по горизонтальной оси
    customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);   // Подпись координат по Оси X в качестве Даты и Времени
    customPlot->xAxis->setDateTimeFormat("hh:mm");  // Устанавливаем формат даты и времени

    // Настраиваем шрифт по осям координат
    customPlot->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
    customPlot->yAxis->setTickLabelFont(QFont(QFont().family(), 8));

    // Автоматическое масштабирование тиков по Оси X
    customPlot->xAxis->setAutoTickStep(true);

    /* Делаем видимыми оси X и Y по верхней и правой границам графика,
       * но отключаем на них тики и подписи координат
       * */
    customPlot->xAxis2->setVisible(true);
    customPlot->yAxis2->setVisible(true);
    customPlot->xAxis2->setTicks(false);
    customPlot->yAxis2->setTicks(false);
    customPlot->xAxis2->setTickLabels(false);
    customPlot->yAxis2->setTickLabels(false);

    customPlot->yAxis->setTickLabelColor(QColor(Qt::red)); // Красный цвет подписей тиков по Оси Y
    customPlot->legend->setVisible(true);   //Включаем Легенду графика
    // Устанавливаем Легенду в левый верхний угол графика
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);

    // Инициализируем график и привязываем его к Осям
    graphic = new QCPGraph(customPlot->xAxis, customPlot->yAxis);
    customPlot->addPlottable(graphic);  // Устанавливаем график на полотно
    graphic->setName("Доход, Р");       // Устанавливаем
    graphic->setPen(QPen(QColor(Qt::red))); // Устанавливаем цвет графика
    graphic->setAntialiased(false);         // Отключаем сглаживание, по умолчанию включено
    graphic->setLineStyle(QCPGraph::lsImpulse); // График в виде импульсных тиков

    /* Подключаем сигнал от Оси X об изменении видимого диапазона координат
       * к СЛОТу для переустановки формата времени оси.
       * */
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)),
            this, SLOT(slotRangeChanged(QCPRange)));

    // Будем строить график с сегодняшнего дни и текущей секунды в будущее
    //   double now = QDateTime::currentDateTime().toTime_t();
    double now = QDateTime::fromString("01.01.2017 19:52:07", "dd.MM.yyyy HH:mm:ss").toTime_t();

    // Объявляем вектора времени и доходов
    QVector <double> time(400), income(400);

    srand(15); // Инициализируем генератор псевдослучайных чисел

    // Заполняем график значениями
    for (int i=0; i<400; ++i)
    {
        time[i] = now + 43200*i;
        income[i] = /*qFabs(income[i-1]) + */(i/50.0+1)*(rand()/(double)RAND_MAX-0.5);
    }

    graphic->setData(time, income); // Устанавливаем данные
    customPlot->rescaleAxes();      // Масштабируем график по данным
    customPlot->replot();           // Отрисовываем график


}




void MainWindow::slotRangeChanged(const QCPRange &newRange)
{
    /* Если область видимости графика меньше одного дня,
     * то отображаем часы и минуты по Оси X,
     * в противном случае отображаем дату "День Месяц Год"
     * */
    customPlot->xAxis->setDateTimeFormat((newRange.size() <= 86400)? "hh:mm" : "dd MMM yy");
}

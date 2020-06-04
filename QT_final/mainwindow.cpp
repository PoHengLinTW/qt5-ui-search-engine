#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chrono>
#include <ctime>
#include <QTimer>

static std::string date[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
static std::string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Nov", "Dec"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(setTime()));

    ui->setupUi(this);
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTime(){
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::string text = date[now->tm_wday] + ", " + month[now->tm_mon] + " " + std::to_string(now->tm_mday) + ", " + std::to_string(now->tm_year+1900);
    QString qtext = QString::fromStdString(text);
    ui->date->setText(qtext);

    text = std::to_string(now->tm_hour + 1) + " : " + std::to_string(now->tm_min + 1) + " : " + std::to_string(now->tm_sec + 1);
    qtext = QString::fromStdString(text);
    ui->time->setText(qtext);
}

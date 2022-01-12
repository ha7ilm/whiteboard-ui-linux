#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qprocess.h"
#include "qthread.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::xdotool(QString what)
{
    auto previousX = this->geometry().x();
    auto previousY = this->geometry().y();
    this->setVisible(false);
    QThread::msleep(300);
    QProcess::execute("xdotool "+what);
    this->setVisible(true);
    QThread::msleep(1);
    this->setGeometry(previousX,previousY,this->geometry().width(),this->geometry().height());
}
void MainWindow::on_pushButtonUndo_clicked()
{
     this->xdotool("key ctrl+z");
}

void MainWindow::on_pushButtonCtrlC_clicked()
{
     this->xdotool("key ctrl+c");
}

void MainWindow::on_pushButtonCtrlV_clicked()
{
     this->xdotool("key ctrl+v");
}

void MainWindow::on_pushButtonBakspace_clicked()
{
     this->xdotool("key BackSpace");
}

void MainWindow::on_pushButtonC1_clicked()
{
     this->xdotool("key Print");
}

void MainWindow::on_pushButtonC2_clicked()
{
     this->xdotool("key r e d Return");
}

void MainWindow::on_pushButtonC3_clicked()
{
     this->xdotool("key b l u e Return");
}

void MainWindow::on_pushButtonC4_clicked()
{
     this->xdotool("key 0 Return");
}

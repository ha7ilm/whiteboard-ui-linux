#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButtonUndo_clicked();

    void on_pushButtonCtrlC_clicked();

    void on_pushButtonCtrlV_clicked();

    void on_pushButtonBakspace_clicked();

    void on_pushButtonC1_clicked();

    void on_pushButtonC2_clicked();

    void on_pushButtonC3_clicked();

    void on_pushButtonC4_clicked();

private:
    Ui::MainWindow *ui;
    void xdotool(QString what);
};
#endif // MAINWINDOW_H

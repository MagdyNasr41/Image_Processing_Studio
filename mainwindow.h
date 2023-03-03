#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<Threshold.h>
#include<Image.h>

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

    void on_actionupload_triggered();

    void on_horizontalSlider_valueChanged(int value);

    void on_globalRadio_clicked();

    void on_submitThreshold_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

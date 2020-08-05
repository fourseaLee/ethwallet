#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "coinview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_btn_eth_submit_clicked();

    void on_actioneth_triggered();

private:
    Ui::MainWindow *ui;
    coinview view_table_;
};

#endif // MAINWINDOW_H

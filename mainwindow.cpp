#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "coinview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_eth_submit_clicked()
{

}

void MainWindow::on_actioneth_triggered()
{
    view_table_.show();
}

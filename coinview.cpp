#include "coinview.h"
#include "ui_coinview.h"

coinview::coinview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coinview)
{
    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    setWindowModality(Qt::WindowModal);
    ui->setupUi(this);

}

coinview::~coinview()
{
    delete ui;
}

void coinview::on_btn_search_clicked()
{

}

void coinview::on_btn_close_clicked()
{
    this->close();
}

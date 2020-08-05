#include "configdialog.h"
#include "ui_configdialog.h"

ConfigDialog::ConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigDialog)
{
    ui->setupUi(this);
}

ConfigDialog::~ConfigDialog()
{
    delete ui;
}

void ConfigDialog::on_pushButton_clicked()
{
    QString privkey = "privkey";
    QString pubkey = "pubkey";
    ui->lineEdit_privkey->setText(privkey);
    ui->lineEdit_pubkey->setText(pubkey);
}

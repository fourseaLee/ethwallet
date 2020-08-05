#ifndef COINVIEW_H
#define COINVIEW_H

#include <QWidget>

namespace Ui {
class coinview;
}

class coinview : public QWidget
{
    Q_OBJECT

public:
    explicit coinview(QWidget *parent = nullptr);
    ~coinview();

private slots:
    void on_btn_search_clicked();

    void on_btn_close_clicked();

private:
    Ui::coinview *ui;
};

#endif // COINVIEW_H

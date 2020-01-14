#ifndef SECONDEASYLEVEL_H
#define SECONDEASYLEVEL_H

#include <QDialog>

namespace Ui {
class secondeasylevel;
}

class secondeasylevel : public QDialog
{
    Q_OBJECT

public:
    explicit secondeasylevel(QWidget *parent = nullptr);
    ~secondeasylevel();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::secondeasylevel *ui;
};

#endif // SECONDEASYLEVEL_H

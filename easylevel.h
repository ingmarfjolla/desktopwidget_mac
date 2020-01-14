#ifndef EASYLEVEL_H
#define EASYLEVEL_H

#include <QDialog>

namespace Ui {
class Easylevel;
}

class Easylevel : public QDialog
{
    Q_OBJECT

public:
    explicit Easylevel(QWidget *parent = nullptr);
    ~Easylevel();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Easylevel *ui;
};

#endif // EASYLEVEL_H

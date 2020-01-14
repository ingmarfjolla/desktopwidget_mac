#ifndef EASYLEVEL_ONE_H
#define EASYLEVEL_ONE_H

#include <QDialog>

namespace Ui {
class easylevel_one;
}

class easylevel_one : public QDialog
{
    Q_OBJECT

public:
    explicit easylevel_one(QWidget *parent = nullptr);
    ~easylevel_one();

private:
    Ui::easylevel_one *ui;
};

#endif // EASYLEVEL_ONE_H

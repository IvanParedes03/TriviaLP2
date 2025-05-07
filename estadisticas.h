#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include <QDialog>

namespace Ui {
class estadisticas;
}

class estadisticas : public QDialog
{
    Q_OBJECT

public:
    explicit estadisticas(QWidget *parent = nullptr);
    ~estadisticas();
    void setRanking();

private:
    Ui::estadisticas *ui;
};

#endif // ESTADISTICAS_H

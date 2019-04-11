#ifndef COMPOSE_H
#define COMPOSE_H

#include <QDialog>
#include <QDir>
#include <QFileInfo>
#include <QCoreApplication>


namespace Ui {
class Compose;
}

class Compose : public QDialog
{
    Q_OBJECT

public:
    explicit Compose(QWidget *parent = nullptr);
    ~Compose();

private:
    Ui::Compose *ui;
};

#endif // COMPOSE_H

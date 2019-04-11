#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(610,410));
}

Settings::~Settings()
{
    delete ui;
}

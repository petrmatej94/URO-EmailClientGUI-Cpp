#include "mylistitem.h"
#include "ui_mylistitem.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MyListItem::MyListItem(QWidget *parent, QString header) :
    QWidget(parent),
    ui(new Ui::MyListItem)
{
    ui->setupUi(this);
    ui->label_header->setText(header);
    this->header = header;
    this->parent = parent;


    ui->label_message->setText(message.left(55) + "...");
}


MyListItem::~MyListItem()
{
    delete ui;
}

void MyListItem::update(QString header)
{
    ui->label_header->setText(header);
    this->header = header;
    this->setStyleSheet("background-color: #DAE1EC");
}

void MyListItem::on_MyListItem_customContextMenuRequested(const QPoint &pos)
{
}

void MyListItem::mousePressEvent(QMouseEvent *event)
{
    this->isClicked = true;
//    this->setStyleSheet("background-color: white");
}


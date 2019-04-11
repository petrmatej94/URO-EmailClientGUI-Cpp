#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    printf("asdsaasds");
    ui->setupUi(this);
    this->setMinimumSize(QSize(1200,740));

    ui->menuWidget->setMaximumWidth(200);
    ui->menuWidget_2->setMaximumWidth(350);

    MyListItem *item = new MyListItem();
    ui->lbl_message->setText(item->message);
    ui->widget->hide();

    //Load default inbox emails
    for(int i = 0; i < 20; i++)
    {
        QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->listWidget);
        ui->listWidget->addItem (listWidgetItem);
        MyListItem *myListItem = new MyListItem(this, "Inbox email no." + QString::number(i));

        listWidgetItem->setSizeHint (myListItem->sizeHint ());
        ui->listWidget->setItemWidget (listWidgetItem, myListItem);

        myListItemsArray[i] = myListItem;

    }

    connect(ui->actionSettings, SIGNAL(triggered()), this, SLOT(openSettings()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSettings()
{
    settings = new Settings(this);
    settings->show();
}

void MainWindow::on_composeButton_clicked()
{
    compose_window = new Compose(this);
    compose_window->show();
}

void MainWindow::on_inboxButton_clicked()
{
    this->update_emails("Inbox ");
}

void MainWindow::on_draftsButton_clicked()
{
    this->update_emails("Drafts ");
}

void MainWindow::on_sentButton_clicked()
{
    this->update_emails("Sent ");
}

void MainWindow::on_spamButton_clicked()
{
    this->update_emails("Spam ");
}

void MainWindow::on_trashButton_clicked()
{
    this->update_emails("Trash ");
}


void MainWindow::update_emails(QString header)
{

    for(int i = 0; i < 20; i++)
    {
        QString h = header + "email no." + QString::number(i);
        this->myListItemsArray[i]->update(h);
    }
}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    ui->label_no_email->hide();
    ui->widget->show();

    for(int i = 0; i < 20; i++)
    {
        this->myListItemsArray[i]->setStyleSheet("background-color: #DAE1EC");
        if(this->myListItemsArray[i]->isClicked == true)
        {
            this->myListItemsArray[i]->setStyleSheet("background-color: white");
            ui->lbl_header->setText(this->myListItemsArray[i]->header);
        }
        this->myListItemsArray[i]->isClicked = false;
    }
}

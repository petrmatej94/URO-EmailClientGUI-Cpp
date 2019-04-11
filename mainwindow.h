#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QString>
#include "settings.h"
#include "compose.h"
#include "mylistitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void update_emails(QString header);
    MyListItem *myListItemsArray[20];

private slots:
    void on_composeButton_clicked();
    void on_inboxButton_clicked();
    void on_draftsButton_clicked();
    void on_sentButton_clicked();
    void on_spamButton_clicked();
    void on_trashButton_clicked();
    void on_listWidget_currentRowChanged(int currentRow);
    void openSettings();

private:
    Ui::MainWindow *ui;
    Settings *settings;
    Compose *compose_window;
};

#endif // MAINWINDOW_H

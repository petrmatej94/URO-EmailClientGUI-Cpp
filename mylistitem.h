#ifndef MYLISTITEM_H
#define MYLISTITEM_H

#include <QWidget>
#include <QString>
#include <QDebug>

namespace Ui {
class MyListItem;
}

class MyListItem : public QWidget
{
    Q_OBJECT


public:
    explicit MyListItem(QWidget *parent = nullptr, QString text = "");
    ~MyListItem();
    void update(QString header);
    bool isClicked = false;
    QString header;
    QString message = "Pellentesque ut ex nisl. Sed feugiat posuere nunc, sed mattis sapien sollicitudin quis. \n\nDuis in tortor " \
                    "at dui blandit tempor. Vivamus scelerisque interdum pretium. Suspendisse et egestas leo, a ullamcorper " \
                    "erat. In fringilla leo nunc, eu faucibus dui pharetra nec. Ut sodales pulvinar quam, quis cursus metus. " \
                    "Aenean elementum nisl a mauris ullamcorper rhoncus. Donec viverra, leo et ullamcorper ultrices, " \
                    "ante dui dapibus urna, vitae euismod quam erat sit amet nulla. Sed quis auctor eros. Nam nec viverra " \
                    "lacus, non posuere lacus. Suspendisse facilisis aliquam faucibus.Pellentesque quam purus, bibendum vel " \
                    "orci sed, eleifend sagittis nibh. Pellentesque  " \
                    "justo, eu aliquam leo consequat ac. Aenean vitae " \
                    "porta. Cras porta mattis sem quis tristique. Donec cursus nisi quis pretium ultrices. Nam ac eros dui. " \
                    "Nam consequat suscipit lacus ac congue. Maecenas dapibus laoreet nisi nec dignissim. \n\nDuis eget nisl eu " \
                    "dui fringilla vehicula sed ut augue. Maecenas vel tortor nibh. Morbi nec pellentesque ante, ac ultricies " \
                    "odio. Praesent et enim vel nisi gravida bibendum at et diam. In at est quis elit viverra dictum. ";


private slots:
    void on_MyListItem_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MyListItem *ui;
    QString from = "Petr.matej@vsb.cz";
    QWidget *parent;

protected:
    void mousePressEvent(QMouseEvent *event) override;
};


#endif // MYLISTITEM_H

#include "compose.h"
#include "ui_compose.h"
#include <limits.h>
#include <stdlib.h>

Compose::Compose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Compose)
{
    ui->setupUi(this);


//    QString project_path = "C:/Users/PMate/OneDrive/Plocha/QtProject/EmailClient";

//    ui->label_20->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_undo_black_18dp.png")));
//    ui->label_21->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_redo_black_18dp.png")));
//    ui->label_22->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_add_black_18dp.png")));
//    ui->label_23->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_attach_file_black_18dp.png")));
//    ui->label_24->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_backspace_black_18dp.png")));
//    ui->label_25->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_create_black_18dp.png")));
//    ui->label_26->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_format_bold_black_18dp.png")));
//    ui->label_27->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_format_clear_black_18dp.png")));
//    ui->label_28->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_format_color_fill_black_18dp.png")));
//    ui->label_29->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_format_color_text_black_18dp.png")));
//    ui->label_30->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_format_underlined_black_18dp.png")));
//    ui->label_31->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_link_black_18dp.png")));
//    ui->label_32->setPixmap(QPixmap(QString::fromUtf8(project_path.toUtf8() + "/images/toolbar/baseline_sort_black_18dp.png")));

}

Compose::~Compose()
{
    delete ui;
}

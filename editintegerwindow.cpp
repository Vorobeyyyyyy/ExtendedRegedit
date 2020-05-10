#include "editintegerwindow.h"
#include "ui_editintegerwindow.h"

EditIntegerWindow::EditIntegerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditIntegerWindow)
{
    ui->setupUi(this);
}

EditIntegerWindow::~EditIntegerWindow()
{
    delete ui;
}

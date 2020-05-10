#include "editbinarywindow.h"
#include "ui_editbinarywindow.h"

EditBinaryWindow::EditBinaryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditBinaryWindow)
{
    ui->setupUi(this);
}

EditBinaryWindow::~EditBinaryWindow()
{
    delete ui;
}

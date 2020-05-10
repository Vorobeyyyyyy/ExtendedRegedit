#include "editstringwindow.h"
#include "ui_editstringwindow.h"

EditStringWindow::EditStringWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditStringWindow)
{
    ui->setupUi(this);
}

EditStringWindow::~EditStringWindow()
{
    delete ui;
}

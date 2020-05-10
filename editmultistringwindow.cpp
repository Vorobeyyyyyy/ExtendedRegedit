#include "editmultistringwindow.h"
#include "ui_editmultistringwindow.h"

EditMultistringWindow::EditMultistringWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditMultistringWindow)
{
    ui->setupUi(this);
}

EditMultistringWindow::~EditMultistringWindow()
{
    delete ui;
}

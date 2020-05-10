#ifndef EDITBINARYWINDOW_H
#define EDITBINARYWINDOW_H

#include <QDialog>

namespace Ui {
class EditBinaryWindow;
}

class EditBinaryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditBinaryWindow(QWidget *parent = nullptr);
    ~EditBinaryWindow();

private:
    Ui::EditBinaryWindow *ui;
};

#endif // EDITBINARYWINDOW_H

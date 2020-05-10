#ifndef EDITSTRINGWINDOW_H
#define EDITSTRINGWINDOW_H

#include <QDialog>

namespace Ui {
class EditStringWindow;
}

class EditStringWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditStringWindow(QWidget *parent = nullptr);
    ~EditStringWindow();

private:
    Ui::EditStringWindow *ui;
};

#endif // EDITSTRINGWINDOW_H

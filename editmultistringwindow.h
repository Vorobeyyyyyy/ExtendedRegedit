#ifndef EDITMULTISTRINGWINDOW_H
#define EDITMULTISTRINGWINDOW_H

#include <QDialog>

namespace Ui {
class EditMultistringWindow;
}

class EditMultistringWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditMultistringWindow(QWidget *parent = nullptr);
    ~EditMultistringWindow();

private:
    Ui::EditMultistringWindow *ui;
};

#endif // EDITMULTISTRINGWINDOW_H

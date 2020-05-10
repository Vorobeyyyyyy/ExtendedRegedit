#ifndef EDITINTEGERWINDOW_H
#define EDITINTEGERWINDOW_H

#include <QDialog>

namespace Ui {
class EditIntegerWindow;
}

class EditIntegerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditIntegerWindow(QWidget *parent = nullptr);
    ~EditIntegerWindow();

private:
    Ui::EditIntegerWindow *ui;
};

#endif // EDITINTEGERWINDOW_H

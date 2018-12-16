#ifndef DESIGN_WINDOW_HPP
#define DESIGN_WINDOW_HPP

#include <QMainWindow>

namespace Ui {
class DesignWindow;
}

class DesignWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DesignWindow(QWidget *parent = nullptr);
    ~DesignWindow();

private:
    Ui::DesignWindow *ui;
};

#endif // DESIGN_WINDOW_HPP
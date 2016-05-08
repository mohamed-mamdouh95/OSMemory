#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_add_clicked();

    void on_initalize_clicked();

    void on_process_add_clicked();

    void on_reset_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "allocation.h"
#include <QString>
#include "entity.h"
#include "memory.h"
#include <QList>
Entity h(false);
Memory memo;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
   QString a = ui->address->text();
   QString s =ui->size->text();
   h.set_base_address(a.toInt());
   h.set_size(s.toInt());
   memo.push_element(h);
}

void MainWindow::on_initalize_clicked()
{
     ui->out->setText(Memory::print(memo));
}

void MainWindow::on_process_add_clicked()
{
    Entity pro(true);
    QString a = ui->process_name->text();
    QString s =ui->process_size->text();
    pro.set_name(a);
    pro.set_size(s.toInt());
   if(ui->first->isChecked())
   {
       Allocation::FirstFit(memo,pro);
   }
   else if(ui->best->isChecked())
   {
       Allocation::BestFit(memo,pro);
   }
   else if(ui->worst->isChecked())
   {
       Allocation::WorstFit(memo,pro);
   }

}

void MainWindow::on_reset_clicked()
{
    memo.reset();
    ui->out->clear();

}

void MainWindow::on_exit_clicked()
{
    close();
}

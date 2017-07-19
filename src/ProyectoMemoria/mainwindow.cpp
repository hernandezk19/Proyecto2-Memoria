#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "memoriaaritmetica.h"
#include "memoriatraduccion.h"
#include "memoriasonidos.h"

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

void MainWindow::on_pushButton_2_clicked()
{
    MemoriaAritmetica *ventanaAritmetica = new MemoriaAritmetica();
    ventanaAritmetica->show();
    this->hide();
}

void MainWindow::on_pushButton_3_clicked()
{
    MemoriaTraduccion *ventanaTraduccion = new MemoriaTraduccion();
    ventanaTraduccion->show();
    this->hide();
}

void MainWindow::on_pushButton_clicked()
{
    MemoriaSonidos *ventanaSonidos = new MemoriaSonidos();
    ventanaSonidos->show();
    this->hide();
}

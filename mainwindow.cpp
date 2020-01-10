#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    centralWidget()->setStyleSheet("background-color: rgb(20, 20, 20); border: 1px solid rgb(30, 30, 30);");
    QGridLayout *layout = new QGridLayout(centralWidget());
    centralWidget()->setLayout(layout);
    centralWidget()->layout()->setSpacing(0);
    centralWidget()->layout()->setMargin(0);
    centralWidget()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 100; j++) {
            QWidget *w = new QWidget(centralWidget());
            w->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            layout->addWidget(w, i, j);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


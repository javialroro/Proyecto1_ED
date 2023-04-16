
#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "procedimientos.h"


//listaClientes *lista = new listaClientes();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void updateUI(Queue<int>& queue, QMutex& mutex, QTextEdit* textEdit) {
    mutex.lock();
    textEdit->clear();
    textEdit->append("Queue size: " + QString::number(queue.size()));
    textEdit->append("Queue contents:");
    for (const int& value : queue) {
        textEdit->append(QString::number(value));
    }
    mutex.unlock();
}

void MainWindow::on_btnColaPedidos_clicked()
{
    //cargarClientes(lista);
}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);


    QTimer timer;
    timer.setInterval(1000);
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        updateUI(g_queue, g_mutex, ui->textEdit);
    });
    timer.start();


    return app.exec();
}


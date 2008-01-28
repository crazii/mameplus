#ifndef _QMC2_MAIN_H_
#define _QMC2_MAIN_H_

#include <QApplication>
#include "ui_qmc2main.h"
//mamep temp
#include <QListWidgetItem>

#define LOG_QMC2	1
#define LOG_MAME	2

class MainWindow : public QMainWindow, public Ui::MainWindow
{
  Q_OBJECT

  public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();

  public slots:
    // game menu
    void on_actionReload_activated();
    void log(char, QString);
    void init();

  protected:
};

#endif

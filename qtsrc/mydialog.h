#ifndef MYDIALOG_H
#define MYDIALOG_H
 
#include "ui_dialog.h"
 
 
class myQtApp : public QWidget, private Ui::myQtAppDLG
{
    Q_OBJECT
 
public:
    myQtApp(QWidget *parent = 0);
 
 
public slots:
    void getPath();
    void doSomething();
    void clear();
    void about();
};
 
 
#endif
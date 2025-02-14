#include "mainwindow.h"
#include <QApplication>

int main(int argc,char* argv[])
    {
#ifdef Q_OS_WIN32
    _setmaxstdio(8192);
#endif

    QApplication::setAttribute(Qt::AA_UseOpenGLES);
    QApplication a(argc,argv);
    QCoreApplication::setOrganizationName("CartoType");
    QCoreApplication::setOrganizationDomain("cartotype.com");
    QCoreApplication::setApplicationName("Maps");
    MainWindow w;
    w.show();

    return a.exec();
    }

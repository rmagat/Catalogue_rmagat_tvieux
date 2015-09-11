/**
 * @author robin magat
 * @file pdf.cpp
 * @date 11/09/2015
 * @brief toutes les fonctions et constructeurs
 */

#include <QApplication>
#include "mainwindow.h"

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}

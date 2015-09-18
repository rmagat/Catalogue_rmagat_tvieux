#include "pdf.h"

/**
 * @author robin magat
 * @file pdf.cpp
 * @date 11/09/2015
 * @brief toutes les fonctions et constructeurs
 */

#include <QApplication>
#include <QtGui/QPrinter>
#include <QtGui/QPainter>


/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPrinter printer(QPrinter::HighResolution);
    printer.setFullPage(QPrinter::A4);
    printer.setOutputFormat(QPrinter::NativeFormat);
    printer.setOutputFileName("catalogue.pdf");
    QPainter painter;
    painter.begin(&printer);
    painter.setFont(QFont("Tahoma",8));
    painter.drawText(200,200,"HELOOOO");
    painter.end();

    return 0;
}

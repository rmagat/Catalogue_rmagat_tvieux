/**
 * @author robin magat
 * @file pdf.h
 * @date 11/09/2015
 * @brief création de la classe pdf
 */

#ifndef PDF_H
#define PDF_H
#include <QString>

/**
 * @brief La classe Pdf class
 */
class Pdf
{
private:
    //l'id du pdf
    int idPdf;
    //le ,nom du document
    QString nomDocument;
public:
    //constructeur de la classe Pdf
    Pdf(int id, QString n);
};

#endif // PDF_H

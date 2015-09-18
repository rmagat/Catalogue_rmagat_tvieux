/**
 * @author robin magat
 * @file pdf.h
 * @date 11/09/2015
 * @brief création de la classe pdf
 */

#ifndef PDF_H
#define PDF_H
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QSqlRelationalDelegate>

/**
 * @brief La classe Pdf class
 * public:
 * le constructeur du pdf
 * la procedure pour ecrire un text
 * la procedure qui charge les images
 * la procédure qui fermer le document en l'enregistrant
 * private:
 * idPdf, l'identifiant du pdf
 * nomDocument, le nom du document
 */
class Pdf
{
private:
    //l'id du pdf
    int idPdf;
    //le ,nom du document
    QString nomDocument;
    QSqlDatabase * maBase;
public:
    //constructeur de la classe Pdf
    Pdf(int id, QString n);
    //Écrit le contenu de la string de caractères leTexte dans le document PDF
    void ecrireTexte();
    //Insère dans le document l'image dont le chemin d'accès est passé en paramètre
    void chargerImage();
    //Ferme le document en l'enregistrant
    void fermer();
};

#endif // PDF_H

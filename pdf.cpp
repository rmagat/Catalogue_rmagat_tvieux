/**
 * @author robin magat
 * @file pdf.cpp
 * @date 11/09/2015
 * @brief toutes les fonctions et constructeurs
 */

#include "pdf.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>


/**
 * @brief Constructeur de la classe pdf
 * @param idPdf
 * @param nomDocument
 */
Pdf::Pdf(int id, QString n)
{
    idPdf=id;
    nomDocument=n;
}

/**
 * @brief Écrit le contenu de la string de caractères
 * leTexte dans le document PDF
 */
void Pdf::ecrireTexte()
{

}

/**
 * @brief Insère dans le document l'image dont le
 * chemin d'accès est passé en paramètre
 */
void Pdf::chargerImage()
{

}

/**
 * @brief Ferme le document en l'enregistrant
 */
void Pdf::fermer()
{

}
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
maBase=new QSqlDatabase(db);
maBase->setHostName("localhost");
     maBase->setDatabaseName("NewWorld");
     maBase->setUserName("tvieux");
     maBase->setPassword("ini01");
     bool ok = maBase->open();
     if(!ok)
     {
         QMessageBox::warning(this,"New World BackOffice","la connexion a la base de donnée a echouer \n Veuillez verifier que le service mysql est lancer sur localhost",QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok);
     }

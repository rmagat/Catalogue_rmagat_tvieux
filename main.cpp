#include "pdf.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlRelationalDelegate>
/**
 * @author robin magat
 * @file pdf.cpp
 * @date 11/09/2015
 * @brief toutes les fonctions et constructeurs
 */

#include <QApplication>

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
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

    
    return a.exec();
}

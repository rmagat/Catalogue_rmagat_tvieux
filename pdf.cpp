/**
 * @author robin magat
 * @file pdf.cpp
 * @date 11/09/2015
 * @brief toutes les fonctions et constructeurs
 */

#include "pdf.h"

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

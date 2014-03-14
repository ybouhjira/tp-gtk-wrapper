#include <stdio.h>
#include "fonctions.h"

int main(int argc, char **argv)
{
  initialiser(&argc, &argv);

  Widget *fen = fenetre_creer("Ma fenetre", .estPrincipale = TRUE);
  Widget *hbox = conteneur_h_creer();
  Widget *vbox = conteneur_v_creer();

  conteneur_ajouter(fen, hbox);
  conteneur_ajouter(hbox, vbox);


  Widget *bouton1 = bouton_creer("bouton1");
  Widget *bouton2 = bouton_creer("bouton2");
  Widget *bouton3 = bouton_creer("bouton3");

  Widget *checkbox = checkbox_creer("Case à cocher!!");

  Widget *menu = menu_creer(3, "Element 1", "Element 2", "Element 3");

  conteneur_ajouter(vbox, bouton1);
  conteneur_ajouter(vbox, bouton2);
  conteneur_ajouter(vbox, checkbox);

  conteneur_ajouter(hbox, bouton3);
  conteneur_ajouter(hbox, menu);


  fenetre_afficher(fen);
  boucle_principale();
  return 0;
}


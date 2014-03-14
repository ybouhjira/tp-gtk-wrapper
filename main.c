#include <stdio.h>
#include "fonctions.h"

int main(int argc, char **argv)
{
  initialiser(&argc, &argv);

  Widget *fen = fenetre_creer("Ma fenetre", .estPrincipale = TRUE);

  fenetre_afficher(fen);
  boucle_principale();
  return 0;
}


#ifndef MACROS_H
#define MACROS_H

/**
  * Macros pour la déclaration de fonctions ayant des paramètres
  * facultatifs avec valeur par défauts
  *
  * Utilisation : ---------------------------------------------------------
  * func_declare(type_retour, nom_fonction, type1 param1; type2 param2;
  *    ... typeN paramN;)
  *
  * #define nom_fonction(...) func_link(nom_fonction, __VA_ARGS__)
  *
  * func_head(type_retour, nom_fonction)
  * {
  *   type1 param_default(param1, valeur_par_default1);
  *   type2 param_default(param2, valeur_par_default2);
  *   ...
  *   typeN param_default(paramN, valeur_par_defaultN);
  *
  *   // Code de la fonction ici
  * }
  */


#define func_head(type, name) \
         type variadic_##name(variadic_type_##name x)

#define func_declare(type, name, ...) \
        typedef struct {            \
                    __VA_ARGS__       ;  \
                } variadic_type_##name;     \
    func_head(type, name);

#define param_default(name, value) name = x.name ? x.name : (value)
#define func_link(name,...) \
        variadic_##name((variadic_type_##name) {__VA_ARGS__})

#endif // MACROS_H

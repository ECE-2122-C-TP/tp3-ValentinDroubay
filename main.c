#include <stdio.h>

//EXERCICE 1
/* int main() {
    int a,b;
    printf("Saississez deux entiers : \n <");
    scanf("%d %d" , &a,&b);
    if( a == b){
        printf("Vos deux nombres sont egales \n");
    } else if ( a < b){
        printf("%d est le nombre le plus grand des deux \n",b);
    } else
        printf("%d est le nombre le plus grand des deux \n",a);
  return 0;
*/

// EXERCICE 2
/*int main() {
void CalculAireRectangle(int longueur, int largeur){
    int Aire = 0;
    Aire = longueur * largeur;
    printf("L'aire du rectangle est : %d \n",Aire);
}
 int l,L;
    printf("Saississez la longuer et la largeur de votre rectangle : \n");
    scanf("%d %d", &l,&L);
    CalculAireRectangle(L,l);
      return 0;
*/

//EXERCICE 3
/* int main() {
 int n;
    const trois = 3;
    printf("Saississez un entier : \n < \n");
    scanf("%d", &n);

    if (n % trois == 0) {
        printf(" %d est un multiple de trois ", n);
        if (n >= 10) {
            printf(" et superieur ou egale a 10 \n");
        } else
            printf(" et inferieur a 10 \n");
    } else if (n % trois != 0) {
        printf(" %d n'est pas un multiple de trois ", n);
        if (n >= 10) {
            printf(" et superieur ou egale a 10 \n");
        } else
            printf(" et inferieur a 10 \n");
    }
    return 0;

 */

//EXERCICE 4

/*  int main() {
    int age;
    int statut;
    printf(" Quelle est votre age : \n < \n");
    scanf("%d", &age);

    if (age > 17 && age < 27) {
        printf(" Quelle est votre statut : \n < \n");
        scanf("%d", &statut);
        if (statut == 0) {
            printf("Tarif plein : 9e");
        } else { printf("Tarif jeune : 6e"); }

    } else if (age < 12) {
        printf("Tarif enfant : 4e");
    } else if (age > 65) {
        printf("Tarif senior : 6e");
    } else if (12 <= age && age <= 17) {
        printf("Tarif jeune : 6e");
    } else {
        printf("plein tarif : 9e");
    }
    return 0;
}*/

#include "mesFonctions.h"

//EXERCICE 5

/*int main() {
   int n;

    printf("Saisir le numero de votre boisson : \n < \n");
    scanf("%d",&n);
    switch (n) {
        case 1 :
        case 2:
        case 3:
        {
            printf(" Voila une boisson froide \n");
        }break;
        case 10:
        case 11:
        {
            printf("Voila une boisson chaude \n");
        }break;
        default:{
            printf(" Veuillez choisir une boisson qui existe \n ");
        }

    }
    return  0; */

// EXERCICE 6

/* int main() {

   float note1 = -1;
   float note2 = -1;
   float note3 = -1;
   float moyenne;

    while (note1 < 0 || note1 >20){
        printf("Saisir la 1ere note sur 20 :\n < \n");
        scanf("%f", &note1);
    }while (note2 < 0 || note2 >20){
        printf("Saisir la 2eme note sur 20 :\n < \n");
        scanf("%f", &note2);
    }while (note3 < 0 || note3 >20){
        printf("Saisir la 3eme note sur 20 :\n < \n");
        scanf("%f", &note3);
    }
    moyenne = (note1 + note2 + note3)/3;
    printf("La moyenne de ces trois note est : %f",moyenne);

    return  0;
}*/

//EXERCICE 7

/* int main() {
    int nb_class;
    int nb_eleve;
    int totEleve = 0;

    printf("Entrez le nombre de classe ouverte \n < \n");
    scanf("%d",&nb_class);

    for (int i = 1; i <= nb_class ; ++i) {
        printf("Entrez le nombre d'eleve de la classe %d : \n",i);
        scanf("%d",&nb_eleve);

        totEleve += nb_eleve;

    }

    printf(" Ainsi le nombre total d'eleve dans l'ecole est de : %d", totEleve);


    return  0;*/

//EXERCICE 8

/* int main() {
    int n;
    printf("Saisir un nombre entier : \n < \n ");
    scanf("%d",&n);
    while(!(n % 7 ==0 && n % 2 ==0)){
        printf("Ressaisir le nombre : \n < \n");
        scanf("%d",&n);
    }
    printf("%d est un multiple de 7 et de 2 bravo ", n);
    return  0;
}*/

//EXERCICE 9 (incomplet)

/* int main() {

    int nb_Pierre_Initial = 0;

    int nb_Etage = 0;

    printf("Donnez le nombre de pierres disponibles : \n <\n");
    scanf("%d",nb_Pierre);





    printf("%d",nb_Etage);




 //EXERCICE 9
 int main() {

int nb_Pierre_Initial = 0;
    int nb_Pierre_Restant = 0;
    int nb_Etage = 0;
    int i = 1;


    printf("Saisir nombre de pierres disponibles \n");
    scanf("%d", nb_Pierre_Initial);
    nb_Pierre_Restant = nb_Pierre_Initial;

    while (nb_Pierre_Restant - (i * i) >= 0) {
        nb_Pierre_Restant = nb_Pierre_Restant - (i*i);
        nb_Etage++;
        i++;
        printf("%d", nb_Pierre_Restant);
        }

    printf("Nombre d'etage : %d", nb_Etage);



    return  0;*/

int main() {

    int note = 0;
    int i = 0;
    int somme = 0;
    float moyenne = 0;
    while (!(note < 0)) {
        printf("Saisir note : \n");
        scanf("%d", &note);
        if (note >= 0) {
            somme = somme + note;
            printf("%d \n", somme);
            i++;
            printf("%d \n", i);
        } else {
            printf("%d", somme);
            printf("%d", i);
            moyenne = (float)somme/(float)i;
            printf("moyenne : %d \n", moyenne);

        }
    }


    return 0;


}
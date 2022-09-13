#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<windows.h>
//declare de variables:
int i,j,size,s,rc;
int t[100];
//------------------------------------------------------------------------------------------------
//TRI A BULLE:
void bubble_sort(){
for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(t[j]>t[j+1]){
                s = t[j];
                t[j] = t[j+1];
                t[j+1] = s;
            }
}
//-------------------------------------------------------------------------------------------------
//TRI PAR INSERTION:
void insert_sort(){
    for (i=0;i<=size;i++) {
    j=i;
    while (j>0 && t[j-1]>t[j]){
      s=t[j];
      t[j]=t[j-1];
      t[j-1]=s;
      j--;
    }
   }
}
//------------------------------------------------------------------------------------------------------------
//TRI PAR SELECTION :
void select_sort(){
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
            if(t[i]>t[j]){
                s = t[i];
                t[i]= t[j];
                t[j]= s;
            }

}
//----------------------------------------------------------------------------------------------------
int main()
{
    //
    printf("entrer la taille de tableau:\n");
    scanf("%d",&size);
    printf("entrer les %d nombres en ce tableau:\n",size);
    for(i=0;i<size;i++){
        printf("entrer nombre n%d : ",i+1);
        scanf("%d",&t[i]); // pour remplir le tableau
        printf("\n");
    }
    for(i=0;i<size;i++){ // affichage de tableau:
        printf("nombre n%d:%d\n",i+1,t[i]);
    }
    bubble_sort();
    //insert_sort();
    //select_sort();
    printf("le tableau apres le tri : \n");
    for(i=0;i<size;i++){ // affichage de tableau
        printf("nombre n%d: %d\n",i+1,t[i]);
    }
    //RECHERCHE :
    printf("Entrez l'element à rechercher : ");
    scanf("%d",&rc);
    i = 0;
    while(i<size && rc != t[i]){
        i++;
    }
    if(i<size)
        printf("l'element %d se trouve dans la position : %d",rc,i+1);
    else
        printf("l'element non trouve !!");


    return 0;
}

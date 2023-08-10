#include <iostream>

using namespace std;

int main()
{
    int etat=0;
    while (etat==0) {


    cout<<"\n\n\n\n\n######################################################################################\n";
    cout<<"Programme de commande Windows\n";
    cout<<"######################################################################################\n";
    cout<<"Faite un choix :";
    cout<<"\n1: Voir parametre simple d'ip";
    cout<<"\n2: Voir parametre simple d'ip plus en detaille";
    cout<<"\n3: Eteindre votre ordinateur";
    cout<<"\n4: Aller sur un site ou ouvrir un fichier ou autres \n";
    cout<<"\nVotre choix :";

int choix;
cin>>choix;



    if(choix==1){
        system("ipconfig");
    }

    if(choix==2){
        system("ipconfig /all");
         }
    if(choix==3){
        cout<<"voulez-vous vraiment eteindre votre ordinateur ?\n";
        string reponse;
        int etat2=0;
        while (etat2==0) {


        cin>>reponse;
        if(reponse=="oui"){
            cout<<"\n combien de secondes ?";
            cout<<"\npas de lettre !!\n";
            cout<<"\ntemps avant arret:";
            int secondes;
            cin>>secondes;

            string choixSECONDES=to_string(secondes);
            string commande="shutdown /s /t ";
            string commandeFinal=commande+choixSECONDES;
             system(commandeFinal.c_str());
             etat2=1;
        }else {
            if(reponse!="oui" || "non"){
                cout<<"\nCommande non valide\n";
            }
                }
}
         }
    if(choix==4){
        string a;
        cout<<"entrer le nom ou lien du fichier ou site où vous voulez aller :";
        cin>>a;
        string commande="start ";
        string commandefinal=commande+a;
        system(commandefinal.c_str());
         }

cout<<"\n\n||||CONTINUER!!!!||||\n\n--->";
string choixfinal;
cin>>choixfinal;
if(choixfinal=="oui"){
    etat=0;
    }
else{
        if(choixfinal=="non"){
            exit(0);

        }
    }


    }
}

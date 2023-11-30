        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        #include <stdbool.h>


        int main() {
        int scelta;
        bool ricomincia=false;
        char giocatore[50];
        int punteggio=0;
    
    
        printf("il gioco si tratta di una semplice domanda e risposta\nl' utente dovrà scegliere una delle tre risposte\n\n");
    
        printf("1-iniziare una partita\n");
        printf("2-uscire dal gioco\n\n");
        scanf("%d", &scelta);
    
        if(scelta==1) {
        printf("inserisci nome_giocatore\n\n");
        scanf("%s", giocatore);
        }
        else if(scelta==2) 
        {
        printf("esce\n"); }
    
         do{
        printf("quanti cv sono un kw?\n");
        printf("1 - 1,36\n");
        printf("2 - 1,40\n");
        printf("3 - 1,42\n");
        scanf("%hd", &scelta);
        
        if(scelta==1) {
            printf("risposta corretta!\n");
            punteggio++;
        }
        else if(scelta==2){
            printf("risposta sbagliata!\n");
          printf("la risposta corretta era 1,36\n");
        }
        else if(scelta==3){
            printf("risposta sbagliata!\n");
            printf("la risposta corretta era 1,36\n");
             }
             printf("quale è il pianeta piu grande del sistema solare?\n");
             printf("1 - giove\n");
             printf("2 - saturno\n");
             printf("3 - urano\n");
            scanf("%hd", &scelta);
            if(scelta==1) {
            printf("risposta corretta!\n");
                punteggio++; 
        }
        else if(scelta==2){
            printf("risposta sbagliata!\n");
         printf("la risposta corretta era giove\n");
        }
        else if(scelta==3){
            printf("risposta sbagliata!\n"); 
        printf("la risposta corretta era giove\n");
        }
        
        
        printf("quale e il pianeta piu vicino al sole?\n");
         printf("1 - venere\n");
             printf("2 - mercurio\n");
             printf("3 - urano\n");
            scanf("%hd", &scelta);
            
            
            if(scelta==1) {
            printf("risposta sbagliata!\n");
           printf("la risposta corretta era mercurio\n");
        }
        else if(scelta==2){
            printf("risposta corretta!\n");
           punteggio++;
        }
        else if(scelta==3){
            printf("risposta sbagliata!\n");
         printf("la risposta corretta era mercurio\n");
        }
        printf("quale è la capitale dell italia?\n");
         printf("1 - venezia\n");
             printf("2 - roma\n");
             printf("3 - genova\n");
            scanf("%hd", &scelta);
            
            
            if(scelta==1) {
            printf("risposta sbagliata!\n");
        printf("la risposta corretta era roma\n");
        }
        else if(scelta==2){
            printf("risposta corretta!\n");
             punteggio++;
        }
        else if(scelta==3){
            printf("risposta sbagliata!\n");
         printf("la risposta corretta era roma\n");
        }
        
        
        
         printf("dove si trovava il motorshow in italia?\n");
         printf("1 - venezia\n");
             printf("2 - bologna\n");
             printf("3 - genova\n");
            scanf("%hd", &scelta);
            
            if(scelta==1) {
            printf("risposta sbagliata!\n");
        printf("la risposta corretta era bologna\n");
        }
        else if(scelta==2){
            printf("risposta corretta!\n");
               punteggio++;
        }
        else if(scelta==3){
            printf("risposta sbagliata!\n"); 
            printf("la risposta corretta era bologna\n");  
        }
        
        printf("punteggio:%d \n",punteggio);
        
        
        printf("1-iniziare una partita\n");
        printf("2-uscire dal gioco\n\n");
        scanf("%d", &scelta);
    
        if(scelta==1){
        ricomincia=true;
         }
        else if (scelta==2)
        {
        return 0;
        }
        } while (ricomincia);
        }
    


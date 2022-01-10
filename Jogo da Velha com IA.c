#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void expande (char mat[3][3], char jogadoratual) {

    for (i...)
        for (j...)
            if (mat i,j não estiver preenchido)
                mat i,j = jogadoratual
                expande(mat, outro jogador);


}

void mostrar_tabuleiro(char vet[3][3])
{

		printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
		printf("     		   	   ______|______|______\n");
		printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
		printf("     		   	   ______|______|______\n");
		printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
		printf("    		   	         |      |    \n");
}

int main()
{
    int numero,i=0,p1=0,p2=0,d=0,pa;
    char vet[3][3];
    vet[0][0]=vet[0][1]=vet[0][2]=vet[1][0]=vet[1][1]=vet[1][2]=vet[2][0]=vet[2][1]=vet[2][2]='.';

   for (i=0;i<=45;i++){
		if (i<=5){
			printf("\n\n\n\n\n\n\n\n\n				LOADING.\n");
			system("cls || clear");
		}
		else if (i<=10){
			printf("\n\n\n\n\n\n\n\n\n				LOADING..\n");
			system("cls || clear");
		}
		else if (i<=15){
			printf("\n\n\n\n\n\n\n\n\n				LOADING...\n");
			system("cls || clear");
		}
		else if (i<=20){
			printf("\n\n\n\n\n\n\n\n\n				LOADING.\n");
			system("cls || clear");
		}
		else if (i<=25){
			printf("\n\n\n\n\n\n\n\n\n				LOADING..\n");
			system("cls || clear");
		}
		else if (i<=30){
			printf("\n\n\n\n\n\n\n\n\n				LOADING...\n");
			system("cls || clear");
		}
		else if (i<=35){
			printf("\n\n\n\n\n\n\n\n\n				LOADING.\n");
			system("cls || clear");
		}
		else if (i<=40){
			printf("\n\n\n\n\n\n\n\n\n				LOADING..\n");
			system("cls || clear");
		}
		else if (i<=45){
			printf("\n\n\n\n\n\n\n\n\n				LOADING...\n");
			system("cls || clear");
		}
	}

	i=0;

	printf("\n\n				TIC-TAC-TOE\n\n");
	printf("\n				\n\n");

	printf("\n\n		   	       X  |     |  O  \n");
	printf("     		   	     _____|_____|____\n");
	printf("    		   	       O  |  x  |    \n");
	printf("     		   	     _____|_____|____\n");
	printf("    		   	       O  |     |  x  \n");
	printf("    		   	          |     |    \n\n\n");

	printf("\n				NEW GAME\n");
	printf("\n\n\n\n								BETA VERSION 1.1\n");


	system("pause");
	system("cls || clear");


    do{

    printf("\n\n\n			   The Game Has Started\n\n\n");
    do
    {

		if(i%2==0){
			printf ("\n\n		         Player 1 ");
		}
		else{
			printf ("\n\n		         Player 2 ");
		}
        printf("Chose a position\n\n\n\n");
        printf("				 7 | 8 | 9\n");
        printf("				___|___|___\n");
        printf("				 4 | 5 | 6\n");
        printf("				___|___|___\n");
        printf("				 1 | 2 | 3\n\n\n");
        printf("\n\n\n\n");

        if (i%2==0 || i==0)
        {
            scanf("					%d",&numero);
            if (numero==1&&vet[2][0]=='.')
            {

                vet[2][0]='x';
                mostrar_tabuleiro(vet);
/*
                printf(" %c | %c | %c\n",vet[0][0],vet[0][1],vet[0][2]);
                printf("___|___|___\n");
                printf(" %c | %c | %c\n",vet[1][0],vet[1][1],vet[1][2]);
                printf("___|___|___\n");
                printf(" %c | %c | %c\n",vet[2][0],vet[2][1],vet[2][2]);
*/
            }
            else if (numero==2&&vet[2][1]=='.')
            {
                vet[2][1]='x';
              	printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==3&&vet[2][2]=='.')
            {
                vet[2][2]='x';
				printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==4&&vet[1][0]=='.')
            {
                vet[1][0]='x';
				printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==5&&vet[1][1]=='.')
            {
                vet[1][1]='x';
           		printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==6&& vet[1][2]=='.')
            {
                vet[1][2]='x';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==7&&vet[0][0]=='.')
            {
                vet[0][0]='x';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==8&&vet[0][1]=='.')
            {
                vet[0][1]='x';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==9&&vet[0][2]=='.')
            {
                vet[0][2]='x';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else {

				printf("\n			    Invalid Position\n\n");
            	printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            	i=i-1;
			}
        }
        else if (i%2==1)
        {
            Sleep(100);

            if (vet[2][0]=='O'&&vet[1][0]=='O'&&vet[0][0]=='.') {
                vet[0][0]='O';
                i++;
            }
            else if (vet[0][0]=='O'&&vet[1][0]=='O'&&vet[2][0]=='.') {
                vet[2][0]='O';
                i++;
            }
            else if (vet[0][0]=='O'&&vet[2][0]=='O'&&vet[1][0]=='.') {
                vet[1][0]='O';
                i++;
            }
            else if (vet[0][0]=='O'&&vet[0][2]=='O'&&vet[0][1]=='.') {
                vet[0][1]='O';
                i++;
            }
            else if (vet[1][0]=='O'&&vet[1][2]=='O'&&vet[1][1]=='.') {
                vet[1][1]='O';
                i++;
            }
            else if (vet[2][0]=='O'&&vet[2][2]=='O'&&vet[2][1]=='.') {
                vet[2][1]='O';
                i++;
            }
            else if (vet[0][1]=='O'&&vet[1][1]=='O'&&vet[2][1]=='.') {
                vet[2][1]='O';
                i++;
            }
            else if (vet[2][1]=='O'&&vet[1][1]=='O'&&vet[0][1]=='.') {
                vet[0][1]='O';
                i++;
            }
            else if (vet[0][1]=='O'&&vet[2][1]=='O'&&vet[1][1]=='.') {
                vet[1][1]='O';
                i++;
            }
            else if (vet[0][2]=='O'&&vet[1][2]=='O'&&vet[2][2]=='.') {
                vet[2][2]='O';
                i++;
            }
            else if (vet[0][1]=='O'&&vet[0][2]=='O'&&vet[0][0]=='.') {
                vet[0][0]='O';
                i++;
            }
            else if (vet[1][0]=='x'&&vet[1][1]=='x'&&vet[1][2]=='.') {
                vet[1][2]='O';
                i++;
            }
            else if (vet[1][2]=='O'&&vet[2][2]=='O'&&vet[0][2]=='.') {
                vet[0][2]='O';
                i++;
            }
            else if (vet[1][1]=='O'&&vet[1][2]=='O'&&vet[1][0]=='.') {
                vet[1][0]='O';
                i++;
            }
            else if (vet[0][2]=='O'&&vet[2][2]=='O'&&vet[1][2]=='.'){
                vet[1][2]='O';
                i++;
            }
            else if (vet[0][2]=='O'&&vet[1][1]=='O'&&vet[2][0]=='.') {
                vet[2][0]='O';
                i++;
            }
            else if (vet[2][0]=='O'&&vet[1][1]=='O'&&vet[0][2]=='.') {
                vet[0][2]='O';
                i++;
            }
            else if (vet[0][2]=='O'&&vet[2][0]=='O'&&vet[1][1]=='.') {
            vet[1][1]='O';
                i++;
            }
            else if (vet[2][2]=='O'&&vet[1][1]=='O'&&vet[0][0]=='.') {
                vet[0][0]='O';
                i++;
            }
            else if (vet[0][0]=='O'&&vet[1][1]=='O'&&vet[2][2]=='.') {
                vet[2][2]='O';
                i++;
            }
            else if (vet[2][2]=='O'&&vet[0][0]=='O'&&vet[1][1]=='.') {
                vet[1][1]='O';
                i++;
            }
            else if (vet[2][0]=='x'&&vet[1][0]=='x'&&vet[0][0]=='.') {
                vet[0][0]='O';
                i++;
            }
            else if (vet[0][0]=='x'&&vet[1][0]=='x'&&vet[2][0]=='.') {
                vet[2][0]='O';
                i++;
            }
            else if (vet[0][0]=='x'&&vet[2][0]=='x'&&vet[1][0]=='.') {
                vet[1][0]='O';
                i++;
            }
            else if (vet[0][1]=='x'&&vet[1][1]=='x'&&vet[2][1]=='.') {
                vet[2][1]='O';
                i++;
            }
            else if (vet[0][1]=='x'&&vet[0][2]=='x'&&vet[0][0]=='.') {
                vet[0][0]='O';
                i++;
            }
            else if (vet[2][1]=='x'&&vet[1][1]=='x'&&vet[0][1]=='.') {
                vet[0][1]='O';
                i++;
            }
            else if (vet[0][0]=='x'&&vet[0][2]=='x'&&vet[0][1]=='.') {
                vet[0][1]='O';
                i++;
            }
            else if (vet[1][0]=='x'&&vet[1][2]=='x'&&vet[1][1]=='.') {
                vet[1][1]='O';
                i++;
            }
            else if (vet[2][0]=='x'&&vet[2][2]=='x'&&vet[2][1]=='.') {
                vet[2][1]='O';
                i++;
            }
            else if (vet[2][0]=='x'&&vet[2][1]=='x'&&vet[2][2]=='.') {
                vet[2][2]='O';
                i++;
            }
            else if (vet[0][1]=='x'&&vet[2][1]=='x'&&vet[1][1]=='.') {
                vet[1][1]='O';
                i++;
            }
            else if (vet[0][2]=='x'&&vet[1][2]=='x'&&vet[2][2]=='.') {
                vet[2][2]='O';
                i++;
            }
            else if (vet[1][2]=='x'&&vet[2][2]=='x'&&vet[0][2]=='.') {
                vet[0][2]='O';
                i++;
            } else if (vet[1][1]=='x'&&vet[1][2]=='x'&&vet[1][0]=='.') {
                vet[1][0]='O';
                i++;
            }
            else if (vet[0][2]=='x'&&vet[2][2]=='x'&&vet[1][2]=='.'){
                vet[1][2]='O';
                i++;
            }
            else if (vet[0][2]=='x'&&vet[1][1]=='x'&&vet[2][0]=='.') {
                vet[2][0]='O';
                i++;
            }
            else if (vet[2][0]=='x'&&vet[1][1]=='x'&&vet[0][2]=='x') {
                vet[0][2]='O';
                i++;
            }
            else if (vet[2][0]=='x'&&vet[1][1]=='x'&&vet[0][2]=='.') {
                vet[0][2]='O';
                i++;
            }
            else if (vet[0][2]=='x'&&vet[2][0]=='x'&&vet[1][1]=='.') {
            vet[1][1]='O';
                i++;
            }
            else if (vet[2][2]=='x'&&vet[1][1]=='x'&&vet[0][0]=='.') {
                vet[0][0]='O';
                i++;
            }
            else if (vet[0][0]=='x'&&vet[1][1]=='x'&&vet[2][2]=='.') {
                vet[2][2]='O';
                i++;
            }
            else if (vet[2][2]=='x'&&vet[0][0]=='x'&&vet[1][1]=='.') {
                vet[1][1]='O';
                i++;
            }


            else {
            srand(time(NULL));
            numero=rand()%9+1;
            }

            if (numero==1&& vet[2][0]=='.')

            {

                vet[2][0]='O';

                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==2&&vet[2][1]=='.')
            {
                vet[2][1]='O';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==3&&vet[2][2]=='.')
            {
                vet[2][2]='O';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==4&&vet[1][0]=='.')
            {
                vet[1][0]='O';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==5&&vet[1][1]=='.')
            {
                vet[1][1]='O';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==6&&vet[1][2]=='.')
            {
                vet[1][2]='O';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==7&& vet[0][0]=='.')
            {
                vet[0][0]='O';
            	printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
			}
            else if (numero==8&&vet[0][1]=='.')
            {
                vet[0][1]='O';
                printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else if (numero==9&&vet[0][2]=='.')
            {
                vet[0][2]='O';
				printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            }
            else {
            	system("cls||clear");
            	printf("\n			    Invalid Position\n\n");
            	printf("\n\n		   	      %c  |  %c   |  %c  \n",vet[0][0],vet[0][1],vet[0][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[1][0],vet[1][1],vet[1][2]);
				printf("     		   	   ______|______|______\n");
				printf("    		   	      %c  |  %c   |  %c  \n",vet[2][0],vet[2][1],vet[2][2]);
				printf("    		   	         |      |    \n");
            	i=i-1;
			}
        }
    i++;
    }
    while (!(vet[2][0]=='x'&&vet[2][1]=='x'&&vet[2][2]=='x'||vet[1][0]=='x'&&vet[1][1]=='x'&&vet[1][2]=='x'||vet[0][0]=='x'&&vet[0][1]=='x'&&vet[0][2]=='x'||vet[0][0]=='x'&&vet[1][0]=='x'&&vet[2][0]=='x'||vet[0][1]=='x'&&vet[1][1]=='x'&&vet[2][1]=='x'||vet[0][2]=='x'&&vet[1][2]=='x'&&vet[2][2]=='x'||vet[2][0]=='x'&&vet[1][1]=='x'&&vet[0][2]=='x'||vet[0][0]=='x'&&vet[1][1]=='x'&&vet[2][2]=='x'||vet[2][0]=='O'&&vet[2][1]=='O'&&vet[2][2]=='O'||vet[1][0]=='O'&&vet[1][1]=='O'&&vet[1][2]=='O'||vet[0][0]=='O'&&vet[0][1]=='O'&&vet[0][2]=='O'||vet[0][0]=='O'&&vet[1][0]=='O'&&vet[2][0]=='O'||vet[0][1]=='O'&&vet[1][1]=='O'&&vet[2][1]=='O'||vet[0][2]=='O'&&vet[1][2]=='O'&&vet[2][2]=='O'||vet[2][0]=='O'&&vet[1][1]=='O'&&vet[0][2]=='O'||vet[0][0]=='O'&&vet[1][1]=='O'&&vet[2][2]=='O'||i==9));


    if (vet[2][0]=='x'&&vet[2][1]=='x'&&vet[2][2]=='x'||vet[1][0]=='x'&&vet[1][1]=='x'&&vet[1][2]=='x'||vet[0][0]=='x'&&vet[0][1]=='x'&&vet[0][2]=='x'||vet[0][0]=='x'&&vet[1][0]=='x'&&vet[2][0]=='x'||vet[0][1]=='x'&&vet[1][1]=='x'&&vet[2][1]=='x'||vet[0][2]=='x'&&vet[1][2]=='x'&&vet[2][2]=='x'||vet[2][0]=='x'&&vet[1][1]=='x'&&vet[0][2]=='x'||vet[0][0]=='x'&&vet[1][1]=='x'&&vet[2][2]=='x')
    {
        printf("\n\n\n				Player 1 Wins\n\n\n");
        p1++;
    }
	else if ((vet[2][0]=='O'&&vet[2][1]=='O'&&vet[2][2]=='O'||vet[1][0]=='O'&&vet[1][1]=='O'&&vet[1][2]=='O'||vet[0][0]=='O'&&vet[0][1]=='O'&&vet[0][2]=='O'||vet[0][0]=='O'&&vet[1][0]=='O'&&vet[2][0]=='O'||vet[0][1]=='O'&&vet[1][1]=='O'&&vet[2][1]=='O'||vet[0][2]=='O'&&vet[1][2]=='O'&&vet[2][2]=='O'||vet[2][0]=='O'&&vet[1][1]=='O'&&vet[0][2]=='O'||vet[0][0]=='O'&&vet[1][1]=='O'&&vet[2][2]=='O')) {
        printf("\n\n\n				Player 2 Wins\n\n\n");
        p2++;
    }
	else if (i==9) {
        printf("\n\n\n				    Draw\n\n\n");
        d++;
    }

	system("pause");
	system ("clear||cls");
    printf("\n\n\n				    PLAY AGAIN\n\n\n");
    printf("\n\n\n			YES (1)				NO (0)\n");
    scanf("%d",&pa);
	system("cls||clear");
	vet[0][0]=vet[0][1]=vet[0][2]=vet[1][0]=vet[1][1]=vet[1][2]=vet[2][0]=vet[2][1]=vet[2][2]='.';
	i=0;

	}while (pa==1);
	printf("\n\n                Player 1 = %d wins ",p1);
	printf("\n\n                Player 2 = %d wins ",p2);
	printf("\n\n                Draws = %d \n\n",d);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GREEN "\033[0;32m"
#define RESET "\033[0m"
#define RED "\033[0;31m"
#include "variables.h"
#include "hard(p&comp).h"
#include "easy(p&comp).h"
int index1=0,j,temps=0,index,topten,again;
char names[100][100];
int scores[10];
char tempnames[30];

void playerDetail(){
printf("enter the name of first player: ");
scanf("%s",player1);
printf("\nenter the name of second player: ");
scanf("%s",player2);
}

void playeScores(){
    printf("\033[0;35m""  THE TOP TEN :\n"RESET);
    printf("\033[0;33m"" *-*-*-*-*-*-*-*\n"RESET);
fscores=fopen("scores.txt", "r");
fnames=fopen("names.txt", "r");
for(index=0;index<10;index++)
{
    fscanf(fnames, "%s", names[index]);
    //printf("<<<<< %s >>>>",names[index]);
    fscanf(fscores, "%d", &scores[index]);
    //printf("  %d\n",scores[index]);
}


}

void swap()
{
    for(i=0;i<10;i++)
    {
       for(j=0;j<9;j++)
       {
           if(scores[j]>scores[j+1])
           {
               temps=scores[j];
               scores[j]=scores[j+1];
               scores[j+1]=temps;
               strcpy(tempnames,names[j]);
               strcpy(names[j],names[j+1]);
               strcpy(names[j+1],tempnames);
           }


       }
    }

}

void chooseTheMode(){
    system("");
    char a[4];
    int f=1;
    if(newGame==0 ){
            feasyfile=fopen("easyfile.txt", "r");
            fscanf(feasyfile, "%d", &easyfile);
            printf("%d",easyfile);
            if(easyfile==1){
        Easy();
            }
            else if(easyfile==0)
            {
                Hard();
            }
    }
    else{
    feasyfile=fopen("easyfile.txt", "w");
    while(f){
printf("\ndo you want easy or hard \? ");
scanf("%s",a);
int fmn=1;
    char fm='0' ;
if(a[0]=='e' && a[1]=='a' && a[2]=='s' && a[3]=='y')
{
    fprintf(feasyfile, "%d", 1);
    easy();
    while(fmn){
    printf("\n\nvs comp (c) vs player (p): ");
    scanf("%s",&fm);
    if(fm=='p'){
    printf("\n");
    playerDetail();
    fprintf(fnames , "%s\n%s\n" , player1,player2);
    chooseColor();
    Easy();
    printf("\n");
    f=0;
    fmn=0;
    }
    else if (fm=='c'){
    printf("\n");
    Compeasy();
    printf("\n");
    f=0;
    fmn=0;
    }
    else{
        printf("enter c or p");
        fmn=1;
    }
  }
}
else if(a[0]=='h' && a[1]=='a' && a[2]=='r' && a[3]=='d')
{
    fprintf(feasyfile, "%d", 0);
    hard();
    while(fmn){
    printf("\nvs comp (c) vs player (p): ");
    scanf("%s",&fm);
    if(fm=='p'){
    printf("\n");
    playerDetail();
    fprintf(fnames , "%s\n%s\n" , player1,player2);
    chooseColor();
    Hard();
    printf("\n");
    f=0;
    fmn=0;
    }
    else if (fm=='c'){
    printf("\n");
    Comphard();
    printf("\n");
    f=0;
    fmn=0;
    }
    else{
        printf("enter c or p");
        fmn=1;
    }
  }
}

else
{
    printf("Enter valid expression!\n");
    f=1;
}
}
}
}

void display(){
for(index1=9;index1>=0;index1--){
    printf("   %s",names[index1]);
    printf("   %d\n",scores[index1]);
}
}

void sortScores(){
for(index1=0;index1<4;index1++)
    printf("%d\n",scores[index1]);
}

void agains()
{
    strcpy(horizontal[0],RED"   "RESET);
    strcpy(horizontal[5],RED"   "RESET);
    strcpy(horizontal[10],RED"   "RESET);
    strcpy(horizontal[1],RED"   "RESET);
    strcpy(horizontal[6],RED"   "RESET);
    strcpy(horizontal[11],RED"   "RESET);
    strcpy(horizontal[2],RED"   "RESET);
    strcpy(horizontal[3],RED"   "RESET);
    strcpy(horizontal[7],RED"   "RESET);
    strcpy(horizontal[8],RED"   "RESET);
    strcpy(horizontal[12],RED"   "RESET);
    strcpy(horizontal[13],RED"   "RESET);
    strcpy(horizontal[15],RED"   "RESET);
    strcpy(horizontal[16],RED"   "RESET);
    strcpy(horizontal[17],RED"   "RESET);
    strcpy(horizontal[18],RED"   "RESET);
    strcpy(horizontal[20],RED"   "RESET);
    strcpy(horizontal[21],RED"   "RESET);
    strcpy(horizontal[22],RED"   "RESET);
    strcpy(horizontal[23],RED"   "RESET);
    strcpy(horizontal[25],RED"   "RESET);
    strcpy(horizontal[26],RED"   "RESET);
    strcpy(horizontal[27],RED"   "RESET);
    strcpy(horizontal[28],RED"   "RESET);
    strcpy(horizontal[4],RED"   "RESET);
    strcpy(horizontal[9],RED"   "RESET);
    strcpy(horizontal[14],RED"   "RESET);
    strcpy(horizontal[19],RED"   "RESET);
    strcpy(horizontal[24],RED"   "RESET);
    strcpy(horizontal[29],RED"   "RESET);
    strcpy(l[0],RED" "RESET);
    strcpy(l[1],RED" "RESET);
    strcpy(l[2],RED" "RESET);
    strcpy(l[6],RED" "RESET);
    strcpy(l[7],RED" "RESET);
    strcpy(l[8],RED" "RESET);
    strcpy(l[3],RED" "RESET);
    strcpy(l[4],RED" "RESET);
    strcpy(l[9],RED" "RESET);
    strcpy(l[10],RED" "RESET);
    strcpy(l[12],RED" "RESET);
    strcpy(l[13],RED" "RESET);
    strcpy(l[14],RED" "RESET);
    strcpy(l[15],RED" "RESET);
    strcpy(l[16],RED" "RESET);
    strcpy(l[18],RED" "RESET);
    strcpy(l[19],RED" "RESET);
    strcpy(l[20],RED" "RESET);
    strcpy(l[21],RED" "RESET);
    strcpy(l[22],RED" "RESET);
    strcpy(l[5],RED" "RESET);
    strcpy(l[11],RED" "RESET);
    strcpy(l[17],RED" "RESET);
    strcpy(l[23],RED" "RESET);
    strcpy(l[29],RED" "RESET);
    strcpy(l[24],RED" "RESET);
    strcpy(l[25],RED" "RESET);
    strcpy(l[26],RED" "RESET);
    strcpy(l[27],RED" "RESET);
    strcpy(l[28],RED" "RESET);

    strcpy(cell[0],RED " " RESET);
    strcpy(cell[1],RED " " RESET);
    strcpy(cell[2],RED " " RESET);
    strcpy(cell[3],RED " " RESET);
    strcpy(cell[4],RED " " RESET);
    strcpy(cell[5],RED " " RESET);
    strcpy(cell[6],RED " " RESET);
    strcpy(cell[7],RED " " RESET);
    strcpy(cell[8],RED " " RESET);
    strcpy(cell[9],RED " " RESET);
    strcpy(cell[10],RED " " RESET);
    strcpy(cell[11],RED " " RESET);
    strcpy(cell[12],RED " " RESET);
    strcpy(cell[13],RED " " RESET);
    strcpy(cell[14],RED " " RESET);
    strcpy(cell[15],RED " " RESET);
    strcpy(cell[16],RED " " RESET);
    strcpy(cell[17],RED " " RESET);
    strcpy(cell[18],RED " " RESET);
    strcpy(cell[19],RED " " RESET);
    strcpy(cell[20],RED " " RESET);
    strcpy(cell[21],RED " " RESET);
    strcpy(cell[22],RED " " RESET);
    strcpy(cell[23],RED " " RESET);
    strcpy(cell[24],RED " " RESET);
    strcpy(cell[25],RED " " RESET);
    strcpy(cell[0],RED " " RESET);
    strcpy(cell[1],RED " " RESET);
    strcpy(cell[2],RED " " RESET);
    strcpy(cell[3],RED " " RESET);
    strcpy(cell[4],RED " " RESET);
    strcpy(cell[5],RED " " RESET);
    strcpy(cell[6],RED " " RESET);
    strcpy(cell[7],RED " " RESET);
    strcpy(cell[8],RED " " RESET);
    strcpy(cell[9],RED " " RESET);
    strcpy(cell[10],RED " " RESET);
    strcpy(cell[11],RED " " RESET);
    strcpy(cell[12],RED " " RESET);
    strcpy(cell[13],RED " " RESET);
    strcpy(cell[14],RED " " RESET);
    strcpy(cell[15],RED " " RESET);
    strcpy(cell[16],RED " " RESET);
    strcpy(cell[17],RED " " RESET);
    strcpy(cell[18],RED " " RESET);
    strcpy(cell[19],RED " " RESET);
    strcpy(cell[20],RED " " RESET);
    strcpy(cell[21],RED " " RESET);
    strcpy(cell[22],RED " " RESET);
    strcpy(cell[23],RED " " RESET);
    strcpy(cell[24],RED " " RESET);
    strcpy(cell[25],RED " " RESET);
    z=1;
    z1=1;
    z2=1;
    z3=1;
    z4=1;
    z5=1;
    z6=1;
    z7=1;
    z8=1;
    z9=1;
    z10=1;
    z11=1;
    z12=1;
    z13=1;
    z14=1;
    z15=1;
    z16=1;
    z17=1;
    z18=1;
    z19=1;
    z20=1;
    z21=1;
    z22=1;
    z23=1;
    z24=1;
    z25=1;
    easyfile=-1,newGame=1,complete=0;
    a1=0;a2=0;a3=0;a4=0;b1=0;b2=0;b3=0;b4=0;c1=0;c2=0;c3=0;c4=0;d1=0;d2=0;d3=0;d4=0;e1=0;e2=0;e3=0;e4=0;f1=0;f2=0;f3=0;f4=0;g1=0;g2=0;g3=0;g4=0;h1=0;h2=0;h3=0;h4=0;i1=0;i2=0;i3=0;i4=0;j1=0;j2=0;j3=0;j4=0;k1=0;k2=0;k3=0;k4=0;l1=0;l2=0;l3=0;l4=0;m1=0;m2=0;m3=0;m4=0;n1=0;n2=0;n3=0;n4=0;o1=0;o2=0;o3=0;o4=0;p1=0;p2=0;p3=0;p4=0;A=0;B=0;C=0;D=0;E=0;F=0;G=0;H=0;I=0;J=0;K=0;L=0;M=0;N=0;O=0;P=0;Q=0;R=0;S=0;Tb=0;U=0;V=0;Wb=0;Xb=0;Y=0;
q1=0;q2=0;q3=0;q4=0;r1=0;r2=0;r3=0;r4=0;s1=0;s2=0;s3=0;s4=0;tb1=0;tb2=0;tb3=0;tb4=0;u1=0;u2=0;u3=0;u4=0;v1=0;v2=0;v3=0;v4=0;wb1=0;wb2=0;wb3=0;wb4=0;xb1=0;xb2=0;xb3=0;xb4=0;y1=0;y2=0;y3=0;y4=0;
ch1=0,ch2=0,ch3=0,ch4=0,ch5=0,ch6=0,ch7=0,ch8=0,ch9=0,ch10=0,ch11=0,ch12=0,ch13=0,ch14=0,ch15=0,ch16=0,ch17=0,ch18=0,ch19=0,ch20=0,ch21=0,ch22=0,ch23=0,ch24=0,ch25=0,ch26=0,ch27=0,ch28=0,ch29=0,ch30=0,ch31=0,ch32=0,ch33=0,ch34=0,ch35=0,ch36=0,ch37=0,ch38=0,ch39=0,ch40=0,ch41=0,ch42=0,ch43=0,ch44=0,ch45=0,ch46=0,ch47=0,ch48=0,ch49=0,ch50=0,ch51=0,ch52=0,ch53=0,ch54=0,ch55=0,ch56=0,ch57=0,ch58=0,ch59=0,ch60=0;
}
int main()
{

   system(" ");
    fnames=fopen("names.txt", "a");
    fscores=fopen("scores", "a");
    ////////////// want new game or load  ///////////////////////////
printf("Display top 10 [(1)for yes (0) for no] ? ");
scanf("%d",&topten);
if(topten==1)
{
    printf("\n");
   playeScores();
   swap();
   display();
   printf("\n");
}
    printf("NewGame(1) or load(0) : ");
    scanf("%d",&newGame);
   do{
        again=0;
system(" ");
    system("cls");

chooseTheMode();
printf("Again(1) OR Exit(0) : ");
scanf("%d",&again);
if(again==1)
{
    agains();
}
    }while(again==1);

///////////////////// want to exit the game or play again \\\\\\\\\\\\\\\\\\\\\\\\

    return 0;
}

#pragma once

void easy(){
int f=0;
int n=1;
int i,j,k,p,o=0,v=0,c=0;

//............making the grid..............................
printf("\n");
    printf("                                 0 1 2 3 4\n");
    for(i=0;i<3;i++)
    {
        printf("                               %d ",f);
        f=f+2;
        for(j=0;j<3;j++)
        {
            printf("%c",grid[j]);
            if(j==2)
            {
                break;
            }
            else
//................between hashtag ...................
            {
                printf("%s",horizontal[o]);
                o++;
            }
        }
        if(i==2){
            break;
        }
//................ vertical lines.......................
        else{
        printf("\n");
        for(k=0;k<1;k++)
        {
            printf("                               %d ",n);
            n=n+2;
            for(p=0;p<3;p++)
            {
                printf("%s",l[v]);
                v++;
               if(p==2)
               {
                   break;
               }
               else{
                printf(" %s ",cell[c]);
                c++;
               }

            }
            printf("\n");
        }
        }
    }

}

int input1e(){
    int input=1;
    while(input==1){
printf("\nenter the row coordinate of line: ");
scanf("%s",&X1);
if(X1=='0'){
    x1=0;
    input=0;
}
else if (X1=='1'){
    x1=1;
    input=0;
}
else if(X1=='2'){
    x1=2;
    input=0;

}
else if(X1=='3'){
    x1=3;
   input=0;

}
else if(X1=='4'){
    x1=4;
    input=0;

}
else{
    printf("\nUnvalid input");
    input=1;
}
}

return x1;
}

int input2e(){
   int x2=0;
    if(x1==0||x1==2||x1==4){
         while(x2!=3&&x2!=1){
            printf("enter the column coordinate of line: ");
            scanf("%s",&X2);
            if(X2=='1'){
                x2=1;
            }
            else if(X2=='3'){
                x2=3;
            }
            else{
                printf("\nEnter valid input\n");
            }
            }
    }
    else{
        x2=5;
        while(x2!=0&&x2!=2&&x2!=4){
        printf("enter the column coordinate of line: ");
            scanf("%s",&X2);
            if(X2=='0'){
                x2=0;
            }
            else if(X2=='2'){
                x2=2;
            }
            else if(X2=='4'){
                x2=4;
            }
            else{
                printf("\nEnter valid input\n");
            }
         }
    }
    return x2;
}

void horizon_rede(int x1,int x2){
  if(x1==0&&x2==1){
    strcpy(horizontal[0],RED"---"RESET);
  }
  else if(x1==2&&x2==1){
    strcpy(horizontal[2],RED"---"RESET);
  }
  else if(x1==4&&x2==1){
    strcpy(horizontal[4],RED"---"RESET);
  }
  else if(x1==0&&x2==3){
    strcpy(horizontal[1],RED"---"RESET);
  }
  else if(x1==2&&x2==3){
    strcpy(horizontal[3],RED"---"RESET);
  }
  else if(x1==4&&x2==3){
    strcpy(horizontal[5],RED"---"RESET);
  }
}

void horizon_greene(int x1,int x2){
  if(x1==0&&x2==1){
    strcpy(horizontal[0],GREEN"---"RESET);
  }
  else if(x1==2&&x2==1){
    strcpy(horizontal[2],GREEN"---"RESET);
  }
  else if(x1==4&&x2==1){
    strcpy(horizontal[4],GREEN"---"RESET);
  }
  else if(x1==0&&x2==3){
    strcpy(horizontal[1],GREEN"---"RESET);
  }
  else if(x1==2&&x2==3){
    strcpy(horizontal[3],GREEN"---"RESET);
  }
  else if(x1==4&&x2==3){
    strcpy(horizontal[5],GREEN"---"RESET);
  }

}

void vertical_rede(int x1,int x2){
  if(x1==1&&x2==0){
    strcpy(l[0],RED"|"RESET);
  }
  else if (x1==1&&x2==2){
    strcpy(l[1],RED "|" RESET);
  }
  else if (x1==1&&x2==4){
    strcpy(l[2],RED"|"RESET);
  }
  else if (x1==3&&x2==0){
    strcpy(l[3],RED"|"RESET);
  }
  else if (x1==3&&x2==2){
    strcpy(l[4],RED"|"RESET);
  }
  else if (x1==3&&x2==4){
    strcpy(l[5],RED"|"RESET);
  }

}

void vertical_greene(int x1,int x2){
if(x1==1&&x2==0){
    strcpy(l[0],GREEN"|"RESET);
  }
  else if (x1==1&&x2==2){
    strcpy(l[1],GREEN "|" RESET);
  }
  else if (x1==1&&x2==4){
    strcpy(l[2],GREEN"|"RESET);
  }
  else if (x1==3&&x2==0){
    strcpy(l[3],GREEN"|"RESET);
  }
  else if (x1==3&&x2==2){
    strcpy(l[4],GREEN"|"RESET);
  }
  else if (x1==3&&x2==4){
    strcpy(l[5],GREEN"|"RESET);
  }
}

void linese(){
 line=a1+a2+a3+a4+b1+b3+b4+c2+c3+c4+d2+d4;
  printf("Number of lines played:%d                         Number of lines remain:%d\n",line,12-line);
  printf("_______________________________________________________________________________");
}

int box1e(){
  if(x1==0&&x2==1){
    a1=1;
  }
  if(x1==1&&x2==2){
    a2=1;
  }
  if(x1==1&&x2==0){
    a3=1;
  }
  if(x1==2&&x2==1){
    a4=1;
  }
  A=a1+a2+a3+a4;
 return A;
}
int box2e(){
  if(x1==0&&x2==3){
    b1=1;
  }
  if(x1==1&&x2==2){
    b2=1;
  }
  if(x1==1&&x2==4){
    b3=1;
  }
  if(x1==2&&x2==3){
    b4=1;
  }
  B=b1+b2+b3+b4;
 return B;
}
int box3e(){
  if(x1==2&&x2==1){
    c1=1;
  }
  if(x1==3&&x2==2){
    c2=1;
  }
  if(x1==3&&x2==0){
    c3=1;
  }
  if(x1==4&&x2==1){
    c4=1;
  }
  C=c1+c2+c3+c4;
 return C;
}
int box4e(){
  if(x1==2&&x2==3){
    d1=1;
    strcpy(cell[3],RED " " RESET);
    t4=0;
    k=0;
    z4=1;
  }
  if(x1==3&&x2==4){
    d2=1;
    strcpy(cell[3],RED " " RESET);
    t4=0;
    k=0;
    z4=1;
  }
  if(x1==3&&x2==2){
    d3=1;
    strcpy(cell[3],RED " " RESET);
    t4=0;
    k=0;
    z4=1;
  }
  if(x1==4&&x2==3){
    d4=1;
    strcpy(cell[3],RED " " RESET);
    t4=0;
    k=0;
    z4=1;
  }
  D=d1+d2+d3+d4;
 return D;
}
int box_identicatore(){
    if (m==1){
   if (A==4){

    if(z1==1){
    strcpy(cell[0],RED "A" RESET);
    round=0;
    t1=1;
    k=1;
    }
   }
   if (B==4){
        if(z2==1){
    strcpy(cell[1],RED "A" RESET);
    round=0;
    t2=1;
     k=1;
    }
   }
   if (C==4){
        if(z3==1){
    strcpy(cell[2],RED "A" RESET);
    round=0;
    t3=1;
     k=1;
    }
   }
   if (D==4){
        if(z4==1){
    strcpy(cell[3],RED "A" RESET);
    round=0;
    t4=1;
     k=1;
   }
   }
   }
     else if(m==0){
     if (A==4){
        if(z1==1){
    strcpy(cell[0],GREEN "B" RESET);
    round=1;
    g1=1;
     k=1;
    }
   }
   if (B==4){
        if(z2==1){
    strcpy(cell[1],GREEN "B" RESET);
    round=0;
    g2=1;
     k=1;
    }
   }
   if (C==4){
        if(z3==1){
    strcpy(cell[2],GREEN "B" RESET);
    round=0;
    g3=1;
     k=1;
    }
   }
   if (D==4){
        if(z4==1){
    strcpy(cell[3],GREEN "B" RESET);
    round=0;
    g4=1;
     k=1;
   }
   }
   }
   T2=g1+g2+g3+g4;
   T1=t1+t2+t3+t4;
   system("cls");
   easy();
   printf(RED"\n score red player = %d                           "RESET,T1);
   printf(GREEN" score green player = %d\n"RESET,T2);
   linese();
   if(T1+T2==4){
    if(T1>T2){
        printf("\n<<<Winner is RED >>>\n");

    }
    else if(T1==T2){
        printf("\n<<<DRAW>>>\n");

    }
    else{
        printf("\n<<<Winner is GREEN>>>\n");
    }
    printf("\033[0;33m""**************Thanks!*****************"RESET);
   }
   return k;
}
void un_horizone(int x1,int x2){
  if(x1==0&&x2==1){
    strcpy(horizontal[0],RED"   "RESET);
    ch1=0;
  }
  else if(x1==2&&x2==1){
    strcpy(horizontal[2],RED"   "RESET);
    ch3=0;
  }
  else if(x1==4&&x2==1){
    strcpy(horizontal[4],RED"   "RESET);
    ch5=0;
  }
  else if(x1==0&&x2==3){
    strcpy(horizontal[1],RED"   "RESET);
    ch2=0;
  }
  else if(x1==2&&x2==3){
    strcpy(horizontal[3],RED"   "RESET);
    ch4=0;
  }
  else if(x1==4&&x2==3){
    strcpy(horizontal[5],RED"   "RESET);
    ch6=0;
  }
}
void un_verticale(int x1,int x2){
  if(x1==1&&x2==0){
    strcpy(l[0],RED" "RESET);
    ch7=0;
  }
  else if (x1==1&&x2==2){
    strcpy(l[1],RED " " RESET);
    ch8=0;
  }
  else if (x1==1&&x2==4){
    strcpy(l[2],RED" "RESET);
    ch9=0;
  }
  else if (x1==3&&x2==0){
    strcpy(l[3],RED" "RESET);
    ch10=0;
  }
  else if (x1==3&&x2==2){
    strcpy(l[4],RED" "RESET);
    ch11=0;
  }
  else if (x1==3&&x2==4){
    strcpy(l[5],RED" "RESET);
    ch12=0;
  }

}
int un_box1e(){
  if(x1==0&&x2==1){
    a1=0;
  }
  if(x1==1&&x2==2){
    a2=0;
  }
  if(x1==1&&x2==0){
    a3=0;
  }
  if(x1==2&&x2==1){
    a4=0;

  }
  A=a1+a2+a3+a4;
 return A;
}
int un_box2e(){
  if(x1==0&&x2==3){
    b1=0;

  }
  if(x1==1&&x2==2){
    b2=0;

  }
  if(x1==1&&x2==4){
    b3=0;

  }
  if(x1==2&&x2==3){
    b4=0;

  }
  B=b1+b2+b3+b4;
 return B;
}
int un_box3e(){
  if(x1==2&&x2==1){
    c1=0;
  }
  if(x1==3&&x2==2){
    c2=0;
  }
  if(x1==3&&x2==0){
    c3=0;
  }
  if(x1==4&&x2==1){
    c4=0;
  }
  C=c1+c2+c3+c4;
 return C;
}
int un_box4e(){
  if(x1==2&&x2==3){
    d1=0;

  }
  if(x1==3&&x2==4){
    d2=0;

  }
  if(x1==3&&x2==2){
    d3=0;

  }
  if(x1==4&&x2==3){
    d4=0;
  }
  D=d1+d2+d3+d4;
 return D;
}
void need_undoe(){
printf("\nundo(u) , continue(any other button) : ");
scanf("%s",&und);
}
void need_redoe(){
printf("\nredo(r) , continue(any other button) : ");
scanf("%s",&und);
}
void undoe(int x1,int x2){
need_undoe();
if(und=='u'){
un_horizone(x1,x2);
un_verticale(x1,x2);
un_box1e();
un_box2e();
un_box3e();
un_box4e();
easy();
loop=1;
need_redoe();
    if(m==1){
   if(und=='r'){
   vertical_rede(x1,x2);
   horizon_rede(x1,x2);
   box1e();
   box2e();
   box3e();
   box4e();
   box_identicatore();
   loop=0;
   }
  }
  else if(m==0){
   if(und=='r'){
   vertical_greene(x1,x2);
   horizon_greene(x1,x2);
   box1e();
   box2e();
   box3e();
   box4e();
   box_identicatore();
   loop=0;
   }
  }
 }
}
void correctionHorizontale(){
    while(!correct){
if(x1==0&&x2==1){
   if(ch1==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch1++;
        break;
    }
  }
  else if(x1==2&&x2==1){
         if(ch3==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch3++;
        break;
    }

  }
  else if(x1==4&&x2==1){
       if(ch5==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
        x1=input1e();
      x2=input2e();
    }
    else
    {
        ch5++;
        break;
    }

  }
  else if(x1==0&&x2==3){
     if(ch2==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
            x1=input1e();
      x2=input2e();
    }
    else
    {
        ch2++;
        break;
    }
  }
  else if(x1==2&&x2==3){
     if(ch4==1)
    {
     printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
            x1=input1e();
      x2=input2e();
    }
    else
    {
        ch4++;
        break;
    }
  }
  else if(x1==4&&x2==3){
     if(ch6==1)
    {
     printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
        x1=input1e();
      x2=input2e();
    }
    else
    {
        ch6++;
        break;
    }
  }
  else
  {
      correct=1;
  }

    }
correct=0;
}
void correctionVertivale(){
    while(!correct){
if(x1==1&&x2==0){
        if(ch7==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch7++;
        correct=1;
    }
  }
  else if (x1==1&&x2==2){
    if(ch8==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch8++;
        correct=1;
    }
  }
  else if (x1==1&&x2==4){
   if(ch9==1)
    {
     printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch9++;
        correct=1;
    }
  }
  else if (x1==3&&x2==0){
    if(ch10==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch10++;
        correct=1;
    }
  }
  else if (x1==3&&x2==2){
    if(ch11==1)
    {
      printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch11++;
        correct=1;
    }
  }
  else if (x1==3&&x2==4){
    if(ch12==1)
    {
     printf("\033[0;34m""Played....Enter anther coordinates\n"RESET);
      x1=input1e();
      x2=input2e();
    }
    else
    {
        ch12++;
        correct=1;
    }
  }
  else
  {
    correct=1;
  }
    }
    correct=0;

}

void Easy(){

if(newGame==1)
{
////////////////////////// Original code //////////////////////////////////////////////
fscores=fopen("scores.txt", "a");
fpx1=fopen("px1.txt", "w");
fpx2=fopen("px2.txt", "w");
fround=fopen("round.txt", "w");
fsor=fopen("sor.txt","w");
fstart=fopen("start.txt","w");
while(!complete){
//////////////////////the first player is red and second is green ///////////////////////////////////////////////
        if(c[0]=='r' && c[1]=='e' && c[2]=='d' ){
do{
printf(RED"\n\nPlayer1 round\n"RESET);
round=1;
sor++;
x1=input1e();
x2=input2e();
correctionHorizontale();
correctionVertivale();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");

if(T1+T2==4)
{
    fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undoe(x1,x2);
printf("Continue(1) or save(0) : "); // for saving the played game
scanf("%d",&save);
printf("______________________________________________________");
if(T1+T2==4 || save==0)
{
fprintf(fscores, "%d\n", T1);
fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
start=1;
fprintf(fstart,"%d",start);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==4 || save==0)
{
    complete=1;
    break;
}
do{
printf(GREEN"\n\nPlayer2 round\n"RESET);
round=0;
sor++;
x1=input1e();
x2=input2e();
correctionHorizontale();
correctionVertivale();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(T1+T2==4)
{
    fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("________________________________________________");
if(T1+T2==4 || save==0)
{
      fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
start=1;
fprintf(fstart,"%d",start);
complete=1;
break;
}
}while(k==1||loop==1);
}
else{
//////////////////////the first player is green and second is red ///////////////////////////////////////////////

               start=0;
        fprintf(fstart,"%d",start);
do{
printf(GREEN"\n\nPlayer1 round\n"RESET);
round=0;
sor++;
x1=input1e();
x2=input2e();
correctionHorizontale();
correctionVertivale();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
k=box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
if(T1+T2==4)
{
    fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
printf("\n");
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("__________________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==4 || save==0)
{
    complete=1;
    break;
}
do{
printf(RED"\n\nPlayer2 round\n"RESET);
round=1;
sor++;
x1=input1e();
x2=input2e();
correctionHorizontale();
correctionVertivale();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4 || save==0)
{
    fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("__________________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
}
}
}
////////////////////////// saved code /////////////////////////////////////////
else if(newGame==0)
{
  ///////////////////////////////////// saved code ////////////////////////////////////////
fsx1=fopen("px1.txt", "r");
fsx2=fopen("px2.txt", "r");
fround=fopen("round.txt", "r");
fscanf(fround,"%d",&round);
fstart=fopen("start.txt", "r");
fscanf(fstart,"%d",&start);
fsor=fopen("sor.txt", "r");
fscanf(fsor,"%d", &sor);
printf("%d",start);
if(start==1){  ///////////if the first player was red
i=1;
while(i<=sor)
{
fscanf(fsx1,"%d",&x1);
fscanf(fsx2,"%d",&x2);
correctionHorizontal();
correctionVertival();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(i==sor)
{
    break;
}
i++;
fscanf(fsx1,"%d",&x1);
fscanf(fsx2,"%d",&x2);
correctionHorizontal();
correctionVertival();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();

if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(i==sor)
{
    break;
}
i++;
}
//////////////// continue
if(round==0)    ///////the final game was green
{
    while(!complete){
do{
printf(RED"\n\nPlayer1 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4)
{
    complete=1;
    break;
}
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("___________________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==4 || save==0)
{
    complete=1;
    break;
}
do{
printf(GREEN"\n\nPlayer2 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(T1+T2==4)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("______________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
}
}
else if(round==1)   /////////////////the final game was red
{
        while(!complete){
do{
printf(GREEN"\n\nPlayer2 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(T1+T2==4)
{
    complete=1;
    break;
}
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("___________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==4 || save==0)
{
    complete=1;
    break;
}
do{
printf(RED"\n\nPlayer1 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("_______________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
        }
}
}

else if(start==0){     ///////////if the first player was green
    i=1;
while(i<=sor)
{
fscanf(fsx1,"%d",&x1);
fscanf(fsx2,"%d",&x2);
correctionHorizontal();
correctionVertival();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(i==sor)
{
    break;
}i++;
fscanf(fsx1,"%d",&x1);
fscanf(fsx2,"%d",&x2);
correctionHorizontal();
correctionVertival();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();

if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(i==sor)
{
    break;
}
i++;
}
if(sor%2==0 && round==1)  //////////////// the last game was red
{
      while(!complete){
do{
printf(GREEN"\n\nPlayer1 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(T1+T2==4)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("________________________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
do{
printf(RED"\n\nPlayer2 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("______________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
        }
}
else    //////////////// the last game was green
{
    while(!complete){
do{
printf(RED"\n\nPlayer2 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("_________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
do{
printf(GREEN"\n\nPlayer1 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontal();
correctionVertival();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(T1+T2==4)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
undoe(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
printf("____________________________________");
if(T1+T2==4 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
}
}
}
}
}
void compinputrede(){
  if(!(strcmp(horizontal[4],Str1))){
    strcpy(horizontal[4],RED"---"RESET);
    x1=4;
    x2=1;
  }
  else if(!(strcmp(horizontal[0],Str1))){
    strcpy(horizontal[0],RED"---"RESET);
    x1=0;
    x2=1;
  }
  else if(!(strcmp(l[0],Str2))){
    strcpy(l[0],RED"|"RESET);
    x1=1;
    x2=0;
  }
  else if(!(strcmp(horizontal[2],Str1))){
    strcpy(horizontal[2],RED"---"RESET);
    x1=2;
    x2=1;
  }
  else if(!(strcmp(l[3],Str2))){
    strcpy(l[3],RED"|"RESET);
    x1=3;
    x2=0;
  }
  else if(!(strcmp(horizontal[1],Str1))){
    strcpy(horizontal[1],RED"---"RESET);
    x1=0;
    x2=3;
  }
  else if(!(strcmp(l[4],Str2))){
    strcpy(l[4],RED"|"RESET);
  x1=3;
  x2=2;
  }
  else if(!(strcmp(horizontal[5],Str1))){
    strcpy(horizontal[5],RED"---"RESET);
  x1=4;
  x2=3;
  }
  else if(!(strcmp(l[1],Str2))){
    strcpy(l[1],RED "|" RESET);
  x1=1;
  x2=2;
  }
  else if(!(strcmp(l[2],Str2))){
    strcpy(l[2],RED"|"RESET);
  x1=1;
  x2=4;
  }
  else if(!(strcmp(horizontal[3],Str1))){
    strcpy(horizontal[3],RED"---"RESET);
  x1=2;
  x2=3;
  }
  else if(!(strcmp(l[5],Str2))){
    strcpy(l[5],RED"|"RESET);
  x1=3;
  x2=4;
  }
}
void compinputgreene(){
   if(!(strcmp(horizontal[4],Str1))){
    strcpy(horizontal[4],GREEN"---"RESET);
    x1=4;
    x2=1;
  }
  else if(!(strcmp(horizontal[0],Str1))){
    strcpy(horizontal[0],GREEN"---"RESET);
    x1=0;
    x2=1;
  }
  else if(!(strcmp(l[0],Str2))){
    strcpy(l[0],GREEN"|"RESET);
    x1=1;
    x2=0;
  }
  else if(!(strcmp(horizontal[2],Str1))){
    strcpy(horizontal[2],GREEN"---"RESET);
    x1=2;
    x2=1;
  }
  else if(!(strcmp(l[3],Str2))){
    strcpy(l[3],GREEN"|"RESET);
    x1=3;
    x2=0;
  }
  else if(!(strcmp(horizontal[1],Str1))){
    strcpy(horizontal[1],GREEN"---"RESET);
    x1=0;
    x2=3;
  }
  else if(!(strcmp(l[4],Str2))){
    strcpy(l[4],GREEN"|"RESET);
  x1=3;
  x2=2;
  }
  else if(!(strcmp(horizontal[5],Str1))){
    strcpy(horizontal[5],GREEN"---"RESET);
  x1=4;
  x2=3;
  }
  else if(!(strcmp(l[1],Str2))){
    strcpy(l[1],GREEN "|" RESET);
  x1=1;
  x2=2;
  }
  else if(!(strcmp(l[2],Str2))){
    strcpy(l[2],GREEN"|"RESET);
  x1=1;
  x2=4;
  }
  else if(!(strcmp(horizontal[3],Str1))){
    strcpy(horizontal[3],GREEN"---"RESET);
  x1=2;
  x2=3;
  }
  else if(!(strcmp(l[5],Str2))){
    strcpy(l[5],GREEN"|"RESET);
  x1=3;
  x2=4;
  }
}

void Compeasy(){
chooseColor();
easy();
while(!complete){

        if(c[0]=='r' && c[1]=='e' && c[2]=='d' ){
do{
printf(RED"\nPlayer1 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontale();
correctionVertivale();
vertical_rede(x1,x2);
horizon_rede(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4)
{
    complete=1;
    break;
}
undoe(x1,x2);
}while(k==1||loop==1);
if(T1+T2==4)
{
    complete=1;
    break;
}
do{
printf(GREEN"\nPlayer2 round\n"RESET);
compinputgreene();
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
box_identicatore();
if(T1+T2==4)
{
    complete=1;
    break;
}
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
}while(k==1||loop==1);
}
else{
do{
printf(GREEN"\nPlayer1 round\n"RESET);
x1=input1e();
x2=input2e();
correctionHorizontale();
correctionVertivale();
vertical_greene(x1,x2);
horizon_greene(x1,x2);
box1e();
box2e();
box3e();
box4e();
m=0;
k=0;
loop=0;
k=box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
if(T1+T2==4)
{
    complete=1;
    break;
}
printf("\n");
undoe(x1,x2);
}while(k==1||loop==1);
if(T1+T2==4)
{
    complete=1;
    break;
}
do{
printf(RED"\nPlayer2 round\n"RESET);
compinputrede();
box1e();
box2e();
box3e();
box4e();
m=1;
k=0;
loop=0;
box_identicatore();
if(A==4){
    z1=0;
}
if(B==4){
    z2=0;
}
if(C==4){
    z3=0;
}
if(D==4){
    z4=0;
}
printf("\n");
if(T1+T2==4)
{
    complete=1;
    break;
}
}while(k==1||loop==1);
}
}
}



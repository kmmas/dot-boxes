#pragma once

void hard()
{
    int f=0;
    int n=1;
    int i,j,k,p,o=0,v=0,c=0;

//............making the grid..............................
printf("\n");
    printf("                                      0 1 2 3 4 5 6 7 8 9 10\n");
    for(i=0; i<6; i++)
    {
        printf("                                 ");
        if(f!=10)
        {
            printf("  %d  ",f);
            f=f+2;
        }
        else
        {
            printf(" %d  ",f);
        }
        for(j=0; j<6; j++)
        {
            printf("%c",grid[j]);
            if(j==5)
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
        if(i==5)
        {
            break;
        }
//................ vertical lines.......................
        else
        {
            printf("\n");
            printf("                                 ");

            for(k=0; k<1; k++)
            {
                printf("  %d  ",n);
                n=n+2;
                for(p=0; p<6; p++)
                {
                    printf("%s",l[v]);
                    v++;
                    if(p==5)
                    {
                        break;
                    }
                    else
                    {
                        printf(" %s ",cell[c]);
                        c++;
                    }

                }
                printf("\n");
            }
        }
    }
    printf("\n\n");
}
int input1()
{
    int x1=11;
    while(x1>10||x1<0)
    {
        printf("enter the row coordinate of line: ");
        scanf("%d",&x1);
    }
    return x1;
}

int input2()
{
    int x2=0;
    if(x1==0||x1==2||x1==4||x1==6||x1==8||x1==10)
    {
        while(x2!=1&&x2!=3&&x2!=5&&x2!=7&&x2!=9)
        {
            printf("enter the column coordinate of line: ");
            scanf("%d",&x2);
        }
    }
    else
    {
        x2=11;
        while(x2!=0&&x2!=2&&x2!=4&&x2!=6&&x2!=8&&x2!=10)
        {
            printf("enter the column coordinate of line: ");
            scanf("%d",&x2);
        }
    }
    return x2;
}

void horizon_red()
{
    if(x1==0&&x2==1)
    {
        strcpy(horizontal[0],RED"---"RESET);
    }
    else if(x1==2 && x2==1)
    {
        strcpy(horizontal[5],RED"---"RESET);
    }
    else if(x1==4 && x2==1)
    {
        strcpy(horizontal[10],RED"---"RESET);
    }
    else if(x1==0 && x2==3)
    {
        strcpy(horizontal[1],RED"---"RESET);
    }
    else if(x1==2 && x2==3)
    {
        strcpy(horizontal[6],RED"---"RESET);
    }
    else if(x1==4 && x2==3)
    {
        strcpy(horizontal[11],RED"---"RESET);
    }
    else if(x1==0 && x2==5)
    {
        strcpy(horizontal[2],RED"---"RESET);
    }
    else if(x1==0 && x2==7)
    {
        strcpy(horizontal[3],RED"---"RESET);
    }
    else if(x1==2 && x2==5)
    {
        strcpy(horizontal[7],RED"---"RESET);
    }
    else if(x1==2 && x2==7)
    {
        strcpy(horizontal[8],RED"---"RESET);
    }
    else if(x1==4 && x2==5)
    {
        strcpy(horizontal[12],RED"---"RESET);
    }
    else if(x1==4 && x2==7)
    {
        strcpy(horizontal[13],RED"---"RESET);
    }
    else if(x1==6 && x2==1)
    {
        strcpy(horizontal[15],RED"---"RESET);
    }
    else if(x1==6 && x2==3)
    {
        strcpy(horizontal[16],RED"---"RESET);
    }
    else if(x1==6 && x2==5)
    {
        strcpy(horizontal[17],RED"---"RESET);
    }
    else if(x1==6 && x2==7)
    {
        strcpy(horizontal[18],RED"---"RESET);
    }
    else if(x1==8 && x2==1)
    {
        strcpy(horizontal[20],RED"---"RESET);
    }
    else if(x1==8 && x2==3)
    {
        strcpy(horizontal[21],RED"---"RESET);
    }
    else if(x1==8 && x2==5)
    {
        strcpy(horizontal[22],RED"---"RESET);
    }
    else if(x1==8 && x2==7)
    {
        strcpy(horizontal[23],RED"---"RESET);
    }
    else if(x1==10 && x2==1)
    {
        strcpy(horizontal[25],RED"---"RESET);
    }
    else if(x1==10 && x2==3)
    {
        strcpy(horizontal[26],RED"---"RESET);
    }
    else if(x1==10 && x2==5)
    {
        strcpy(horizontal[27],RED"---"RESET);
    }
    else if(x1==10 && x2==7)
    {
        strcpy(horizontal[28],RED"---"RESET);
    }
    else if(x1==0 && x2==9)
    {
        strcpy(horizontal[4],RED"---"RESET);
    }
    else if(x1==2 && x2==9)
    {
        strcpy(horizontal[9],RED"---"RESET);
    }
    else if(x1==4 && x2==9)
    {
        strcpy(horizontal[14],RED"---"RESET);
    }
    else if(x1==6 && x2==9)
    {
        strcpy(horizontal[19],RED"---"RESET);
    }
    else if(x1==8 && x2==9)
    {
        strcpy(horizontal[24],RED"---"RESET);
    }
    else if(x1==10 && x2==9)
    {
        strcpy(horizontal[29],RED"---"RESET);
    }
}

void horizon_green()
{
    if(x1==0&&x2==1)
    {
        strcpy(horizontal[0],GREEN"---"RESET);
    }
    else if(x1==2 && x2==1)
    {
        strcpy(horizontal[5],GREEN"---"RESET);
    }
    else if(x1==4 && x2==1)
    {
        strcpy(horizontal[10],GREEN"---"RESET);
    }
    else if(x1==0 && x2==3)
    {
        strcpy(horizontal[1],GREEN"---"RESET);
    }
    else if(x1==2 && x2==3)
    {
        strcpy(horizontal[6],GREEN"---"RESET);
    }
    else if(x1==4 && x2==3)
    {
        strcpy(horizontal[11],GREEN"---"RESET);
    }
    else if(x1==0 && x2==5)
    {
        strcpy(horizontal[2],GREEN"---"RESET);
    }
    else if(x1==0 && x2==7)
    {
        strcpy(horizontal[3],GREEN"---"RESET);
    }
    else if(x1==2 && x2==5)
    {
        strcpy(horizontal[7],GREEN"---"RESET);
    }
    else if(x1==2 && x2==7)
    {
        strcpy(horizontal[8],GREEN"---"RESET);
    }
    else if(x1==4 && x2==5)
    {
        strcpy(horizontal[12],GREEN"---"RESET);
    }
    else if(x1==4 && x2==7)
    {
        strcpy(horizontal[13],GREEN"---"RESET);
    }
    else if(x1==6 && x2==1)
    {
        strcpy(horizontal[15],GREEN"---"RESET);
    }
    else if(x1==6 && x2==3)
    {
        strcpy(horizontal[16],GREEN"---"RESET);
    }
    else if(x1==6 && x2==5)
    {
        strcpy(horizontal[17],GREEN"---"RESET);
    }
    else if(x1==6 && x2==7)
    {
        strcpy(horizontal[18],GREEN"---"RESET);
    }
    else if(x1==8 && x2==1)
    {
        strcpy(horizontal[20],GREEN"---"RESET);
    }
    else if(x1==8 && x2==3)
    {
        strcpy(horizontal[21],GREEN"---"RESET);
    }
    else if(x1==8 && x2==5)
    {
        strcpy(horizontal[22],GREEN"---"RESET);
    }
    else if(x1==8 && x2==7)
    {
        strcpy(horizontal[23],GREEN"---"RESET);
    }
    else if(x1==10 && x2==1)
    {
        strcpy(horizontal[25],GREEN"---"RESET);
    }
    else if(x1==10 && x2==3)
    {
        strcpy(horizontal[26],GREEN"---"RESET);
    }
    else if(x1==10 && x2==5)
    {
        strcpy(horizontal[27],GREEN"---"RESET);
    }
    else if(x1==10 && x2==7)
    {
        strcpy(horizontal[28],GREEN"---"RESET);
    }
    else if(x1==0 && x2==9)
    {
        strcpy(horizontal[4],GREEN"---"RESET);
    }
    else if(x1==2 && x2==9)
    {
        strcpy(horizontal[9],GREEN"---"RESET);
    }
    else if(x1==4 && x2==9)
    {
        strcpy(horizontal[14],GREEN"---"RESET);
    }
    else if(x1==6 && x2==9)
    {
        strcpy(horizontal[19],GREEN"---"RESET);
    }
    else if(x1==8 && x2==9)
    {
        strcpy(horizontal[24],GREEN"---"RESET);
    }
    else if(x1==10 && x2==9)
    {
        strcpy(horizontal[29],GREEN"---"RESET);
    }
}

void vertical_red()
{
    if(x1==1&&x2==0)
    {
        strcpy(l[0],RED"|"RESET);
    }
    else if (x1==1&&x2==2)
    {
        strcpy(l[1],RED"|"RESET);
    }
    else if (x1==1&&x2==4)
    {
        strcpy(l[2],RED"|"RESET);
    }
    else if (x1==3&&x2==0)
    {
        strcpy(l[6],RED"|"RESET);
    }
    else if (x1==3&&x2==2)
    {
        strcpy(l[7],RED"|"RESET);
    }
    else if (x1==3&&x2==4)
    {
        strcpy(l[8],RED"|"RESET);
    }
    else if(x1==1 && x2==6)
    {
        strcpy(l[3],RED"|"RESET);
    }
    else if(x1==1 && x2==8)
    {
        strcpy(l[4],RED"|"RESET);
    }
    else if(x1==3 && x2==6)
    {
        strcpy(l[9],RED"|"RESET);
    }
    else if(x1==3 && x2==8)
    {
        strcpy(l[10],RED"|"RESET);
    }
    else if(x1==5 && x2==0)
    {
        strcpy(l[12],RED"|"RESET);
    }
    else if(x1==5 && x2==2)
    {
        strcpy(l[13],RED"|"RESET);
    }
    else if(x1==5 && x2==4)
    {
        strcpy(l[14],RED"|"RESET);
    }
    else if(x1==5 && x2==6)
    {
        strcpy(l[15],RED"|"RESET);
    }
    else if(x1==5 && x2==8)
    {
        strcpy(l[16],RED"|"RESET);
    }
    else if(x1==7 && x2==0)
    {
        strcpy(l[18],RED"|"RESET);
    }
    else if(x1==7 && x2==2)
    {
        strcpy(l[19],RED"|"RESET);
    }
    else if(x1==7 && x2==4)
    {
        strcpy(l[20],RED"|"RESET);
    }
    else if(x1==7 && x2==6)
    {
        strcpy(l[21],RED"|"RESET);
    }
    else if(x1==7 && x2==8)
    {
        strcpy(l[22],RED"|"RESET);
    }
    else if(x1==1 && x2==10)
    {
        strcpy(l[5],RED"|"RESET);
    }
    else if(x1==3 && x2==10)
    {
        strcpy(l[11],RED"|"RESET);
    }
    else if(x1==5 && x2==10)
    {
        strcpy(l[17],RED"|"RESET);
    }
    else if(x1==7 && x2==10)
    {
        strcpy(l[23],RED"|"RESET);
    }
    else if(x1==9 && x2==10)
    {
        strcpy(l[29],RED"|"RESET);
    }
    else if(x1==9 && x2==0)
    {
        strcpy(l[24],RED"|"RESET);
    }
    else if(x1==9 && x2==2)
    {
        strcpy(l[25],RED"|"RESET);
    }
    else if(x1==9 && x2==4)
    {
        strcpy(l[26],RED"|"RESET);
    }
    else if(x1==9 && x2==6)
    {
        strcpy(l[27],RED"|"RESET);
    }
    else if(x1==9 && x2==8)
    {
        strcpy(l[28],RED"|"RESET);
    }

}

void vertical_green()
{
    if(x1==1&&x2==0)
    {
        strcpy(l[0],GREEN"|"RESET);
    }
    else if (x1==1&&x2==2)
    {
        strcpy(l[1],GREEN"|"RESET);
    }
    else if (x1==1&&x2==4)
    {
        strcpy(l[2],GREEN"|"RESET);
    }
    else if (x1==3&&x2==0)
    {
        strcpy(l[6],GREEN"|"RESET);
    }
    else if (x1==3&&x2==2)
    {
        strcpy(l[7],GREEN"|"RESET);
    }
    else if (x1==3&&x2==4)
    {
        strcpy(l[8],GREEN"|"RESET);
    }
    else if(x1==1 && x2==6)
    {
        strcpy(l[3],GREEN"|"RESET);
    }
    else if(x1==1 && x2==8)
    {
        strcpy(l[4],GREEN"|"RESET);
    }
    else if(x1==3 && x2==6)
    {
        strcpy(l[9],GREEN"|"RESET);
    }
    else if(x1==3 && x2==8)
    {
        strcpy(l[10],GREEN"|"RESET);
    }
    else if(x1==5 && x2==0)
    {
        strcpy(l[12],GREEN"|"RESET);
    }
    else if(x1==5 && x2==2)
    {
        strcpy(l[13],GREEN"|"RESET);
    }
    else if(x1==5 && x2==4)
    {
        strcpy(l[14],GREEN"|"RESET);
    }
    else if(x1==5 && x2==6)
    {
        strcpy(l[15],GREEN"|"RESET);
    }
    else if(x1==5 && x2==8)
    {
        strcpy(l[16],GREEN"|"RESET);
    }
    else if(x1==7 && x2==0)
    {
        strcpy(l[18],GREEN"|"RESET);
    }
    else if(x1==7 && x2==2)
    {
        strcpy(l[19],GREEN"|"RESET);
    }
    else if(x1==7 && x2==4)
    {
        strcpy(l[20],GREEN"|"RESET);
    }
    else if(x1==7 && x2==6)
    {
        strcpy(l[21],GREEN"|"RESET);
    }
    else if(x1==7 && x2==8)
    {
        strcpy(l[22],GREEN"|"RESET);
    }
    else if(x1==1 && x2==10)
    {
        strcpy(l[5],GREEN"|"RESET);
    }
    else if(x1==3 && x2==10)
    {
        strcpy(l[11],GREEN"|"RESET);
    }
    else if(x1==5 && x2==10)
    {
        strcpy(l[17],GREEN"|"RESET);
    }
    else if(x1==7 && x2==10)
    {
        strcpy(l[23],GREEN"|"RESET);
    }
    else if(x1==9 && x2==10)
    {
        strcpy(l[29],GREEN"|"RESET);
    }
    else if(x1==9 && x2==0)
    {
        strcpy(l[24],GREEN"|"RESET);
    }
    else if(x1==9 && x2==2)
    {
        strcpy(l[25],GREEN"|"RESET);
    }
    else if(x1==9 && x2==4)
    {
        strcpy(l[26],GREEN"|"RESET);
    }
    else if(x1==9 && x2==6)
    {
        strcpy(l[27],GREEN"|"RESET);
    }
    else if(x1==9 && x2==8)
    {
        strcpy(l[28],GREEN"|"RESET);
    }

}
void un_horizon()
{
    if(x1==0&&x2==1)
    {
        strcpy(horizontal[0],RED"   "RESET);
        ch31=0;
    }
    else if(x1==2 && x2==1)
    {
        strcpy(horizontal[5],RED"   "RESET);
        ch36=0;
    }
    else if(x1==4 && x2==1)
    {
        strcpy(horizontal[10],RED"   "RESET);
        ch41=0;
    }
    else if(x1==0 && x2==3)
    {
        strcpy(horizontal[1],RED"   "RESET);
        ch32=0;
    }
    else if(x1==2 && x2==3)
    {
        strcpy(horizontal[6],RED"   "RESET);
        ch37=0;
    }
    else if(x1==4 && x2==3)
    {
        strcpy(horizontal[11],RED"   "RESET);
        ch42=0;
    }
    else if(x1==0 && x2==5)
    {
        strcpy(horizontal[2],RED"   "RESET);
        ch33=0;
    }
    else if(x1==0 && x2==7)
    {
        strcpy(horizontal[3],RED"   "RESET);
        ch34=0;
    }
    else if(x1==2 && x2==5)
    {
        strcpy(horizontal[7],RED"   "RESET);
        ch38=0;
    }
    else if(x1==2 && x2==7)
    {
        strcpy(horizontal[8],RED"   "RESET);
        ch39=0;
    }
    else if(x1==4 && x2==5)
    {
        strcpy(horizontal[12],RED"   "RESET);
        ch43=0;
    }
    else if(x1==4 && x2==7)
    {
        strcpy(horizontal[13],RED"   "RESET);
        ch44=0;
    }
    else if(x1==6 && x2==1)
    {
        strcpy(horizontal[15],RED"   "RESET);
        ch46=0;
    }
    else if(x1==6 && x2==3)
    {
        strcpy(horizontal[16],RED"   "RESET);
        ch47=0;
    }
    else if(x1==6 && x2==5)
    {
        strcpy(horizontal[17],RED"   "RESET);
        ch48=0;
    }
    else if(x1==6 && x2==7)
    {
        strcpy(horizontal[18],RED"   "RESET);
        ch49=0;
    }
    else if(x1==8 && x2==1)
    {
        strcpy(horizontal[20],RED"   "RESET);
        ch51=0;
    }
    else if(x1==8 && x2==3)
    {
        strcpy(horizontal[21],RED"   "RESET);
        ch52=0;
    }
    else if(x1==8 && x2==5)
    {
        strcpy(horizontal[22],RED"   "RESET);
        ch53=0;
    }
    else if(x1==8 && x2==7)
    {
        strcpy(horizontal[23],RED"   "RESET);
        ch54=0;
    }
    else if(x1==10 && x2==1)
    {
        strcpy(horizontal[25],RED"   "RESET);
        ch56=0;
    }
    else if(x1==10 && x2==3)
    {
        strcpy(horizontal[26],RED"   "RESET);
        ch57=0;
    }
    else if(x1==10 && x2==5)
    {
        strcpy(horizontal[27],RED"   "RESET);
        ch58=0;
    }
    else if(x1==10 && x2==7)
    {
        strcpy(horizontal[28],RED"   "RESET);
        ch59=0;
    }
    else if(x1==0 && x2==9)
    {
        strcpy(horizontal[4],RED"   "RESET);
        ch35=0;
    }
    else if(x1==2 && x2==9)
    {
        strcpy(horizontal[9],RED"   "RESET);
        ch40=0;
    }
    else if(x1==4 && x2==9)
    {
        strcpy(horizontal[14],RED"   "RESET);
        ch45=0;
    }
    else if(x1==6 && x2==9)
    {
        strcpy(horizontal[19],RED"   "RESET);
        ch50=0;
    }
    else if(x1==8 && x2==9)
    {
        strcpy(horizontal[24],RED"   "RESET);
        ch55=0;
    }
    else if(x1==10 && x2==9)
    {
        strcpy(horizontal[29],RED"   "RESET);
        ch60=0;
    }
}
void un_vertical()
{
    if(x1==1&&x2==0)
    {
        strcpy(l[0],RED" "RESET);
        ch1=0;
    }
    else if (x1==1&&x2==2)
    {
        strcpy(l[1],RED" "RESET);
        ch2=0;
    }
    else if (x1==1&&x2==4)
    {
        strcpy(l[2],RED" "RESET);
        ch3=0;
    }
    else if (x1==3&&x2==0)
    {
        strcpy(l[6],RED" "RESET);
        ch7=0;
    }
    else if (x1==3&&x2==2)
    {
        strcpy(l[7],RED" "RESET);
        ch8=0;
    }
    else if (x1==3&&x2==4)
    {
        strcpy(l[8],RED" "RESET);
        ch9=0;
    }
    else if(x1==1 && x2==6)
    {
        strcpy(l[3],RED" "RESET);
        ch4=0;
    }
    else if(x1==1 && x2==8)
    {
        strcpy(l[4],RED" "RESET);
        ch5=0;
    }
    else if(x1==3 && x2==6)
    {
        strcpy(l[9],RED" "RESET);
        ch10=0;
    }
    else if(x1==3 && x2==8)
    {
        strcpy(l[10],RED" "RESET);
        ch11=0;
    }
    else if(x1==5 && x2==0)
    {
        strcpy(l[12],RED" "RESET);
        ch13=0;
    }
    else if(x1==5 && x2==2)
    {
        strcpy(l[13],RED" "RESET);
        ch14=0;
    }
    else if(x1==5 && x2==4)
    {
        strcpy(l[14],RED" "RESET);
        ch15=0;
    }
    else if(x1==5 && x2==6)
    {
        strcpy(l[15],RED" "RESET);
        ch16=0;
    }
    else if(x1==5 && x2==8)
    {
        strcpy(l[16],RED" "RESET);
        ch17=0;
    }
    else if(x1==7 && x2==0)
    {
        strcpy(l[18],RED" "RESET);
        ch19=0;
    }
    else if(x1==7 && x2==2)
    {
        strcpy(l[19],RED" "RESET);
        ch20=0;
    }
    else if(x1==7 && x2==4)
    {
        strcpy(l[20],RED" "RESET);
        ch21=0;
    }
    else if(x1==7 && x2==6)
    {
        strcpy(l[21],RED" "RESET);
        ch22=0;
    }
    else if(x1==7 && x2==8)
    {
        strcpy(l[22],RED" "RESET);
        ch23=0;
    }
    else if(x1==1 && x2==10)
    {
        strcpy(l[5],RED" "RESET);
        ch6=0;
    }
    else if(x1==3 && x2==10)
    {
        strcpy(l[11],RED" "RESET);
        ch12=0;
    }
    else if(x1==5 && x2==10)
    {
        strcpy(l[17],RED" "RESET);
        ch18=0;
    }
    else if(x1==7 && x2==10)
    {
        strcpy(l[23],RED" "RESET);
        ch24=0;
    }
    else if(x1==9 && x2==10)
    {
        strcpy(l[29],RED" "RESET);
        ch30=0;
    }
    else if(x1==9 && x2==0)
    {
        strcpy(l[24],RED" "RESET);
        ch25=0;
    }
    else if(x1==9 && x2==2)
    {
        strcpy(l[25],RED" "RESET);
        ch26=0;
    }
    else if(x1==9 && x2==4)
    {
        strcpy(l[26],RED" "RESET);
        ch27=0;
    }
    else if(x1==9 && x2==6)
    {
        strcpy(l[27],RED" "RESET);
        ch28=0;
    }
    else if(x1==9 && x2==8)
    {
        strcpy(l[28],RED" "RESET);
        ch29=0;
    }

}
void lines()
{
    line=a1+a2+a3+a4+b1+c1+c2+c3+c4+d3+q1+q2+q3+q4+e1+f1+f2+f3+f4+h1+h2+h3+h4+r2+i1+i2+i3+i4+
         k1+k2+k3+k4+s1+s2+s3+s4+m1+n1+n2+n3+n4+p1+p2+p3+p4+tb2+v1+v2+v3+v4+wb4+xb1+xb2+xb3+xb4+y4+
         u1+u2+u3+u4;
    printf("    Number of lines played:%d                                     Number of lines remain:%d\n",line,60-line);
    printf("______________________________________________________________________________________________________");

}

int box1()
{
    if(x1==0&&x2==1)
    {
        a1=1;
    }
    if(x1==1&&x2==2)
    {
        a2=1;
    }
    if(x1==1&&x2==0)
    {
        a3=1;
    }
    if(x1==2&&x2==1)
    {
        a4=1;
    }
    A=a1+a2+a3+a4;
    return A;
}
int box2()
{
    if(x1==0&&x2==3)
    {
        b1=1;
    }
    if(x1==1&&x2==2)
    {
        b2=1;
    }
    if(x1==1&&x2==4)
    {
        b3=1;
    }
    if(x1==2&&x2==3)
    {
        b4=1;
    }
    B=b1+b2+b3+b4;
    return B;
}
int box3()
{
    if(x1==1&&x2==4)
    {
        c1=1;
    }
    if(x1==1&&x2==6)
    {
        c2=1;
    }
    if(x1==0&&x2==5)
    {
        c3=1;
    }
    if(x1==2&&x2==5)
    {
        c4=1;
    }
    C=c1+c2+c3+c4;
    return C;
}
int box4()
{
    if(x1==1&&x2==6)
    {
        d1=1;
    }
    if(x1==1&&x2==8)
    {
        d2=1;
    }
    if(x1==0&&x2==7)
    {
        d3=1;
    }
    if(x1==2&&x2==7)
    {
        d4=1;
    }
    D=d1+d2+d3+d4;
    return D;
}
int box5()
{
    if(x1==1&&x2==8)
    {
        q1=1;
    }
    if(x1==1&&x2==10)
    {
        q2=1;
    }
    if(x1==0&&x2==9)
    {
        q3=1;
    }
    if(x1==2&&x2==9)
    {
        q4=1;
    }
    Q=q1+q2+q3+q4;
    return Q;
}
int box6()
{
    if(x1==3&&x2==0)
    {
        e1=1;
    }
    if(x1==3&&x2==2)
    {
        e2=1;
    }
    if(x1==2&&x2==1)
    {
        e3=1;
    }
    if(x1==4&&x2==1)
    {
        e4=1;
    }
    E=e1+e2+e3+e4;
    return E;
}
int box7()
{
    if(x1==3&&x2==2)
    {
        f1=1;
    }
    if(x1==3&&x2==4)
    {
        f2=1;
    }
    if(x1==2&&x2==3)
    {
        f3=1;
    }
    if(x1==4&&x2==3)
    {
        f4=1;
    }
    F=f1+f2+f3+f4;
    return F;
}
int box8()
{
    if(x1==3&&x2==4)
    {
        g1=1;
    }
    if(x1==3&&x2==6)
    {
        g2=1;
    }
    if(x1==2&&x2==5)
    {
        g3=1;
    }
    if(x1==4&&x2==5)
    {
        g4=1;
    }
    G=g1+g2+g3+g4;
    return G;
}
int box9()
{
    if(x1==3&&x2==6)
    {
        h1=1;
    }
    if(x1==3&&x2==8)
    {
        h2=1;
    }
    if(x1==2&&x2==7)
    {
        h3=1;
    }
    if(x1==4&&x2==7)
    {
        h4=1;
    }
    H=h1+h2+h3+h4;
    return H;
}
int box11()
{
    if(x1==5&&x2==0)
    {
        i1=1;
    }
    if(x1==5&&x2==2)
    {
        i2=1;
    }
    if(x1==4&&x2==1)
    {
        i3=1;
    }
    if(x1==6&&x2==1)
    {
        i4=1;
    }
    I=i1+i2+i3+i4;
    return I;
}
int box12()
{
    if(x1==5&&x2==2)
    {
        j1=1;
    }
    if(x1==5&&x2==4)
    {
        j2=1;
    }
    if(x1==4&&x2==3)
    {
        j3=1;
    }
    if(x1==6&&x2==3)
    {
        j4=1;
    }
    J=j1+j2+j3+j4;
    return J;
}
int box10()
{
    if(x1==3&&x2==8)
    {
        r1=1;
    }
    if(x1==3&&x2==10)
    {
        r2=1;
    }
    if(x1==2&&x2==9)
    {
        r3=1;
    }
    if(x1==4&&x2==9)
    {
        r4=1;
    }
    R=r1+r2+r3+r4;
    return R;
}
int box13()
{
    if(x1==5&&x2==4)
    {
        k1=1;
    }
    if(x1==5&&x2==6)
    {
        k2=1;
    }
    if(x1==4&&x2==5)
    {
        k3=1;
    }
    if(x1==6&&x2==5)
    {
        k4=1;
    }
    K=k1+k2+k3+k4;
    return K;
}
int box14()
{
    if(x1==5&&x2==6)
    {
        l1=1;
    }
    if(x1==5&&x2==8)
    {
        l2=1;
    }
    if(x1==4&&x2==7)
    {
        l3=1;
    }
    if(x1==6&&x2==7)
    {
        l4=1;
    }
    L=l1+l2+l3+l4;
    return L;
}
int box16()
{
    if(x1==7&&x2==0)
    {
        m1=1;
    }
    if(x1==7&&x2==2)
    {
        m2=1;
    }
    if(x1==6&&x2==1)
    {
        m3=1;
    }
    if(x1==8&&x2==1)
    {
        m4=1;
    }
    M=m1+m2+m3+m4;
    return M;
}
int box17()
{
    if(x1==7&&x2==2)
    {
        n1=1;
    }
    if(x1==7&&x2==4)
    {
        n2=1;
    }
    if(x1==6&&x2==3)
    {
        n3=1;
    }
    if(x1==8&&x2==3)
    {
        n4=1;
    }
    N=n1+n2+n3+n4;
    return N;
}
int box18()
{
    if(x1==7&&x2==4)
    {
        o1=1;
    }
    if(x1==7&&x2==6)
    {
        o2=1;
    }
    if(x1==6&&x2==5)
    {
        o3=1;
    }
    if(x1==8&&x2==5)
    {
        o4=1;
    }
    O=o1+o2+o3+o4;
    return O;
}
int box15()
{
    if(x1==5&&x2==8)
    {
        s1=1;
    }
    if(x1==5&&x2==10)
    {
        s2=1;
    }
    if(x1==4&&x2==9)
    {
        s3=1;
    }
    if(x1==6&&x2==9)
    {
        s4=1;
    }
    S=s1+s2+s3+s4;
    return S;
}
int box19()
{
    if(x1==7&&x2==6)
    {
        p1=1;
    }
    if(x1==7&&x2==8)
    {
        p2=1;
    }
    if(x1==6&&x2==7)
    {
        p3=1;
    }
    if(x1==8&&x2==7)
    {
        p4=1;
    }
    P=p1+p2+p3+p4;
    return P;
}
int box20()
{
    if(x1==7&&x2==8)
    {
        tb1=1;
    }
    if(x1==7&&x2==10)
    {
        tb2=1;
    }
    if(x1==6&&x2==9)
    {
        tb3=1;
    }
    if(x1==8&&x2==9)
    {
        tb4=1;
    }
    Tb=tb1+tb2+tb3+tb4;
    return Tb;
}
int box21()
{
    if(x1==9&&x2==0)
    {
        v1=1;
    }
    if(x1==9&&x2==2)
    {
        v2=1;
    }
    if(x1==8&&x2==1)
    {
        v3=1;
    }
    if(x1==10&&x2==1)
    {
        v4=1;
    }
    V=v1+v2+v3+v4;
    return V;
}
int box22()
{
    if(x1==9&&x2==2)
    {
        wb1=1;
    }
    if(x1==9&&x2==4)
    {
        wb2=1;
    }
    if(x1==8&&x2==3)
    {
        wb3=1;
    }
    if(x1==10&&x2==3)
    {
        wb4=1;
    }
    Wb=wb1+wb2+wb3+wb4;
    return Wb;
}
int box23()
{
    if(x1==9&&x2==4)
    {
        xb1=1;
    }
    if(x1==9&&x2==6)
    {
        xb2=1;
    }
    if(x1==8&&x2==5)
    {
        xb3=1;
    }
    if(x1==10&&x2==5)
    {
        xb4=1;
    }
    Xb=xb1+xb2+xb3+xb4;
    return Xb;
}
int box24()
{
    if(x1==9&&x2==6)
    {
        y1=1;
    }
    if(x1==9&&x2==8)
    {
        y2=1;
    }
    if(x1==8&&x2==7)
    {
        y3=1;
    }
    if(x1==10&&x2==7)
    {
        y4=1;
    }
    Y=y1+y2+y3+y4;
    return Y;
}
int box25()
{
    if(x1==9&&x2==8)
    {
        u1=1;
    }
    if(x1==9&&x2==10)
    {
        u2=1;
    }
    if(x1==8&&x2==9)
    {
        u3=1;
    }
    if(x1==10&&x2==9)
    {
        u4=1;
    }
    U=u1+u2+u3+u4;
    return U;
}
int un_box1()
{
    if(x1==0&&x2==1)
    {
        a1=0;
    }
    if(x1==1&&x2==2)
    {
        a2=0;
    }
    if(x1==1&&x2==0)
    {
        a3=0;
    }
    if(x1==2&&x2==1)
    {
        a4=0;
    }
    A=a1+a2+a3+a4;
    return A;
}
int un_box2()
{
    if(x1==0&&x2==3)
    {
        b1=0;
    }
    if(x1==1&&x2==2)
    {
        b2=0;
    }
    if(x1==1&&x2==4)
    {
        b3=0;
    }
    if(x1==2&&x2==3)
    {
        b4=0;
    }
    B=b1+b2+b3+b4;
    return B;
}
int un_box3()
{
    if(x1==1&&x2==4)
    {
        c1=0;
    }
    if(x1==1&&x2==6)
    {
        c2=0;
    }
    if(x1==0&&x2==5)
    {
        c3=0;
    }
    if(x1==2&&x2==5)
    {
        c4=0;
    }
    C=c1+c2+c3+c4;
    return C;
}
int un_box4()
{
    if(x1==1&&x2==6)
    {
        d1=0;
    }
    if(x1==1&&x2==8)
    {
        d2=0;
    }
    if(x1==0&&x2==7)
    {
        d3=0;
    }
    if(x1==2&&x2==7)
    {
        d4=0;
    }
    D=d1+d2+d3+d4;
    return D;
}
int un_box5()
{
    if(x1==1&&x2==8)
    {
        q1=0;
    }
    if(x1==1&&x2==10)
    {
        q2=0;
    }
    if(x1==0&&x2==9)
    {
        q3=0;
    }
    if(x1==2&&x2==9)
    {
        q4=0;
    }
    Q=q1+q2+q3+q4;
    return Q;
}
int un_box6()
{
    if(x1==3&&x2==0)
    {
        e1=0;
    }
    if(x1==3&&x2==2)
    {
        e2=0;
    }
    if(x1==2&&x2==1)
    {
        e3=0;
    }
    if(x1==4&&x2==1)
    {
        e4=0;
    }
    E=e1+e2+e3+e4;
    return E;
}
int un_box7()
{
    if(x1==3&&x2==2)
    {
        f1=0;
    }
    if(x1==3&&x2==4)
    {
        f2=0;
    }
    if(x1==2&&x2==3)
    {
        f3=0;
    }
    if(x1==4&&x2==3)
    {
        f4=0;
    }
    F=f1+f2+f3+f4;
    return F;
}
int un_box8()
{
    if(x1==3&&x2==4)
    {
        g1=0;
    }
    if(x1==3&&x2==6)
    {
        g2=0;
    }
    if(x1==2&&x2==5)
    {
        g3=0;
    }
    if(x1==4&&x2==5)
    {
        g4=0;
    }
    G=g1+g2+g3+g4;
    return G;
}
int un_box9()
{
    if(x1==3&&x2==6)
    {
        h1=0;
    }
    if(x1==3&&x2==8)
    {
        h2=0;
    }
    if(x1==2&&x2==7)
    {
        h3=0;
    }
    if(x1==4&&x2==7)
    {
        h4=0;
    }
    H=h1+h2+h3+h4;
    return H;
}
int un_box11()
{
    if(x1==5&&x2==0)
    {
        i1=0;
    }
    if(x1==5&&x2==2)
    {
        i2=0;
    }
    if(x1==4&&x2==1)
    {
        i3=0;
    }
    if(x1==6&&x2==1)
    {
        i4=0;
    }
    I=i1+i2+i3+i4;
    return I;
}
int un_box12()
{
    if(x1==5&&x2==2)
    {
        j1=0;
    }
    if(x1==5&&x2==4)
    {
        j2=0;
    }
    if(x1==4&&x2==3)
    {
        j3=0;
    }
    if(x1==6&&x2==3)
    {
        j4=0;
    }
    J=j1+j2+j3+j4;
    return J;
}
int un_box10()
{
    if(x1==3&&x2==8)
    {
        r1=0;
    }
    if(x1==3&&x2==10)
    {
        r2=0;
    }
    if(x1==2&&x2==9)
    {
        r3=0;
    }
    if(x1==4&&x2==9)
    {
        r4=0;
    }
    R=r1+r2+r3+r4;
    return R;
}
int un_box13()
{
    if(x1==5&&x2==4)
    {
        k1=0;
    }
    if(x1==5&&x2==6)
    {
        k2=0;
    }
    if(x1==4&&x2==5)
    {
        k3=0;
    }
    if(x1==6&&x2==5)
    {
        k4=0;
    }
    K=k1+k2+k3+k4;
    return K;
}
int un_box14()
{
    if(x1==5&&x2==6)
    {
        l1=0;
    }
    if(x1==5&&x2==8)
    {
        l2=0;
    }
    if(x1==4&&x2==7)
    {
        l3=0;
    }
    if(x1==6&&x2==7)
    {
        l4=0;
    }
    L=l1+l2+l3+l4;
    return L;
}
int un_box16()
{
    if(x1==7&&x2==0)
    {
        m1=0;
    }
    if(x1==7&&x2==2)
    {
        m2=0;
    }
    if(x1==6&&x2==1)
    {
        m3=0;
    }
    if(x1==8&&x2==1)
    {
        m4=0;
    }
    M=m1+m2+m3+m4;
    return M;
}
int un_box17()
{
    if(x1==7&&x2==2)
    {
        n1=0;
    }
    if(x1==7&&x2==4)
    {
        n2=0;
    }
    if(x1==6&&x2==3)
    {
        n3=0;
    }
    if(x1==8&&x2==3)
    {
        n4=0;
    }
    N=n1+n2+n3+n4;
    return N;
}
int un_box18()
{
    if(x1==7&&x2==4)
    {
        o1=0;
    }
    if(x1==7&&x2==6)
    {
        o2=0;
    }
    if(x1==6&&x2==5)
    {
        o3=0;
    }
    if(x1==8&&x2==5)
    {
        o4=0;
    }
    O=o1+o2+o3+o4;
    return O;
}
int un_box15()
{
    if(x1==5&&x2==8)
    {
        s1=0;
    }
    if(x1==5&&x2==10)
    {
        s2=0;
    }
    if(x1==4&&x2==9)
    {
        s3=0;
    }
    if(x1==6&&x2==9)
    {
        s4=0;
    }
    S=s1+s2+s3+s4;
    return S;
}
int un_box19()
{
    if(x1==7&&x2==6)
    {
        p1=0;
    }
    if(x1==7&&x2==8)
    {
        p2=0;
    }
    if(x1==6&&x2==7)
    {
        p3=0;
    }
    if(x1==8&&x2==7)
    {
        p4=0;
    }
    P=p1+p2+p3+p4;
    return P;
}
int un_box20()
{
    if(x1==7&&x2==8)
    {
        tb1=0;
    }
    if(x1==7&&x2==10)
    {
        tb2=0;
    }
    if(x1==6&&x2==9)
    {
        tb3=0;
    }
    if(x1==8&&x2==9)
    {
        tb4=0;
    }
    Tb=tb1+tb2+tb3+tb4;
    return Tb;
}
int un_box21()
{
    if(x1==9&&x2==0)
    {
        v1=0;
    }
    if(x1==9&&x2==2)
    {
        v2=0;
    }
    if(x1==8&&x2==1)
    {
        v3=0;
    }
    if(x1==10&&x2==1)
    {
        v4=0;
    }
    V=v1+v2+v3+v4;
    return V;
}
int un_box22()
{
    if(x1==9&&x2==2)
    {
        wb1=0;
    }
    if(x1==9&&x2==4)
    {
        wb2=0;
    }
    if(x1==8&&x2==3)
    {
        wb3=0;
    }
    if(x1==10&&x2==3)
    {
        wb4=0;
    }
    Wb=wb1+wb2+wb3+wb4;
    return Wb;
}
int un_box23()
{
    if(x1==9&&x2==4)
    {
        xb1=0;
    }
    if(x1==9&&x2==6)
    {
        xb2=0;
    }
    if(x1==8&&x2==5)
    {
        xb3=0;
    }
    if(x1==10&&x2==5)
    {
        xb4=0;
    }
    Xb=xb1+xb2+xb3+xb4;
    return Xb;
}
int un_box24()
{
    if(x1==9&&x2==6)
    {
        y1=0;
    }
    if(x1==9&&x2==8)
    {
        y2=0;
    }
    if(x1==8&&x2==7)
    {
        y3=0;
    }
    if(x1==10&&x2==7)
    {
        y4=0;
    }
    Y=y1+y2+y3+y4;
    return Y;
}
int un_box25()
{
    if(x1==9&&x2==8)
    {
        u1=0;
    }
    if(x1==9&&x2==10)
    {
        u2=0;
    }
    if(x1==8&&x2==9)
    {
        u3=0;
    }
    if(x1==10&&x2==9)
    {
        u4=0;
    }
    U=u1+u2+u3+u4;
    return U;
}
int box_identicator()
{
    if (m==1)
    {
        if (A==4)
        {

            if(z1==1)
            {
                strcpy(cell[0],RED "A" RESET);
                  round=0;
                t1=1;
                k=1;
            }
        }
        if (B==4)
        {
            if(z2==1)
            {
                strcpy(cell[1],RED "A" RESET);
                  round=0;
                t2=1;
                k=1;
            }
        }
        if (C==4)
        {
            if(z3==1)
            {
                strcpy(cell[2],RED "A" RESET);
                  round=0;
                t3=1;
                k=1;
            }
        }
        if (D==4)
        {
            if(z4==1)
            {
                strcpy(cell[3],RED "A" RESET);
                  round=0;
                t4=1;
                k=1;
            }
        }
        if (Q==4)
        {
            if(z5==1)
            {
                strcpy(cell[4],RED "A" RESET);
                  round=0;
                t5=1;
                k=1;
            }
        }
        if (E==4)
        {
            if(z6==1)
            {
                strcpy(cell[5],RED "A" RESET);
                  round=0;
                t6=1;
                k=1;
            }
        }
        if (F==4)
        {
            if(z7==1)
            {
                strcpy(cell[6],RED "A" RESET);
                  round=0;
                t7=1;
                k=1;
            }
        }
        if (G==4)
        {
            if(z8==1)
            {
                strcpy(cell[7],RED "A" RESET);
                  round=0;
                t8=1;
                k=1;
            }
        }
        if (H==4)
        {
            if(z9==1)
            {
                strcpy(cell[8],RED "A" RESET);
                  round=0;
                t9=1;
                k=1;
            }
        }
        if (R==4)
        {
            if(z10==1)
            {
                strcpy(cell[9],RED "A" RESET);
                  round=0;
                t10=1;
                k=1;
            }
        }
        if (I==4)
        {
            if(z11==1)
            {
                strcpy(cell[10],RED "A" RESET);
                  round=0;
                t11=1;
                k=1;
            }
        }
        if (J==4)
        {
            if(z12==1)
            {
                strcpy(cell[11],RED "A" RESET);
                  round=0;
                t12=1;
                k=1;
            }
        }
        if (K==4)
        {
            if(z13==1)
            {
                strcpy(cell[12],RED "A" RESET);
                  round=0;
                t13=1;
                k=1;
            }
        }
        if (L==4)
        {
            if(z14==1)
            {
                strcpy(cell[13],RED "A" RESET);
                  round=0;
                t14=1;
                k=1;
            }
        }
        if (S==4)
        {
            if(z15==1)
            {
                strcpy(cell[14],RED "A" RESET);
                  round=0;
                t15=1;
                k=1;
            }
        }
        if (M==4)
        {
            if(z16==1)
            {
                strcpy(cell[15],RED "A" RESET);
                  round=0;
                t16=1;
                k=1;
            }
        }
        if (N==4)
        {
            if(z17==1)
            {
                strcpy(cell[16],RED "A" RESET);
                  round=0;
                t17=1;
                k=1;
            }
        }
        if (O==4)
        {
            if(z18==1)
            {
                strcpy(cell[17],RED "A" RESET);
                  round=0;
                t18=1;
                k=1;
            }
        }
        if (P==4)
        {
            if(z19==1)
            {
                strcpy(cell[18],RED "A" RESET);
                  round=0;
                t19=1;
                k=1;
            }
        }
        if (Tb==4)
        {
            if(z20==1)
            {
                strcpy(cell[19],RED "A" RESET);
                  round=0;
                t20=1;
                k=1;
            }
        }
        if (V==4)
        {
            if(z21==1)
            {
                strcpy(cell[20],RED "A" RESET);
                  round=0;
                t21=1;
                k=1;
            }
        }
        if (Wb==4)
        {
            if(z22==1)
            {
                strcpy(cell[21],RED "A" RESET);
                  round=0;
                t22=1;
                k=1;
            }
        }
        if (Xb==4)
        {
            if(z23==1)
            {
                strcpy(cell[22],RED "A" RESET);
                  round=0;
                t23=1;
                k=1;
            }
        }
        if (Y==4)
        {
            if(z24==1)
            {
                strcpy(cell[23],RED "A" RESET);
                  round=0;
                t24=1;
                k=1;
            }
        }
        if (U==4)
        {
            if(z25==1)
            {
                strcpy(cell[24],RED "A" RESET);
                  round=0;
                t25=1;
                k=1;
            }
        }
    }
    else if (m==0)
    {
        if (A==4)
        {

            if(z1==1)
            {
                strcpy(cell[0],GREEN "B" RESET);
                  round=1;
                w1=1;
                k=1;
            }
        }
        if (B==4)
        {
            if(z2==1)
            {
                strcpy(cell[1],GREEN "B" RESET);
                round=1;
                w2=1;
                k=1;
            }
        }
        if (C==4)
        {
            if(z3==1)
            {
                strcpy(cell[2],GREEN "B" RESET);
                round=1;
                w3=1;
                k=1;
            }
        }
        if (D==4)
        {
            if(z4==1)
            {
                strcpy(cell[3],GREEN "B" RESET);
                round=1;
                w4=1;
                k=1;
            }
        }
        if (Q==4)
        {
            if(z5==1)
            {
                strcpy(cell[4],GREEN "B" RESET);
                round=1;
                w5=1;
                k=1;
            }
        }
        if (E==4)
        {
            if(z6==1)
            {
                strcpy(cell[5],GREEN "B" RESET);
                round=1;
                w6=1;
                k=1;
            }
        }
        if (F==4)
        {
            if(z7==1)
            {
                strcpy(cell[6],GREEN "B" RESET);
                round=1;
                w7=1;
                k=1;
            }
        }
        if (G==4)
        {
            if(z8==1)
            {
                strcpy(cell[7],GREEN "B" RESET);
                round=1;
                w8=1;
                k=1;
            }
        }
        if (H==4)
        {
            if(z9==1)
            {
                strcpy(cell[8],GREEN "B" RESET);
                round=1;
                w9=1;
                k=1;
            }
        }
        if (R==4)
        {
            if(z10==1)
            {
                strcpy(cell[9],GREEN "B" RESET);
                round=1;
                w10=1;
                k=1;
            }
        }
        if (I==4)
        {
            if(z11==1)
            {
                strcpy(cell[10],GREEN "B" RESET);
                round=1;
                w11=1;
                k=1;
            }
        }
        if (J==4)
        {
            if(z12==1)
            {
                strcpy(cell[11],GREEN "B" RESET);
                round=1;
                w12=1;
                k=1;
            }
        }
        if (K==4)
        {
            if(z13==1)
            {
                strcpy(cell[12],GREEN "B" RESET);
                round=1;
                w13=1;
                k=1;
            }
        }
        if (L==4)
        {
            if(z14==1)
            {
                strcpy(cell[13],GREEN "B" RESET);
                round=1;
                w14=1;
                k=1;
            }
        }
        if (S==4)
        {
            if(z15==1)
            {
                strcpy(cell[14],GREEN "B" RESET);
                round=1;
                w15=1;
                k=1;
            }
        }
        if (M==4)
        {
            if(z16==1)
            {
                strcpy(cell[15],GREEN "B" RESET);
                round=1;
                w16=1;
                k=1;
            }
        }
        if (N==4)
        {
            if(z17==1)
            {
                strcpy(cell[16],GREEN "B" RESET);
                round=1;
                w17=1;
                k=1;
            }
        }
        if (O==4)
        {
            if(z18==1)
            {
                strcpy(cell[17],GREEN "B" RESET);
                round=1;
                w18=1;
                k=1;
            }
        }
        if (P==4)
        {
            if(z19==1)
            {
                strcpy(cell[18],GREEN "B" RESET);
                round=1;
                w19=1;
                k=1;
            }
        }
        if (Tb==4)
        {
            if(z20==1)
            {
                strcpy(cell[19],GREEN "B" RESET);
                round=1;
                w20=1;
                k=1;
            }
        }
        if (V==4)
        {
            if(z21==1)
            {
                strcpy(cell[20],GREEN "B" RESET);
                round=1;
                w21=1;
                k=1;
            }
        }
        if (Wb==4)
        {
            if(z22==1)
            {
                strcpy(cell[21],GREEN "B" RESET);
                round=1;
                w22=1;
                k=1;
            }
        }
        if (Xb==4)
        {
            if(z23==1)
            {
                strcpy(cell[22],GREEN "B" RESET);
                round=1;
                w23=1;
                k=1;
            }
        }
        if (Y==4)
        {
            if(z24==1)
            {
                strcpy(cell[23],GREEN "B" RESET);
                round=1;
                w24=1;
                k=1;
            }
        }
        if (U==4)
        {
            if(z25==1)
            {
                strcpy(cell[24],GREEN "B" RESET);
                round=1;
                w25=1;
                k=1;
            }
        }
    }
    T2=w1+w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12+w13+w14+w15+w16+w17+w18+w19+w20+w21+w22+w23+w24+w25;
    T1=t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+t12+t13+t14+t15+t16+t17+t18+t19+t20+t21+t22+t24+t23+t25;
    system("cls");
    hard();
    printf("    \n");
    printf(RED"      score red player = %d                                      "RESET,T1);
    printf(GREEN" score green player = %d\n"RESET,T2);
    lines();
    if(T1+T2==25)
    {
        if(T1>T2)
        {
            printf("\n<<<Winner is RED >>>\n");

        }
        else if(T1==T2)
        {
            printf("\n<<<DRAW>>>\n");

        }
        else
        {
            printf("\n<<<Winner is GREEN>>>\n");
        }
        printf("\033[0;33m""**************Thanks!*****************"RESET);
    }
    return k;
}
void chooseColor()
{
     z=1;
system(" ");
    while(z)
    {
        printf("\nPlayer one choose the color(green or red) : ");
        scanf("%s",c);
        if(c[0]=='r' && c[1]=='e' && c[2]=='d')
        {
            printf("\nThe first Player is red and the second Player is green\n\n");
            printf("******************************************************\n");
            z=0;
        }
        else if(c[0]=='g' && c[1]=='r' && c[2]=='e'&& c[3]=='e'&& c[4]=='n')
        {
            printf("\nThe first Player is green and the second Player is red\n\n");
            printf("******************************************************\n");
            z=0;
        }
    }
}
void need_undo()
{
    printf("undo(u) , continue(any other button) : ");
    scanf("%s",&und);
}
void need_redo()
{
    printf("\nredo(r) , continue(any other button) : ");
    scanf("%s",&und);
}
void undo(){
    need_undo();
    if(und=='u')
    {
        un_horizon();
        un_vertical();
        un_box1();
        un_box2();
        un_box3();
        un_box4();
        un_box5();
        un_box6();
        un_box7();
        un_box8();
        un_box9();
        un_box10();
        un_box11();
        un_box12();
        un_box13();
        un_box14();
        un_box15();
        un_box16();
        un_box17();
        un_box18();
        un_box19();
        un_box20();
        un_box21();
        un_box22();
        un_box23();
        un_box24();
        un_box25();
        box_identicator();
        loop=1;
        need_redo();
        if(m==1)
        {
            if(und=='r')
            {
                vertical_red();
                horizon_red();
                box1();
                box2();
                box3();
                box4();
                box5();
                box6();
                box7();
                box8();
                box9();
                box10();
                box11();
                box12();
                box13();
                box14();
                box15();
                box16();
                box17();
                box18();
                box19();
                box20();
                box21();
                box22();
                box23();
                box24();
                box25();
                box_identicator();
                loop=0;
            }
        }
        else if(m==0)
        {
            if(und=='r')
            {
                vertical_green();
                horizon_green();
                box1();
                box2();
                box3();
                box4();
                box5();
                box6();
                box7();
                box8();
                box9();
                box10();
                box11();
                box12();
                box13();
                box14();
                box15();
                box16();
                box17();
                box18();
                box19();
                box20();
                box21();
                box22();
                box23();
                box24();
                box25();
                box_identicator();
                loop=0;
            }
        }
    }
}
void correctionVertival(){
    while(!correct)
    {
        if(x1==1&&x2==0)
        {
            if(ch1==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch1++;
                correct=1;
            }
        }
        else if (x1==1&&x2==2)
        {
            if(ch2==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch2++;
                correct=1;
            }
        }
        else if (x1==1&&x2==4)
        {
            if(ch3==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch3++;
                correct=1;
            }
        }
        else if (x1==3&&x2==0)
        {
            if(ch7==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch7++;
                correct=1;
            }
        }
        else if (x1==3&&x2==2)
        {
            if(ch8==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch8++;
                correct=1;
            }
        }
        else if (x1==3&&x2==4)
        {
            if(ch9==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch9++;
                correct=1;
            }
        }
        else if(x1==1 && x2==6)
        {
            if(ch4==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch4++;
                correct=1;
            }
        }
        else if(x1==1 && x2==8)
        {
            if(ch5==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch5++;
                correct=1;
            }
        }
        else if(x1==3 && x2==6)
        {
            if(ch10==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch10++;
                correct=1;
            }
        }
        else if(x1==3 && x2==8)
        {
            if(ch11==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch11++;
                correct=1;
            }
        }
        else if(x1==5 && x2==0)
        {
            if(ch13==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch13++;
                correct=1;
            }
        }
        else if(x1==5 && x2==2)
        {
            if(ch14==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch14++;
                correct=1;
            }
        }
        else if(x1==5 && x2==4)
        {
            if(ch15==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch15++;
                correct=1;
            }
        }
        else if(x1==5 && x2==6)
        {
            if(ch16==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch16++;
                correct=1;
            }
        }
        else if(x1==5 && x2==8)
        {
            if(ch17==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch17++;
                correct=1;
            }
        }
        else if(x1==7 && x2==0)
        {
            if(ch19==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch19++;
                correct=1;
            }
        }
        else if(x1==7 && x2==2)
        {
            if(ch20==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch20++;
                correct=1;
            }
        }
        else if(x1==7 && x2==4)
        {
            if(ch21==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch21++;
                correct=1;
            }
        }
        else if(x1==7 && x2==6)
        {
            if(ch22==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch22++;
                correct=1;
            }
        }
        else if(x1==7 && x2==8)
        {
            if(ch23==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch23++;
                correct=1;
            }
        }
        else if(x1==1 && x2==10)
        {
            if(ch6==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch6++;
                correct=1;
            }
        }
        else if(x1==3 && x2==10)
        {
            if(ch12==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch12++;
                correct=1;
            }
        }
        else if(x1==5 && x2==10)
        {
            if(ch18==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch18++;
                correct=1;
            }
        }
        else if(x1==7 && x2==10)
        {
            if(ch24==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch24++;
                correct=1;
            }
        }
        else if(x1==9 && x2==10)
        {
            if(ch30==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch30++;
                correct=1;
            }
        }
        else if(x1==9 && x2==0)
        {
            if(ch25==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch25++;
                correct=1;
            }
        }
        else if(x1==9 && x2==2)
        {
            if(ch26==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch26++;
                correct=1;
            }
        }
        else if(x1==9 && x2==4)
        {
            if(ch27==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch27++;
                correct=1;
            }
        }
        else if(x1==9 && x2==6)
        {
            if(ch28==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch28++;
                correct=1;
            }
        }
        else if(x1==9 && x2==8)
        {
            if(ch29==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch29++;
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
void correctionHorizontal(){
while(!correct)
{
        if(x1==0&&x2==1)
        {
            if(ch31==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch31++;
                correct=1;
            }
        }
        else if(x1==2 && x2==1)
        {
            if(ch36==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch36++;
                correct=1;
            }
        }
        else if(x1==4 && x2==1)
        {
            if(ch41==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch41++;
                correct=1;
            }
        }
        else if(x1==0 && x2==3)
        {
            if(ch32==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch32++;
                correct=1;
            }

        }
        else if(x1==2 && x2==3)
        {
            if(ch37==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch37++;
                correct=1;
            }
        }
        else if(x1==4 && x2==3)
        {
            if(ch42==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch42++;
                correct=1;
            }
        }
        else if(x1==0 && x2==5)
        {
            if(ch33==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch33++;
                correct=1;
            }
        }
        else if(x1==0 && x2==7)
        {
            if(ch34==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch34++;
                correct=1;
            }
        }
        else if(x1==2 && x2==5)
        {
            if(ch38==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch38++;
                correct=1;
            }
        }
        else if(x1==2 && x2==7)
        {
            if(ch39==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch39++;
                correct=1;
            }
        }
        else if(x1==4 && x2==5)
        {
            if(ch43==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch43++;
                correct=1;
            }
        }
        else if(x1==4 && x2==7)
        {
            if(ch44==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch44++;
                correct=1;
            }
        }
        else if(x1==6 && x2==1)
        {
            if(ch46==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch46++;
                correct=1;
            }
        }
        else if(x1==6 && x2==3)
        {
            if(ch47==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch47++;
                correct=1;
            }
        }
        else if(x1==6 && x2==5)
        {
            if(ch48==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch48++;
                correct=1;
            }
        }
        else if(x1==6 && x2==7)
        {
            if(ch49==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch49++;
                correct=1;
            }
        }
        else if(x1==8 && x2==1)
        {
            if(ch51==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch51++;
                correct=1;
            }
        }
        else if(x1==8 && x2==3)
        {
            if(ch52==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch52++;
                correct=1;
            }
        }
        else if(x1==8 && x2==5)
        {
            if(ch53==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch53++;
                correct=1;
            }
        }
        else if(x1==8 && x2==7)
        {
            if(ch54==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch54++;
                correct=1;
            }
        }
        else if(x1==10 && x2==1)
        {
            if(ch56==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch56++;
                correct=1;
            }
        }
        else if(x1==10 && x2==3)
        {
            if(ch57==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch57++;
                correct=1;
            }
        }
        else if(x1==10 && x2==5)
        {
            if(ch58==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch58++;
                correct=1;
            }
        }
        else if(x1==10 && x2==7)
        {
            if(ch59==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch59++;
                correct=1;
            }
        }
        else if(x1==0 && x2==9)
        {
            if(ch35==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch35++;
                correct=1;
            }
        }
        else if(x1==2 && x2==9)
        {
            if(ch40==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch40++;
                correct=1;
            }
        }
        else if(x1==4 && x2==9)
        {
            if(ch45==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch45++;
                correct=1;
            }
        }
        else if(x1==6 && x2==9)
        {
            if(ch50==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch50++;
                correct=1;
            }
        }
        else if(x1==8 && x2==9)
        {
            if(ch55==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch55++;
                correct=1;
            }
        }
        else if(x1==10 && x2==9)
        {
            if(ch60==1)
            {
                printf("\033[0;34m""Played......please enter anther coordinates\n\n"RESET);
                x1=input1();
                x2=input2();
            }
            else
            {
                ch60++;
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
void Hard(){
if(newGame==1)
{ ////////////////////////////// original code ////////////////////////////////////////////////////
fscores=fopen("scores.txt", "w");
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
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
                vertical_red(x1,x2);
                horizon_red(x1,x2);
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
                m=1;
                k=0;
                loop=0;
                box_identicator();
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                printf("\n");
                if(T1+T2==25)
                {
                        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
                    complete=1;
                    break;
                }
                undo();
                //to save or continue
                printf("Continue(1) or save(0) : ");
                scanf("%d",&save);
                  printf("______________________________________________________________________________________________________");
                if(T1+T2==25 || save==0)
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
                if(T1+T2==25 || save ==0)
                {
                complete=1;
                break;
                }
                do
                {
                printf(GREEN"\n\nPlayer2 round\n"RESET);
round=0;
sor++;
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
                vertical_green(x1,x2);
                horizon_green(x1,x2);
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
                m=0;
                k=0;
                loop=0;
                box_identicator();
                if(T1+T2==25)
                {
                        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
                    complete=1;
                    break;
                }
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                printf("\n");
                undo();
                printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
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
//////////////////////the first player is green and second is red ///////////////////////////////////////////////
        else
        {
            start=0;
        fprintf(fstart,"%d",start);
            do
            {
                printf(GREEN"\n\nPlayer1 round\n"RESET);
round=0;
sor++;
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
                vertical_green(x1,x2);
                horizon_green(x1,x2);
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);

                m=0;
                k=0;
                loop=0;
                box_identicator();
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                if(T1+T2==25)
                {
                        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
                    complete=1;
                    break;
                }
                printf("\n");
                undo();
                printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
            }
            while(k==1||loop==1);
            if(T1+T2==25 || save ==0)
            {
                complete=1;
                break;
            }
            do
            {
                printf(RED"\n\nPlayer2 round\n"RESET);
round=1;
sor++;
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
fprintf(fpx1,"%d\n",x1);
fprintf(fpx2,"%d\n",x2);
                vertical_red(x1,x2);
                horizon_red(x1,x2);
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
                m=1;
                k=0;
                loop=0;
                box_identicator();
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                printf("\n");
                if(T1+T2==25)
                {
                        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
                    complete=1;
                    break;
                }
                undo();
                printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
            }
            while(k==1||loop==1);
        }
    }
}

else if (newGame==0)
{ ////////////////////// saved code //////////////////////////////////////
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
vertical_red(x1,x2);
horizon_red(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=1;
k=0;
loop=0;
box_identicator();
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
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
vertical_green(x1,x2);
horizon_green(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=0;
k=0;
loop=0;
box_identicator();

if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
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
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_red(x1,x2);
horizon_red(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=1;
k=0;
loop=0;
box_identicator();
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==25 || save==0)
{
    complete=1;
    break;
}
do{
printf(GREEN"\n\nPlayer2 round\n"RESET);
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_green(x1,x2);
horizon_green(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=0;
k=0;
loop=0;
box_identicator();
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
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
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_green(x1,x2);
horizon_green(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=0;
k=0;
loop=0;
box_identicator();
if(T1+T2==25)
{
    complete=1;
    break;
}
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==25 || save==0)
{
    complete=1;
    break;
}
do{
printf(RED"\n\nPlayer1 round\n"RESET);
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_red(x1,x2);
horizon_red(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=1;
k=0;
loop=0;
box_identicator();
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
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
vertical_green(x1,x2);
horizon_green(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=0;
k=0;
loop=0;
box_identicator();
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
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
vertical_red(x1,x2);
horizon_red(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=1;
k=0;
loop=0;
box_identicator();

if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
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
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_green(x1,x2);
horizon_green(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=0;
k=0;
loop=0;
box_identicator();
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==25 || save==0)
{
    complete=1;
    break;
}
do{
printf(RED"\n\nPlayer2 round\n"RESET);
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_red(x1,x2);
horizon_red(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=1;
k=0;
loop=0;
box_identicator();
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
  printf("______________________________________________________________________________________________________");
if(T1+T2==25 || save==0)
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
printf(RED"\nPlayer2 round\n"RESET);
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_red(x1,x2);
horizon_red(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=1;
k=0;
loop=0;
box_identicator();
if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }
printf("\n");
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
undo(x1,x2);
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
if(T1+T2==25 || save==0)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
fprintf(fround, "%d", round);
fprintf(fsor, "%d", sor);
complete=1;
break;
}
}while(k==1||loop==1);
if(T1+T2==25 || save==0)
{
    complete=1;
    break;
}
do{
printf(GREEN"\nPlayer1 round\n"RESET);
x1=input1();
x2=input2();
correctionHorizontal();
correctionVertival();
vertical_green(x1,x2);
horizon_green(x1,x2);
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
m=0;
k=0;
loop=0;
box_identicator();
if(T1+T2==25)
{
        fprintf(fscores, "%d\n", T1);
    fprintf(fscores, "%d\n", T2);
    complete=1;
    break;
}
box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
printf("\n");
undo();
printf("Continue(1) or save(0) : ");
scanf("%d",&save);
if(T1+T2==25 || save==0)
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
void compinputgreen(){
    if(!(strcmp(horizontal[10],str1)))
    {
        strcpy(horizontal[10],GREEN"---"RESET);
        x1=4 ;
        x2=1;
    }
    else if(!(strcmp(l[10],str2)))
    {
        strcpy(l[10],GREEN"|"RESET);
        x1=3 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[1],str1)))
    {
        strcpy(horizontal[1],GREEN"---"RESET);
        x1=0 ;
        x2=3;
    }
    else if(!(strcmp(horizontal[6],str1)))
    {
        strcpy(horizontal[6],GREEN"---"RESET);
        x1=2 ;
        x2=3;
    }
    else if(!(strcmp(l[0],str2)))
    {
        strcpy(l[0],GREEN"|"RESET);
        x1=1 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[11],str1)))
    {
        strcpy(horizontal[11],GREEN"---"RESET);
        x1=4 ;
        x2=3;
    }
    else if(!(strcmp(horizontal[2],str1)))
    {
        strcpy(horizontal[2],GREEN"---"RESET);
        x1=0 ;
        x2=5;
    }
    else if(!(strcmp(l[1],str2)))
    {
        strcpy(l[1],GREEN"|"RESET);
        x1=1 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[3],str1)))
    {
        strcpy(horizontal[3],GREEN"---"RESET);
        x1=0 ;
        x2=7;
    }
    else if(!(strcmp(l[22],str2)))
    {
        strcpy(l[22],GREEN"|"RESET);
        x1=7 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[7],str1)))
    {
        strcpy(horizontal[7],GREEN"---"RESET);
        x1=2 ;
        x2=5;
    }
    else if(!(strcmp(horizontal[8],str1)))
    {
        strcpy(horizontal[8],GREEN"---"RESET);
        x1=2 ;
        x2=7;
    }
    else if(!(strcmp(l[7],str2)))
    {
        strcpy(l[7],GREEN"|"RESET);
        x1=3 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[12],str1)))
    {
        strcpy(horizontal[12],GREEN"---"RESET);
        x1=4 ;
        x2=5;
    }
    else if(!(strcmp(l[13],str2)))
    {
        strcpy(l[13],GREEN"|"RESET);
        x1=5 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[13],str1)))
    {
        strcpy(horizontal[13],GREEN"---"RESET);
        x1=4 ;
        x2=7;
    }
    else if(!(strcmp(horizontal[15],str1)))
    {
        strcpy(horizontal[15],GREEN"---"RESET);
        x1=6 ;
        x2=1;
    }
    else if(!(strcmp(horizontal[19],str1)))
    {
        strcpy(horizontal[19],GREEN"---"RESET);
        x1=6 ;
        x2=9;
    }
    else if (!(strcmp(l[2],str2)))
    {
        strcpy(l[2],GREEN"|"RESET);
        x1=1 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[0],str1)))
    {
        strcpy(horizontal[0],GREEN"---"RESET);
        x1=0;
        x2=1;
    }
    else if(!(strcmp(l[6],str2)))
    {
        strcpy(l[6],GREEN"|"RESET);
        x1=3 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[25],str1)))
    {
        strcpy(horizontal[25],GREEN"---"RESET);
        x1=10 ;
        x2=1;
    }
    else if(!(strcmp(l[8],str2)))
    {
        strcpy(l[8],GREEN"|"RESET);
        x1=3 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[26],str1)))
    {
        strcpy(horizontal[26],GREEN"---"RESET);
        x1=10 ;
        x2=3;
    }
    else if(!(strcmp(l[3],str2)))
    {
        strcpy(l[3],GREEN"|"RESET);
        x1=1 ;
        x2=6;
    }
    else if(!(strcmp(l[4],str2)))
    {
        strcpy(l[4],GREEN"|"RESET);
        x1=1 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[29],str1)))
    {
        strcpy(horizontal[29],GREEN"---"RESET);
        x1=10 ;
        x2=9;
    }
    else if(!(strcmp(l[9],str2)))
    {
        strcpy(l[9],GREEN"|"RESET);
        x1=3 ;
        x2=6;
    }
    else if(!(strcmp(horizontal[5],str1)))
    {
        strcpy(horizontal[5],GREEN"---"RESET);
        x1=2;
        x2=1;
    }
    else if(!(strcmp(l[12],str2)))
    {
        strcpy(l[12],GREEN"|"RESET);
        x1=5 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[9],str1)))
    {
        strcpy(horizontal[9],GREEN"---"RESET);
        x1=2 ;
        x2=9;
    }
    else if(!(strcmp(l[14],str2)))
    {
        strcpy(l[14],GREEN"|"RESET);
        x1=5 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[24],str1)))
    {
        strcpy(horizontal[24],GREEN"---"RESET);
        x1=8 ;
        x2=9;
    }
    else if(!(strcmp(l[15],str2)))
    {
        strcpy(l[15],GREEN"|"RESET);
        x1=5 ;
        x2=6;
    }
    else if(!(strcmp(l[16],str2)))
    {
        strcpy(l[16],GREEN"|"RESET);
        x1=5 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[18],str1)))
    {
        strcpy(horizontal[18],GREEN"---"RESET);
        x1=6 ;
        x2=7;
    }
    else if(!(strcmp(l[18],str2)))
    {
        strcpy(l[18],GREEN"|"RESET);
        x1=7 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[4],str1)))
    {
        strcpy(horizontal[4],GREEN"---"RESET);
        x1=0 ;
        x2=9;
    }
    else if(!(strcmp(l[19],str2)))
    {
        strcpy(l[19],GREEN"|"RESET);
        x1=7 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[14],str1)))
    {
        strcpy(horizontal[14],GREEN"---"RESET);
        x1=4 ;
        x2=9;
    }
    else if(!(strcmp(l[20],str2)))
    {
        strcpy(l[20],GREEN"|"RESET);
        x1=7 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[28],str1)))
    {
        strcpy(horizontal[28],GREEN"---"RESET);
        x1=10 ;
        x2=7;
    }
    else if(!(strcmp(l[21],str2)))
    {
        strcpy(l[21],GREEN"|"RESET);
        x1=7 ;
        x2=6;
    }
    else if(!(strcmp(l[5],str2)))
    {
        strcpy(l[5],GREEN"|"RESET);
        x1=1 ;
        x2=10;
    }
    else if(!(strcmp(horizontal[16],str1)))
    {
        strcpy(horizontal[16],GREEN"---"RESET);
        x1=6 ;
        x2=3;
    }
    else if(!(strcmp(l[11],str2)))
    {
        strcpy(l[11],GREEN"|"RESET);
        x1=3 ;
        x2=10;
    }
    else if(!(strcmp(l[17],str2)))
    {
        strcpy(l[17],GREEN"|"RESET);
        x1=5 ;
        x2=10;
    }
    else if(!(strcmp(horizontal[23],str1)))
    {
        strcpy(horizontal[23],GREEN"---"RESET);
        x1=8 ;
        x2=7;
    }
    else if(!(strcmp(l[23],str2)))
    {
        strcpy(l[23],GREEN"|"RESET);
        x1=7 ;
        x2=10;
    }
    else if(!(strcmp(horizontal[21],str1)))
    {
        strcpy(horizontal[21],GREEN"---"RESET);
        x1=8 ;
        x2=3;
    }
    else if(!(strcmp(l[29],str2)))
    {
        strcpy(l[29],GREEN"|"RESET);
        x1=9 ;
        x2=10;
    }
    else if(!(strcmp(l[24],str2)))
    {
        strcpy(l[24],GREEN"|"RESET);
        x1=9 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[17],str1)))
    {
        strcpy(horizontal[17],GREEN"---"RESET);
        x1=6 ;
        x2=5;
    }
    else if(!(strcmp(l[25],str2)))
    {
        strcpy(l[25],GREEN"|"RESET);
        x1=9 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[22],str1)))
    {
        strcpy(horizontal[22],GREEN"---"RESET);
        x1=8 ;
        x2=5;
    }
    else if(!(strcmp(l[26],str2)))
    {
        strcpy(l[26],GREEN"|"RESET);
        x1=9 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[20],str1)))
    {
        strcpy(horizontal[20],GREEN"---"RESET);
        x1=8 ;
        x2=1;
    }
    else if(!(strcmp(l[27],str2)))
    {
        strcpy(l[27],GREEN"|"RESET);
        x1=9 ;
        x2=6;
    }
    else if(!(strcmp(horizontal[27],str1)))
    {
        strcpy(horizontal[27],GREEN"---"RESET);
        x1=10 ;
        x2=5;
    }
    else if(!(strcmp(l[28],str2)))
    {
        strcpy(l[28],GREEN"|"RESET);
        x1=9 ;
        x2=8;
    }

}

void compinputred(){

    if(!(strcmp(horizontal[10],str1)))
    {
        strcpy(horizontal[10],RED"---"RESET);
        x1=4 ;
        x2=1;
    }
    else if(!(strcmp(l[10],str2)))
    {
        strcpy(l[10],RED"|"RESET);
        x1=3 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[1],str1)))
    {
        strcpy(horizontal[1],RED"---"RESET);
        x1=0 ;
        x2=3;
    }
    else if(!(strcmp(horizontal[6],str1)))
    {
        strcpy(horizontal[6],RED"---"RESET);
        x1=2 ;
        x2=3;
    }
    else if(!(strcmp(l[0],str2)))
    {
        strcpy(l[0],RED"|"RESET);
        x1=1 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[11],str1)))
    {
        strcpy(horizontal[11],RED"---"RESET);
        x1=4 ;
        x2=3;
    }
    else if(!(strcmp(horizontal[2],str1)))
    {
        strcpy(horizontal[2],RED"---"RESET);
        x1=0 ;
        x2=5;
    }
    else if(!(strcmp(l[1],str2)))
    {
        strcpy(l[1],RED"|"RESET);
        x1=1 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[3],str1)))
    {
        strcpy(horizontal[3],RED"---"RESET);
        x1=0 ;
        x2=7;
    }
    else if(!(strcmp(l[22],str2)))
    {
        strcpy(l[22],RED"|"RESET);
        x1=7 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[7],str1)))
    {
        strcpy(horizontal[7],RED"---"RESET);
        x1=2 ;
        x2=5;
    }
    else if(!(strcmp(horizontal[8],str1)))
    {
        strcpy(horizontal[8],RED"---"RESET);
        x1=2 ;
        x2=7;
    }
    else if(!(strcmp(l[7],str2)))
    {
        strcpy(l[7],RED"|"RESET);
        x1=3 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[12],str1)))
    {
        strcpy(horizontal[12],RED"---"RESET);
        x1=4 ;
        x2=5;
    }
    else if(!(strcmp(l[13],str2)))
    {
        strcpy(l[13],RED"|"RESET);
        x1=5 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[13],str1)))
    {
        strcpy(horizontal[13],RED"---"RESET);
        x1=4 ;
        x2=7;
    }
    else if(!(strcmp(horizontal[15],str1)))
    {
        strcpy(horizontal[15],RED"---"RESET);
        x1=6 ;
        x2=1;
    }
    else if(!(strcmp(horizontal[19],str1)))
    {
        strcpy(horizontal[19],RED"---"RESET);
        x1=6 ;
        x2=9;
    }
    else if (!(strcmp(l[2],str2)))
    {
        strcpy(l[2],RED"|"RESET);
        x1=1 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[0],str1)))
    {
        strcpy(horizontal[0],RED"---"RESET);
        x1=0;
        x2=1;
    }
    else if(!(strcmp(l[6],str2)))
    {
        strcpy(l[6],RED"|"RESET);
        x1=3 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[25],str1)))
    {
        strcpy(horizontal[25],RED"---"RESET);
        x1=10 ;
        x2=1;
    }
    else if(!(strcmp(l[8],str2)))
    {
        strcpy(l[8],RED"|"RESET);
        x1=3 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[26],str1)))
    {
        strcpy(horizontal[26],RED"---"RESET);
        x1=10 ;
        x2=3;
    }
    else if(!(strcmp(l[3],str2)))
    {
        strcpy(l[3],RED"|"RESET);
        x1=1 ;
        x2=6;
    }
    else if(!(strcmp(l[4],str2)))
    {
        strcpy(l[4],RED"|"RESET);
        x1=1 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[29],str1)))
    {
        strcpy(horizontal[29],RED"---"RESET);
        x1=10 ;
        x2=9;
    }
    else if(!(strcmp(l[9],str2)))
    {
        strcpy(l[9],RED"|"RESET);
        x1=3 ;
        x2=6;
    }
    else if(!(strcmp(horizontal[5],str1)))
    {
        strcpy(horizontal[5],RED"---"RESET);
        x1=2;
        x2=1;
    }
    else if(!(strcmp(l[12],str2)))
    {
        strcpy(l[12],RED"|"RESET);
        x1=5 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[9],str1)))
    {
        strcpy(horizontal[9],RED"---"RESET);
        x1=2 ;
        x2=9;
    }
    else if(!(strcmp(l[14],str2)))
    {
        strcpy(l[14],RED"|"RESET);
        x1=5 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[24],str1)))
    {
        strcpy(horizontal[24],RED"---"RESET);
        x1=8 ;
        x2=9;
    }
    else if(!(strcmp(l[15],str2)))
    {
        strcpy(l[15],RED"|"RESET);
        x1=5 ;
        x2=6;
    }
    else if(!(strcmp(l[16],str2)))
    {
        strcpy(l[16],RED"|"RESET);
        x1=5 ;
        x2=8;
    }
    else if(!(strcmp(horizontal[18],str1)))
    {
        strcpy(horizontal[18],RED"---"RESET);
        x1=6 ;
        x2=7;
    }
    else if(!(strcmp(l[18],str2)))
    {
        strcpy(l[18],RED"|"RESET);
        x1=7 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[4],str1)))
    {
        strcpy(horizontal[4],RED"---"RESET);
        x1=0 ;
        x2=9;
    }
    else if(!(strcmp(l[19],str2)))
    {
        strcpy(l[19],RED"|"RESET);
        x1=7 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[14],str1)))
    {
        strcpy(horizontal[14],RED"---"RESET);
        x1=4 ;
        x2=9;
    }
    else if(!(strcmp(l[20],str2)))
    {
        strcpy(l[20],RED"|"RESET);
        x1=7 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[28],str1)))
    {
        strcpy(horizontal[28],RED"---"RESET);
        x1=10 ;
        x2=7;
    }
    else if(!(strcmp(l[21],str2)))
    {
        strcpy(l[21],RED"|"RESET);
        x1=7 ;
        x2=6;
    }
    else if(!(strcmp(l[5],str2)))
    {
        strcpy(l[5],RED"|"RESET);
        x1=1 ;
        x2=10;
    }
    else if(!(strcmp(horizontal[16],str1)))
    {
        strcpy(horizontal[16],RED"---"RESET);
        x1=6 ;
        x2=3;
    }
    else if(!(strcmp(l[11],str2)))
    {
        strcpy(l[11],RED"|"RESET);
        x1=3 ;
        x2=10;
    }
    else if(!(strcmp(l[17],str2)))
    {
        strcpy(l[17],RED"|"RESET);
        x1=5 ;
        x2=10;
    }
    else if(!(strcmp(horizontal[23],str1)))
    {
        strcpy(horizontal[23],RED"---"RESET);
        x1=8 ;
        x2=7;
    }
    else if(!(strcmp(l[23],str2)))
    {
        strcpy(l[23],RED"|"RESET);
        x1=7 ;
        x2=10;
    }
    else if(!(strcmp(horizontal[21],str1)))
    {
        strcpy(horizontal[21],RED"---"RESET);
        x1=8 ;
        x2=3;
    }
    else if(!(strcmp(l[29],str2)))
    {
        strcpy(l[29],RED"|"RESET);
        x1=9 ;
        x2=10;
    }
    else if(!(strcmp(l[24],str2)))
    {
        strcpy(l[24],RED"|"RESET);
        x1=9 ;
        x2=0;
    }
    else if(!(strcmp(horizontal[17],str1)))
    {
        strcpy(horizontal[17],RED"---"RESET);
        x1=6 ;
        x2=5;
    }
    else if(!(strcmp(l[25],str2)))
    {
        strcpy(l[25],RED"|"RESET);
        x1=9 ;
        x2=2;
    }
    else if(!(strcmp(horizontal[22],str1)))
    {
        strcpy(horizontal[22],RED"---"RESET);
        x1=8 ;
        x2=5;
    }
    else if(!(strcmp(l[26],str2)))
    {
        strcpy(l[26],RED"|"RESET);
        x1=9 ;
        x2=4;
    }
    else if(!(strcmp(horizontal[20],str1)))
    {
        strcpy(horizontal[20],RED"---"RESET);
        x1=8 ;
        x2=1;
    }
    else if(!(strcmp(l[27],str2)))
    {
        strcpy(l[27],RED"|"RESET);
        x1=9 ;
        x2=6;
    }
    else if(!(strcmp(horizontal[27],str1)))
    {
        strcpy(horizontal[27],RED"---"RESET);
        x1=10 ;
        x2=5;
    }
    else if(!(strcmp(l[28],str2)))
    {
        strcpy(l[28],RED"|"RESET);
        x1=9 ;
        x2=8;
    }
}
void Comphard(){
    chooseColor();
    hard();
    while(!complete)
    {

        if(c[0]=='r' && c[1]=='e' && c[2]=='d' )
        {
            do
            {
                printf(RED"\nPlayer1 round\n"RESET);
                x1=input1();
                x2=input2();
                correctionHorizontal();
                correctionVertival();
                vertical_red(x1,x2);
                horizon_red(x1,x2);
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
                m=1;
                k=0;
                loop=0;
                box_identicator();
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                printf("\n");
                if(T1+T2==25)
                {
                    complete=1;
                    break;
                }
                undo();
            }
            while(k==1||loop==1);
            if(T1+T2==25)
            {
                complete=1;
                break;
            }
            do
            {
                printf(GREEN"\nPlayer2 round\n"RESET);
                compinputgreen();
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
                m=0;
                k=0;
                loop=0;
                box_identicator();
                if(T1+T2==25)
                {
                    complete=1;
                    break;
                }
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                printf("\n");
            }
            while(k==1||loop==1);
        }
        else
        {
            do
            {
                printf(GREEN"\nPlayer1 round\n"RESET);
                x1=input1();
                x2=input2(x1);
                correctionHorizontal();
                correctionVertival();
                vertical_green(x1,x2);
                horizon_green(x1,x2);
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);

                m=0;
                k=0;
                loop=0;
                box_identicator();
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                if(T1+T2==25)
                {
                    complete=1;
                    break;
                }
                printf("\n");
                undo();
            }
            while(k==1||loop==1);
            if(T1+T2==25)
            {
                complete=1;
                break;
            }
            do
            {
                printf(RED"\nPlayer2 round\n"RESET);
                compinputred();
                box1(x1,x2);
                box2(x1,x2);
                box3(x1,x2);
                box4(x1,x2);
                box5(x1,x2);
                box6(x1,x2);
                box7(x1,x2);
                box8(x1,x2);
                box9(x1,x2);
                box10(x1,x2);
                box11(x1,x2);
                box12(x1,x2);
                box13(x1,x2);
                box14(x1,x2);
                box15(x1,x2);
                box16(x1,x2);
                box17(x1,x2);
                box18(x1,x2);
                box19(x1,x2);
                box20(x1,x2);
                box21(x1,x2);
                box22(x1,x2);
                box23(x1,x2);
                box24(x1,x2);
                box25(x1,x2);
                m=1;
                k=0;
                loop=0;
                box_identicator();
                if(A==4)
                {
                    z1=0;
                }
                if(B==4)
                {
                    z2=0;
                }
                if(C==4)
                {
                    z3=0;
                }
                if(D==4)
                {
                    z4=0;
                }
                if(Q==4)
                {
                    z5=0;
                }
                if(E==4)
                {
                    z6=0;
                }
                if(F==4)
                {
                    z7=0;
                }
                if(G==4)
                {
                    z8=0;
                }
                if(H==4)
                {
                    z9=0;
                }
                if(R==4)
                {
                    z10=0;
                }
                if(I==4)
                {
                    z11=0;
                }
                if(J==4)
                {
                    z12=0;
                }
                if(K==4)
                {
                    z13=0;
                }
                if(L==4)
                {
                    z14=0;
                }
                if(S==4)
                {
                    z15=0;
                }
                if(M==4)
                {
                    z16=0;
                }
                if(N==4)
                {
                    z17=0;
                }
                if(O==4)
                {
                    z18=0;
                }
                if(P==4)
                {
                    z19=0;
                }
                if(Tb==4)
                {
                    z20=0;
                }
                if(V==4)
                {
                    z21=0;
                }
                if(Wb==4)
                {
                    z22=0;
                }
                if(Xb==4)
                {
                    z23=0;
                }
                if(Y==4)
                {
                    z24=0;
                }
                if(U==4)
                {
                    z25=0;
                }

                printf("\n");
                if(T1+T2==25)
                {
                    complete=1;
                    break;
                }
            }
            while(k==1||loop==1);
        }
    }
}


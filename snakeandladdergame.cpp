#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<graphics.h>
#include<dos.h>
 #include<time.h>

using namespace std;

struct node
 {
     int data;
     int x;
     struct node *next;
 };
 struct node *start=NULL;
 struct node *start1=NULL,*start2=NULL;
   struct node *curr=NULL;
     struct node *ptr1;
    struct node *ptr2;
     int r1,r2,p=1,colr=3,colo=9;
float x1=87.5,y1=512.5,x2=87.5,y2=537.5;

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

void win()
{
setcolor(WHITE);
line(0,0,1100,0);
line(0,0,0,600);
line(1100,0,1100,600);
line(0,600,1100,600);

rectangle(300,100,800,500);
rectangle(290,90,810,510);
rectangle(310,110,790,490);

setfillstyle(HATCH_FILL,MAGENTA);
floodfill(75,75,WHITE);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(312,112,WHITE);

setbkcolor(DARKGRAY);
 setcolor(YELLOW);
settextstyle(10,0,5);
 setcolor(BLUE);
    outtextxy(312,145,"*******************");
      outtextxy(312,400,"*******************");

setcolor(RED);

for(int i=0;i<20;i++)
{
settextstyle(10,0,9);
if(ptr1->data==100)
{

    outtextxy(320,225,"PLAYER 1");
    outtextxy(450,295,"WIN");
}
if(ptr2->data==100)
{

    outtextxy(320,225,"PLAYER 2");
    outtextxy(450,295,"WIN");
}
setfillstyle(SOLID_FILL,colr);
floodfill(302,102,WHITE);
setfillstyle(SOLID_FILL,colo);
floodfill(292,92,WHITE);
if(colr==3)
{
    colr=9;
    colo=3;
    setcolor(GREEN);  //blinking of payer 1
}
else
{
    colr=3;
    colo=9;
    setcolor(RED);
}

delay(500);
}
}


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


void display()
{
    settextstyle(0,0,2);
    setbkcolor(BLACK);
// OUTER BORDER
setcolor(WHITE);
line(0,0,1100,0);
line(0,0,0,600);
line(1100,0,1100,600);
line(0,600,1100,600);
setfillstyle(XHATCH_FILL,DARKGRAY);
floodfill(75,75,WHITE);

setcolor(WHITE);
line(49,49,551,49); // OUTER BORDER OF
line(49,49,49,551); //SNAKE AND LADDER
line(551,49,551,551);  //BOARD
line(49,551,551,551);

line(45,45,555,45);  //INNER BOARDER OF BOARD
line(45,45,45,555);
line(554,45,555,555);
line(45,555,555,555);

rectangle(605,55,745,545);
rectangle(595,45,755,555);

rectangle(805,55,1045,545);
rectangle(795,45,1055,555);

setfillstyle(INTERLEAVE_FILL,BROWN);
floodfill(46,46,WHITE);
floodfill(600,50,WHITE);
floodfill(800,50,WHITE);

setcolor(RED);
rectangle(606,56,744,544);
rectangle(610,60,740,200);
rectangle(610,215,740,305);
rectangle(610,310,740,400);
rectangle(610,405,740,540);
rectangle(806,56,1044,544);
rectangle(810,60,1040,200);
rectangle(810,215,1040,375);  //813,218
rectangle(810,380,1040,540);  //813,383
rectangle(820,225,1030,365);
rectangle(820,390,1030,530);

//100 SQUQRES OF SIZE 50
    rectangle(50,50,100,100);
    rectangle(100,50,150,100);
    rectangle(150,50,200,100);
    rectangle(200,50,250,100);
    rectangle(250,50,300,100);
    rectangle(300,50,350,100);
    rectangle(350,50,400,100);
    rectangle(400,50,450,100);
    rectangle(450,50,500,100);
    rectangle(500,50,550,100);

    rectangle(50,100,100,150);
    rectangle(100,100,150,150);
    rectangle(150,100,200,150);
    rectangle(200,100,250,150);
    rectangle(250,100,300,150);
    rectangle(300,100,350,150);
    rectangle(350,100,400,150);
    rectangle(400,100,450,150);
    rectangle(450,100,500,150);
    rectangle(500,100,550,150);

    rectangle(50,150,100,200);
    rectangle(100,150,150,200);
    rectangle(150,150,200,200);
    rectangle(200,150,250,200);
    rectangle(250,150,300,200);
    rectangle(300,150,350,200);
    rectangle(350,150,400,200);
    rectangle(400,150,450,200);
    rectangle(450,150,500,200);
    rectangle(500,150,550,200);

    rectangle(50,200,100,250);
    rectangle(100,200,150,250);
    rectangle(150,200,200,250);
    rectangle(200,200,250,250);
    rectangle(250,200,300,250);
    rectangle(300,200,350,250);
    rectangle(350,200,400,250);
    rectangle(400,200,450,250);
    rectangle(450,200,500,250);
    rectangle(500,200,550,250);

    rectangle(50,250,100,300);
    rectangle(100,250,150,300);
    rectangle(150,250,200,300);
    rectangle(200,250,250,300);
    rectangle(250,250,300,300);
    rectangle(300,250,350,300);
    rectangle(350,250,400,300);
    rectangle(400,250,450,300);
    rectangle(450,250,500,300);
    rectangle(500,250,550,300);

    rectangle(50,300,100,350);
    rectangle(100,300,150,350);
    rectangle(150,300,200,350);
    rectangle(200,300,250,350);
    rectangle(250,300,300,350);
    rectangle(300,300,350,350);
    rectangle(350,300,400,350);
    rectangle(400,300,450,350);
    rectangle(450,300,500,350);
    rectangle(500,300,550,350);

    rectangle(50,350,100,400);
    rectangle(100,350,150,400);
    rectangle(150,350,200,400);
    rectangle(200,350,250,400);
    rectangle(250,350,300,400);
    rectangle(300,350,350,400);
    rectangle(350,350,400,400);
    rectangle(400,350,450,400);
    rectangle(450,350,500,400);
    rectangle(500,350,550,400);

    rectangle(50,400,100,450);
    rectangle(100,400,150,450);
    rectangle(150,400,200,450);
    rectangle(200,400,250,450);
    rectangle(250,400,300,450);
    rectangle(300,400,350,450);
    rectangle(350,400,400,450);
    rectangle(400,400,450,450);
    rectangle(450,400,500,450);
    rectangle(500,400,550,450);

    rectangle(50,450,100,500);
    rectangle(100,450,150,500);
    rectangle(150,450,200,500);
    rectangle(200,450,250,500);
    rectangle(250,450,300,500);
    rectangle(300,450,350,500);
    rectangle(350,450,400,500);
    rectangle(400,450,450,500);
    rectangle(450,450,500,500);
    rectangle(500,450,550,500);

     rectangle(50,500,100,550);
     rectangle(100,500,150,550);
     rectangle(150,500,200,550);
     rectangle(200,500,250,550);
     rectangle(250,500,300,550);
     rectangle(300,500,350,550);
     rectangle(350,500,400,550);
     rectangle(400,500,450,550);
     rectangle(450,500,500,550);
     rectangle(500,500,550,550);

//COLOURING OF BOXES
setfillstyle(SOLID_FILL,GREEN);
floodfill(620,204,RED);//player boxes
floodfill(820,204,RED);

setfillstyle(SOLID_FILL,YELLOW);

floodfill(620,65,RED);
floodfill(620,220,RED);
floodfill(620,315,RED);
floodfill(620,410,RED);
floodfill(820,65,RED);
floodfill(822,226,RED);
floodfill(822,392,RED);

floodfill(75,75,RED);
floodfill(75,125,RED);
floodfill(125,75,RED);
floodfill(125,125,RED);

floodfill(475,475,RED);
floodfill(475,525,RED);
floodfill(525,475,RED);
floodfill(525,525,RED);

floodfill(475,75,RED);
floodfill(475,125,RED);
floodfill(525,75,RED);
floodfill(525,125,RED);

floodfill(75,475,RED);
floodfill(75,525,RED);
floodfill(125,475,RED);
floodfill(125,525,RED);

setfillstyle(SOLID_FILL,LIGHTBLUE);

floodfill(175,75,RED);
floodfill(175,125,RED);
floodfill(225,75,RED);
floodfill(225,125,RED);

floodfill(375,475,RED);
floodfill(375,525,RED);
floodfill(425,475,RED);
floodfill(425,525,RED);

floodfill(475,175,RED);
floodfill(475,225,RED);
floodfill(525,175,RED);
floodfill(525,225,RED);

floodfill(75,375,RED);
floodfill(75,425,RED);
floodfill(125,375,RED);
floodfill(125,425,RED);

setfillstyle(SOLID_FILL,LIGHTMAGENTA);

floodfill(275,275,RED);
floodfill(275,325,RED);
floodfill(325,275,RED);
floodfill(325,325,RED);

setfillstyle(SOLID_FILL,LIGHTGRAY);

floodfill(375,275,RED);
floodfill(375,325,RED);
floodfill(425,275,RED);
floodfill(425,325,RED);

floodfill(275,375,RED);
floodfill(275,425,RED);
floodfill(325,375,RED);
floodfill(325,425,RED);

floodfill(175,275,RED);
floodfill(225,275,RED);
floodfill(175,325,RED);
floodfill(225,325,RED);

floodfill(275,175,RED);
floodfill(275,225,RED);
floodfill(325,175,RED);
floodfill(325,225,RED);

setfillstyle(SOLID_FILL,LIGHTGREEN);

floodfill(475,275,RED);
floodfill(475,325,RED);
floodfill(525,275,RED);
floodfill(525,325,RED);

floodfill(275,475,RED);
floodfill(275,525,RED);
floodfill(325,475,RED);
floodfill(325,525,RED);

floodfill(75,275,RED);
floodfill(125,275,RED);
floodfill(75,325,RED);
floodfill(125,325,RED);

floodfill(275,75,RED);
floodfill(275,125,RED);
floodfill(325,75,RED);
floodfill(325,125,RED);

setfillstyle(SOLID_FILL,LIGHTRED);

floodfill(175,175,RED);
floodfill(175,225,RED);
floodfill(225,175,RED);
floodfill(225,225,RED);

floodfill(375,375,RED);
floodfill(375,425,RED);
floodfill(425,375,RED);
floodfill(425,425,RED);

floodfill(375,175,RED);
floodfill(375,225,RED);
floodfill(425,175,RED);
floodfill(425,225,RED);

floodfill(175,375,RED);
floodfill(175,425,RED);
floodfill(225,375,RED);
floodfill(225,425,RED);

setfillstyle(SOLID_FILL,CYAN);

floodfill(75,175,RED);
floodfill(75,225,RED);
floodfill(125,175,RED);
floodfill(125,225,RED);

floodfill(475,375,RED);
floodfill(475,425,RED);
floodfill(525,375,RED);
floodfill(525,425,RED);

floodfill(375,75,RED);
floodfill(375,125,RED);
floodfill(425,75,RED);
floodfill(425,125,RED);

floodfill(175,475,RED);
floodfill(175,525,RED);
floodfill(225,475,RED);
floodfill(225,525,RED);

//PRINTING OF NUMBERS ON BOXES
setcolor(BLACK);
setbkcolor(YELLOW);
    outtextxy(62,62.5,"100");
    outtextxy(112.5,62.5,"99");
setbkcolor(LIGHTBLUE);
    outtextxy(162.5,62.5,"98");
    outtextxy(212.5,62.5,"97");
setbkcolor(LIGHTGREEN);
    outtextxy(262.5,62.5,"96");
    outtextxy(312.5,62.5,"95");
setbkcolor(CYAN);
    outtextxy(362.5,62.5,"94");
    outtextxy(412.5,62.5,"93");
setbkcolor(YELLOW);
    outtextxy(462.5,62.5,"92");
    outtextxy(512.5,62.5,"91");

    outtextxy(62.5,112.5,"81");
    outtextxy(112.5,112.5,"82");
setbkcolor(LIGHTBLUE);
    outtextxy(162.5,112.5,"83");
    outtextxy(212.5,112.5,"84");
setbkcolor(LIGHTGREEN);
    outtextxy(262.5,112.5,"85");
    outtextxy(312.5,112.5,"86");
setbkcolor(CYAN);
    outtextxy(362.5,112.5,"87");
    outtextxy(412.5,112.5,"88");
setbkcolor(YELLOW);
    outtextxy(462.5,112.5,"89");
    outtextxy(512.5,112.5,"90");
setbkcolor(CYAN);
    outtextxy(62.5,162.5,"80");
    outtextxy(112.5,162.5,"79");
setbkcolor(LIGHTRED);
    outtextxy(162.5,162.5,"78");
    outtextxy(212.5,162.5,"77");
setbkcolor(LIGHTGRAY);
    outtextxy(262.5,162.5,"76");
    outtextxy(312.5,162.5,"75");
setbkcolor(LIGHTRED);
    outtextxy(362.5,162.5,"74");
    outtextxy(412.5,162.5,"73");
setbkcolor(LIGHTBLUE);
    outtextxy(462.5,162.5,"72");
    outtextxy(512.5,162.5,"71");
setbkcolor(CYAN);
    outtextxy(62.5,212.5,"61");
    outtextxy(112.5,212.5,"62");
 setbkcolor(LIGHTRED);
    outtextxy(162.5,212.5,"63");
    outtextxy(212.5,212.5,"64");
setbkcolor(LIGHTGRAY);
    outtextxy(262.5,212.5,"65");
    outtextxy(312.5,212.5,"66");
setbkcolor(LIGHTRED);
    outtextxy(362.5,212.5,"67");
    outtextxy(412.5,212.5,"68");
setbkcolor(LIGHTBLUE);
    outtextxy(462.5,212.5,"69");
    outtextxy(512.5,212.5,"70");

setbkcolor(LIGHTGREEN);
    outtextxy(62.5,262.5,"60");
    outtextxy(112.5,262.5,"59");
setbkcolor(LIGHTGRAY);
    outtextxy(162.5,262.5,"58");
    outtextxy(212.5,262.5,"57");
setbkcolor(LIGHTMAGENTA);
    outtextxy(262.5,262.5,"56");
    outtextxy(312.5,262.5,"55");
setbkcolor(LIGHTGRAY);
    outtextxy(362.5,262.5,"54");
    outtextxy(412.5,262.5,"53");
setbkcolor(LIGHTGREEN);
    outtextxy(462.5,262.5,"52");
    outtextxy(512.5,262.5,"51");

    outtextxy(62.5,312.5,"41");
    outtextxy(112.5,312.5,"42");
 setbkcolor(LIGHTGRAY);
    outtextxy(162.5,312.5,"43");
    outtextxy(212.5,312.5,"44");
setbkcolor(LIGHTMAGENTA);
    outtextxy(262.5,312.5,"45");
    outtextxy(312.5,312.5,"46");
 setbkcolor(LIGHTGRAY);
    outtextxy(362.5,312.5,"47");
    outtextxy(412.5,312.5,"48");
setbkcolor(LIGHTGREEN);
    outtextxy(462.5,312.5,"49");
    outtextxy(512.5,312.5,"50");

setbkcolor(LIGHTBLUE);
    outtextxy(62.5,362.5,"40");
    outtextxy(112.5,362.5,"39");
setbkcolor(LIGHTRED);
    outtextxy(162.5,362.5,"38");
    outtextxy(212.5,362.5,"37");
 setbkcolor(LIGHTGRAY);
    outtextxy(262.5,362.5,"36");
    outtextxy(312.5,362.5,"35");
setbkcolor(LIGHTRED);
    outtextxy(362.5,362.5,"34");
    outtextxy(412.5,362.5,"33");
setbkcolor(CYAN);
    outtextxy(462.5,362.5,"32");
    outtextxy(512.5,362.5,"31");

setbkcolor(LIGHTBLUE);
    outtextxy(62.5,412.5,"21");
    outtextxy(112.5,412.5,"22");
setbkcolor(LIGHTRED);
    outtextxy(162.5,412.5,"23");
    outtextxy(212.5,412.5,"24");
 setbkcolor(LIGHTGRAY);
    outtextxy(262.5,412.5,"25");
    outtextxy(312.5,412.5,"26");
setbkcolor(LIGHTRED);
    outtextxy(362.5,412.5,"27");
    outtextxy(412.5,412.5,"28");
setbkcolor(CYAN);
    outtextxy(462.5,412.5,"29");
    outtextxy(512.5,412.5,"30");

setbkcolor(YELLOW);
    outtextxy(62.5,462.5,"20");
    outtextxy(112.5,462.5,"19");
setbkcolor(CYAN);
    outtextxy(162.5,462.5,"18");
    outtextxy(212.5,462.5,"17");
setbkcolor(LIGHTGREEN);
    outtextxy(262.5,462.5,"16");
    outtextxy(312.5,462.5,"15");
setbkcolor(LIGHTBLUE);
    outtextxy(362.5,462.5,"14");
    outtextxy(412.5,462.5,"13");
setbkcolor(YELLOW);
    outtextxy(462.5,462.5,"12");
    outtextxy(512.5,462.5,"11");

    outtextxy(62.5,512.5,"1");
    outtextxy(112.5,512.5,"2");
setbkcolor(CYAN);
    outtextxy(162.5,512.5,"3");
    outtextxy(212.5,512.5,"4");
setbkcolor(LIGHTGREEN);
    outtextxy(262.5,512.5,"5");
    outtextxy(312.5,512.5,"6");
setbkcolor(LIGHTBLUE);
    outtextxy(362.5,512.5,"7");
    outtextxy(412.5,512.5,"8");
setbkcolor(YELLOW);
    outtextxy(462.5,512.5,"9");
    outtextxy(512.5,512.5,"10");

    setbkcolor(YELLOW);
    setcolor(RED);
    settextstyle(10,0,3);
    outtextxy(635,90,"SNAKES");
    outtextxy(655,120,"AND");
    outtextxy(625,150,"LADDERS");
    settextstyle(10,0,4);
    outtextxy(815,90,"PRESS ENTER");
    outtextxy(845,120,"TO ROLL");
    outtextxy(850,150,"A DICE");
    setcolor(BLUE);
   outtextxy(835,230,"PLAYER1");
   outtextxy(835,395,"PLAYER2");

setcolor(RED);
settextstyle(10,0,2);
      circle(630, 260, 15);
setcolor(BLUE);
      outtextxy(650,248,"PLAYER1");
setcolor(RED);
      circle(630, 355, 15);
setcolor(BLUE);
      outtextxy(650,344,"PLAYER2");
setfillstyle(SOLID_FILL,RED);
floodfill(630,260,RED);
setfillstyle(SOLID_FILL,GREEN);
floodfill(620,355,RED);

// MAKING OF LADDERS
setcolor(BLUE);
setbkcolor(WHITE);

rectangle(280,385,293,515);
setfillstyle(LINE_FILL,BLUE);
floodfill(285,400,BLUE);

line(470,440,475,420);
line(470,440,505,520);
line(510,510,475,420);
line(510,510,505,520);

line(320,290,333,270);
line(320,290,405,420);
line(415,410,333,270);
line(415,410,405,420);

line(70,340,80,330);
line(70,340,110,415);
line(120,405,80,330);
line(120,405,110,415);

line(470,140,480,130);
line(470,140,510,215);
line(520,205,480,130);
line(520,205,510,215);

line(315,75,325,90);
line(315,75,220,305);
line(325,90,230,315);
line(220,305,230,315);

line(615,415,625,410);
line(615,415,625,450);
line(625,450,635,445);
line(635,445,625,410);

setfillstyle(SLASH_FILL,BLUE);
floodfill(472,442,BLUE);
floodfill(322,291,BLUE);
floodfill(75,340,BLUE);
floodfill(475,140,BLUE);
floodfill(617,415,BLUE);
setfillstyle(BKSLASH_FILL,BLUE);
floodfill(315,77,BLUE);

//MAKING OF SNAKES
setcolor(RED);
 setlinestyle(0, 0, 7);
line(530,380,380,465);
circle(530,380,7);
line(140,80,370,520);
circle(140,80,7);
line(240,370,180,460);
circle(240,370,7);
line(480,90,340,370);
circle(480,90,7);
line(430,240,430,340);
circle(430,240,7);
line(625,470,635,510);
circle(625,470,7);

setcolor(BLACK);  //MAKING EYE OF SNAKES
circle(530,380,1);
circle(140,80,1);
circle(240,370,1);
circle(480,90,1);
circle(430,240,1);
circle(625,470,1);

setcolor(BLACK);
setbkcolor(YELLOW);
settextstyle(3,0,2);
outtextxy(650,420,"LADDER");
outtextxy(650,480,"SNAKE");


//PLAYER 1 CIRCLE
setlinestyle(0,0,1);
circle(x1,y1,10);
setfillstyle(SOLID_FILL,RED);
floodfill(x1,y1,BLACK);
//PLAYER 2 CIRCLE
circle(x2,y2,10);
setfillstyle(SOLID_FILL,GREEN);
floodfill(x2,y2,BLACK);
}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

void player1()
{
    display();
    r1=rand()%6+1;

    //DICE FOR PLAYER 1

//1 DOT
if(r1==1)
{
    setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,280,965,360);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,290,RED);
setcolor(BLACK);
circle(925,320,2);
}
//2 DOT
if(r1==2)
{
    setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,280,965,360);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,290,RED);
setcolor(BLACK);
circle(905,300,2);
circle(945,340,2);
}
//3 DOT
if(r1==3)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,280,965,360);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,290,RED);
setcolor(BLACK);
circle(905,300,2);
circle(925,320,2);
circle(945,340,2);
    }
//4 DOT
if(r1==4)
    {
    setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,280,965,360);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,290,RED);
setcolor(BLACK);
circle(905,300,2);
circle(945,340,2);
circle(945,300,2);
circle(905,340,2);
    }
//5 DOT
if(r1==5)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,280,965,360);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,290,RED);
setcolor(BLACK);
circle(905,300,2);
circle(945,340,2);
circle(925,320,2);
circle(945,300,2);
circle(905,340,2);
    }
//6 DOT
if(r1==6)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,280,965,360);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,290,RED);
setcolor(BLACK);
circle(905,300,2);
circle(945,340,2);
circle(945,300,2);
circle(905,340,2);
circle(925,300,2);
circle(925,340,2);
    }

setlinestyle(0,0,1);

        int c1=0;
        if(((ptr1->data)+r1)<=100)
        {
            while(c1!=r1)
            {

                if(((ptr1->data)%10!=0)&&((ptr1->data)/10)%2==0)  //for right direction move
                    x1=x1+50;
                if((ptr1->data)%10==0)  //if on 10,20....
                    y1=y1-50;
                if(((ptr1->data)%10!=0)&&((ptr1->data)/10)%2!=0)    //for left move
                    x1=x1-50;
                ptr1=ptr1->next;
                c1++;
            }


            if(ptr1->x!=0)   //for reaching a ladder or snake
            {
                start1=start;
                x1 = 87.5;
                y1 = 512.5;
                while(true)
                {
                    if(start1->data==ptr1->x)
                    {

                        ptr1=start1;
                        break;
                    }
                     if(((start1->data)%10!=0)&&((start1->data)/10)%2==0)
                    x1=x1+50;
                    if((start1->data)%10==0)
                    y1=y1-50;
                    if(((start1->data)%10!=0)&&((start1->data)/10)%2!=0)
                    x1=x1-50;
                    start1=start1->next;
                }
            }
            cout<<"you reached";
            cout<<ptr1->data;
            cout<<"\n";

            }
            if(ptr1->data==100)
            {cleardevice();
                win();
                exit(0);

            }
            display();
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

void player2()
{
    display();
    r2=rand()%6+1;

    //DICE FOR PLAYER 2

//1 DOT
if(r2==1)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,445,965,525);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,460,RED);
setcolor(BLACK);
circle(925,485,2);
    }
//2 DOT
if(r2==2)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,445,965,525);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,460,RED);
setcolor(BLACK);
circle(905,465,2);
circle(945,505,2);
    }
//3 DOT
if(r2==3)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,445,965,525);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,460,RED);
setcolor(BLACK);
circle(905,465,2);
circle(925,485,2);
circle(945,505,2);
    }
//4 DOT
if(r2==4)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,445,965,525);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,460,RED);
setcolor(BLACK);
circle(905,465,2);
circle(945,505,2);
circle(945,465,2);
circle(905,505,2);
    }
//5 DOT
if(r2==5)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,445,965,525);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,460,RED);
setcolor(BLACK);
circle(905,465,2);
circle(945,505,2);
circle(925,485,2);
circle(945,465,2);
circle(905,505,2);
    }
//6 DOT
if(r2==6)
    {
        setlinestyle(0,0,5);
setcolor(RED);
rectangle(885,445,965,525);
setfillstyle(SOLID_FILL,WHITE);
floodfill(900,460,RED);
setcolor(BLACK);
circle(905,465,2);
circle(945,505,2);
circle(945,465,2);
circle(905,505,2);
circle(925,465,2);
circle(925,505,2);
    }
setlinestyle(0,0,1);
setcolor(BLACK);
rectangle(815,220,1035,370);
rectangle(815,385,1035,535);

setfillstyle(SOLID_FILL,YELLOW);
floodfill(820,221,RED);
floodfill(820,386,RED);
setbkcolor(YELLOW);
 setcolor(BLUE);
   outtextxy(835,230,"PLAYER1");
   outtextxy(835,395,"PLAYER2");
        int c2=0;
        if((ptr2->data+r2)<=100)
        {
            while(c2!=r2)
            {
                if(((ptr2->data)%10!=0)&&((ptr2->data)/10)%2==0)
                    x2=x2+50;
                if((ptr2->data)%10==0)
                    y2=y2-50;
                    if(((ptr2->data)%10!=0)&&((ptr2->data)/10)%2!=0)
                    x2=x2-50;
                ptr2=ptr2->next;
                c2++;
            }
            if(ptr2->x!=0)
            {
                start2=start;
                x2 = 87.5;
                y2 = 537.5;
                while(true)
                {
                    if(start2->data==ptr2->x)
                    {
                        ptr2=start2;
                        break;
                    }
                    if(((start2->data)%10!=0)&&((start2->data)/10)%2==0)
                    x2=x2+50;
                if((start2->data)%10==0)
                    y2=y2-50;
                    if(((start2->data)%10!=0)&&((start2->data)/10)%2!=0)
                    x2=x2-50;
                    start2=start2->next;
                }
            }
            cout<<"you reached";
            cout<<ptr2->data;
            cout<<"\n";

            }
            if(ptr2->data==100)
            {cleardevice();
                win();
                exit(0);

            }

    display();
}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

int main()
{clock_t startTime = clock();

char c;
    int gd = DETECT, gm,colr=3,colo=9;
    initgraph(&gd,&gm,"");
    initwindow(1102,602);  //window size

    setcolor(WHITE);
line(0,0,1100,0);  //for border of window
line(0,0,0,600);
line(1100,0,1100,600);
line(0,600,1100,600);

rectangle(300,100,800,500);
rectangle(290,90,810,510);
rectangle(310,110,790,490);

setfillstyle(WIDE_DOT_FILL,RED);  //background dots
floodfill(75,75,WHITE);
setfillstyle(SOLID_FILL,LIGHTGREEN);//fill green color
floodfill(312,112,WHITE);

setbkcolor(LIGHTGREEN);
setcolor(RED);
settextstyle(10,0,9);  //font and size
    outtextxy(320,120,"SNAKES &");
    outtextxy(340,190,"LADDERS");//start co ordinates
 setcolor(YELLOW);
settextstyle(10,0,4);
     outtextxy(312,290,"*************************");
 setcolor(BLUE);
      outtextxy(340,350,"PRESS 'ENTER' TO START");
    outtextxy(340,410,"PRESS 'ESC' TO EXIT");


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

while(true)
{
    if(GetAsyncKeyState(VK_RETURN))//pressing enter will make this true
    {cleardevice();
        display();
        break;
    }
    if(GetAsyncKeyState(VK_ESCAPE))
    {
        exit(0);
    }
    setfillstyle(SOLID_FILL,colr);  //blinking of color
floodfill(302,102,WHITE);
setfillstyle(SOLID_FILL,colo);  //blinking of color
floodfill(292,92,WHITE);
if(colr==3)
{
    colr=9;
    colo=3;
}
else
{
    colr=3;
    colo=9;
}
delay(100);
}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//creation of 100 nodes

 int i;
    for(i=1;i<=100;i++)
    {
        struct node *n_node;
        n_node=new node;
        n_node->data=i;
        n_node->x=0;
        n_node->next=NULL;
        if(i==5)
        {
            n_node->x=36;
        }
        else if(i==10)
            n_node->x=29;
        else if(i==28)
        {
            n_node->x=55;
        }
        else if(i==22)
        {
            n_node->x=41;
        }
        else if(i==44)
        {
            n_node->x=95;
        }
        else if(i==70)
        {
            n_node->x=89;
        }
        else if(i==99)
        {
            n_node->x=7;
        }
        else if(i==37)
        {
            n_node->x=18;
        }
        else if(i==92)
        {
            n_node->x=35;
        }
        else if(i==68)
        {
            n_node->x=48;
        }
        else if(i==31)
        {
            n_node->x=14;
        }
    if(start==NULL)
    {
        start=n_node;
        curr=n_node;
    }
    else
        {
    curr->next=n_node;
    curr=n_node;
    }
    cout<<n_node->data;
    }
    ptr1=start;
    ptr2=start;
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

while(true)
{
    if(p==1)
    {

        setbkcolor(MAGENTA);
        setfillstyle(XHATCH_FILL,CYAN);
        floodfill(813,218,RED);
        setcolor(BLUE);
        setlinestyle(0,0,2);
        setbkcolor(YELLOW);
        outtextxy(880,295,"YOUR TURN");
        while(true)
        {
            if(GetAsyncKeyState(VK_RETURN))
            {
                 setlinestyle(0,0,5);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(900,460,RED);
setcolor(YELLOW);
rectangle(885,445,965,525);
setcolor(BLACK);
setlinestyle(0,0,1);
                player1();
                break;
            }
        }
        p=2;
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(813,218,RED);
    }
    else
    {

        setbkcolor(MAGENTA);
        setfillstyle(XHATCH_FILL,CYAN);
        floodfill(813,383,RED);
        setcolor(BLUE);
        setlinestyle(0,0,2);
        setbkcolor(YELLOW);
        outtextxy(880,455,"YOUR TURN");
         while(true)
        {
            if(GetAsyncKeyState(VK_RETURN))
            {
                setlinestyle(0,0,5);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(900,290,RED);
    setcolor(YELLOW);
rectangle(885,280,965,360);
setcolor(BLACK);
setlinestyle(0,0,1);
                player2();
                break;
            }
        }
        p=1;
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(813,383,RED);
    }
}


clock_t endTime = clock();
clock_t clockTicksTaken = endTime - startTime;
double timeInSeconds = clockTicksTaken / (double) (CLOCKS_PER_SEC/1000);
cout<<timeInSeconds;
     getch();
    return 0;
}


#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
using namespace std;

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

int main()
{
    start:
    int gd = DETECT, gm, x, y, color, i;
    char bgi[20]="C:\\TC\\BGI";
    char a[5];
    char b[5]="BUBT";
    char c[50]="BANGLADESH UNIVERSITY OF BUSINESS & TECHNOLOGY";
	initgraph(&gd, &gm, bgi);
	//****************************** Count down*************************
	settextstyle(10, 0, 10);
    outtextxy(30, 165, b);
    settextstyle(10,0,2);
    outtextxy(30, 260, c);
    delay(3000);
    cleardevice();
    delay(1000);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(7, 0, 10);
    setcolor(WHITE);
    for (i = 3; i >=0; i--)
    {
        sprintf(a, "%d", i);
        outtextxy(315, 270, a);
        delay(1000);
        if (i == 0)
            break;
        cleardevice();
    }

    //************************ WELLCOME PAGE ************************
    for(i=1;i<=320;i++){
    setcolor(LIGHTBLUE);
    line(640-i,500,640-i,0);
    line(-1+i,500,-1+i,0);
    fordelay(999999);
    }

    for(i=1;i<=114;i++){
    setcolor(BLACK);
    line(308,200+i,308,200);
    line(308,200-i,308,200);
    fordelay(1000000);
    }

   for(i=1;i<=315;i++){
    setcolor(BLACK);
    line(308+i,314,308+i,86);
    line(322-i,314,322-i,86);
    fordelay(999999);
    }

    //****************************** START BUBT *************************
   int replay=1;
   while(replay<=6){
    // Set color
    if(replay==1)
    setcolor(WHITE);
   else if(replay==2)
    setcolor(LIGHTGREEN);
   else if(replay==3)
        setcolor(YELLOW);
    else if(replay==4)
        setcolor(LIGHTBLUE);
   else if(replay==5)
        setcolor(WHITE);
    else if(replay==6)
        setcolor(WHITE);

    //**************************** B ************************
   for(i=1;i<=200;i++){
    //Vertical line
    line(20,100+i,20,100);
    fordelay(99999);
   }

    for(i=1;i<=80;i++){
        //Horizontal line-1
        line(20,100,20+i,100);
        //Horizontal line-2
        line(20,200,20+i,200);
        //Horizontal line-3
        line(20,300,20+i,300);
        fordelay(99999);
   }

    for(i=2;i<=180;i++)
    {
        // 1st Half circle (270-450) or (-90 to 90)
        arc(100,150,270,270+i,50);
        // 2st Half circle (270-450) or (-90 to 90)
        arc(100,250,270,270+i,50);
        fordelay(99999);
    }

    // In line 1st Half 'B'
    line(50,170,50,130);
    line(50,130,90,130);
    line(50,170,90,170);
    arc(90,150,270,90,20);

    // In line 2st Half 'B'
    line(50,230,50,270);
    line(50,230,90,230);
    line(50,270,90,270);
    arc(90,250,270,90,20);
    //End code for letter 'B'

    //**************************** U ************************
    for(i=1;i<=30;i++){
        line(170,100,170+i,100);
        fordelay(99999);
    }

    for(i=1;i<=135;i++){
    line(170,100+i,170,100);
    fordelay(99999);
    }

    for(i=2;i<=180;i++)
    {
        arc(235,235,180,180+i,65);
        fordelay(99999);
    }

    for(i=1;i<=135;i++){
    line(300,235,300,235-i);
    fordelay(99999);
    }

    for(i=1;i<=130;i++){
    line(200,100+i,200,100);
    fordelay(99999);
    }

    for(i=2;i<=180;i++)
    {
        arc(235,232,180,180+i,35);
        fordelay(99999);
    }

    for(i=1;i<=130;i++){
    line(270,230,270,230-i);
    fordelay(99999);
    }
    line(270,100,300,100);
    //End code for letter 'U'

    //**************************** B ************************

    for(i=1;i<=200;i++){
    //Vertical line
    line(320,100+i,320,100);
    fordelay(99999);
   }

    for(i=1;i<=80;i++){
        //Horizontal line-1
        line(320,100,320+i,100);
        //Horizontal line-2
        line(320,200,320+i,200);
        //Horizontal line-3
        line(320,300,320+i,300);
        fordelay(99999);
   }

    for(i=2;i<=180;i++)
    {
        // 1st Half circle (270-450) or (-90 to 90)
        arc(400,150,270,270+i,50);
        // 2st Half circle (270-450) or (-90 to 90)
        arc(400,250,270,270+i,50);
        fordelay(99999);
    }

    // In line 1st Half 'B'
    line(350,170,350,130);
    line(350,130,390,130);
    line(350,170,390,170);
    arc(390,150,270,90,20);

    // In line 2st Half 'B'
    line(350,230,350,270);
    line(350,230,390,230);
    line(350,270,390,270);
    arc(390,250,270,90,20);
    //End code for letter 'B'

    //**************************** T ************************
    for(i=1;i<=140;i++){
        line(470,100,470+i,100);
        fordelay(99999);
     }

    for(i=1;i<=140;i++){
        line(470,100,470+i,100);
        fordelay(99999);
    }

    for(i=1;i<=30;i++){
    line(470,100,470,100+i);
    line(610,100,610,100+i);
    fordelay(99999);
    }

    for(i=1;i<=55;i++){
    line(470,130,470+i,130);
    line(610-i,130,610,130);
    fordelay(99999);
    }

    for(i=1;i<=170;i++){
    line(525,130,525,130+i);
    line(555,130,555,130+i);
    fordelay(99999);
    }

    for(i=1;i<=30;i++){
    line(525,300,555,300);
    fordelay(99999);
    }
    //End code for the letter 'T'

    //*************************** BOX ***********************
    for(i=1;i<=610;i++){
    line(10,90,10+i,90);
    fordelay(99999);
    }

    for(i=1;i<=220;i++){
    line(620,90+i,620,90);
    fordelay(99999);
    }

    for(i=1;i<=610;i++){
    line(10,90,10+i,90);
    line(620-i,310,620,310);
    fordelay(99999);
    }

    for(i=1;i<=220;i++){
    line(10,310-i,10,90);
    fordelay(99999);
    }
   replay++;
   }

  //********************************* END ******************************
   for(i=1;i<=310;i++){
    setcolor(LIGHTBLUE);
    line(625-i,314,625-i,86);
    line(5+i,314,5+i,86);
    fordelay(999999);
    }
    delay(2000);
    cleardevice();
    //********************************** repeat *****************************
    cout<<"Repeating";
    for(i=3;i>=0;i--)
    {
        cout<<".";
        delay(1000);
    }
    system("cls");
    goto start;
    closegraph();
}


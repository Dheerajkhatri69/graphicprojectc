#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
	   void main()
	   {
	   int dg=DETECT,m,i;
	   int xs=220+470,ys=170,xl1=0,yl1=340,xl2=10;
	   int xs1=330+320,ys1=120,xs2=430+320,ys2=220;
	   int xs21=100+600,ys21=120,xs22=50+600,ys22=220,xs23=150+600,ys23=220;
	   int xs31=450+200,ys31=120,xs32=550+200,ys32=220,xs33=500+200,ys33=50;
	   int c,t,r,h;
	   int c1,c2,c3,t1,t2,t3,r1,r2,r3,h1,h2,h3,h11,h12,h13;

	   int x=50,y=50, x1=50,y1=160, x2=50,y2=270, x3=50,y3=270;
	   int xt1=100,yt1=100,xt2=200,yt2=100,xt3=150,yt3=0, xt11=100,yt11=210,xt12=200,yt12=210,xt13=150,yt13=110, xt21=100,yt21=320,xt22=200,yt22=320,xt23=150,yt23=220;
	   int xr1=210,yr1=0,xr2=310,yr2=100, xr11=210,yr11=110,xr12=310,yr12=210, xr21=210,yr21=220,xr22=310,yr22=320;
	   int xh11=320,yh11=70,xh12=420,yh12=170,xh13=370,yh13=0,xh14=420,yh14=70,  xh21=430,yh21=70,xh22=530,yh22=170,xh23=480,yh23=0,xh24=530,yh24=70,  xh31=375,yh31=240,xh32=475,yh32=340,xh33=425,yh33=170,xh34=475,yh34=240;

	   int key;
	   initgraph(&dg,&m,"C:\\TURBOC3\\BGI");

	   //Loading screen//

	   for(i=1;i<=60;i++)
	   {
	   cleardevice();
	   setcolor(6);
	   line(xs22,ys22,xs23,ys23);
	   line(xs21,ys21,xs22,ys22);
	   line(xs21,ys21,xs23,ys23);
	   setfillstyle(1,6);
	   floodfill(xs21,ys21+5,6);
	   xs21-=10;
	   xs22-=10;
	   xs23-=10;
	   delay(10);
	   }

	   for(i=1;i<=47;i++)
	   {
	   cleardevice();

	   setcolor(6);
	   line(xs22,ys22,xs23,ys23);
	   line(xs21,ys21,xs22,ys22);
	   line(xs21,ys21,xs23,ys23);
	   setfillstyle(1,6);
	   floodfill(xs21,ys21+5,6);

	   setcolor(12);
	   circle(xs,ys,50);
	   setfillstyle(1,12);
	   floodfill(xs,ys,12);
	   delay(10);
	   xs-=10;
	   }

	   for(i=1;i<=32;i++)
	   {
	   cleardevice();

	   setcolor(6);
	   line(xs22,ys22,xs23,ys23);
	   line(xs21,ys21,xs22,ys22);
	   line(xs21,ys21,xs23,ys23);
	   setfillstyle(1,6);
	   floodfill(xs21,ys21+5,6);

	   setcolor(12);
	   circle(xs,ys,50);
	   setfillstyle(1,12);
	   floodfill(xs,ys,12);

	   setcolor(1);
	   rectangle(xs1,ys1,xs2,ys2);
	   setfillstyle(1,1);
	   floodfill(xs1+5,ys1+5,1);
	   xs1-=10;
	   xs2-=10;
	   delay(10);

	   }

	   for(i=1;i<=20;i++)
	   {
	   cleardevice();

	   setcolor(6);
	   line(xs22,ys22,xs23,ys23);
	   line(xs21,ys21,xs22,ys22);
	   line(xs21,ys21,xs23,ys23);
	   setfillstyle(1,6);
	   floodfill(xs21,ys21+5,6);

	   setcolor(12);
	   circle(xs,ys,50);
	   setfillstyle(1,12);
	   floodfill(xs,ys,12);

	   setcolor(1);
	   rectangle(xs1,ys1,xs2,ys2);
	   setfillstyle(1,1);
	   floodfill(xs1+5,ys1+5,1);

	   setcolor(10);
	   rectangle(xs31,ys31,xs32,ys32);
	   setfillstyle(1,10);
	   floodfill(xs31+5,ys31+5,10);
	   setcolor(15);
	   line(xs31,ys31,xs32,ys32-100);
	   line(xs33,ys33,xs31,ys31);
	   line(xs33,ys33,xs32,ys32-100);
	   setfillstyle(1,15);
	   floodfill(xs33,ys33+5,15);
	   xs31-=10;
	   xs32-=10;
	   xs33-=10;
	   delay(10);
	   }

	   rectangle(0,340,630,360);
	   for(i=1;i<=63;i++)
	   {
	   setcolor(12);
	   rectangle(xl1,340,xl2,360);
	   setfillstyle(1,12);
	   floodfill(xl1+2,yl1+2,12);
	   xl1+=10;
	   xl2+=10;
	   delay(50);
	   }
	   clrscr();
	   cleardevice();
	   printf("\n\t\t\t WE HAVE FOUR TYPE OF SHAPES");
	   printf("\n\n\n\t  CIRCLE\t\t\t\t  CUBE");
	   printf("\n\n\n\t  TRIANGLE\t\t\t\t  HOUSE");

	   setcolor(1);
	   rectangle(60,60,150,85);
	   rectangle(380,60,460,85);
	   rectangle(60,108,160,133);
	   rectangle(380,108,460,133);
	   printf("\n\n1. circles limit (MINI: 1 &MAX: 3):");
	   scanf("%d",&c);

	   printf("\n\n2. CUBE limit (MINI: 1 &MAX: 3):");
	   scanf("%d",&r);

	   printf("\n\n3. TRIANGLES limit (MINI: 1 &MAX: 3):");
	   scanf("%d",&t);

	   printf("\n\n4. HOUSES limit (MINI: 1 &MAX: 3):");
	   scanf("%d",&h);

	   if((c<=3)&&(r<=3)&&(t<=3)&&(h<=3))
	    {
	   clrscr();
	   cleardevice();
	   printf("\t\t\tLIST OF COLORS");
	   printf("\n1. BLUE\t\t        2. GREEN\t\t3. CYAN");
	   printf("\n4. RED\t\t        5. MAGENTA\t\        6. BROWN");
	   printf("\n7. LIGHT GRAY\t\t8. DARK GRAY\t\t9. LIGHT BLUE");
	   printf("\n10. LIGHT GREEN\t\t11. DARK CYAN\t\t12. LIGHT RED");
	   printf("\n13. LIGHT MAGENTA\t14. YELLO\t\t15. WHITE");

	   printf("\n\nCIRCLE COLOR\n");
	   if(c==1)
	     {
	     printf("1.");
	     scanf("%d",&c1);
	     }
	   else if(c==2)
	     {
	     printf("1.");
	     scanf("%d",&c1);
	     printf("2.");
	     scanf("%d",&c2);
	     }
	   else if(c==3)
	     {
	     printf("1.");
	     scanf("%d",&c1);
	     printf("2.");
	     scanf("%d",&c2);
	     printf("3.");
	     scanf("%d",&c3);
	     }

	   printf("CUBE COLOR\n");
	   if(r==1)
	     {
	     printf("1.");
	     scanf("%d",&r1);
	     }
	   else if(r==2)
	     {
	     printf("1.");
	     scanf("%d",&r1);
	     printf("2.");
	     scanf("%d",&r2);
	     }
	   else if(r==3)
	     {
	     printf("1.");
	     scanf("%d",&r1);
	     printf("2.");
	     scanf("%d",&r2);
	     printf("3.");
	     scanf("%d",&r3);
	     }

	   printf("TRIANGLE COLOR\n");
	   if(t==1)
	     {
	     printf("1.");
	     scanf("%d",&t1);
	     }
	   else if(t==2)
	     {
	     printf("1.");
	     scanf("%d",&t1);
	     printf("2.");
	     scanf("%d",&t2);
	     }
	   else if(t==3)
	     {
	     printf("1.");
	     scanf("%d",&t1);
	     printf("2.");
	     scanf("%d",&t2);
	     printf("3.");
	     scanf("%d",&t3);
	     }

	   printf("HOUSE COLOR\n");
	   if(h==1)
	     {
	     printf("1.");
	     scanf("%d",&h1);
	     printf("Roof of color");
	     scanf("%d",&h11);
	     }
	   else if(h==2)
	     {
	     printf("1.");
	     scanf("%d",&h1);
	     printf("Roof of color");
	     scanf("%d",&h11);
	     printf("2.");
	     scanf("%d",&h2);
	     printf("Roof of color");
	     scanf("%d",&h12);
	     }
	   else if(h==3)
	     {
	     printf("1.");
	     scanf("%d",&h1);
	     printf("Roof of color");
	     scanf("%d",&h11);
	     printf("2.");
	     scanf("%d",&h2);
	     printf("Roof of color");
	     scanf("%d",&h12);
	     printf("3.");
	     scanf("%d",&h3);
	     printf("Roof of color");
	     scanf("%d",&h13);
	     }
	    }
	  else
	    {
	    goto down;
	    }


	   //End Loading screen//

	 clrscr();
	 cleardevice();
	   while (1)
	     {
	      //     circle no. 1
	      if((c==1)||(c==2)||(c==3))
	      {
	      if(kbhit)
		{
		key=getch();
		  if (key=='c')
		   {


		       while (2)
			 {
			 cleardevice();

			 //Main circle
			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   x+=5;
			   }
			   else if(key==75)
			   {
			   x-=5;
			   }
			   else if(key==72)
			   {
			   y-=5;
			   }
			   else if(key==80)
			   {
			   y+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	      }
	      //     circle no. 2
	      if((c==2)||(c==3))
	      {
	      if(kbhit)
		{
		key=getch();
		  if (key=='v')
		   {

		       while (3)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }


			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   x1+=5;
			   }
			   else if(key==75)
			   {
			   x1-=5;
			   }
			   else if(key==72)
			   {
			   y1-=5;
			   }
			   else if(key==80)
			   {
			   y1+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	      }
	       //     circle no. 3
	      if(c==3)
	      {
	       if(kbhit)
		{
		key=getch();
		  if (key=='b')
		   {

		       while (4)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   x3+=5;
			   }
			   else if(key==75)
			   {
			   x3-=5;
			   }
			   else if(key==72)
			   {
			   y3-=5;
			   }
			   else if(key==80)
			   {
			   y3+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	      }
	      //     triangle no. 1
	    if((t==1)||(t==2)||(t==3))
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='t')
		   {


		       while (5)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xt1+=5;
			   xt2+=5;
			   xt3+=5;
			   }
			   else if(key==75)
			   {
			   xt1-=5;
			   xt2-=5;
			   xt3-=5;
			   }
			   else if(key==72)
			   {
			   yt1-=5;
			   yt2-=5;
			   yt3-=5;
			   }
			   else if(key==80)
			   {
			   yt1+=5;
			   yt2+=5;
			   yt3+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	     }
	      //     triangle no. 2
	     if((t==2)||(t==3))
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='y')
		   {


		       while (6)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xt11+=5;
			   xt12+=5;
			   xt13+=5;
			   }
			   else if(key==75)
			   {
			   xt11-=5;
			   xt12-=5;
			   xt13-=5;
			   }
			   else if(key==72)
			   {
			   yt11-=5;
			   yt12-=5;
			   yt13-=5;
			   }
			   else if(key==80)
			   {
			   yt11+=5;
			   yt12+=5;
			   yt13+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	     }
	      //     triangle no. 3
	     if(t==3)
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='u')
		   {


		       while (7)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xt21+=5;
			   xt22+=5;
			   xt23+=5;
			   }
			   else if(key==75)
			   {
			   xt21-=5;
			   xt22-=5;
			   xt23-=5;
			   }
			   else if(key==72)
			   {
			   yt21-=5;
			   yt22-=5;
			   yt23-=5;
			   }
			   else if(key==80)
			   {
			   yt21+=5;
			   yt22+=5;
			   yt23+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	     }

	      //     ractangle no. 1

	     if((r==1)||(r==2)||(r==3))
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='r')
		   {


		       while (8)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xr1+=5;
			   xr2+=5;
			   }
			   else if(key==75)
			   {
			   xr1-=5;
			   xr2-=5;
			   }
			   else if(key==72)
			   {
			   yr1-=5;
			   yr2-=5;
			   }
			   else if(key==80)
			   {
			   yr1+=5;
			   yr2+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	     }
	      //     ractangle no. 2
	     if((r==2)||(r==3))
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='e')
		   {


		       while (9)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xr11+=5;
			   xr12+=5;
			   }
			   else if(key==75)
			   {
			   xr11-=5;
			   xr12-=5;
			   }
			   else if(key==72)
			   {
			   yr11-=5;
			   yr12-=5;
			   }
			   else if(key==80)
			   {
			   yr11+=5;
			   yr12+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	     }
	      //     ractangle no. 3

	     if(r==3)
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='w')
		   {


		       while (10)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xr21+=5;
			   xr22+=5;
			   }
			   else if(key==75)
			   {
			   xr21-=5;
			   xr22-=5;
			   }
			   else if(key==72)
			   {
			   yr21-=5;
			   yr22-=5;
			   }
			   else if(key==80)
			   {
			   yr21+=5;
			   yr22+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	   }
	      //     house no. 1

	    if((h==1)||(h==2)||(h==3))
	    {
	      if(kbhit)
		{
		key=getch();
		  if (key=='h')
		   {


		       while (11)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xh11+=5;
			   xh12+=5;
			   xh13+=5;
			   xh14+=5;
			   }
			   else if(key==75)
			   {
			   xh11-=5;
			   xh12-=5;
			   xh13-=5;
			   xh14-=5;
			   }
			   else if(key==72)
			   {
			   yh11-=5;
			   yh12-=5;
			   yh13-=5;
			   yh14-=5;
			   }
			   else if(key==80)
			   {
			   yh11+=5;
			   yh12+=5;
			   yh13+=5;
			   yh14+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	    }
	      //     house no. 2
	    if((h==2)||(h==3))
	    {
	      if(kbhit)
		{
		key=getch();
		  if (key=='j')
		   {


		       while (12)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			 {
			 key=getch();
			   if(key==77)
			   {
			   xh21+=5;
			   xh22+=5;
			   xh23+=5;
			   xh24+=5;
			   }
			   else if(key==75)
			   {
			   xh21-=5;
			   xh22-=5;
			   xh23-=5;
			   xh24-=5;
			   }
			   else if(key==72)
			   {
			   yh21-=5;
			   yh22-=5;
			   yh23-=5;
			   yh24-=5;
			   }
			   else if(key==80)
			   {
			   yh21+=5;
			   yh22+=5;
			   yh23+=5;
			   yh24+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	      }
	      //     house no. 3
	     if(h==3)
	     {
	      if(kbhit)
		{
		key=getch();
		  if (key=='k')
		   {


		       while (13)
			 {
			 cleardevice();

			 if((c==1)||(c==2)||(c==3))
			 {
			 setcolor(c1);
			 circle(x,y,50);
			 setfillstyle(1,c1);
			 floodfill(x,y,c1);
			 }

			 if((c==2)||(c==3))
			 {
			 setcolor(c2);
			 circle(x1,y1,50);
			 setfillstyle(1,c2);
			 floodfill(x1,y1,c2);
			 }

			 if(c==3)
			 {
			 setcolor(c3);
			 circle(x3,y3,50);
			 setfillstyle(1,c3);
			 floodfill(x3,y3,c3);
			 }

			 if((t==1)||(t==2)||(t==3))
			 {
			 setcolor(t1);
			 line(xt1,yt1,xt2,yt2);
			 line(xt3,yt3,xt1,yt1);
			 line(xt3,yt3,xt2,yt2);
			 setfillstyle(1,t1);
			 floodfill(xt3,yt3+5,t1);
			 }

			 if((t==2)||(t==3))
			 {
			 setcolor(t2);
			 line(xt11,yt11,xt12,yt12);
			 line(xt13,yt13,xt11,yt11);
			 line(xt13,yt13,xt12,yt12);
			 setfillstyle(1,t2);
			 floodfill(xt13,yt13+5,t2);
			 }

			 if(t==3)
			 {
			 setcolor(t3);
			 line(xt21,yt21,xt22,yt22);
			 line(xt23,yt23,xt21,yt21);
			 line(xt23,yt23,xt22,yt22);
			 setfillstyle(1,t3);
			 floodfill(xt23,yt23+5,t3);
			 }

			 if((r==1)||(r==2)||(r==3))
			 {
			 setcolor(r1);
			 rectangle(xr1,yr1,xr2,yr2);
			 setfillstyle(1,r1);
			 floodfill(xr1+5,yr1+5,r1);
			 }

			 if((r==2)||(r==3))
			 {
			 setcolor(r2);
			 rectangle(xr11,yr11,xr12,yr12);
			 setfillstyle(1,r2);
			 floodfill(xr11+5,yr11+5,r2);
			 }

			 if(r==3)
			 {
			 setcolor(r3);
			 rectangle(xr21,yr21,xr22,yr22);
			 setfillstyle(1,r3);
			 floodfill(xr21+5,yr21+5,r3);
			 }

			 if((h==1)||(h==2)||(h==3))
			 {
			 setcolor(h1);
			 rectangle(xh11,yh11,xh12,yh12);
			 setfillstyle(1,h1);
			 floodfill(xh11+5,yh11+5,h1);
			 setcolor(h11);
			 line(xh11,yh11,xh14,yh14);
			 line(xh13,yh13,xh11,yh11);
			 line(xh13,yh13,xh14,yh14);
			 setfillstyle(1,h11);
			 floodfill(xh13,yh13+5,h11);
			 }

			 if((h==2)||(h==3))
			 {
			 setcolor(h2);
			 rectangle(xh21,yh21,xh22,yh22);
			 setfillstyle(1,h2);
			 floodfill(xh21+5,yh21+5,h2);
			 setcolor(h12);
			 line(xh21,yh21,xh24,yh24);
			 line(xh23,yh23,xh21,yh21);
			 line(xh23,yh23,xh24,yh24);
			 setfillstyle(1,h12);
			 floodfill(xh23,yh23+5,h12);
			 }

			 if(h==3)
			 {
			 setcolor(h3);
			 rectangle(xh31,yh31,xh32,yh32);
			 setfillstyle(1,h3);
			 floodfill(xh31+5,yh31+5,h3);
			 setcolor(h13);
			 line(xh31,yh31,xh34,yh34);
			 line(xh33,yh33,xh31,yh31);
			 line(xh33,yh33,xh34,yh34);
			 setfillstyle(1,h13);
			 floodfill(xh33,yh33+5,h13);
			 }

			 delay(50);
			 if(kbhit)
			  {
			   key=getch();
			   if(key==77)
			   {
			   xh31+=5;
			   xh32+=5;
			   xh33+=5;
			   xh34+=5;
			   }
			   else if(key==75)
			   {
			   xh31-=5;
			   xh32-=5;
			   xh33-=5;
			   xh34-=5;
			   }
			   else if(key==72)
			   {
			   yh31-=5;
			   yh32-=5;
			   yh33-=5;
			   yh34-=5;
			   }
			   else if(key==80)
			   {
			   yh31+=5;
			   yh32+=5;
			   yh33+=5;
			   yh34+=5;
			   }
			   else if(key==8)
			   break;
			  }
			 }
		   }
		}
	      }
	      if(kbhit)
	       {
		 key=getch();
		  if (key==8)
		    {
		    break;
		    }
	       }
	     }

	   clrscr();
	   cleardevice();
	   down:
	   clrscr();
	   cleardevice();
	   setcolor(14);
	   circle(300,220,150);
	   setfillstyle(1,14);
	   floodfill(300,220,14);

	   setcolor(BLACK);
	   circle(230,158,30);
	   setfillstyle(1,BLACK);
	   floodfill(230,158,BLACK);
	   circle(370,158,30);
	   setfillstyle(1,BLACK);
	   floodfill(370,158,BLACK);

	   setcolor(15);
	   circle(230,158,10);
	   setfillstyle(1,15);
	   floodfill(230,158,15);
	   circle(370,158,10);
	   setfillstyle(1,15);
	   floodfill(370,158,15);

	   setcolor(BLACK);
	   arc(300,200,201,340,105);
	   printf("Try again!.");
	   getch();
	   closegraph();
	   }

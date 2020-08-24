#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<windows.h>
//global variables
int advance[5]={2500,2000,900,2000,2200};
int r_no[5]={0,1,2,3,4};
int room;
int tot[5]={0,0,0,0,0};
int g_tot=0;
int r_charge[5];
char r_type[5][7];
char r_cust[5][20]={"N.A","N.A","N.A","N.A","N.A"};
char c_city[5][20];
char name[30];
int c_mem[5];
char c_nat[5][20];
char r_avail[5];
char r_per[5];
int no[5];
int year[20];
int month[20];
int day[20];
int i;
//function definitions 
void screenheader()
{
	printf("          ::::::::::::::::::::::::::::::::::::\n");
	printf("          :                                  :\n");
	printf("          :                                  :\n");
	printf("          :      @@@@@@@@@@@@@@@@@@@@@@      :\n");
	printf("          :      @     WELCOME        @      :\n");
	printf("          :      @        TO          @      :\n");
	printf("          :      @ HOTEL GRANDINN     @      :\n");
	printf("          :      @   ROHAN NAGAR,     @      :\n");
	printf("          :      @   JALANDHAR(PUNJAB)@      :\n");
	printf("          :      @@@@@@@@@@@@@@@@@@@@@@      :\n");
	printf("          :                                  :\n");
	printf("          :                                  :\n");
	printf("          ::::::::::::::::::::::::::::::::::::\n");
}
void intro()
{
	printf("             HELLO there and a\n"); 
	printf("              warm welcome to\n");
	printf("              HOTEL GRANDINN\n");
	printf(" We have been expecting you!We\n");
	printf(" know what it means to come\n");
	printf(" from a long and tiring trip\n");
	printf("  and to long for a genuine welcome.Come on in.We are here to make you feel good!!\n");
	printf("The HOTEL GRAND INN offers ultimate comfort and luxury.This 4-storied hotel is a beautiful combination of\n");
	printf("traditional grandeur and modern facilities.The guest rooms are furnished with a range of modern amenities such as\n");
	printf("television and internet access.All rooms have private bathrooms with hot water.Very clean rooms,excellent meals with\n");
	printf("talented live music at dinner,friendly staff and nice location makes this place wonderful to stay..We hope you will have\n");
	printf("great experience in being with us..Good luck!!..\n");
	printf("Press any character to continue:");
	getch();
}
void getavail()
{
	for(i=0;i<5;i++)
	{
		if(r_no[i]==0)
		{strcpy(r_type[i],"S.DELUXE");
		r_charge[i]=2500;
		if(strcmp(r_cust[i],"N.A")==0)
		{
			r_avail[i]='Y';
			r_per[i]=0;
		}
		
		}
		else if(r_no[i]==1)
		{strcpy(r_type[i],"DELUXE");
		r_charge[i]=2000;
		if(strcmp(r_cust[i],"N.A")==0)
		{
			r_avail[i]='Y';
			r_per[i]=0;
		}
			
		}
		else if(r_no[i]==2)
		{strcpy(r_type[i],"GENERAL");
		r_charge[i]=900;
		if(strcmp(r_cust[i],"N.A")==0)
		{
			r_avail[i]='Y';
			r_per[i]=0;
		}
		}
		
		else if(r_no[i]==3)
		{strcpy(r_type[i],"COUPLE");
		r_charge[i]=1500;
		if(strcmp(r_cust[i],"N.A")==0)
		{
			r_avail[i]='Y';
			r_per[i]=0;
		}
		}
		
		else if(r_no[i]==4)
		{strcpy(r_type[i],"C.DELUXE");
		r_charge[i]=2200;
		if(strcpy(r_cust[i],"N.A")==0)
		{
			r_avail[i]='Y';
			r_per[i]=0;
			
		}
	}
	}

}
void putavail()
{
	printf("          ********ROOM AVAILABILITY********\n");
	printf("          ------------------------------------\n");
	printf("ROOMNO\tROOMTYPE\tCHARGES\tAVAILABILTY\tCUST NAME\tPERIOD\n");
	for(i=0;i<5;i++)
	{if(i==0)
	printf("%d\t%s\t%d\t    %c   \t    %s\t        %d\n",r_no[i],r_type[i],r_charge[i],r_avail[i],r_cust[i],r_per[i]);
	else if(i==1)
	printf("%d\t  %s      %d      %c \t      %s \t         %d\n",r_no[i],r_type[i],r_charge[i],r_avail[i],r_cust[i],r_per[i]);
    else if(i==2)
	printf("%d    %s       %d       %c    \t      %s            %d\n",r_no[i],r_type[i],r_charge[i],r_avail[i],r_cust[i],r_per[i]);   
    else if(i==3)
    printf("%d \t   %s       %d        %c     \t     %s            %d\n",r_no[i],r_type[i],r_charge[i],r_avail[i],r_cust[i],r_per[i]);
    else
    printf("%d  \t   %s       %d       %c     \t      %s         %d\n",r_no[i],r_type[i],r_charge[i],r_avail[i],r_cust[i],r_per[i]);
    }
	
}
void features()
{
	int typ;
	system("cls");
	screenheader();
	printf("Choose the room type:1.S.DELUXE\n2.DELUXE\n3.GENERAL\n4.COUPLE\n5.C.DELUXE\n");
	scanf("%d",&typ);
	if(typ>5)
	{
		printf("Invalid choice!!!");
		features();
	}
	switch(typ)
	{
		case 1:system("cls");
		screenheader();
		printf(" Room Number                  >>>1\n");
	    printf(" Advance                    >>>750\n\n");
		printf("                           FEATURES OF THIS ROOM                     \n");
		printf("----------------------------------------------------------------------------\n");
		printf("1. Room Type                  >>>>S.DELUXE\n\n");
		printf("2. Room Charges               >>>>Rs.2500 per day\n\n");
		printf("3.  Bed                       >>>       2\n\n");
		printf("4.  Capacity                 >>>       5\n\n");
		printf("5.  Balcony available.   \n");
		printf("-----------------------------------------------------------------------------\n");
		printf("                            ADDITIONAL  FEATURES                        \n");
		printf("-----------------------------------------------------------------------------\n");
		printf("1.A/C available.\n");
		printf("2.Geyser available.\n");
		printf("3.TV available.   \n");
		printf("4.Breakfast complementary.\n");
		printf("5.Laundry service available.\n");
		printf("6.Writing table with chair.\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("NOTE:-Extra bed will cost Rs.50 per bed \n");
		break;
		
		case 2:system("cls");
		screenheader();
		printf(" Room Number                  >>>2\n");
		printf(" Advance                     >>>>800\n\n");
		printf("                          FEATURES OF THIS ROOM                      \n");
		printf("----------------------------------------------------------------------------\n");
		printf("1. Room Type                  >>>>DELUXE\n\n");
		printf("2. Room Charges               >>>>Rs.2000 per day\n\n");
		printf("3. Bed                        >>>       3\n\n");
		printf("4. Capacity                  >>>       4\n\n");
		printf("5. Balcony available.      \n ");
		printf("------------------------------------------------------------------------------\n");
		printf("                           ADDITIONAL FEATURES                              \n");
		printf("------------------------------------------------------------------------------\n");
		printf("1.A/C available.\n");
		printf("2.Geyser available.\n");
		printf("3.TV available.  \n");
		printf("4.Laundry service available.\n");
		printf("------------------------------------------------------------------------------\n");
		printf("NOTE:-Extra bed will cost Rs.50 per bed\n");
		break;
		 
		
		case 3:system("cls");
		screenheader();
		printf(" Room Number                   >>>3\n");
		printf(" Advance                       >>>>400\n\n");
		printf("                        FEATURES OF THIS ROOM                        \n");
		printf("----------------------------------------------------------------------------\n");
		printf("1. Room Type                  >>>>GENERAL\n\n");
		printf("2. Room Charges                >>>Rs.900 per day\n\n");
		printf("3. Bed                        >>>      2\n\n"); 
		printf("4. Capacity                  >>>       3\n\n");
		printf("----------------------------------------------------------------------------\n");
		printf("                         ADDITIONAL FEATURES                                 \n");
		printf("----------------------------------------------------------------------------\n");
		printf("1.A/C available.\n");
		printf("2.TV available.\n");
		printf("---------------------------------------------------------------------------\n");
		printf("NOTE:-Extra bed will cost Rs.50 per bed\n");
		break;
		
		case 4:system("cls");
		screenheader();
		printf(" Room Number                  >>>>4\n");
		printf(" Advance                      >>>700\n\n");
		printf("                        FEATURES OF THIS ROOM                        \n");
		printf("----------------------------------------------------------------------------\n");
        printf("1. Room Type                >>>COUPLE\n\n");
		printf("2. Room Charges              >>>Rs.2000 per day\n\n");
		printf("3. Bed                       >>>      1\n\n");
		printf("4. Capacity                 >>>       2\n\n");
		printf("----------------------------------------------------------------------------\n");
		printf("                        ADDITIONAL FEATURES                                 \n");
		printf("----------------------------------------------------------------------------\n");
		printf("1.A/C available.\n");
		printf("2.TV available.\n");
		printf("3.Geyser available.\n");
		printf("4.Laundry service available.\n");
		printf("---------------------------------------------------------------------------\n");
		break;	
		
		case 5:system("cls");
		screenheader();
		printf(" Room Number                   >>>>5\n");
		printf(" Advance                       >>>>800\n\n");
		printf("                        FEATURES OF THIS ROOM                         \n");
		printf("-----------------------------------------------------------------------------\n");
		printf("1. Room Type                >>>C.DELUXE\n\n");
		printf("2. Room Charges              >>>Rs.2200 per day\n\n");
		printf("3. Bed                      >>>    1\n\n");
		printf("4. Capacity                 >>>    2\n\n");
		printf("------------------------------------------------------------------------------\n");
		printf("                         ADDITIONAL FEATURES                                 \n");
		printf("-------------------------------------------------------------------------------\n");
		printf("1.A/C available.\n");
		printf("2.TV available.\n");
		printf("3.Geyser available.\n");
		printf("4.Laundry service available.\n");
		printf("5.Breakfast complementary.\n");
		printf("--------------------------------------------------------------------------------\n");
		break;
		
		       
	}
	
	
	
}
void allocate()
{
	system("cls");
	getavail();
	printf("Enter the room in which u want to stay:\n");
	scanf("%d",&room);
	if(r_avail[room-1]=='Y')
	{
		fflush(stdin);
		printf("Enter the customer name for living:");
		gets(r_cust[room-1]);
		printf("Enter the city:");
		gets(c_city[room-1]);
		printf("Enter the nationality:");
		gets(c_nat[room-1]);
		printf("For how many days customer wants the room??");
		scanf("%d",&r_per[room-1]);
		printf("Enter the no of members:");
		scanf("%d",&c_mem[room-1]);
		if((room==1)||(room==2)||(room==3))
		{
			if((c_mem[room-1]<1)||(c_mem[room-1]>5))
			{
				printf("%d members cannot be allocated the room!.Allowed no of members are between 1-5.\n",c_mem[room-1]);
				getch();
				allocate();
			}
			
		}
		else if((room==4)||(room==5))
		{
			if((c_mem[room-1]>2))
			{
				printf("%d members cannot be allocated the room.Allowed no of members are only 2..\n",c_mem[room-1]);
				getch();
				allocate();
			}
		}
		printf("Enter the date of arrival:\n");
		printf("------------------------------\n");
		printf("Enter the date of arrival:\n");
		scanf("%d",&day[room-1]);
		printf("Enter the month of arrival:\n");
		scanf("%d",&month[room-1]);
		printf("Enter the year of arrival:\n");
		scanf("%d",&year[room-1]);
		if((year[room-1]<9999)&&(month[room-1]>=1)&&(month[room-1]<=12)&&(day[room-1]>=1)&&(day[room-1]<=31))
		{
			printf("-----------------------------------------------------\n");
			printf("Room is allocated to:\n");
			puts(r_cust[room-1]);
			printf("For %d days...\n",r_per[room-1]);
			printf("-----------------------------------------------------\n");
			
		}
		else
		{
			printf("INVALID DATE......!!!!!\n");
			getch();
			allocate();
		}
			printf("--------------------------------------------------------\n");
		printf("Room Number:%d ",room);
		printf("\n");
		printf("Customer Name:");
		puts(r_cust[room-1]);
		printf("\n");
		printf("Period for which room is allocated:%d",r_per[room-1]);
		printf("\n");
		printf("City:");
		puts(c_city[room-1]);
		printf("\n");
		printf(" Nationality:");
		puts(c_nat[room-1]);
		printf("\n");
		printf(" No of members:%d",c_mem[room-1]);
		printf("\n");
		printf(" Arrival Date:%d/%d/%d",day[room-1],month[room-1],year[room-1]);
		printf("\n");
		printf("-----------------------------------------------------------\n");
	
		
		
	}
	else
	{
		printf(" ERROR..Room cannot be allocated!..\n");
		printf("Room is not available..\n");
		getch();
	}
		
		
	
}
void putcust()
{
	system("cls");
	int j;
	printf("Enter the room no:");
	scanf("%d",&room);
	j=(strcmp(r_cust[room-1],"N.A"));
	if(j==0)
	{
		printf("DATA NOT AVAILABLE!!!!..........\n");
		getch();
	}
	else
	{
	printf("--------------------------------------------------------\n");
		printf(" Room Number:%d\n ",r_no[room]);
		printf(" Customer Name:\n");
		puts(r_cust[room-1]);
		printf("Period for which room is allocated:%d\n",r_per[room-1]);
		printf(" City:\n");
		puts(c_city[room-1]);
		printf(" Nationality:\n");
		puts(c_nat[room-1]);
		printf(" No of members:%d\n",c_mem[room-1]);
		printf(" Arrival Date:%d/%d/%d\n",day[room-1],month[room-1],year[room-1]);
		printf("-----------------------------------------------------------\n");
	
        getch();		
			
	}
}
void cancel()
{
	printf("Enter the room number:");
	scanf("%d",&room);
	if(r_cust[room-1]=="N.A")
	{
		printf("The room is empty!!....");
		getch();
	}
	else
	{
		printf("Enter the name of person staying in room:");
		fflush(stdin);
		gets(name);
		if(strcmpi(name,r_cust[room-1]!=0))
		{
			printf("Reservation for room number %d is cancelled..",room);
			strcpy(r_cust[room-1],"N.A");
			getch();
		}
		else
		{
			printf("Invalid name!..");
			getch();
			cancel();
		}
	}
	g_tot=advance[room-1];
	printf("Your total bill is:%d",g_tot);
	
}
void deallocate()
{
	screenheader();
	printf("Enter the room number:");
	scanf("%d",&room);
	if(r_cust[room-1]=="N.A")
	{
		printf("The room is empty....!!!\n");
		getch();
	}
	else
	{
		printf("Enter the name of person staying in room:");
		fflush(stdin);
		gets(name);
		if(strcmpi(name,r_cust[room-1])==0)
		{
			printf("Room no %d deallocated....\n",room);
			strcpy(r_cust[room-1],"N.A");
			getch();
		}
		else
		{
			printf("Inavlid name....\n");
			getch();
			deallocate();
		}
		g_tot=(r_per[room-1]*r_charge[room-1]-advance[room-1]+tot[room-1]);
		printf("Your total bill is:%d\n ",g_tot);
		printf("Thanks for staying in this hotel....\n");
	}
}
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void restaurant()
{
	int count=0,z=0,fc[113],answ;
	char ans;
	int price[113]={
	245,245,245,245,240,240,240,240,235,235,250,235,235,220,
   215,230,215,240,250,250,250,250,250,250,250,255,245,245,245,245,250,240,
   240,360,290,360,290,370,295,360,290,360,290,250,360,290,360,290,250,370,
   290,360,290,250,250,280,245,290,235,265,240,290,300,256,240,265,270,255,
   255,240,240,235,220,25,30,25,30,35,35,25,30,35,25,35,25,25,30,100,105,105,
   100,105,100,105,125,105,105,100,105,110,115,100,100,100,105,105,105,105,
   125,105,120,120,100};
   char food[113][30]={"SHAHI PANEER","KADAI PANEER","CHEESE KORMA",
   "MALAI KOFTA","MATAR PANEER","PALAK PANEER","MIX VEG.","ALOO GOBI",
   "ALOO JEERA","CHANA MASALA","MATAR MUSHROOM","RAJMA MAKHANI","DAL MAKHANI",
   "MIXED RAITA","BUNDI RAITA","PINEAPPLE RAITA","SALAD(GREEN)","DUM ALOO",
   "MUSHROOM PANEER","MUTTON MASALA","MUTTON MUGHLAI","MUTTON KORMA",
   "MUTTON DO PYAZA","MUTTON SAGH","MUTTON DAHI","MUTTON ROGAN JOSH",
   "MUTTON CURRY","KADAI MUTTON","KEEMA LEVER","KEEMA MATAR","KEEMA EGG",
   "BRAIN CURRY","EGG CURRY","BUTTER CHICKEN","BUTTER CHICKEN(1/2)",
   "KADAI CHICKEN","KADAI CHICKEN(1/2)","BUTTER CHICKEN(BL)",
   "BUTTER CHICKEN(BL)(1/2)","CHICKEN MUGHLAI","CHICKEN MUGHLAI(1/2)",
   "CHICKEN MASALA","CHICKEN MASALA(1/2)","CHICKEN MASALA(1/4)",
   "CHICKEN SAGH","CHICKEN SAGH(1/2)","CHICKEN DAHI","CHICKEN DAHI(1/2)",
   "CHICKEN DAHI(1/4)","CHICKEN KORMA","CHICKEN KORMA(1/2)",
   "CHICKEN DO PYAZA","CHICKEN DO PYAZA(1/2)","FISH CURRY","CHICKEN CURRY",
   "CHICKEN CURRY(1/2)","CHICKEN CURRY(1/4)","CHILLI CHICKEN","TANDOORI ALOO",
   "CHICKEN TIKKA","SEEKH KABAB","FISH TIKKA","CHICKEN TANDOORI",
   "CHICKEN TANDOORI(1/2)","PANEER TIKKA","CHICKEN SEEKH KABAB",
   "CHICKEN HARA KABAB","CHICKEN BIRYANI","MUTTON BIRYANI","PANEER PULAO",
   "VEG.PULAO","JEERA RICE","STEAMED RICE","RUMALI ROTI","ROTI","NAN", "ALOO NAN","PANEER NAN","KEEMA NAN","PARANTHA","ALOO PARANTHA",
   "PANEER PARANTHA","PUDINA PARANTHA","BUTTER NAN","LACHCHA PARANTHA",
   "MISSI ROTI","KHASTA ROTI","VEG.BURGER","PANEER BURGER","CHEESE SANDWICH",
   "VEG.PATTI","CHICKEN PATTI","TEA","COFFEE","COLD COFFEE","PINEAPPLE",
   "STRAWBERRY","CHOCOLATE","BLACK FOREST","DOUBLE STORIED","TRIPLE STORIED",
   "SOFT CONE","VANILLA","STRAWBERRY","CHOCOLATE","CHOCO CHIPS","MANGO",
   "TUTTI FRUITY","LICHI","PISTA BADAM","CHOCOLATE PISTA BADAM","CHOCO DIP",
   "CHOCOLATE LICHI"};
   system("cls");
   
   printf("       ******************      \n");
   printf("          MENU CARD             \n");
   printf("      *******************       \n");
   printf("         VEG/NON-VEG             \n");
   for(i=0;i<113;count++,i++)
   {
   	gotoxy(17,count+20);
   	printf("%d",i+1);
   	gotoxy(30,count+20);
   	puts(food[i]);
   	gotoxy(55,count+20);
   	printf("%d\n",price[i]);
   	if(count==17)
   	{
   		count=0;
   		printf("\n             Press any key to continue:");
   		getch();
   		system("cls");
   		system("cls");
	   }
	   if(i==18)
	   {
	   	printf("     MUTTON\n\n");
	   	count+=3;
	   }
	   if(i==32)
	   {
	   	printf("      CHICKEN\n\n");
	   	count+=3;
	   }
	   if(i==57)
	   {
	   	printf("      BAR-BE-QUE\n\n");
	   	count+=3;
	   }
	   if(i==72)
	   {
	   	printf("       ROTI/NAN/PARANTHA\n\n");
	   	count+=3;
	   }
	   if(i==91)
	   {
	   	printf("       BEVERAGES\n\n");
	   	count+=3;
	   }
	   if(i==100)
	   {
	   	printf("        ICE-CREAMS\n\n");
	   	count+=3;
	   }
   	
   }
   getch();
   printf("Press 0 to go back to menu card \n Press 1 to continue:");
   scanf("%d",&answ);
   switch(answ)
   {
   	case 0:restaurant();
   	break;
   	
   	case 1:system("cls");
   	do
   	{
   		printf("Enter the food code you want to have:");
   		scanf("%d",&fc[z]);
   		z++;
   		printf("Do you want more:y/n:");
   		fflush(stdin);
   		scanf("%c",&ans);
	   }while(ans=='y'||ans=='Y');
	   printf("Enter your room no:\n");
	   scanf("%d",&room);
	   printf("Enter your name:\n");
	   gets(name);
	   getch();
	   system("cls");
	   screenheader();
	   for(i=0;i<z;i++)
	   {
	   	puts(food[fc[i]-1]);
	   	printf("\t\t%d\n",price[fc[i]-1]);
	   	tot[room-1]+=price[fc[i]-1];
	   }
	   printf("TOTAL\t\t%d",tot[room-1]);
	   break;
	   
	   default:printf("WRONG CHOICE ENTERED!!!...");
	   getch();
	   restaurant();
}
   
   
}

int main()
{
	char ans;
	int ch;
	screenheader();
	printf("\n");
	do
	{
		printf("                 Choose a category:\n");
		printf("                  1.Get availability\n");
		printf("                  2.Features of room\n");
		printf("                  3.Room allocation\n");
		printf("                  4.Show customer details\n");
		printf("                  5.Restaurant\n");
		printf("                  6.Cancellation\n");
		printf("                  7.Room deallocation\n");
		printf("                  8.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:intro();
			getavail();
			putavail();
			break;
			
			case 2:features();
			break;
			
			case 3:allocate();
			break;
			
			case 4:putcust();
			break;
			
			case 5:restaurant();
			break;
			
			case 6:cancel();
			break;
			
			case 7:cancel();
			break;
			
			case 8:deallocate();
			break;
		
			default:printf("invalid choice!");
			getch();
		}
		printf("Do u want to continue:");
		fflush(stdin);
		scanf("%c",&ans);
		
	}while(ans=='y'||ans=='Y');
	
	return 0;
}

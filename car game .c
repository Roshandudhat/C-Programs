// car game.
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE consorle = getstdhandle(STD_OUTPUT_HANDLE);
COORD cursoposition;

int ememyY[3];
int ememyZ[3];
int emenyflag[3];
char car[4][4]={'','+','+','',
                '+','+','+','+',
				'','+','+','',
				'+','+','+','+'};
				
int carpos = WIN_WIDTH/2;
int score = 0;

void gotoxy(int x,int y){
	cursorposition.x = x;
	cursorposition.y = y;
	setconsoleCursosposition(console,cursorposition);
	
}
void setcursor(bool visible,DWORD size)
{
	if(size == 0)
	   size = 20;
	   
	CONSOLE_CURSOR_INFO lpCursor;
	lpcursor.bvisible = visible;
	lpcursor.dwsize =size;
	setconsolecursorInfo(console,&lpcursor);
}
void drawborder()
{
	for(int i=0; i<SCREEN_HEIGHT; I++){
		for(int j=0; j<17; j++){
			gotoxy(0+j,i);cout<<"+";
			gotoxy(WIN_WIDTH-j,i);cout<<"+";
		}
	}
	for(int i=0; i<SCREEN_HEIGHT; i++){
		gotoxy(SCREEN_WIDTH,i); cout<<"+";
	}
}
void genEnemy(int ind){
	enemyX[ind] = 17 + rand()%(33);
}
void drawEnemy(int ind){
	if( enemyFlag[ind] == ture ){
		gotoxy(enemyX[ind], enemyY[ind]);   cout<<"****";
		gotoxy(enemyX[ind], enemyY[ind]+1);   cout<<" ** ";
		gotoxy(enemyX[ind], enemyY[ind]+2);   cout<<"****";
		gotoxy(enemyX[ind], enemyY[ind]+3);   cout<<" ** ";
	}
}
void eraseEnemy(int ind){
	if(enemyFlag[ind]) == ture ){
		gotoxy(enemyX[ind], enemyY[ind]); cout<<"    ";
		gotoxy(enemyX[ind], enemyY[ind]+1); cout<<"    ";
		gotoxy(enemyX[ind], enemyY[ind]+2); cout<<"    ";
		gotoxy(enemyX[ind], enemyY[ind]+3); cout<<"    ";
	}
}
void resetEnemy(int ind){
	eraseEnemy(ind);
	enemyY[ind] =1;
	genEnemy(ind);
}
void drawcar(){
	for(int i=0; i<4; j++){
		gotoxy(j=0; j<4; j++){
			gotoxy(j+carpos, i+22); cout<<car[i][j];
		}
	}
}
void erasecar(){
	for(int i=0; i<4; j++){
		gotoxy(j=0; j<4; j++){
			gotoxy(j+carpos, i+22); cout<<" ";
		}
	}
}
int collision(){
	if(enemy[0]+4 >=23){
		if( enemyX[0] + 4 - carPos >= 0 && enemyX[0] +4 - carPos < 9  ){
			return 1;
		}
	}
}
void gameover(){
	system("cls");
	cout<<endl;
	cout<<"\t\t-----------------------------------"<<endl;
	cout<<"\t\t------------GAME OVER--------------"<<endl;
	cout<<"\t\t-----------------------------------"<<endl;
	cout<<"\t\tPress any key to go back to manu.";
	getch();
	}
	

void instructions(){
	system("cls");
	cout<<"Instructions";
	cout<<"\n-----------------";
	cout<<"\n Avoid Cars by moving left or right. "; 
	cout<<"\n\n press'a' to move left";
	cout<<"\n press'd' to move right";
	cout<<"\n press'eseapr' to exit";
	cout<<"\t\tPress any key to go back to manu.";
	getch();
}
void play(){
	carpos = -1 + WIN_WIDTH/2;
	score = 0;
	enemyFlag[0] = 1;
	enemyFlag[1] = 0;
	enemyY[0] = enemyY[1] = 1;
	
	system("cls");
	drawBorder();
	updatescore();
	genEnemy(0);
	genEnemy(1));
	
	gotoxy(WIN_WIDTH + 7, 2);cout<<"Car Game";
	gotoxy(WIN_WIDTH + 6, 4);cout<<"--------";
	gotoxy(WIN_WIDTH + 6, 6);cout<<"--------";
	gotoxy(WIN_WIDTH + 7, 12);cout<<"Control ";
	gotoxy(WIN_WIDTH + 7, 13);cout<<"--------";
	gotoxy(WIN_WIDTH + 2, 14);cout<<"A key - left";
	gotoxy(WIN_WIDTH + 2, 15);cout<<"D key - right";
	
	gotoxy(18,5);cout<<" press any key to start";
	grtch();
	gotoxy(18,5);cout<<"                       ";
	
	while(1){
		if(kbhit()){
			char ch = getch();
			if( ch=='a' || ch=='A'){
				if( carPos > 18)
				carPos -= 4;	
			}
			if(ch=='d' || ch=='D'){
				if( carPos < 50 )
				carPos += 4;
			}
			if(ch==27){
				break;
			}
		}
		drawCar();
		drawEnemy(0);
		drawEnemy(1);
		if( collision() == 1  ){
			gameover();
			return;
			
		}
		sleep(50);
		eraseCar();
		eraseEnemy(0);
		eraseEnemy(1);
		
		if (enemyY[0] == 10 )
		    if( enemyFlag[1] == 0 )
		        enemyFlag[1] = 1;
				
		if( enemyFlag[0] == 1 )
		    enemyY[1] += 1;  
			
		if( enemyFlag[1] == 1 )
		    enemyY[1] += 1 ;
			
		if( enemyY[0] > SCREEN_HEIGHT-4  ){
			resetEnemy(0);
			score++;
			updatescore();
		}
		if( enemyY[1] >	SCREEN_HEIGHT-4  ){
			resetEnemy(1);
			score++;
			updatescore();	
		} 
	}
	
}
int main()
{
	setcursor(0,0);
	srand( (unsigned)time(NULL));
	
	do{
		system("cls");
		gotoxy(10,5); cout<<"------------------------------- ";
		gotoxy(10,6); cout<<" |         Car Game           | ";
		gotoxy(10,7); cout<<"-------------------------------";
		gotoxy(10,9); cout<<"1. Start Game ";
		gotoxy(10,10); cout<<"2. Instructions " ";
		gotoxy(10,11); cout<<"3. Quit ";
		gotoxy(10,13); cout<<"Select option: ";
		char op =getche();
		
		if( op=='1') play();
		else if( op=='2') instructions();
		else if( op=='3') exit(0);
	}
	while(1);
	return 0 ;
 } 

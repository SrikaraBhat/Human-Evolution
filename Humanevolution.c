#include<GL/glut.h>
#include<string.h>
void *font =GLUT_BITMAP_HELVETICA_18;
int id1,id2,id3,id4,id5,id6,id7,id8,i=0;
int static p=0;
void myinit(){
	glClearColor(0.678f, 0.847f, 0.902f,0.000);
	glPointSize(5);
	glLineWidth(3);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0); //pixels on the screen
	glMatrixMode(GL_MODELVIEW);
}
void myinit1(){
	glClearColor(0.980,0.941,0.902,1.0);
	glPointSize(5);
	glLineWidth(3);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0); //pixels on the screen
	glMatrixMode(GL_MODELVIEW);
}
void output(int x,int y,char *string)
{
	int len,i;
	glRasterPos2f(x,y);
	len=(int)strlen(string);
	for(i=0;i<len;i++)
	{
		glutBitmapCharacter(font,string[i]);
	}
}

void note(void)
{
	glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
	glVertex2i(352,280);
	glColor3f(0.184f, 0.310f, 0.310f);
	glVertex2i(300,223);
	glVertex2i(300,157);
	glVertex2i(330,70);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(450,70);
	glVertex2i(498,114);
	glVertex2i(498,163);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(498,241);
	glVertex2i(450,289);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(352,280);
	glVertex2i(300,223);
	glVertex2i(300,223);
	glVertex2i(300,157);
	glVertex2i(300,157);
	glVertex2i(330,70);
	glVertex2i(330,70);
	glVertex2i(450,70);
	glVertex2i(450,70);
	glVertex2i(498,114);
	glVertex2i(498,114);
	glVertex2i(498,163);
	glVertex2i(498,163);
	glVertex2i(498,241);
	glVertex2i(498,241);
	glVertex2i(450,289);
	glVertex2i(352,280);
	glVertex2i(450,289);
	glEnd();
}


void tree(void)
{
	glColor3f(0.6,0.3,0); ///root &
	glBegin(GL_POLYGON);
	glVertex2i(32,300);
	glVertex2i(100,298);
	glVertex2i(50,390);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(74,462);
	glVertex2i(50,390);
	glVertex2i(54,382);
	glVertex2i(50,370);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(74,462);
	glVertex2i(72,392);
	glVertex2i(82,330);
	glVertex2i(50,390);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(50,444);
	glVertex2i(100,570);
	glVertex2i(80,540);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(84,540);
	glVertex2i(74,462);
	glVertex2i(50,444);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(50,444);
	glVertex2i(50,390);
	glVertex2i(74,462);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(50,444);
	glVertex2i(48,546);
	glVertex2i(56,582);
	glVertex2i(76,584);
	glVertex2i(100,570);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(84,588);
	glVertex2i(76,584);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(90,606);
	glVertex2i(76,584);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(48,546);
	glVertex2i(33,588);
	glVertex2i(56,582);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(32,603);
	glVertex2i(42,612);
	glVertex2i(44,580);
	glVertex2i(33,588);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(56,582);
	glVertex2i(70,613);
	glVertex2i(76,584);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(70,613);
	glVertex2i(56,582);
	glVertex2i(68,660);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(70,613);
	glVertex2i(68,660);
	glVertex2i(72,603);
	glVertex2i(76,648);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(100,298);
	glVertex2i(106,300);
	glVertex2i(94,312);
	glVertex2i(93,311);
	glEnd();
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(0,298);
	glVertex2i(32,300);
	glVertex2i(43,346);
	glEnd();
	////////////////////
	glColor3f(0.6,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(93,312);
	glVertex2i(140,300);
	glVertex2i(100,300);
	glEnd();
	
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(42,612);
	glVertex2i(44,581);
	glVertex2i(56,582);
	glVertex2i(62,600);
	glVertex2i(68,660);
	glVertex2i(46,720);
	glVertex2i(34,714);
	glVertex2i(28,660);
	glVertex2i(26,654);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(42,612);
	glVertex2i(26,654);
	glVertex2i(28,642);
	glVertex2i(14,618);
	glVertex2i(18,582);
	glVertex2i(32,603);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(76,486);
	glVertex2i(80,456);
	glVertex2i(88,454);
	glVertex2i(98,476);
	glVertex2i(100,498);
	glVertex2i(84,540);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(84,540);
	glVertex2i(100,498);
	glVertex2i(104,480);
	glVertex2i(114,492);
	glVertex2i(118,522);
	glVertex2i(100,570);
	glVertex2i(84,540);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(118,522);
	glVertex2i(130,522);
	glVertex2i(136,552);
	glVertex2i(130,576);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(130,576);
	glVertex2i(136,600);
	glVertex2i(132,636);
	glVertex2i(124,636);
	glVertex2i(76,648);
	glVertex2i(72,603);
	glVertex2i(76,584);
	glVertex2i(84,588);
	glVertex2i(90,606);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(124,636);
	glVertex2i(126,660);
	glVertex2i(124,678);
	glVertex2i(116,678);
	glVertex2i(76,648);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(116,678);
	glVertex2i(112,720);
	glVertex2i(103,714);
	glVertex2i(96,732);
	glVertex2i(76,648);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(96,732);
	glVertex2i(88,720);
	glVertex2i(76,750);
	glVertex2i(78,744);
	glVertex2i(80,720);
	glVertex2i(76,648);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(86,660);
	glVertex2i(46,720);
	glVertex2i(56,744);
	glVertex2i(66,738);
	glVertex2i(80,720);
	glVertex2i(76,648);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(46,720);
	glVertex2i(86,660);
	glVertex2i(62,598);
	glVertex2i(56,582);
	glVertex2i(44,581);
	glVertex2i(42,652);
	glVertex2i(25,654);
	glVertex2i(28,690);
	glVertex2i(34,714);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(42,652);
	glVertex2i(25,654);
	glVertex2i(18,642);
	glVertex2i(14,618);
	glVertex2i(18,582);
	glEnd();
	////////////////////
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(18,582);
	glVertex2i(32,606);
	glVertex2i(33,588);
	glVertex2i(24,516);
	glVertex2i(14,519);
	glVertex2i(14,564);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(33,588);
	glVertex2i(24,516);
	glVertex2i(25,480);
	glVertex2i(34,468);
	glVertex2i(38,480);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(38,480);
	glVertex2i(48,546);
	glVertex2i(33,588);
	glEnd();
	glColor3f(0.000f, 0.392f, 0.000f);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(38,480);
	glVertex2i(46,476);	
	glVertex2i(50,444);
	glVertex2i(48,546);
	glVertex2i(33,588);
	glEnd();
}
///////////////////////
///////////////////////
void cloud(void)
{
	glColor3f(1,1,1); 
	glBegin(GL_POLYGON);
	glVertex2i(210,827);
	glVertex2i(252,791);
	glVertex2i(300,782);
	glVertex2i(356,783);
	glVertex2i(388,791);
	glVertex2i(420,812);
	glVertex2i(428,830);
	glVertex2i(424,839);
	glVertex2i(395,932);
	glVertex2i(388,942);
	glVertex2i(360,958);
	glVertex2i(320,962);
	glVertex2i(280,950);
	glVertex2i(244,932);
	glVertex2i(210,827);
	glEnd();
	glColor3f(1,1,1); 
	glBegin(GL_POLYGON);
	glVertex2i(244,932);
	glVertex2i(180,935);
	glVertex2i(160,923);
	glVertex2i(146,911);
	glVertex2i(140,890);
	glEnd();
	glColor3f(1,1,1); 
	glBegin(GL_POLYGON);
	glVertex2i(140,890);
	glVertex2i(100,853);
	glVertex2i(96,845);
	glVertex2i(100,830);
	glVertex2i(128,806);
	glVertex2i(152,805);
	glVertex2i(210,827);
	glVertex2i(244,932);
	glEnd();
	glColor3f(1,1,1); 
	glBegin(GL_POLYGON);
	glVertex2i(385,932);
	glVertex2i(420,932);
	glVertex2i(460,929);
	glVertex2i(488,920);
	glVertex2i(508,902);
	glVertex2i(512,875);
	glVertex2i(500,857);
	glVertex2i(460,846);
	glVertex2i(424,839);
	glEnd();
}












///////////////////////
///////////////////////
void tree2(void)
{
	glColor3f(0.545f, 0.271f, 0.075f); ///root &
	glBegin(GL_POLYGON);
	glVertex2i(32,300);
	glVertex2i(100,298);
	glVertex2i(50,390);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(74,462);
	glVertex2i(50,390);
	glVertex2i(54,382);
	glVertex2i(50,370);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(74,462);
	glVertex2i(72,392);
	glVertex2i(82,330);
	glVertex2i(50,390);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(50,444);
	glVertex2i(100,570);
	glVertex2i(80,540);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(84,540);
	glVertex2i(74,462);
	glVertex2i(50,444);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(50,444);
	glVertex2i(50,390);
	glVertex2i(74,462);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(50,444);
	glVertex2i(48,546);
	glVertex2i(56,582);
	glVertex2i(76,584);
	glVertex2i(100,570);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(84,588);
	glVertex2i(76,584);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(90,606);
	glVertex2i(76,584);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(48,546);
	glVertex2i(33,588);
	glVertex2i(56,582);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(32,603);
	glVertex2i(42,612);
	glVertex2i(44,580);
	glVertex2i(33,588);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(56,582);
	glVertex2i(70,613);
	glVertex2i(76,584);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(70,613);
	glVertex2i(56,582);
	glVertex2i(68,660);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(70,613);
	glVertex2i(68,660);
	glVertex2i(72,603);
	glVertex2i(76,648);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(100,298);
	glVertex2i(106,300);
	glVertex2i(94,312);
	glVertex2i(93,311);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(0,298);
	glVertex2i(32,300);
	glVertex2i(43,346);
	glEnd();
	////////////////////
	
//	glBegin(GL_POLYGON);
//	glVertex2i(93,312);
//	glVertex2i(140,300);
//	glVertex2i(100,300);
//	glEnd();
	
	glColor3f(0,0.5,0.1);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(42,612);
	glVertex2i(44,581);
	glVertex2i(56,582);
	glVertex2i(62,600);
	glVertex2i(68,660);
	glVertex2i(46,720);
	glVertex2i(34,714);
	glVertex2i(28,660);
	glVertex2i(26,654);
	glEnd();                 //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(42,612);
	glVertex2i(26,654);
	glVertex2i(28,642);
	glVertex2i(14,618);
	glVertex2i(18,582);
	glVertex2i(32,603);
	glEnd();                 //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(76,486);
	glVertex2i(80,456);
	glVertex2i(88,454);
	glVertex2i(98,476);
	glVertex2i(100,498);
	glVertex2i(84,540);
	glEnd();        	 //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(84,540);
	glVertex2i(100,498);
	glVertex2i(104,480);
	glVertex2i(114,492);
	glVertex2i(118,522);
	glVertex2i(100,570);
	glVertex2i(84,540);
	glEnd();                   //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(118,522);
	glVertex2i(130,522);
	glVertex2i(136,552);
	glVertex2i(130,576);
	glEnd();
	glColor3f(0,0.5,0);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(130,576);
	glVertex2i(136,600);
	glVertex2i(132,636);
	glVertex2i(124,636);
	glVertex2i(76,648);
	glVertex2i(72,603);
	glVertex2i(76,584);
	glVertex2i(84,588);
	glVertex2i(90,606);
	glEnd();		         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(124,636);
	glVertex2i(126,660);
	glVertex2i(124,678);
	glVertex2i(116,678);
	glVertex2i(76,648);
	glEnd();		       //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(116,678);
	glVertex2i(112,720);
	glVertex2i(103,714);
	glVertex2i(96,732);
	glVertex2i(76,648);
	glEnd();		        //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(96,732);
	glVertex2i(88,720);
	glVertex2i(76,750);
	glVertex2i(78,744);
	glVertex2i(80,720);
	glVertex2i(76,648);
	glEnd();
	glColor3f(0,0.5,0.1);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(86,660);
	glVertex2i(46,720);
	glVertex2i(56,744);
	glVertex2i(66,738);
	glVertex2i(80,720);
	glVertex2i(76,648);
	glEnd();				         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(46,720);
	glVertex2i(86,660);
	glVertex2i(62,598);
	glVertex2i(56,582);
	glVertex2i(44,581);
	glVertex2i(42,652);
	glVertex2i(25,654);
	glVertex2i(28,690);
	glVertex2i(34,714);
	glEnd();		         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(42,652);
	glVertex2i(25,654);
	glVertex2i(18,642);
	glVertex2i(14,618);
	glVertex2i(18,582);
	glEnd();
	////////////////////
	glColor3f(0,0.5,0);         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(18,582);
	glVertex2i(32,606);
	glVertex2i(33,588);
	glVertex2i(24,516);
	glVertex2i(14,519);
	glVertex2i(14,564);
	glEnd();			         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(33,588);
	glVertex2i(24,516);
	glVertex2i(25,480);
	glVertex2i(34,468);
	glVertex2i(38,480);
	glEnd();			        //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(38,480);
	glVertex2i(48,546);
	glVertex2i(33,588);
	glEnd();			         //tree leaf
	glBegin(GL_POLYGON);
	glVertex2i(38,480);
	glVertex2i(46,476);	
	glVertex2i(50,444);
	glVertex2i(48,546);
	glVertex2i(33,588);
	glEnd();
	
}
//////////////////////
/////////////////////
void human1(void)
{
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(300,580);
	glVertex2i(330,580);
	glVertex2i(330,500);
	glVertex2i(315,500);
        glVertex2i(306,506);
	glVertex2i(300,506);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(300,580);
	glVertex2i(330,580);
	glVertex2i(330,500);
	glVertex2i(315,500);
	glVertex2i(315,500);
        glVertex2i(306,506);
        glVertex2i(306,506);
	glVertex2i(300,506);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(228,520);
	glVertex2i(277,520);
	glVertex2i(278,440);
	glVertex2i(222,396);
	glVertex2i(186,441);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(186,441);
	glVertex2i(228,520);
	glVertex2i(277,520);
	glVertex2i(278,440);
	glVertex2i(278,440);
	glVertex2i(222,396);
	glVertex2i(222,396);
	glVertex2i(210,408);
	glVertex2i(278,440);
	glVertex2i(278,460);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(186,441);
	glVertex2i(222,396);
	glVertex2i(263,355);
	glVertex2i(240,336);
	glVertex2i(174,385);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(222,396);
	glVertex2i(263,355);
	glVertex2i(240,336);
	glVertex2i(174,385);
	glVertex2i(174,385);
	glVertex2i(186,441);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(174,385);
	glVertex2i(180,330);
	glVertex2i(192,304);
	glVertex2i(204,324);
	glVertex2i(204,366);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(174,385);
	glVertex2i(180,330);
	glVertex2i(192,304);
	glVertex2i(204,324);
	glVertex2i(204,324);
	glVertex2i(204,366);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(204,366);
	glVertex2i(240,356);
	glVertex2i(240,336);
	glEnd();


	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(240,336);
	glVertex2i(238,272);
	glVertex2i(244,267);
	glVertex2i(262,286);
	glVertex2i(263,355);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(240,336);
	glVertex2i(238,272);
	glVertex2i(238,272);
	glVertex2i(244,267);
	glVertex2i(262,286);
	glVertex2i(263,355);
	glEnd();


	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(180,330);
	glVertex2i(148,278);
	glVertex2i(159,264);
	glVertex2i(171,272);
	glVertex2i(170,282);				
	glVertex2i(192,304);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(180,330);
	glVertex2i(148,278);
	glVertex2i(148,278);
	glVertex2i(159,264);
	glVertex2i(171,272);
	glVertex2i(170,282);
	glVertex2i(170,282);				
	glVertex2i(192,304);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(159,264);
	glVertex2i(162,250);
	glVertex2i(165,260);
	glVertex2i(177,247);
	glVertex2i(192,252);
	glVertex2i(171,272);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(159,264);
	glVertex2i(162,250);
	glVertex2i(162,250);
	glVertex2i(165,260);
	glVertex2i(165,260);
	glVertex2i(177,247);
	glVertex2i(177,247);
	glVertex2i(192,252);
	glVertex2i(192,252);
	glVertex2i(171,272);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(244,267);
	glVertex2i(243,252);
	glVertex2i(288,252);
	glVertex2i(288,253);
	glVertex2i(274,275);
	glVertex2i(262,286);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(244,267);
	glVertex2i(243,252);
	glVertex2i(243,252);
	glVertex2i(288,252);
	glVertex2i(288,252);
	glVertex2i(288,253);
	glVertex2i(288,253);
	glVertex2i(274,275);
	glVertex2i(274,275);
	glVertex2i(262,286);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(300,580);
	glVertex2i(300,506);
	glVertex2i(297,438);
	glVertex2i(294,376);
	glVertex2i(268,388);
	glVertex2i(278,440);
	glVertex2i(277,520);
	glVertex2i(276,555);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(300,580);
	glVertex2i(276,555);
	glVertex2i(300,506);
	glVertex2i(297,438);
	glVertex2i(297,438);
	glVertex2i(294,376);
	glVertex2i(268,388);
	glVertex2i(278,440);
	glVertex2i(278,440);
	glVertex2i(278,460);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(228,520);
	glVertex2i(277,520);
	glVertex2i(276,555);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(228,520);
	glVertex2i(276,555);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(268,388);
	glVertex2i(279,362);
	glVertex2i(279,345);
	glVertex2i(289,305);
	glVertex2i(306,296);
	glVertex2i(294,376);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(268,388);
	glVertex2i(279,362);
	glVertex2i(279,362);
	glVertex2i(279,345);
	glVertex2i(279,345);
	glVertex2i(289,305);
	glVertex2i(306,296);
	glVertex2i(294,376);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(279,345);
	glVertex2i(289,299);
	glVertex2i(285,296);
	glVertex2i(295,280);
	glVertex2i(303,280);
	glVertex2i(309,292);
	glVertex2i(306,300);
	glVertex2i(306,296);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(279,345);
	glVertex2i(289,299);
	glVertex2i(289,299);
	glVertex2i(285,296);
	glVertex2i(285,296);
	glVertex2i(295,280);
	glVertex2i(295,280);
	glVertex2i(303,280);
	glVertex2i(303,280);
	glVertex2i(309,292);
	glVertex2i(309,292);
	glVertex2i(306,300);
	glVertex2i(306,300);
	glVertex2i(306,296);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(330,580);
	glVertex2i(345,560);
	glVertex2i(345,548);
	glVertex2i(351,540);
	glVertex2i(351,516);
	glVertex2i(342,500);
	glVertex2i(330,500);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(330,580);
	glVertex2i(345,560);
	glVertex2i(345,560);
	glVertex2i(345,548);
	glVertex2i(345,548);
	glVertex2i(351,540);
	glVertex2i(351,540);
	glVertex2i(351,516);
	glVertex2i(351,516);
	glVertex2i(342,500);
	glVertex2i(342,500);
	glVertex2i(330,500);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(328,557);
	glVertex2i(337,557);
	glVertex2i(336,547);
	glVertex2i(328,547);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(328,557);
	glVertex2i(337,557);
	glVertex2i(337,557);
	glVertex2i(336,547);
	glVertex2i(336,547);
	glVertex2i(328,547);
	glVertex2i(328,547);
	glVertex2i(328,557);
	glEnd();
	
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(333,555);
	glVertex2i(336,555);
	glVertex2i(336,549);
	glVertex2i(333,549);
	glEnd();
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(339,557);
	glVertex2i(330,557);
	glVertex2i(323,552);
	glVertex2i(326,560);
	glVertex2i(330,562);
	glVertex2i(339,559);
	glEnd();
}
void grass(void)
{
	glColor3f(0,0.4,0);
	glBegin(GL_POLYGON);
	glVertex2i(195,300);
	glVertex2i(220,319);
	glVertex2i(225,306);
	glVertex2i(264,300);
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);
	glVertex2i(225,306);
	glVertex2i(233,348);
	glVertex2i(246,348);
	glVertex2i(254,348);
	glVertex2i(330,300);
	glEnd();
	glColor3f(0,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2i(254,348);
	glVertex2i(258,360);
	glVertex2i(270,360);
	glVertex2i(278,354);
	glVertex2i(345,300);
	glVertex2i(330,300);
	glEnd();
	glColor3f(0,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2i(278,354);
	glVertex2i(364,295);
	glVertex2i(345,300);
	glEnd();
	glColor3f(0,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2i(330,300);
	glVertex2i(309,352);
	glVertex2i(345,300);
	glEnd();
	glColor3f(0,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2i(330,300);
	glVertex2i(354,348);
	glVertex2i(405,300);
	glEnd();
	glColor3f(0.2,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2i(345,300);
	glVertex2i(369,369);
	glVertex2i(459,300);
	glEnd();
}
void root(void)
{
	
	glColor3f(0.5,0.3,0);
	glBegin(GL_POLYGON);
	glVertex2i(0,300);
	glVertex2i(0,0);
	glVertex2i(900,300);
	glVertex2i(900,0);
	glEnd();
}
void sky(void)
{
	glColor3f(0.678f, 0.847f, 0.902f);
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glVertex2i(0,1400);
	glVertex2i(1400,1400);
	glVertex2i(1400,400);
	glEnd();
}
void ground(void)
{
	glColor3f(0.7,0.9,0.6);
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,400);
	glEnd();
}/////////////
void sky2(void)
{
	glColor3f(0.878f, 1.000f, 1.000f);
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glVertex2i(0,1400);
	glVertex2i(1400,1400);
	glVertex2i(1400,400);
	glEnd();
}
void ground2(void)
{
	glColor3f(0.878f, 1.000f, 1.000f);
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,400);
	glEnd();
}
void stone2()
{
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);	
		glVertex2f(940,450);
	glColor3f(0.502,0.502,0.502);
		glVertex2f(950,440);
	glColor3f(0.827,0.827,0.827);
		glVertex2f(960,460);
	glColor3f(0.502,0.502,0.502);
		glVertex2f(950,460.5);
	glColor3f(0.467,0.533,0.600);
		glVertex2f(940,470);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2f(940,450);
	glVertex2f(950,440);
	glVertex2f(950,440);
	glVertex2f(960,460);
	glVertex2f(960,460);
	glVertex2f(950,460.5);
	glVertex2f(950,460.5);
	glVertex2f(940,470);
	glEnd();
}
void rect(float l,float m,float n,float o,float p,float q,float r,float s)
{
	glBegin(GL_POLYGON);	
//	glColor3f(0.0,0.0,0.0);
		glVertex2f(l,m);
		glVertex2f(n,o);
		glVertex2f(p,q);
		glVertex2f(r,s);
	glEnd();
}
void tree1()
{
	
	
	
	
	glColor3f(0.2,0.1,0);
	rect(740,500,790,500,770.4,520,750,520);
	rect(750,520,770.4,520,770,590,750,590);
	rect(750,590,770,590,770,600.2,750,600.2);


	//glColor3f(0.68,0.133,0.133);
	rect(750,600.2,750.2,600.4,750,620.2,740.6,620.2);
	rect(750.2,600.4,750.8,600.2,770.2,600.1,760.1,610.8);
	rect(77.1,60.1,76.1,61.8,77,62,78,61);
	rect(78,61,77,62,78.4,62,78.2,63);
	rect(760.1,610.8,770,620,770,640,760.8,640);
	//rect(810,570,810,580,830,560.5,820.8,570.1);

	
	glBegin(GL_LINE_STRIP);
		glVertex2f(730,650);
		glVertex2f(720.5,590.2);
		glVertex2f(710,580);
		glVertex2f(700,600.20);
		glVertex2f(680,590.2);
		glVertex2f(680,620);
		glVertex2f(680.2,630);
		glVertex2f(670,660.2);
		glVertex2f(690,740);
		glVertex2f(710,750.2);
		glVertex2f(710.8,740);
		glVertex2f(740,770);
		glVertex2f(770,770);
		glVertex2f(800,750);
		glVertex2f(820,720);
		glVertex2f(830,650);
		glVertex2f(810,580);
		glVertex2f(800,590);
		
		
		glVertex2f(790,650);
		glVertex2f(770,660);
		 glVertex2f(810,580);
		glVertex2f(800,590);
		
		
	glEnd();
	glFlush();
	//glTranslatef(10,0,0);



	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(730,650);
		glVertex2f(720.5,590.2);
		glVertex2f(710,580);
		glColor3f(0.0,1.0,0.0);
		glVertex2f(700,600.2);
		glVertex2f(680,590.2);
		glVertex2f(680,620);
	glColor3f(0.0,0.392,0.0);
		glVertex2f(680.2,630);
		glVertex2f(670,660.2);
		glVertex2f(690,740);
	//glColor3f(0.0,1.0,0.0);
		glVertex2f(710,750.2);
		glVertex2f(710.8,740);
		glVertex2f(740,770);
		glVertex2f(770,770);
		glVertex2f(800,750);
		glVertex2f(820,720);
		glVertex2f(830,650);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(810,580);
	//glColor3f(0.0,0.392,0.0);
		glVertex2f(800,590);
		
		
		glVertex2f(790,650);
		glVertex2f(770,660);
		// glVertex2f(81,58);
		// glVertex2f(80,59);
		
		
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(720,660);
	
	glColor3f(0.0,0.392,0.0);
		glVertex2f(720.2,600);
	//	glColor3f(0.0,1.0,0.0);
		glVertex2f(790,660);
	glEnd();


	//extra shade
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(730,650);
	glColor3f(0.0,0.392,0.0);
		glVertex2f(720.5,590.2);
		glVertex2f(710,580);
		//glColor3f(0.0,1.0,0.0);
		glVertex2f(700,600.2);
		glVertex2f(680,590.2);
		glVertex2f(680,620);
		glVertex2f(680.2,630);

	glEnd();
	
}

void grass1(void)
{
glBegin(GL_LINE_STRIP);
		glVertex2f(730,650);
		glVertex2f(720.5,590.2);
		glVertex2f(710,580);
		glVertex2f(700,600.20);
		glVertex2f(680,590.2);
		glVertex2f(680,620);
		glVertex2f(680.2,630);
		glVertex2f(670,660.2);
		glVertex2f(690,740);
		glVertex2f(710,750.2);
		glVertex2f(710.8,740);
		glVertex2f(740,770);
		glVertex2f(770,770);
		glVertex2f(800,750);
		glVertex2f(820,720);
		glVertex2f(830,650);
		glVertex2f(810,580);
		glVertex2f(800,590);
		
		
		glVertex2f(790,650);
		glVertex2f(770,660);
		// glVertex2f(81,58);
		// glVertex2f(80,59);
		
		
	glEnd();
	glFlush();
	//glTranslatef(10,0,0);



	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(730,650);
		glVertex2f(720.5,590.2);
		glVertex2f(710,580);
		glColor3f(0.0,1.0,0.0);
		glVertex2f(700,600.2);
		glVertex2f(680,590.2);
		glVertex2f(680,620);
	glColor3f(0.0,0.392,0.0);
		glVertex2f(680.2,630);
		glVertex2f(670,660.2);
		glVertex2f(690,740);
	//glColor3f(0.0,1.0,0.0);
		glVertex2f(710,750.2);
		glVertex2f(710.8,740);
		glVertex2f(740,770);
		glVertex2f(770,770);
		glVertex2f(800,750);
		glVertex2f(820,720);
		glVertex2f(830,650);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(810,580);
	//glColor3f(0.0,0.392,0.0);
		glVertex2f(800,590);
		
		
		glVertex2f(790,650);
		glVertex2f(770,660);
		// glVertex2f(81,58);
		// glVertex2f(80,59);
		
		
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(720,660);
	
	glColor3f(0.0,0.392,0.0);
		glVertex2f(720.2,600);
	//	glColor3f(0.0,1.0,0.0);
		glVertex2f(790,660);
	glEnd();


	//extra shade
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
		glVertex2f(730,650);
	glColor3f(0.0,0.392,0.0);
		glVertex2f(720.5,590.2);
		glVertex2f(710,580);
		//glColor3f(0.0,1.0,0.0);
		glVertex2f(700,600.2);
		glVertex2f(680,590.2);
		glVertex2f(680,620);
		glVertex2f(680.2,630);

	glEnd();
	
}
  void stone1(void)
{
	
	glColor3f(0.663f, 0.663f, 0.663f);   //stone
	glBegin(GL_POLYGON);
	glVertex2i(400,200);
	glVertex2i(450,215);
	glColor3f(0.184f, 0.310f, 0.310f);
	glVertex2i(495,180);
	glVertex2i(495,165);
	glColor3f(0.439f, 0.502f, 0.565f);
	glVertex2i(460,128);
	glVertex2i(430,135);
	glVertex2i(395,150);
	glColor3f(0.827f, 0.827f, 0.827f);
	glVertex2i(398,190);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(400,200);
	glVertex2i(450,215);
	glVertex2i(450,215);
	glVertex2i(495,180);
	glVertex2i(495,180);
	glVertex2i(495,165);
	glVertex2i(495,165);
	glVertex2i(460,128);
	glVertex2i(460,128);
	glVertex2i(430,135);
	glVertex2i(430,135);
	glVertex2i(395,150);
	glVertex2i(395,150);
	glVertex2i(398,190);
	glVertex2i(398,190);
	glVertex2i(400,200);
	glEnd();
	
}
void grass3(void)
{
	glColor3f(0,0.329,0);
	glBegin(GL_POLYGON);
	glVertex2f(80,110);
	glVertex2f(100,110);
	glVertex2f(130,150);
	glVertex2f(65,85);
	glVertex2f(80,120);
	glVertex2f(60,110);
	glVertex2f(60,135);
	glVertex2f(55,120);
	glVertex2f(45,123);
	glVertex2f(50,117);
	glVertex2f(40,117);
	glVertex2f(45,110);
	glVertex2f(43,90);
	glEnd();
}

//////////second
void human2(void)
{
	glColor3f(0.4,0.3,0.1);		//sleg
	glBegin(GL_POLYGON);
	glVertex2i(210,340);
	glVertex2i(174,279);
	glVertex2i(189,260);
	glVertex2i(229,314);
	glVertex2i(247,364);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(210,340);
	glVertex2i(174,279);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(189,260);
	glVertex2i(229,314);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(229,314);
	glVertex2i(247,364);
	glEnd();
		

	glColor3f(0.4,0.3,0.1);			//sluleg
	glBegin(GL_POLYGON);
	glVertex2i(210,340);
	glVertex2i(193,384);
	glVertex2i(189,425);
	glVertex2i(247,364);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(210,340);
	glVertex2i(193,384);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(193,384);
	glVertex2i(189,425);
	glEnd();
		

	glColor3f(0.4,0.3,0.1);			//sback
	glBegin(GL_POLYGON);
	glVertex2i(189,425);
	glVertex2i(186,492);
	glVertex2i(192,508);
	glVertex2i(240,488);
	glVertex2i(247,364);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(186,492);
	glVertex2i(189,425);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(186,492);
	glVertex2i(192,508);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//sside
	glBegin(GL_POLYGON);
	glVertex2i(240,488);
	glVertex2i(247,364);
	glVertex2i(278,412);
	glVertex2i(279,451);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(240,488);
	glVertex2i(278,412);
	glEnd();
	

	glColor3f(0.4,0.3,0.1);		//suback
	glBegin(GL_POLYGON);
	glVertex2i(240,488);
	glVertex2i(228,515);
	glVertex2i(219,579);
	glVertex2i(239,651);
	glVertex2i(202,608);
	glVertex2i(197,588);
	glVertex2i(192,508);
	glVertex2i(186,492);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(219,579);
	glVertex2i(228,515);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(240,488);
	glVertex2i(228,515);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(197,588);
	glVertex2i(192,508);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(197,588);
	glVertex2i(202,608);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(239,651);
	glVertex2i(202,608);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//srleeg
	glBegin(GL_POLYGON);
	glVertex2i(247,364);
	glVertex2i(276,352);
	glVertex2i(279,380);
	glVertex2i(276,385);
	glVertex2i(276,412);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(276,352);
	glVertex2i(279,380);
	glEnd();
	glColor3f(0.4,0.3,0.1);			//surleg
	glBegin(GL_POLYGON);
	glVertex2i(247,364);
	glVertex2i(254,268);
	glVertex2i(276,352);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(247,364);
	glVertex2i(254,268);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//sbrleg
	glBegin(GL_POLYGON);
	glVertex2i(276,352);
	glVertex2i(254,268);
	glVertex2i(262,256);
	glVertex2i(279,248);
	glVertex2i(282,304);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(276,352);
	glVertex2i(282,304);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(279,248);
	glVertex2i(282,304);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(262,256);
	glVertex2i(279,248);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(254,268);
	glVertex2i(262,256);
	glEnd();
	glColor3f(0.4,0.3,0.1);			//srfeet
	glBegin(GL_POLYGON);
	glVertex2i(262,256);
	glVertex2i(255,240);
	glVertex2i(258,220);
	glVertex2i(318,224);
	glVertex2i(319,240);
	glVertex2i(315,240);
	glVertex2i(315,244);
	glVertex2i(279,248);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(315,244);
	glVertex2i(279,248);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(315,244);
	glVertex2i(315,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(315,244);
	glVertex2i(319,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(318,224);
	glVertex2i(319,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(318,224);
	glVertex2i(258,220);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(258,220);
	glVertex2i(255,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(262,256);
	glVertex2i(255,240);
	glEnd();

	glColor3f(0.4,0.3,0.1);		//shand
	glBegin(GL_POLYGON);
	glVertex2i(238,651);
	glVertex2i(219,579);
	glVertex2i(228,515);
	glVertex2i(240,488);
	glVertex2i(278,429);
	glVertex2i(267,489);
	glVertex2i(258,524);
	glVertex2i(258,553);
	glVertex2i(265,584);
	glEnd();
	

	glColor3f(0.4,0.3,0.1);			//spalm
	glBegin(GL_POLYGON);
	glVertex2i(267,489);
	glVertex2i(278,429);
	glVertex2i(278,412);
	glVertex2i(276,385);
	glVertex2i(279,380);
	glVertex2i(293,384);
	glVertex2i(292,392);
	glVertex2i(297,396);
	glVertex2i(296,416);
	glVertex2i(288,456);
	glVertex2i(283,472);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(267,489);
	glVertex2i(283,472);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(288,456);
	glVertex2i(283,472);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(288,456);
	glVertex2i(296,416);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(297,396);
	glVertex2i(296,416);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(292,392);
	glVertex2i(297,396);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(293,384);
	glVertex2i(292,392);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(293,384);
	glVertex2i(292,392);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(279,380);
	glVertex2i(293,384);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(276,385);
	glVertex2i(279,380);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(279,380);
	glVertex2i(293,384);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(276,385);
	glVertex2i(279,380);
	glEnd();
	
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(278,412);
	glVertex2i(276,385);
	glEnd();
	glColor3f(0.4,0.3,0.1);		//smouth
	glBegin(GL_POLYGON);
	glVertex2i(273,632);
	glVertex2i(285,620);
	glVertex2i(312,620);
	glVertex2i(316,628);
	glVertex2i(315,640);
	glVertex2i(321,648);
	glVertex2i(320,668);
	glVertex2i(303,672);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(320,668);
	glVertex2i(303,672);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(321,648);
	glVertex2i(320,668);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(315,640);
	glVertex2i(321,648);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);;
	glVertex2i(316,628);
	glVertex2i(315,640);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(312,620);
	glVertex2i(316,628);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(312,620);
	glVertex2i(285,620);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(273,632);
	glVertex2i(285,620);

	glVertex2i(269,692);
	glVertex2i(267,668);
	glVertex2i(267,668);
	glVertex2i(267,656);
	glEnd();


	glColor3f(0.4,0.3,0.1);		//sface
	glBegin(GL_POLYGON);
	glVertex2i(270,700);
	glVertex2i(273,632);
	glVertex2i(303,672);
	glVertex2i(318,682);
	glVertex2i(306,700);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(318,682);
	glVertex2i(306,700);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(303,672);
	glVertex2i(318,682);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(270,700);
	glVertex2i(306,700);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(279,676);
	glVertex2i(275,680);
	glVertex2i(275,680);
	glVertex2i(270,672);
	glVertex2i(270,672);
	glVertex2i(267,664);
	glVertex2i(267,664);
	glVertex2i(270,658);
	glVertex2i(270,658);
	glVertex2i(277,648);
	
	glVertex2i(270,672);
	glVertex2i(270,656);

	glVertex2i(269,692);
	glVertex2i(267,668);
	glVertex2i(267,668);
	glVertex2i(267,656);
	glEnd();
	

	glColor3f(0.4,0.3,0.1);		//ssface
	glBegin(GL_POLYGON);
	glVertex2i(238,651);
	glVertex2i(264,696);
	glVertex2i(270,700);
	glVertex2i(273,632);
	glVertex2i(264,617);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(238,651);
	glVertex2i(264,696);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(264,696);
	glVertex2i(270,700);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(270,672);
	glVertex2i(270,656);
	glVertex2i(273,632);
	glVertex2i(264,617);
	glEnd();
	
	glColor3f(0.4,0.3,0.1);		//sfront
	glBegin(GL_POLYGON);	
	glVertex2i(267,489);
	glVertex2i(258,524);
	glVertex2i(258,553);
	glVertex2i(265,584);
	glVertex2i(238,651);
	glVertex2i(264,617);
	glVertex2i(270,580);
	glVertex2i(276,560);
	glVertex2i(276,552);
	glVertex2i(268,542);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(267,489);
	glVertex2i(258,524);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(258,524);
	glVertex2i(258,553);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(258,553);
	glVertex2i(265,584);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(267,489);
	glVertex2i(258,524);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(264,617);
	glVertex2i(270,580);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(270,580);
	glVertex2i(276,552);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(276,560);
	glVertex2i(276,552);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(276,560);
	glVertex2i(267,489);
	glEnd();

	glColor3f(0.000f, 0.000f, 0.000f);		//seye
	glBegin(GL_POLYGON);
	glVertex2i(315,680);
	glVertex2i(312,680);
	glVertex2i(309,668);
	glVertex2i(312,668);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//slfeet
	glBegin(GL_POLYGON);
	glVertex2i(174,279);
	glVertex2i(163,263);
	glVertex2i(165,252);
	glVertex2i(180,232);
	glVertex2i(176,220);
	glVertex2i(185,229);
	glVertex2i(192,220);
	glVertex2i(210,224);
	glVertex2i(189,252);
	glVertex2i(189,260);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(174,279);
	glVertex2i(163,263);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(163,263);
	glVertex2i(165,252);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(165,252);
	glVertex2i(180,232);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(180,232);
	glVertex2i(176,220);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(176,220);
	glVertex2i(185,229);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(185,229);
	glVertex2i(192,220);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(192,220);
	glVertex2i(210,224);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(210,224);
	glVertex2i(189,252);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(189,252);
	glVertex2i(189,260);
	glEnd();
}
	
//////////////third
void human3(void)
{
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(207,516);
	glVertex2i(194,404);
	glVertex2i(198,384);
	glVertex2i(219,348);
	glVertex2i(238,426);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(207,516);
	glVertex2i(194,404);
	glVertex2i(194,404);
	glVertex2i(198,384);
	glVertex2i(219,348);
	glVertex2i(238,426);
	glEnd();

	glColor3f(0.4,0.3,0.1);		//trleg1
	glBegin(GL_POLYGON);
	glVertex2i(198,384);
	glVertex2i(189,300);
	glVertex2i(219,328);
	glVertex2i(219,348);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(198,384);
	glVertex2i(189,300);
	glVertex2i(189,300);
	glVertex2i(174,252);
	glVertex2i(196,260);
	glVertex2i(219,328);
	glVertex2i(219,328);
	glVertex2i(219,348);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(189,300);
	glVertex2i(174,252);
	glVertex2i(196,260);
	glVertex2i(219,328);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(189,300);
	glVertex2i(174,252);
	glVertex2i(196,260);
	glVertex2i(219,328);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(174,252);
	glVertex2i(204,208);
	glVertex2i(219,228);
	glVertex2i(218,236);
	glVertex2i(196,260);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(174,252);
	glVertex2i(204,208);
	glVertex2i(204,208);
	glVertex2i(219,228);
	glVertex2i(219,228);
	glVertex2i(218,236);
	glVertex2i(196,260);
	glVertex2i(218,236);
	glVertex2i(210,216);
	glVertex2i(212,222);
	glVertex2i(216,224);
	glVertex2i(216,230);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(207,516);
	glVertex2i(238,426);
	glVertex2i(250,450);
	glVertex2i(238,492);
	glVertex2i(227,520);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(207,516);
	glVertex2i(238,426);
	glVertex2i(250,450);
	glVertex2i(238,492);
	glVertex2i(238,492);
	glVertex2i(227,520);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//hand
	glBegin(GL_POLYGON);	
	glVertex2i(238,426);
	glVertex2i(242,396);
	glVertex2i(259,408);
	glVertex2i(258,420);
	glVertex2i(261,424);
	glVertex2i(255,445);
	glVertex2i(250,450);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(238,426);
	glVertex2i(242,396);
	glVertex2i(242,396);
	glVertex2i(259,408);
	glVertex2i(259,408);
	glVertex2i(258,420);
	glVertex2i(258,420);
	glVertex2i(261,424);
	glVertex2i(261,424);
	glVertex2i(255,445);
	glVertex2i(255,445);
	glVertex2i(250,450);
	glVertex2i(249,400);
	glVertex2i(247,409);
	glVertex2i(252,416);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);	
	glVertex2i(237,636);
	glVertex2i(255,664);
	glVertex2i(264,620);
	glVertex2i(251,568);
	glVertex2i(227,520);
	glVertex2i(207,516);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(237,636);
	glVertex2i(207,516);
	glVertex2i(264,620);
	glVertex2i(251,568);
	glVertex2i(251,568);
	glVertex2i(227,520);
	glVertex2i(237,636);
	glVertex2i(255,664);
	glEnd();
	

	glColor3f(0.4,0.3,0.1);			//leeg
	glBegin(GL_POLYGON);	
	glVertex2i(290,394);
	glVertex2i(296,388);
	glVertex2i(282,258);
	glVertex2i(264,240);
	glVertex2i(272,346);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(290,394);
	glVertex2i(296,388);
	glVertex2i(296,388);
	glVertex2i(282,258);
	glVertex2i(264,240);
	glVertex2i(272,346);
	glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);	
	glVertex2i(264,240);
	glVertex2i(261,232);
	glVertex2i(264,228);
	glVertex2i(307,229);
	glVertex2i(309,244);
	glVertex2i(300,247);
	glVertex2i(298,232);
	glVertex2i(282,258);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(264,240);
	glVertex2i(261,232);
	glVertex2i(261,232);
	glVertex2i(264,228);
	glVertex2i(264,228);
	glVertex2i(307,229);
	glVertex2i(307,229);
	glVertex2i(309,244);
	glVertex2i(309,244);
	glVertex2i(300,247);
	glVertex2i(282,258);
	glVertex2i(294,238);
	glVertex2i(300,247);
	glVertex2i(290,247);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(290,394);	
	glVertex2i(285,424);
	glVertex2i(267,454);
	glVertex2i(234,500);
	glVertex2i(250,450);
	glVertex2i(255,445);
	glVertex2i(261,424);
	glVertex2i(258,420);
	glVertex2i(259,408);
	glVertex2i(246,404);
	glVertex2i(272,346);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(290,394);	
	glVertex2i(285,424);
	glVertex2i(285,424);
	glVertex2i(267,454);
	glVertex2i(267,454);
	glVertex2i(255,464);
	glVertex2i(234,500);
	glVertex2i(250,450);
	glVertex2i(250,450);
	glVertex2i(255,445);
	glVertex2i(255,445);
	glVertex2i(261,424);
	glVertex2i(261,424);
	glVertex2i(258,420);
	glVertex2i(258,420);
	glVertex2i(259,408);
	glVertex2i(259,408);
	glVertex2i(246,404);
	glVertex2i(246,404);
	glVertex2i(272,346);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(255,664);
	glVertex2i(264,620);
	glVertex2i(251,568);
	glVertex2i(227,520);
	glVertex2i(234,500);
	glVertex2i(267,454);
	glVertex2i(294,532);
	glVertex2i(292,576);
	glVertex2i(286,619);
	glVertex2i(293,628);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(267,454);
	glVertex2i(294,532);
	glVertex2i(294,532);
	glVertex2i(292,576);
	glVertex2i(286,619);
	glVertex2i(293,628);
	glVertex2i(292,576);
	glVertex2i(286,619);
	glVertex2i(293,628);
	glVertex2i(282,636);

	glVertex2i(264,620);
	glVertex2i(251,568);
	glVertex2i(251,568);
	glVertex2i(227,520);
	glEnd();

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(267,699);
	glVertex2i(285,720);
	glVertex2i(315,720);
	glVertex2i(330,700);
	glVertex2i(328,690);
	glVertex2i(330,688);
	glVertex2i(330,672);
	glVertex2i(336,667);
	glVertex2i(336,660);
	glVertex2i(345,652);
	glVertex2i(330,648);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(267,699);
	glVertex2i(285,720);
	glVertex2i(285,720);
	glVertex2i(315,720);
	glVertex2i(315,720);
	glVertex2i(330,700);
	glVertex2i(330,700);
	glVertex2i(328,690);
	glVertex2i(328,690);
	glVertex2i(330,688);
	glVertex2i(330,688);
	glVertex2i(330,672);
	glVertex2i(330,672);
	glVertex2i(336,667);
	glVertex2i(336,667);
	glVertex2i(336,660);
	glVertex2i(336,660);
	glVertex2i(345,652);
	glVertex2i(345,652);
	glVertex2i(330,648);
	glVertex2i(330,648);
	glVertex2i(312,660);
	glVertex2i(330,672);
	glVertex2i(321,672);
	glVertex2i(321,672);
	glVertex2i(319,666);
	glVertex2i(295,688);   //ear
	glVertex2i(288,692);
	glVertex2i(288,692);
	glVertex2i(282,687);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//face
	glBegin(GL_POLYGON);
	glVertex2i(267,699);
	glVertex2i(258,680);
	glVertex2i(255,664);
	glVertex2i(293,628);
	glVertex2i(309,612);
	glVertex2i(309,636);
	glVertex2i(309,656);
	glVertex2i(327,660);
	glEnd();		
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(267,699);
	glVertex2i(258,680);
	glVertex2i(258,680);
	glVertex2i(255,664);
	glVertex2i(309,636);
	glVertex2i(309,656);
	glVertex2i(309,656);
	glVertex2i(313,660);
	glVertex2i(293,628);
	glVertex2i(309,612);
	
	glVertex2i(282,687);     //ear
	glVertex2i(284,678);
	glVertex2i(284,678);
	glVertex2i(287,676);
	glVertex2i(287,676);
	glVertex2i(288,660);
	glVertex2i(288,660);
	glVertex2i(292,656);
	glVertex2i(292,656);
	glVertex2i(296,658);
	glEnd();
	

	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
	glVertex2i(309,636);
	glVertex2i(309,612);
	glVertex2i(329,624);
	glVertex2i(335,636);
	glVertex2i(345,636);
	glVertex2i(345,640);
	glVertex2i(327,640);
	glVertex2i(318,636);
	glVertex2i(309,636);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(309,612);
	glVertex2i(329,624);
	glVertex2i(329,624);
	glVertex2i(335,636);
	glVertex2i(335,636);
	glVertex2i(345,636);
	glVertex2i(345,636);
	glVertex2i(345,640);
	glVertex2i(345,640);
	glVertex2i(327,640);
	glVertex2i(327,640);
	glVertex2i(318,636);
	glVertex2i(318,636);
	glVertex2i(309,636);

	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(309,656);
	glVertex2i(309,648);
	glVertex2i(315,648);
	glVertex2i(317,658);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(309,656);
	glVertex2i(309,648);
	glVertex2i(309,648);
	glVertex2i(315,648);
	glVertex2i(315,648);
	glVertex2i(317,658);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(317,658);
       	glVertex2i(315,648);
	glVertex2i(321,646);
	glVertex2i(324,648);
	glVertex2i(324,653);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(317,658);
       	glVertex2i(315,648);
	glVertex2i(315,648);
	glVertex2i(321,646);
	glVertex2i(321,646);
	glVertex2i(324,648);
	glVertex2i(324,648);
	glVertex2i(324,653);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);	//teeth
	glBegin(GL_POLYGON);
	glVertex2i(324,653);
	glVertex2i(324,647);
	glVertex2i(330,644);
	glVertex2i(330,648);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(324,653);
	glVertex2i(324,647);
	glVertex2i(324,647);
	glVertex2i(330,644);
	glVertex2i(330,644);
	glVertex2i(330,648);
	glEnd();
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(330,648);
	glVertex2i(330,645);
	glVertex2i(337,644);
	glVertex2i(338,650);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(330,648);
	glVertex2i(330,645);
	glVertex2i(330,645);
	glVertex2i(337,644);
	glVertex2i(337,644);
	glVertex2i(338,650);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(338,650);
	glVertex2i(337,643);
	glVertex2i(342,645);
	glVertex2i(342,650);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(338,650);
	glVertex2i(337,643);
	glVertex2i(337,643);
	glVertex2i(342,645);
	glVertex2i(342,645);
	glVertex2i(342,650);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(309,636);
	glVertex2i(309,640);
	glVertex2i(312,644);
	glVertex2i(313,642);
	glVertex2i(313,636);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(309,636);
	glVertex2i(309,640);
	glVertex2i(309,640);
	glVertex2i(312,644);
	glVertex2i(312,644);
	glVertex2i(313,642);
	glVertex2i(313,642);
	glVertex2i(313,636);
	glEnd();
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(313,636);
	glVertex2i(313,642);
	glVertex2i(320,645);
	glVertex2i(321,638);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(313,636);
	glVertex2i(313,642);
	glVertex2i(313,642);
	glVertex2i(320,645);
	glVertex2i(320,645);
	glVertex2i(321,638);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(321,638);
	glVertex2i(323,642);
	glVertex2i(327,641);
	glVertex2i(328,640);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(321,638);
	glVertex2i(323,642);
	glVertex2i(323,642);
	glVertex2i(327,641);
	glVertex2i(327,641);
	glVertex2i(328,640);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(328,640);
	glVertex2i(330,641);
	glVertex2i(334,641);
	glVertex2i(334,638);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(328,640);
	glVertex2i(330,641);
	glVertex2i(330,641);
	glVertex2i(334,641);
	glVertex2i(334,641);
	glVertex2i(334,638);
	glEnd();
	
	glColor3f(0.961f, 0.871f, 0.702f);
	glBegin(GL_POLYGON);
	glVertex2i(334,638);
	glVertex2i(336,641);
	glVertex2i(340,641);
	glVertex2i(341,638);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(334,638);
	glVertex2i(336,641);
	glVertex2i(336,641);
	glVertex2i(340,641);
	glVertex2i(340,641);
	glVertex2i(341,638);
	glEnd();

	glColor3f(1.000,1.000,1.000);			//eye
	glBegin(GL_POLYGON);
	glVertex2i(312,684);
	glVertex2i(315,680);
	glVertex2i(323,684);
	glVertex2i(323,688);
	glVertex2i(318,690);
	glVertex2i(315,688);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_POINTS);
	glVertex2i(317,685);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(312,684);
	glVertex2i(315,680);
	glVertex2i(315,680);
	glVertex2i(323,684);
	glVertex2i(323,684);
	glVertex2i(323,688);
	glVertex2i(323,688);
	glVertex2i(318,690);
	glVertex2i(318,690);
	glVertex2i(315,688);
	glVertex2i(312,684);
	glVertex2i(315,688);
	glEnd();

	glColor3f(0.4,0.3,0.1);			//ear
	glBegin(GL_POLYGON);
	glVertex2i(295,688);
	glVertex2i(288,692);
	glVertex2i(282,687);
	glVertex2i(284,678);
	glVertex2i(287,676);
	glVertex2i(288,660);
	glVertex2i(292,656);
	glVertex2i(296,658);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(295,688);
	glVertex2i(288,692);
	glVertex2i(288,692);
	glVertex2i(282,687);
	glVertex2i(282,687);
	glVertex2i(284,678);
	glVertex2i(284,678);
	glVertex2i(287,676);
	glVertex2i(287,676);
	glVertex2i(288,660);
	glVertex2i(288,660);
	glVertex2i(292,656);
	glVertex2i(292,656);
	glVertex2i(296,658);
	glEnd();
}
void cave(void)
{
	glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
		glVertex2i(704,520);
		glVertex2i(702,500);
		glColor3f(0.000,0.000,0.000);
		glVertex2i(705,488);
		glVertex2i(712,488);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(720,486);
		glColor3f(0.000,0.000,0.000);
		glVertex2i(725,488);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(736,490);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(750,490);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(750,505);//cave left side
		glVertex2i(746,520);
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
	glVertex2i(704,520);
		glVertex2i(700,535);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(695,550);
		glColor3f(0.502f, 0.502f, 0.502f);
		glVertex2i(754,550); //cave left
		glColor3f(0.000,0.000,0.000);
		glVertex2i(755,536);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(748,530);
		glVertex2i(746,520);
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
        glBegin(GL_POLYGON);
		glVertex2i(695,550);
		glVertex2i(710,565);
		glColor3f(0.9,0.8,0.6);
		glVertex2i(710,575);//cave left top
		glVertex2i(714,590);
		glColor3f(0.663f, 0.663f, 0.663f);
                glVertex2i(715,598);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(752,595);
		glColor3f(0.000,0.000,0.000);
		glVertex2i(743,582);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(742,575);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(744,560);
		glColor3f(0.9,0.8,0.6);
		glVertex2i(754,550);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(755,536);
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
		glVertex2i(715,598);
		glVertex2i(725,625);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(825,585);//cave top
		glColor3f(0.000,0.000,0.000);
		glVertex2i(800,642);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(755,610);
		glVertex2i(752,595);//correct
	glEnd();
	
	glColor3f(0.663f, 0.663f, 0.663f);
      glBegin(GL_POLYGON);
	glVertex2i(860,548);
		glVertex2i(845,555);//cave top
		glVertex2i(838,580);
		glColor3f(0.000,0.000,0.000);
		glVertex2i(888,622);
		glVertex2i(922,580);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(922,552);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(932,548);
		glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(935,490);
	glEnd();
	glColor3f(0.184f, 0.310f, 0.310f);
	glBegin(GL_POLYGON);
		glVertex2i(860,548);
		glVertex2i(860,530);//cave top
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(875,490);
		glColor3f(0.000,0.000,0.000);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(935,490);
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
      glBegin(GL_POLYGON);
	glVertex2i(832,668);//cave right
		glVertex2i(860,670);
		glVertex2i(880,657);
	glColor3f(0.184f, 0.310f, 0.310f);
		glVertex2i(890,633);
		glColor3f(0.000,0.000,0.000);
		glVertex2i(888,622);
		glColor3f(0.663f, 0.663f, 0.663f);
		glVertex2i(838,580);
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
        glBegin(GL_POLYGON);
	glVertex2i(798,642);
	glVertex2i(823,685);//cave right
	glColor3f(0.000,0.000,0.000);
        glVertex2i(832,668);
	glColor3f(0.184f, 0.310f, 0.310f);
	glVertex2i(838,580);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(820,642);
		
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
        glBegin(GL_POLYGON);
	glVertex2i(738,652);
	glVertex2i(809,685);//cave right
        glVertex2i(825,685);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(725,628);
		
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
        glBegin(GL_POLYGON);
	glVertex2i(770,634);
	glVertex2i(725,630);//cave right
        glVertex2i(825,687);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(802,646);
		
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
        glBegin(GL_POLYGON);
	glVertex2i(725,625);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(740,638);
	glColor3f(0.184f, 0.310f, 0.310f);
	glVertex2i(770,636);//cave right
        glVertex2i(715,598);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(802,646);
		
	glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
        glBegin(GL_POLYGON);
	glVertex2i(715,598);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(802,646);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(800,641);//cave right
        glVertex2i(740,605);
		
	glEnd();
	glColor3f(0.184f, 0.310f, 0.310f);
        glBegin(GL_POLYGON);
	glVertex2i(843,512);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(860,530);
	glColor3f(0.184f, 0.310f, 0.310f);
	glVertex2i(875,490);//cave right
	glColor3f(0.000,0.000,0.000);
        glVertex2i(843,492);
		
	glEnd();
	glColor3f(0.184f, 0.310f, 0.310f);
        glBegin(GL_POLYGON);
	glVertex2i(755,610);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(754,550);
	glColor3f(0.184f, 0.310f, 0.310f);
	glVertex2i(744,560);//cave right
        glVertex2i(742,575);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(743,582);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex2i(752,595);
		
	glEnd();
}
//////////////////////4t stage
void human4(void){
	glColor3f(0.4,0.3,0.1);     	////hand
	glBegin(GL_POLYGON);
		glVertex2i(252,410);
		glVertex2i(280,460);
		glVertex2i(310,400);
		glVertex2i(285,360);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(252,410);
		glVertex2i(285,360);
		glVertex2i(280,460);
		glVertex2i(310,400);
		glVertex2i(252,410);
		glVertex2i(250,470);
		glVertex2i(250,470);
		glVertex2i(235,575);
		glVertex2i(252,410);
		glVertex2i(252,436);
		glVertex2i(252,436);
		glVertex2i(249,440);
		glVertex2i(249,440);
		glVertex2i(250,470);
		glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2i(190,360);
		glVertex2i(211,350);
		glVertex2i(193,275);
		glVertex2i(168,263);
		glVertex2i(165,320);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(190,360);
		glVertex2i(165,320);
		glVertex2i(165,320);
		glVertex2i(168,263);
		glVertex2i(211,350);
		glVertex2i(193,275);
		glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2i(200,450);
		glVertex2i(230,420);
		glVertex2i(236,402);
		glVertex2i(239,401);
		glVertex2i(235,375);
		glVertex2i(211,350);
		glVertex2i(190,360);
		glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(200,450);
		glVertex2i(190,360);
		glVertex2i(230,420);
		glVertex2i(239,401);
		glVertex2i(239,401);
		glVertex2i(235,375);
		glVertex2i(235,375);
		glVertex2i(211,350);
		glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2i(208,520);
		glVertex2i(214,505);
		glVertex2i(230,480);
		glVertex2i(235,401);
		glVertex2i(235,430);
		glVertex2i(230,420);
		glVertex2i(200,450);
		glVertex2i(195,480);
		glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(208,520);
		glVertex2i(195,480);
		glVertex2i(195,480);
		glVertex2i(200,450);
		glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2i(209,660);
		glVertex2i(225,690);
		glVertex2i(235,655);
		glVertex2i(235,575);
		glVertex2i(207,518);
		glVertex2i(205,542);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(225,690);
		glVertex2i(209,660);
		glVertex2i(209,660);
		glVertex2i(205,542);
		glVertex2i(205,542);
		glVertex2i(207,518);
		glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2i(235,575);
		glVertex2i(250,470);
		glVertex2i(252,410);
		glVertex2i(239,401);
		glVertex2i(236,402);
		glVertex2i(230,420);
		glVertex2i(235,430);
		glVertex2i(230,480);
		glVertex2i(214,505);
		glVertex2i(208,520);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(208,520);
		glVertex2i(214,505);
		glVertex2i(214,505);
		glVertex2i(230,480);
		glVertex2i(230,480);
		glVertex2i(235,430);
		glVertex2i(235,430);
		glVertex2i(230,420);
		glVertex2i(230,420);
		glVertex2i(236,402);
		glVertex2i(236,402);
		glVertex2i(239,401);
		glVertex2i(239,401);
		glVertex2i(252,410);
		glVertex2i(252,410);
		glVertex2i(250,470);
		glVertex2i(250,470);
		glVertex2i(235,575);
		glVertex2i(252,410);
		glVertex2i(252,436);
		glVertex2i(252,436);
		glVertex2i(249,440);
		glVertex2i(249,440);
		glVertex2i(250,470);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(250,470);
		glVertex2i(265,505);
		glVertex2i(282,435);
		glVertex2i(280,460);
		glVertex2i(252,410);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(252,410);
		glVertex2i(250,470);
		glVertex2i(250,470);
		glVertex2i(235,575);
		glVertex2i(252,410);
		glVertex2i(252,436);
		glVertex2i(252,436);
		glVertex2i(249,440);
		glVertex2i(249,440);
		glVertex2i(250,470);
		glEnd();
	glColor3f(0.4,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2i(285,360);
		glVertex2i(310,400);
		glVertex2i(315,360);
		glVertex2i(317,330);
		glVertex2i(319,300);
		glVertex2i(321,280);
		glVertex2i(302,260);
		glVertex2i(299,299);//right leg
		glVertex2i(283,330);
		glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(285,360);
		glVertex2i(283,330);
		glVertex2i(283,330);
		glVertex2i(299,299);
		glVertex2i(299,299);
		glVertex2i(302,260);
		glVertex2i(310,400);//right leg
		glVertex2i(315,360);
		glVertex2i(315,360);
		glVertex2i(317,330);
		glVertex2i(317,330);
		glVertex2i(319,300);
		glVertex2i(319,300);
		glVertex2i(321,280);
		glEnd();
		glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(235,655);
		glVertex2i(260,680);
		glVertex2i(285,640);
		glVertex2i(290,570);
		glVertex2i(280,460);//stomach
		glVertex2i(252,410);
		glVertex2i(250,470);
		glVertex2i(235,575);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(260,680);
		glVertex2i(285,640);
		glVertex2i(285,640);
		glVertex2i(290,570);
	   	glVertex2i(290,570);
		glVertex2i(286,543);
		glVertex2i(284,506);
		glVertex2i(280,460);
		glVertex2i(250,470);
		glVertex2i(235,575);
		glVertex2i(235,575);
		glVertex2i(235,640);
		glEnd();
		glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(263,770);
		glVertex2i(305,765);
		glVertex2i(308,750);
		glVertex2i(310,740);
		glVertex2i(298,718);
		glVertex2i(280,715);
		glVertex2i(265,700);
		glVertex2i(260,680);
		glVertex2i(235,655);
		glVertex2i(225,690);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(263,770);
		glVertex2i(305,765);
		glVertex2i(305,765);
		glVertex2i(308,750);
		glVertex2i(308,750);
		glVertex2i(310,740);
		glVertex2i(310,740);
		glVertex2i(298,718);
		glVertex2i(298,718);
		glVertex2i(280,715);
		glVertex2i(280,715);
		glVertex2i(265,700);//frontface line
		glVertex2i(265,700);
		glVertex2i(260,680);
		glEnd();
	glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(240,790);
		glVertex2i(255,800);
		glVertex2i(268,799);
		glVertex2i(285,800);
		glVertex2i(295,798);//back head
		glVertex2i(290,785);
		glVertex2i(300,780);
		glVertex2i(299,770);
		glVertex2i(225,690);
		glVertex2i(226,730);
		glVertex2i(231,745);
		glVertex2i(230,760);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(225,690);
		glVertex2i(226,730); //pending
		glVertex2i(226,730);
		glVertex2i(231,745);
		glVertex2i(231,745);
		glVertex2i(230,760);
		glVertex2i(230,760);
		glVertex2i(240,790);
		glVertex2i(240,790);
		glVertex2i(255,800);
		glVertex2i(255,800);
		glVertex2i(268,799);
		glVertex2i(268,799);
		glVertex2i(285,800);
		glVertex2i(285,800);
		glVertex2i(295,798);
		glVertex2i(295,798);
		glVertex2i(290,785);
		glVertex2i(290,785);
		glVertex2i(300,780);
		glVertex2i(300,780);
		glVertex2i(299,770);
		glVertex2i(259,764);
		glVertex2i(254,754);
		glVertex2i(254,754);
		glVertex2i(252,738);
		glVertex2i(252,738);
		glVertex2i(255,734);
		glVertex2i(255,734);
		glVertex2i(260,736);
		glEnd();
		glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(193,275);
		glVertex2i(195,260);
		glVertex2i(209,250);
		glVertex2i(225,240);
		glVertex2i(226,230);
		glVertex2i(200,223);
		glVertex2i(180,239);
		glVertex2i(165,240);
		glVertex2i(168,263);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(168,263);
		glVertex2i(165,240);
		glVertex2i(165,240);
		glVertex2i(180,239);
		glVertex2i(180,239);
		glVertex2i(200,223);
		glVertex2i(200,223);
		glVertex2i(226,230);
		glVertex2i(226,230);
		glVertex2i(225,240);
		glVertex2i(225,240);
		glVertex2i(209,250);
		glVertex2i(209,250);
		glVertex2i(193,275);
		glEnd();
		glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(302,260);
		glVertex2i(321,280);
		glVertex2i(329,248);
		glVertex2i(370,243);
		glVertex2i(365,230);
		glVertex2i(332,220);
		glVertex2i(320,218);
		glVertex2i(304,221);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(302,260);
		glVertex2i(304,221);
		glVertex2i(304,221);
		glVertex2i(320,218);
		glVertex2i(320,218);
		glVertex2i(332,220);
		glVertex2i(332,220);
		glVertex2i(365,230);
		glVertex2i(365,230);
		glVertex2i(370,243);
		glVertex2i(370,243);
		glVertex2i(329,248);
		glVertex2i(329,248);
		glVertex2i(321,280);
		glEnd();
		glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(284,506);
		glVertex2i(286,543);
		glVertex2i(329,480);
		glVertex2i(330,460);
		glVertex2i(313,460);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(284,506);
		glVertex2i(313,460);
		glVertex2i(286,543);
		glVertex2i(329,480);
		glVertex2i(329,480);
		glVertex2i(330,460);
		glVertex2i(284,506);
		glVertex2i(286,543);
		glEnd();
		glColor3f(0.4,0.3,0.1);
		glBegin(GL_POLYGON);
		glVertex2i(313,460);
		glVertex2i(330,460);
		glVertex2i(329,421);
		glVertex2i(320,418);
		glVertex2i(306,419);
		glVertex2i(295,422);
		glVertex2i(295,430);
		glVertex2i(310,439);
                glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(313,460);
		glVertex2i(310,439);
		glVertex2i(310,439);
		glVertex2i(295,430);
		glVertex2i(295,430);
		glVertex2i(295,422);
		glVertex2i(295,422);
		glVertex2i(306,419);
		glVertex2i(306,419);
		glVertex2i(320,418);
		glVertex2i(320,418);
		glVertex2i(329,421);
		glVertex2i(329,421);
		glVertex2i(330,460);
		glEnd();
	glColor3f(1,1,1);		//feye
	glBegin(GL_POLYGON);
	glVertex2i(281,766);
	glVertex2i(288,767);
	glVertex2i(289,762);
	glVertex2i(285,760);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_POINTS);
	glVertex2i(285,764);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(281,766);
	glVertex2i(288,767);
	glVertex2i(288,767);
	glVertex2i(289,762);
	glVertex2i(289,762);
	glVertex2i(285,760);
	glEnd();
}

/////////////////////// FIFTH PAGE
void erectus(void)
{
	glColor3f(0.4,0.3,0.1);       //5 th stage left leg part
	glBegin(GL_POLYGON);
	glVertex2i(180,287);
	glVertex2i(198,248);
	glVertex2i(244,382);
	glVertex2i(204,336);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(180,287);
	glVertex2i(204,336);
	glVertex2i(198,248);
	glVertex2i(244,382);
	glEnd();
	glColor3f(0.4,0.3,0.1);       //5 th stage left leg part
	glBegin(GL_POLYGON);
	glVertex2i(204,336);
	glVertex2i(244,382);
	glVertex2i(244,407);
	glVertex2i(204,436);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(244,382);
	glVertex2i(244,407);
	glVertex2i(244,407);
	glVertex2i(204,436);
	glVertex2i(204,436);
	glVertex2i(204,336);
	glEnd();
	
	glColor3f(0.4,0.3,0.1);        //left leg feet
	glBegin(GL_POLYGON);
	glVertex2i(180,287);
	glVertex2i(180,264);
	glVertex2i(198,248);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(180,287);
	glVertex2i(180,264);
	glEnd();
	glColor3f(0.4,0.3,0.1);        //left leg feet
	glBegin(GL_POLYGON);
	glVertex2i(180,264);
	glVertex2i(179,248);
	glVertex2i(199,240);
	glVertex2i(198,248);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(180,264);
	glVertex2i(179,248);
	glVertex2i(199,240);
	glVertex2i(198,248);
	glEnd();
	glColor3f(0.4,0.3,0.1);        //left leg feet
	glBegin(GL_POLYGON);
	glVertex2i(179,248);
	glVertex2i(174,236);
	glVertex2i(184,224);
	glVertex2i(192,224);
	glVertex2i(199,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(179,248);
	glVertex2i(174,236);
	glVertex2i(174,236);
	glVertex2i(184,224);
	glVertex2i(184,224);
	glVertex2i(192,224);
	glEnd();
	glColor3f(0.4,0.3,0.1);        //left leg feet
	glBegin(GL_POLYGON);
	glVertex2i(192,224);
	glVertex2i(201,208);
	glVertex2i(225,208);
	glVertex2i(225,216);
	glVertex2i(199,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(192,224);
	glVertex2i(201,208);
	glVertex2i(201,208);
	glVertex2i(225,208);
	glVertex2i(225,208);
	glVertex2i(225,216);
	glVertex2i(225,216);
	glVertex2i(199,240);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right leg      
	glBegin(GL_POLYGON);
	glVertex2i(277,382);
	glVertex2i(275,354);
	glVertex2i(295,270);
	glVertex2i(300,372);
	glVertex2i(306,390);
	glVertex2i(298,400);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(277,382);
	glVertex2i(275,354);
	glVertex2i(295,270);
	glVertex2i(300,372);
	glVertex2i(300,372);
	glVertex2i(306,390);
	glVertex2i(306,390);
	glVertex2i(298,400);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right leg      
	glBegin(GL_POLYGON);
	glVertex2i(275,354);
	glVertex2i(270,328);
	glVertex2i(270,316);
	glVertex2i(295,270);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(275,354);
	glVertex2i(270,328);
	glVertex2i(270,328);
	glVertex2i(270,316);
	glVertex2i(295,270);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right leg      
	glBegin(GL_POLYGON);
	glVertex2i(270,316);
	glVertex2i(279,270);
	glVertex2i(270,316);
	glVertex2i(280,252);
	glVertex2i(297,240);
	glVertex2i(295,270);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(270,316);
	glVertex2i(279,270);
	glVertex2i(279,270);
	glVertex2i(270,316);
	glVertex2i(270,316);
	glVertex2i(280,252);
	glVertex2i(280,252);
	glVertex2i(297,240);
	glVertex2i(297,240);
	glVertex2i(295,270);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right leg      
	glBegin(GL_POLYGON);
	glVertex2i(270,316);
	glVertex2i(279,272);
	glVertex2i(281,252);
	glVertex2i(297,240);
	glVertex2i(295,270);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right legfeet     
	glBegin(GL_POLYGON);
	glVertex2i(281,252);
	glVertex2i(279,224);
	glVertex2i(300,222);
	glVertex2i(330,224);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(281,252);
	glVertex2i(279,224);
	glVertex2i(279,224);
	glVertex2i(300,222);
	glVertex2i(300,222);
	glVertex2i(330,224);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right legfeet     
	glBegin(GL_POLYGON);
	glVertex2i(330,224);
	glVertex2i(330,240);
	glVertex2i(297,240);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(330,224);
	glVertex2i(330,240);
	glVertex2i(330,240);
	glVertex2i(297,240);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right hand    
	glBegin(GL_POLYGON);
	glVertex2i(195,644);
	glVertex2i(194,540);
	glVertex2i(210,496);
	glVertex2i(215,552);
	glVertex2i(225,648);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(195,644);
	glVertex2i(194,540);
	glVertex2i(194,540);
	glVertex2i(210,496);
	glVertex2i(215,552);
	glVertex2i(215,552);
	glVertex2i(225,648);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right hand    
	glBegin(GL_POLYGON);
	glVertex2i(210,496);
	glVertex2i(221,468);
	glVertex2i(225,442);
	glVertex2i(219,440);
	glVertex2i(231,428);
	glVertex2i(243,428);
	glVertex2i(246,440);
	glVertex2i(246,458);
	glVertex2i(237,476);
	glVertex2i(215,552);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(210,496);
	glVertex2i(221,468);
	glVertex2i(221,468);
	glVertex2i(225,442);
	glVertex2i(225,442);
	glVertex2i(219,440);
	glVertex2i(219,440);
	glVertex2i(231,428);
	glVertex2i(231,428);
	glVertex2i(243,428);
	glVertex2i(243,428);
	glVertex2i(246,440);
	glVertex2i(246,440);
	glVertex2i(246,458);
	glVertex2i(246,458);
	glVertex2i(237,476);
	glVertex2i(237,476);
	glVertex2i(215,552);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right hand    
	glBegin(GL_POLYGON);
	glVertex2i(195,644);
	glVertex2i(225,648);
	glVertex2i(231,656);
	glVertex2i(231,668);
	glVertex2i(210,680);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(225,648);
	glVertex2i(231,656);
	glVertex2i(231,656);
	glVertex2i(231,668);
	glVertex2i(231,668);
	glVertex2i(210,680);
	glVertex2i(195,644);
	glVertex2i(210,680);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //right hand    
	glBegin(GL_POLYGON);
	glVertex2i(231,656);
	glVertex2i(240,708);
	glVertex2i(210,680);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(240,708);
	glVertex2i(210,680);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //upper leg part   
	glBegin(GL_POLYGON);
	glVertex2i(200,524);
	glVertex2i(189,476);
	glVertex2i(192,456);
	glVertex2i(204,436);
	glVertex2i(219,440);
	glVertex2i(225,442);
	glVertex2i(221,468);
	glVertex2i(210,496);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(200,524);
	glVertex2i(189,476);
	glVertex2i(189,476);
	glVertex2i(192,456);
	glVertex2i(192,456);
	glVertex2i(204,436);
	glVertex2i(219,440);
	glVertex2i(225,442);
	glVertex2i(225,442);
	glVertex2i(221,468);
	glVertex2i(221,468);
	glVertex2i(210,496);
	glVertex2i(200,524);
	glVertex2i(210,496);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //upper leg part   
	glBegin(GL_POLYGON);
	glVertex2i(204,436);
	glVertex2i(219,440);
	glVertex2i(231,428);
	glVertex2i(243,428);
	glVertex2i(246,440);
	glVertex2i(280,440);
	glVertex2i(298,400);
	glVertex2i(277,382);
	glVertex2i(244,407);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(219,440);
	glVertex2i(231,428);
	glVertex2i(231,428);
	glVertex2i(243,428);
	glVertex2i(243,428);
	glVertex2i(246,440);
	glVertex2i(280,440);
	glVertex2i(298,400);
	glVertex2i(277,382);
	glVertex2i(244,407);
	glVertex2i(204,436);
	glVertex2i(244,407);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //upper leg part   
	glBegin(GL_POLYGON);
	glVertex2i(246,440);
	glVertex2i(246,458);
	glVertex2i(237,476);
	glVertex2i(228,506);
	glVertex2i(249,500);
	glVertex2i(261,474);
	glVertex2i(280,440);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(246,440);
	glVertex2i(246,458);
	glVertex2i(246,458);
	glVertex2i(237,476);
	glVertex2i(237,476);
	glVertex2i(228,506);
	glVertex2i(228,506);
	glVertex2i(249,500);
	glVertex2i(249,500);
	glVertex2i(261,474);
	glVertex2i(261,474);
	glVertex2i(280,440);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //body part  
	glBegin(GL_POLYGON);
	glVertex2i(225,648);
	glVertex2i(215,552);
	glVertex2i(237,476);
	glVertex2i(249,500);
	glVertex2i(261,474);
	glVertex2i(276,500);
	glVertex2i(283,640);
	glVertex2i(263,665);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(225,648);
	glVertex2i(215,552);
	glVertex2i(215,552);
	glVertex2i(237,476);
	glVertex2i(249,500);
	glVertex2i(261,474);
	glVertex2i(261,474);
	glVertex2i(276,500);
	glVertex2i(276,500);
	glVertex2i(283,640);
	glVertex2i(283,640);
	glVertex2i(263,665);
	glEnd();
	glColor3f(0.4,0.3,0.1);    //body part  
	glBegin(GL_POLYGON);
	glVertex2i(225,648);
	glVertex2i(231,656);
	glVertex2i(267,688);
	glVertex2i(263,665);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(225,648);
	glVertex2i(231,656);
	glVertex2i(267,688);
	glVertex2i(263,665);
	glEnd();
	glColor3f(0.4,0.3,0.1);   //body face part 
	glBegin(GL_POLYGON);
	glVertex2i(231,656);
	glVertex2i(231,668);
	glVertex2i(240,708);
	glVertex2i(258,764);
	glVertex2i(285,764);
	glVertex2i(267,688);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(258,764);
	glVertex2i(285,764);
	glEnd();
	glColor3f(0.4,0.3,0.1);   //face part
	glBegin(GL_POLYGON);
	glVertex2i(240,708);
	glVertex2i(228,724);
	glVertex2i(228,748);
	glVertex2i(234,756);
	glVertex2i(248,764);
	glVertex2i(258,764);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(240,708);
	glVertex2i(228,724);
	glVertex2i(228,724);
	glVertex2i(228,748);
	glVertex2i(228,748);
	glVertex2i(234,756);
	glVertex2i(234,756);
	glVertex2i(248,764);
	glVertex2i(248,764);
	glVertex2i(258,764);
	glEnd();
	glColor3f(0.4,0.3,0.1);   //face part
	glBegin(GL_POLYGON);
	glVertex2i(285,764);
	glVertex2i(295,742);
	glVertex2i(296,728);
	glVertex2i(267,688);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(285,764);
	glVertex2i(295,742);
	glVertex2i(295,742);
	glVertex2i(296,728);
	//glVertex2i(296,728);
//	glVertex2i(300,727);
//	glVertex2i(300,727);
//	glVertex2i(300,707);
//	glVertex2i(300,707);

//	glVertex2i(297,704);
//	glVertex2i(296,692);
//	glVertex2i(296,692);
	glVertex2i(267,688);
	glEnd();
	glColor3f(0.4,0.3,0.1);   //face part
	glBegin(GL_POLYGON);
	glVertex2i(296,728);
	glVertex2i(300,727);
	glVertex2i(300,707);
	glVertex2i(297,704);
//	glVertex2i(296,692);
	glVertex2i(267,688);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(296,728);
	glVertex2i(300,727);
	glVertex2i(300,727);
	glVertex2i(300,707);
	glVertex2i(300,707);
	glVertex2i(297,704);
	glVertex2i(297,704);
	glVertex2i(292,705);
	glEnd();
	
//	glVertex2i(296,692);
	glEnd();
	glColor3f(0.545,0.271,0.075);   //face part
	glBegin(GL_POLYGON);
	glVertex2i(297,704);
	glVertex2i(296,692);
	glVertex2i(267,688);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(297,704);
	glVertex2i(296,692);
	glVertex2i(296,692);
	glVertex2i(267,688);
	glEnd();
	glColor3f(1.000,1.000,1.000);   //Eye part
	glBegin(GL_POLYGON);
	glVertex2i(279,740);
	glVertex2i(285,738);
	glVertex2i(285,732);
	glVertex2i(279,728);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(279,740);
	glVertex2i(285,738);
	glVertex2i(285,738);
	glVertex2i(285,732);
	glVertex2i(285,732);
	glVertex2i(279,728);
	glVertex2i(279,728);
	glVertex2i(279,740);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_POLYGON);
	glVertex2i(282,734);
	glVertex2i(282,736);
	glVertex2i(284,736);
	glVertex2i(284,734);
	glEnd();
	//glColor3f(0.000,0.000,0.000);
	//glBegin(GL_POINTS);
	//glVertex2i(282,734);
	//glEnd();
	glColor3f(0.000,0.000,0.000);      //Ear part
	glBegin(GL_LINES);
	glVertex2i(259,740);
	glVertex2i(255,740);
	glVertex2i(255,740);
	glVertex2i(249,730);
	glVertex2i(249,730);
	glVertex2i(255,720);
	glVertex2i(255,720);
	glVertex2i(261,716);
	glEnd();
}
void fireman(void){
	glColor3f(0.545f, 0.271f, 0.075f);    //leg
	glBegin(GL_POLYGON);
	glVertex2i(705,413);
	glVertex2i(699,450);
	glVertex2i(710,455);
	glVertex2i(713,430);
	glVertex2i(710,405);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
	glBegin(GL_LINES);
	glVertex2i(705,413);
	glVertex2i(699,450);
	glVertex2i(699,450);
	glVertex2i(745,470);
	glVertex2i(745,470);
	glVertex2i(805,478);
	glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);     //leg1
	glBegin(GL_POLYGON);
		glVertex2i(710,455);
		glVertex2i(745,470);
		glVertex2i(751,448);
		glVertex2i(713,430);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(710,455);
		glVertex2i(713,430);
		glVertex2i(713,430);
		glVertex2i(751,448);
		glVertex2i(751,448);
		
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);  //knee
	glBegin(GL_POLYGON);
		glVertex2i(745,470);
		glVertex2i(805,478);
		glVertex2i(800,453);
		glVertex2i(751,448);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(745,470);
		glVertex2i(805,478);
		glVertex2i(805,478);
		glVertex2i(800,453);
		glVertex2i(800,453);
		glVertex2i(751,448);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);
		glVertex2i(725,485);
		glVertex2i(765,515);
		glVertex2i(805,478);
		glVertex2i(745,470);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(745,470);
		glVertex2i(725,485);
		glVertex2i(805,478);
		glVertex2i(765,515); //lines
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);
		glVertex2i(725,485);
		glVertex2i(720,510);//stomach
		glVertex2i(720,560);
		glVertex2i(770,545);
		glVertex2i(765,515);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(725,485);
		glVertex2i(720,490);
		glVertex2i(720,500);
		glVertex2i(720,560);
		glVertex2i(765,515);
		glVertex2i(770,545);//lines
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);
		glVertex2i(720,560);
		glVertex2i(720,575);
		glVertex2i(730,619);
		glVertex2i(760,632);
		glVertex2i(790,575);
		glVertex2i(770,545);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(720,560);
		glVertex2i(720,575);
		glVertex2i(720,575);
		glVertex2i(730,619);
		glVertex2i(730,619);
		glVertex2i(760,632);
		glVertex2i(770,545);
		glVertex2i(790,575);//lines 1
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);
		glVertex2i(760,632);
		glVertex2i(780,645);
		glVertex2i(800,650);
		glVertex2i(802,616);
		glVertex2i(805,590);
		glVertex2i(805,590);
		glVertex2i(790,575);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(760,632);
		glVertex2i(780,645);
		glVertex2i(780,645);
		glVertex2i(800,650);
		glVertex2i(802,616);
		glVertex2i(805,590);//lines back
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);
		glVertex2i(798,648); //head
		glVertex2i(792,663);
		glVertex2i(792,684);
		glVertex2i(800,695);
		glVertex2i(840,695);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(798,648);
		glVertex2i(792,663);
		glVertex2i(792,663);
		glVertex2i(792,684);//lines back1
		glVertex2i(792,684);
		glVertex2i(800,695);
		glVertex2i(800,695);
		glVertex2i(840,695);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);      //face
		glVertex2i(798,648);
		glVertex2i(840,695);
		glVertex2i(841,684);
		glVertex2i(844,678);
		glVertex2i(848,665);
		glVertex2i(850,654);
		glVertex2i(848,638);
		glVertex2i(820,630);
		glVertex2i(802,616);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(840,695);
		glVertex2i(841,684);
		glVertex2i(841,684);
		glVertex2i(844,678);//lines back3
		glVertex2i(844,678);
		glVertex2i(848,665);
		glVertex2i(848,665);
		glVertex2i(850,654);
		glVertex2i(850,654);
		glVertex2i(848,638);
		glVertex2i(848,638);
		glVertex2i(820,630);
		glVertex2i(802,616);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
        glBegin(GL_POLYGON);
		glVertex2i(820,630);
		glVertex2i(842,638);//chin
		glVertex2i(841,626);
		glVertex2i(836,624);
		
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(820,630);
		glVertex2i(836,624);
		glVertex2i(836,624);
		glVertex2i(841,626);//lines chin
		glVertex2i(841,626);
		glVertex2i(842,638);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);      //hand
		glVertex2i(790,575);
		glVertex2i(805,590);
		glVertex2i(806,570);
		glVertex2i(808,550);
		glVertex2i(805,532);
		glVertex2i(792,529);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(790,575);
		glVertex2i(792,574);
		glVertex2i(805,590);
		glVertex2i(806,570);//lines hand
		glVertex2i(806,570);
		glVertex2i(808,550);
		glVertex2i(805,532);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);      //hand2
		glVertex2i(792,529);
		glVertex2i(805,532);
		glVertex2i(834,531);
		glVertex2i(830,502);
		glVertex2i(800,510);
	glEnd();
	glColor3f(0.000f, 0.000f,0.000f);
		glBegin(GL_LINES);
		glVertex2i(805,532);
		glVertex2i(834,531);
		glVertex2i(792,529);
		glVertex2i(800,512);//lines hand
		glVertex2i(800,512);
		glVertex2i(830,512);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glBegin(GL_POLYGON);      //hand3
		glVertex2i(834,531);
		glVertex2i(844,532);
		glVertex2i(860,545);
		glVertex2i(865,543);
		glVertex2i(870,530);
		glVertex2i(866,526);
		glVertex2i(852,520);
		glVertex2i(830,512);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(830,512);
		glVertex2i(852,520);
		glVertex2i(852,520);
		glVertex2i(866,526);//lines hand
		glVertex2i(866,526);
		glVertex2i(870,530);
		glVertex2i(870,530);
		glVertex2i(865,543);
		glVertex2i(865,543);
		glVertex2i(860,545);
		glVertex2i(860,545);
		glVertex2i(844,532);
		glVertex2i(844,532);
		glVertex2i(834,531);
		glEnd();
	glColor3f(0.545f, 0.271f, 0.075f);
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);      //fire
		glVertex2i(852,520);
		glVertex2i(866,526);
		glVertex2i(860,488);
		glVertex2i(865,543);
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);      //grass
		glVertex2i(701,425);
		glVertex2i(675,425);
		glVertex2i(680,430);
		glVertex2i(679,440);
		glVertex2i(699,450);
	glEnd();
	 
		glVertex2i(699,449);   //grass
		glVertex2i(684,443);
		glVertex2i(684,457);
		glVertex2i(689,460);
		glVertex2i(692,470);
		glVertex2i(700,474);
		glVertex2i(704,468);
		
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);   
		glVertex2i(699,449);
		glVertex2i(700,474);   //grass
		glVertex2i(705,480);
		glVertex2i(714,485);
		glVertex2i(724,485);
		glVertex2i(730,468);
		
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);   
		glVertex2i(726,465);
		glVertex2i(724,485);   //grass
		glVertex2i(745,470);
		
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);   
		glVertex2i(713,430);
		glVertex2i(751,448);   //grass
		glVertex2i(765,420);
		glVertex2i(732,410);
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);   
		glVertex2i(751,448);
		glVertex2i(800,453);   //grass
		glVertex2i(806,430);
		glVertex2i(765,420);
	glEnd();
	glColor3f(0,0.6,0);
	glBegin(GL_POLYGON);   
		glVertex2i(705,403);
		glVertex2i(710,405);   //grass
		glVertex2i(713,430);
		glVertex2i(732,410);
		glVertex2i(709,580);
	glEnd();
	glColor3f(1,1,1);	//eye
	glBegin(GL_POLYGON); 
		glVertex2i(830,668);
		glVertex2i(830,674);
		glVertex2i(836,674);
		glVertex2i(834,669);
		glEnd();
	glColor3f(0.000,0.000,0.000);	
	glBegin(GL_LINES);
		glVertex2i(830,668);
		glVertex2i(834,669);
		glVertex2i(830,668);
		glVertex2i(830,674);
		glVertex2i(830,674);
		glVertex2i(836,674);
		glVertex2i(836,674);
		glVertex2i(834,669);
		glEnd();
	
}
void fire(void)
{
	glColor3f(0.2,0.1,0);
	glBegin(GL_POLYGON);
	glVertex2i(808,408);
	glVertex2i(810,400); 
	glVertex2i(842,402);
	glVertex2i(848,414);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(852,548);
	glVertex2i(906,520); 
	glVertex2i(912,500);
	glVertex2i(840,500);
	glVertex2i(825,520);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(852,548);
	glVertex2i(840,566); 
	glVertex2i(840,574);
	glVertex2i(921,530);
	glVertex2i(906,520);
	glEnd();//
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(840,566); 
	glVertex2i(852,548);
	glVertex2i(818,560);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(852,548);
	glVertex2i(867,572); 
	glVertex2i(876,590);
	glVertex2i(927,564);
	glVertex2i(903,562);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(852,548);
	glVertex2i(867,572); 
	glVertex2i(876,590);
	glVertex2i(927,564);
	glVertex2i(903,562);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(888,586);
	glVertex2i(888,570); 
	glVertex2i(900,596);
	glVertex2i(927,564);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(876,590);
	glVertex2i(903,562); 
	glVertex2i(846,582);
	glVertex2i(870,596);
	glEnd();
	glColor3f(1,0.6,0); 		//fire
	glBegin(GL_POLYGON);
	glVertex2i(927,564);
	glVertex2i(921,530); 
	glVertex2i(840,542);
	glEnd();
	glColor3f(0.2,0.1,0);              //stick
	glBegin(GL_POLYGON);
	glVertex2i(815,480);
	glVertex2i(821,480); 
	glVertex2i(873,518);
	glVertex2i(863,516);
	glEnd();
	glColor3f(0.2,0.1,0);              //stick
	glBegin(GL_POLYGON);
	glVertex2i(821,480); 
	glVertex2i(873,518);
	glVertex2i(876,522);
	glVertex2i(841,482);
	glEnd();
	glColor3f(0.2,0.1,0);              //stick
	glBegin(GL_POLYGON);
	glVertex2i(909,476); 
	glVertex2i(915,480);
	glVertex2i(885,516);
	glVertex2i(882,516);
	glEnd();
	glColor3f(0.2,0.1,0);              //stick
	glBegin(GL_POLYGON);
	glVertex2i(864,480); 
	glVertex2i(880,460);
	glVertex2i(870,514);
	glVertex2i(876,516);
	glEnd();
	glColor3f(0.2,0.1,0);              //stick
	glBegin(GL_POLYGON);
	glVertex2i(880,490); 
	glVertex2i(890,490);
	glVertex2i(990,514);
	glVertex2i(990,516);
	glEnd();

	
	glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
		glVertex2i(809,490);
		glVertex2i(830,492);
		glVertex2i(843,490);
		glVertex2i(835,462);//frst stone
		glVertex2i(805,462);
		glVertex2i(800,475);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(809,490);
		glVertex2i(830,492);
		glVertex2i(830,492);
		glVertex2i(843,490);
		glVertex2i(843,490);
		glVertex2i(835,462);
		glVertex2i(835,462);
		glVertex2i(805,462);
		glVertex2i(805,462);
		glVertex2i(800,475);
		glVertex2i(800,475);
		glVertex2i(809,490);
		glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
		glVertex2i(843,490);
		glVertex2i(859,487);
		glVertex2i(880,490);
		glVertex2i(885,475);//secnd stone
		glVertex2i(877,464);
		glVertex2i(860,460);
		glVertex2i(845,460);
		glVertex2i(835,462);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(843,490);
		glVertex2i(859,487);
		glVertex2i(859,487);
		glVertex2i(880,490);
		glVertex2i(880,490);
		glVertex2i(885,475);//secnd stone
		glVertex2i(885,475);
		glVertex2i(877,464);
		glVertex2i(877,464);
		glVertex2i(860,460);
		glVertex2i(860,460);
		glVertex2i(845,460);
		glVertex2i(845,460);
		glVertex2i(835,462);
		glEnd();
		glColor3f(0.663f, 0.663f, 0.663f);
	glBegin(GL_POLYGON);
		glVertex2i(880,490);
		glVertex2i(892,494);
		glVertex2i(900,492);
		glVertex2i(905,505);//thrd stone
		glVertex2i(920,502);
		glVertex2i(922,490);
		glVertex2i(922,475);
		glVertex2i(920,464);
		glVertex2i(905,462);
		glVertex2i(890,464);
		glVertex2i(885,475);
	glEnd();
	glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(880,490);
		glVertex2i(892,494);
		glVertex2i(892,494);
		glVertex2i(900,492);
		glVertex2i(900,492);
		glVertex2i(905,505);//thrd stone
		glVertex2i(905,505);
		glVertex2i(920,502);
		glVertex2i(920,502);
		glVertex2i(922,490);
		glVertex2i(922,490);
		glVertex2i(922,475);
		glVertex2i(922,475);
		glVertex2i(920,464);
		glVertex2i(920,464);
		glVertex2i(905,462);
		glVertex2i(905,462);
		glVertex2i(890,464);
		glVertex2i(890,464);
		glVertex2i(885,475);
		glEnd();
		glColor3f(0.663f, 0.663f, 0.663f);
		glBegin(GL_POLYGON);
		glVertex2i(892,494);
		glVertex2i(926,520);
		glVertex2i(950,520);
		glVertex2i(954,507);//fourth stone
		glVertex2i(955,490);
		glVertex2i(950,477);
		glVertex2i(938,473);
		glVertex2i(922,475);
		glEnd();
		glColor3f(0.000f, 0.000f, 0.000f);
		glBegin(GL_LINES);
		glVertex2i(892,494);
		glVertex2i(926,520);
		glVertex2i(926,520);
		glVertex2i(950,520);
		glVertex2i(950,520);
		glVertex2i(954,507);//fourth stone
		glVertex2i(954,507);
		glVertex2i(955,490);
		glVertex2i(955,490);
		glVertex2i(950,477);
		glVertex2i(950,477);
		glVertex2i(938,473);
		glVertex2i(938,473);
		glVertex2i(922,475);
		glEnd();
		glColor3f(0.2,0.1,0);
		glBegin(GL_POLYGON);
		glVertex2i(860,564);
		glVertex2i(875,567);
		glVertex2i(843,490);
		glVertex2i(830,492);//stick
		glEnd();
		glColor3f(0.2,0.1,0);
		glBegin(GL_POLYGON);
		glVertex2i(877,545);
		glVertex2i(878,547);
		glVertex2i(890,491);
		glVertex2i(880,490);//stick
		glEnd();
		glColor3f(0.2,0.1,0);
		glBegin(GL_POLYGON);
		glVertex2i(878,547);
		glVertex2i(888,560);
		glVertex2i(900,492);
		glVertex2i(890,491);//stick
		glEnd();
		glColor3f(0.2,0.1,0);
		glBegin(GL_POLYGON);
		glVertex2i(846,535);
		glVertex2i(845,520);
		glVertex2i(820,492);
		glVertex2i(810,490);//stick
		glEnd();
		glColor3f(0.9,0.5,0.2);
		glBegin(GL_POLYGON);
		glVertex2i(828,580);
		glVertex2i(845,595);
		glVertex2i(860,561);
		glVertex2i(836,535);//fire
		glVertex2i(833,518);
		glVertex2i(831,518);
		glVertex2i(845,550);
		glVertex2i(843,565);
		glEnd();
		glColor3f(0.9,0.5,0.2);
		glBegin(GL_POLYGON);
		glVertex2i(875,563);
		glVertex2i(888,560);
		glVertex2i(875,545);
		glVertex2i(880,490);//fire
		glVertex2i(859,487);
		glVertex2i(843,490);
		glEnd();
		glColor3f(1,0.6,0);
		glBegin(GL_POLYGON);
		glVertex2i(888,560);
		glVertex2i(890,565);
		glVertex2i(910,550);
		glVertex2i(905,535);//fire
		glVertex2i(918,510);
		glVertex2i(900,492);
		glEnd();
		glColor3f(1,0.6,0);
		glBegin(GL_POLYGON);
		glVertex2i(905,532);
		glVertex2i(935,545);
		glVertex2i(932,535);
		glVertex2i(907,522);//stick
		glEnd();
		glColor3f(1,0.6,0);
		glBegin(GL_POLYGON);
		glVertex2i(862,634);
		glVertex2i(896,636);
		glVertex2i(894,595);
		glVertex2i(916,595);//fire
		glVertex2i(845,595);
		glVertex2i(828,580);
		glVertex2i(875,563);
		glVertex2i(860,561);
		glVertex2i(855,588);
		glVertex2i(860,595);
		glVertex2i(847,610);
		glEnd();
		glColor3f(1,0.6,0);
		glBegin(GL_POLYGON);
		glVertex2i(894,595);
		glVertex2i(916,595);//fire
		glVertex2i(845,595);
		glVertex2i(828,580);
		glVertex2i(875,563);
		glEnd();
	glColor3f(0.663f, 0.663f, 0.663f);              //stone
	glBegin(GL_POLYGON);
	glVertex2i(840,500);
	glVertex2i(825,520);
	glVertex2i(810,506);
	glVertex2i(806,490);
	glVertex2i(845,488);
	glEnd();
	glColor3f(0.000,0.000,0.000);              //stone
	glBegin(GL_LINES);
	glVertex2i(840,500);
	glVertex2i(825,520);
	glVertex2i(825,520);
	glVertex2i(810,506);
	glVertex2i(810,506);
	glVertex2i(806,490);
	glVertex2i(806,490);
	glVertex2i(845,488);
	glEnd();
} 
void stone(void)
{
	glColor3f(0.663f, 0.663f, 0.663f);              //stone
	glBegin(GL_POLYGON);
	glVertex2i(840,500);
	glVertex2i(825,520);
	glVertex2i(810,506);
	glVertex2i(806,490);
	glVertex2i(845,488);
	glEnd();
	glColor3f(0.000,0.000,0.000);              //stone
	glBegin(GL_LINES);
	glVertex2i(840,500);
	glVertex2i(825,520);
	glVertex2i(825,520);
	glVertex2i(810,506);
	glVertex2i(810,506);
	glVertex2i(806,490);
	glVertex2i(806,490);
	glVertex2i(845,488);
	glEnd();
} 
void ground1(void)
{
	glColor3f(0.7,0.9,0.6);
	glBegin(GL_POLYGON);
	glVertex2i(0,1600);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,1600);
	glEnd();
}
/////////////////// SIXTH PAGE
void homosapiens(void)
{
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens left leg part
	glBegin(GL_POLYGON);
	
	glVertex2i(333,392);
	glVertex2i(288,439);
	glVertex2i(252,488);
	glVertex2i(295,520);
	glVertex2i(309,492);
	glVertex2i(360,400);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(333,392);
	glVertex2i(288,439);
	glVertex2i(309,492);
	glVertex2i(360,400);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens left leg part
	glBegin(GL_POLYGON);
	glVertex2i(360,400);
	glVertex2i(360,327);
	glVertex2i(336,360);
	glVertex2i(333,392);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(360,400);
	glVertex2i(360,327);
	glVertex2i(336,360);
	glVertex2i(333,392);
	glEnd(); 
	glColor3f(0.545,0.271,0.075);     
	glBegin(GL_POLYGON);                 //6 th stage homosapiens left leg part
	glVertex2i(360,327);
	glVertex2i(369,308);
	glVertex2i(369,279);
	glVertex2i(354,276);
	glVertex2i(333,328);
	glVertex2i(336,360);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens left leg part
	glVertex2i(360,327);
	glVertex2i(369,308);
	glVertex2i(369,308);
	glVertex2i(369,279);
	glVertex2i(354,276);
	glVertex2i(333,328);
	glVertex2i(333,328);
	glVertex2i(336,360);
	glEnd();
	glColor3f(0.545,0.271,0.075); 
	glBegin(GL_POLYGON);
	glVertex2i(369,279);
	glVertex2i(378,276);
	glVertex2i(375,248);
	glVertex2i(369,240);
	glVertex2i(351,240);
	glVertex2i(354,276);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(369,279);
	glVertex2i(378,276);
	glVertex2i(375,248);
	glVertex2i(369,240);
	glVertex2i(369,240);
	glVertex2i(351,240);
	glVertex2i(351,240);
	glVertex2i(354,276);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens left leg part
	glBegin(GL_POLYGON);
	glVertex2i(375,248);
	glVertex2i(393,256);
	glVertex2i(408,277);
	glVertex2i(404,287);
	glVertex2i(378,276);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(375,248);
	glVertex2i(393,256);
	glVertex2i(393,256);
	glVertex2i(408,277);
	glVertex2i(408,277);
	glVertex2i(404,287);
	glVertex2i(404,287);
	glVertex2i(378,276);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right leg part
	glBegin(GL_POLYGON);
	glVertex2i(243,400);
	glVertex2i(216,343);
	glVertex2i(216,316);
	glVertex2i(195,272);
	glVertex2i(195,260);
	glVertex2i(259,372);
	glVertex2i(276,400);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(243,400);
	glVertex2i(216,343);
	glVertex2i(216,343);
	glVertex2i(216,316);
	glVertex2i(216,316);
	glVertex2i(195,272);
	glVertex2i(195,272);
	glVertex2i(195,260);
	glVertex2i(259,372);
	glVertex2i(276,400);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right leg part
	glBegin(GL_POLYGON);
	glVertex2i(240,460);
	glVertex2i(252,488);
	glVertex2i(288,439);
	glVertex2i(276,400);
	glVertex2i(243,400);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(240,460);
	glVertex2i(252,488);
	glVertex2i(288,439);
	glVertex2i(276,400);
	glVertex2i(243,400);
	glVertex2i(240,460);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right leg part
	glBegin(GL_POLYGON);
	glVertex2i(195,260);
	glVertex2i(210,248);
	glVertex2i(214,249);
	glVertex2i(222,272);
	glVertex2i(237,308);
	glVertex2i(255,340);
	glVertex2i(259,372);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(195,260);
	glVertex2i(210,248);
	glVertex2i(210,248);
	glVertex2i(214,249);
	glVertex2i(222,272);
	glVertex2i(237,308);
	glVertex2i(237,308);
	glVertex2i(255,340);
	glVertex2i(255,340);
	glVertex2i(259,372);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right leg part
	glBegin(GL_POLYGON);
	glVertex2i(214,249);
	glVertex2i(222,235);
	glVertex2i(252,238);
	glVertex2i(255,246);
	glVertex2i(235,252);
	glVertex2i(222,272);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(214,249);
	glVertex2i(222,235);
	glVertex2i(222,235);
	glVertex2i(252,238);
	glVertex2i(252,238);
	glVertex2i(255,246);
	glVertex2i(255,246);
	glVertex2i(235,252);
	glVertex2i(235,252);
	glVertex2i(222,272);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right hand part
	glBegin(GL_POLYGON);
	glVertex2i(262,728);
	glVertex2i(233,700);
	glVertex2i(226,670);
	glVertex2i(228,642);
	glVertex2i(255,660);
	glVertex2i(264,680);
	glVertex2i(263,691);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(262,728);
	glVertex2i(233,700);
	glVertex2i(233,700);
	glVertex2i(226,670);
	glVertex2i(226,670);
	glVertex2i(228,642);
	glVertex2i(255,660);
	glVertex2i(255,660);
	glVertex2i(264,680);
	glVertex2i(264,680);
	glVertex2i(263,691);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right hand part
	glBegin(GL_POLYGON);
	glVertex2i(228,642);
	glVertex2i(225,636);
	glVertex2i(225,538);
	glVertex2i(231,504);
	glVertex2i(249,492);
	glVertex2i(252,600);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(228,642);
	glVertex2i(225,636);
	glVertex2i(225,636);
	glVertex2i(225,538);
	glVertex2i(225,538);
	glVertex2i(231,504);
	glVertex2i(249,492);
	glVertex2i(252,600);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right hand part
	glBegin(GL_POLYGON);
	glVertex2i(252,600);
	glVertex2i(250,639);
	glVertex2i(255,644);
	glVertex2i(255,660);
	glVertex2i(228,642);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(252,600);
	glVertex2i(250,639);
	glVertex2i(250,639);
	glVertex2i(255,644);
	glVertex2i(255,644);
	glVertex2i(255,660);
	glVertex2i(228,642);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right hand part
	glBegin(GL_POLYGON);
	glVertex2i(249,492);
	glVertex2i(252,488);
	glVertex2i(240,460);
	glVertex2i(223,464);
	glVertex2i(222,478);
	glVertex2i(230,495);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(249,492);
	glVertex2i(252,488);
	glVertex2i(252,488);
	glVertex2i(240,460);
	glVertex2i(240,460);
	glVertex2i(223,464);
	glVertex2i(223,464);
	glVertex2i(222,478);
	glVertex2i(222,478);
	glVertex2i(230,495);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens right hand part
	glBegin(GL_POLYGON);
	glVertex2i(249,492);
	glVertex2i(231,504);
	glVertex2i(230,495);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(231,504);
	glVertex2i(230,495);
	glEnd();
	//////
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens body part
	glBegin(GL_POLYGON);
	glVertex2i(252,600);
	glVertex2i(295,520);
	glVertex2i(309,492);
	glVertex2i(327,540);
	glVertex2i(327,664);
	glVertex2i(319,699);
	glVertex2i(297,719);
	glVertex2i(255,644);
	glVertex2i(250,639);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(295,520);
	glVertex2i(309,492);
	glVertex2i(309,492);
	glVertex2i(327,540);
	glVertex2i(327,540);
	glVertex2i(327,664);
	glVertex2i(327,664);
	glVertex2i(319,699);
	glVertex2i(319,699);
	glVertex2i(297,719);
	glVertex2i(255,644);
	glVertex2i(250,639);
	glVertex2i(250,639);
	glVertex2i(252,600);
	glEnd();
	/////
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens body part
	glBegin(GL_POLYGON);
	glVertex2i(252,600);
	glVertex2i(295,520);
	glVertex2i(252,488);
	glVertex2i(249,492);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(252,600);
	glVertex2i(249,492);
	glVertex2i(252,488);
	glVertex2i(249,492);
	glEnd();
	//////
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens body part
	glBegin(GL_POLYGON);
	glVertex2i(255,644);
	glVertex2i(255,660);
	glVertex2i(264,680);
	glVertex2i(263,691);
	glVertex2i(262,728);
	glVertex2i(270,732);
	glVertex2i(300,728);
	glVertex2i(297,719);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	glVertex2i(255,644);
	glVertex2i(255,660);
	glVertex2i(255,660);
	glVertex2i(264,680);
	glVertex2i(264,680);
	glVertex2i(263,691);
	glVertex2i(262,728);
	glVertex2i(270,732);
	glVertex2i(300,728);
	glVertex2i(297,719);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(300,728);
	glVertex2i(285,760);
	glVertex2i(278,766);
	glVertex2i(276,760);
	glVertex2i(270,748);
	glVertex2i(273,744);
	glVertex2i(270,732);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.000,0.000,0.000);
	//glVertex2i(270,732);
	glVertex2i(300,728);
	glVertex2i(285,760);
	glVertex2i(278,766);
	glVertex2i(276,760);
	glVertex2i(270,748);
	glVertex2i(273,744);
	glVertex2i(270,732);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens face part
	glBegin(GL_POLYGON);
	glVertex2i(300,728);
	glVertex2i(278,766);
	glVertex2i(276,780);
	glVertex2i(284,784);
	glVertex2i(285,783);
	glVertex2i(306,748);
	glVertex2i(270,732);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens face part
	glBegin(GL_POLYGON);
	glVertex2i(306,773);
	glVertex2i(305,794);
	glVertex2i(330,800);
	glVertex2i(332,768);
	glVertex2i(333,760);
	glVertex2i(328,750);
	glVertex2i(312,752);
	glEnd();
	glColor3f(0.000,0.000,0.000);       
	glBegin(GL_LINES);
	glVertex2i(305,794);
	glVertex2i(330,800);
	glVertex2i(330,800);
	glVertex2i(332,768);
	glVertex2i(332,768);
	glVertex2i(333,760);
	glVertex2i(333,760);
	glVertex2i(328,750);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(276,820);
	glVertex2i(258,796);
	glVertex2i(258,768);
	glVertex2i(270,748);
	glVertex2i(273,744);
	glVertex2i(276,760);
	glVertex2i(285,760);
	glVertex2i(276,780);
	glVertex2i(284,784);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(276,820);
	glVertex2i(284,784);
	glVertex2i(285,783);
	glVertex2i(285,792);
	glVertex2i(300,796);
	glVertex2i(305,794);
	glVertex2i(330,800);
	glVertex2i(315,820);
	glVertex2i(276,820);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(300,796);
	glVertex2i(305,794);
	glVertex2i(306,773);
	glVertex2i(312,752);
	glVertex2i(306,748);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(306,748);
	glVertex2i(303,736);
	glVertex2i(306,716);
	glVertex2i(312,720);
	glVertex2i(312,752);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(306,716);
	glVertex2i(312,720);
	glVertex2i(328,727);
	glVertex2i(330,716);
	glVertex2i(316,712);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(312,752);
	glVertex2i(312,740);
	glVertex2i(326,736);
	glVertex2i(328,751);
	glEnd();
	glColor3f(0.000,0.000,0.000);       //6 th stage homosapiens hair part
	glBegin(GL_POLYGON);
	glVertex2i(328,750);
	glVertex2i(326,736);
	glVertex2i(330,720);
	glVertex2i(328,720);
	glVertex2i(324,736);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens face part
	glBegin(GL_POLYGON);
	glVertex2i(328,720);
	glVertex2i(324,736);
	glVertex2i(312,720);
	glVertex2i(312,740);
	glVertex2i(318,740);
	glVertex2i(321,740);
	glVertex2i(323,740);
	glEnd();
	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens face part
	glBegin(GL_POLYGON);
	glVertex2i(306,748);
	glVertex2i(285,783);
	glVertex2i(285,792);
	glVertex2i(300,796);
	glEnd();
	glColor3f(1.000,1.000,1.000);       //6 th stage homosapiens eye part
	glBegin(GL_POLYGON);
	glVertex2i(312,778);
	glVertex2i(312,776);
	glVertex2i(316,774);
	glVertex2i(316,776);
	glVertex2i(324,780);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_POINTS);
	glVertex2i(316,778);
	glEnd();
	glColor3f(0.000,0.000,0.000);
	glBegin(GL_LINES);
	glVertex2i(310,778);
	glVertex2i(323,780);
	glEnd();
}
	
//	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens left hand part
//	glBegin(GL_POLYGON);
//	glVertex2i(330,624);
//	glVertex2i(330,584);
//	glVertex2i(342,572);
//	glVertex2i(351,600);
//	glEnd();
//	glColor3f(0.545,0.271,0.075);       //6 th stage homosapiens left hand part
//	glBegin(GL_POLYGON);
//	glVertex2i(351,600);
//	glVertex2i(390,600);
//	glVertex2i(412,582);
//	glVertex2i(412,560);
//	glVertex2i(399,568);
//	glVertex2i(390,572);
//	glVertex2i(342,572);
//	glEnd();
void water(void)
{
	glColor3f(0.000f, 0.749f, 1.000f);
	glBegin(GL_POLYGON);
	glVertex2i(0,400);
	glColor3f(0.118f, 0.565f, 1.000f);
	glVertex2i(110,300);
	glColor3f(0.275f, 0.510f, 0.706f);
	glVertex2i(132,260);
	glVertex2i(212,0);
	glColor3f(0.000f, 0.000f, 0.545f);
	glVertex2i(0,0);
	glEnd();
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(220,450);
	glColor3f(0.502f, 0.000f, 0.502f);
	char str[]="Srinivas Institute of Technology";
	glRasterPos2f(384,950); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str1[]="Valachil,Mangaluru";
	glRasterPos2f(440.5,900); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str1);i++){
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str1[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str2[]="Department of Computer Science and Engineering";
	glRasterPos2f(350,850); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str2);i++){
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str3[]="COMPUTER GRAPHICS AND VISUALIZATION";
	glRasterPos2f(354,800); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str3);i++){
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str3[i]);		
	}
	
	glColor3f(0.502f, 0.000f, 0.502f);
	char str4[]="MINI PROJECT";
	glRasterPos2f(435,700); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str4);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str5[]="ON";
	glRasterPos2f(485,600); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str5);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);		
	}
	
	glColor3f(0.502f, 0.000f, 0.502f);
	char str6[]="			HUMAN EVOLUTION";
	glRasterPos2f(385,500); //take midpoint of gluOrtho2D
	for(i=0;i<strlen(str6);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str7[]="Team Members";
	glRasterPos2f(75,300); //calculate points by refering previous text positions
	for(i=0;i<strlen(str7);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str8[]="SUSMITHA 4SN15CS088";
	glRasterPos2f(50,250); //calculate points by refering previous text positions
	for(i=0;i<strlen(str8);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str8[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str9[]="VARSHA   	4SN15CS093";
	glRasterPos2f(50,200); //calculate points by refering previous text positions
	for(i=0;i<strlen(str9);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str9[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str10[]="Project Guide";
	glRasterPos2f(825,300); //calculate points by refering previous text positions
	for(i=0;i<strlen(str10);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[i]);		
	}

	glColor3f(0.502f, 0.000f, 0.502f);
	char str11[]=" MRS GANGOTHRI S          ";
	glRasterPos2f(810,250); //calculate points by refering previous text positions
	for(i=0;i<strlen(str11);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str11[i]);		
	}
	glColor3f(0.502f, 0.000f, 0.502f);
	char str12[]=" Associate Professor         ";
	glRasterPos2f(810,200); //calculate points by refering previous text positions
	for(i=0;i<strlen(str12);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str12[i]);		
	}
	glColor3f(0.502f, 0.000f, 0.502f);
	char str13[]=" DEPT OF CSE         ";
	glRasterPos2f(810,150); //calculate points by refering previous text positions
	for(i=0;i<strlen(str13);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str13[i]);		
	}

	/*glColor3f(0.502f, 0.000f, 0.502f);
	char str13[]=" DEPT OF CSE         ";
	glRasterPos2f(810,150); //calculate points by refering previous text positions
	for(i=0;i<strlen(str13);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str13[i]);		
	}*/
	glColor3f(0.502f, 0.000f, 0.502f);
	char str14[]="Press S/s to enter";
	glRasterPos2f(430,50); //calculate points by refering previous text positions
	for(i=0;i<strlen(str14);i++){ 
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[i]);		
	}
	glBegin(GL_LINES);
	glVertex2f(250,1000);
	glVertex2f(250,0);	
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(750,1000);
	glVertex2f(750,0);	
	glEnd();

	glFlush();
}


void secondpage(void){                ////////////first stage of Human evolution
	glClear(GL_COLOR_BUFFER_BIT);
	ground();
	sky();
	
	
	glTranslatef(900,100,0);
	tree2();
	glTranslatef(-900,-100,0);
	
	glTranslatef(800,100,0);
	tree2();
	glTranslatef(-800,-100,0);
	glTranslatef(700,100,0);
	tree2();
	glTranslatef(-700,-100,0);
	
	glTranslatef(650,100,0);
	tree();
	glTranslatef(-650,-100,0);
	glTranslatef(530,100,0);
	tree();
	glTranslatef(-530,-100,0);
	glTranslatef(410,100,0);
	tree();
	glTranslatef(-410,-100,0);
	glTranslatef(290,100,0);
	tree2();
	glTranslatef(-290,-100,0);
	glTranslatef(180,100,0);
	tree();
	glTranslatef(-180,-100,0);
	
	glTranslatef(75,100,0);
	tree2();
	glTranslatef(-75,-100,0);
	
	glTranslatef(1,100,0);
	tree2();
	glTranslatef(-1,-100,0);
	glTranslatef(1,100,0);
	grass();
	glTranslatef(-1,-100,0);
	glTranslatef(130,100,0);
	grass();
	glTranslatef(-130,-100,0);
	glTranslatef(179,100,0);
	grass();
	glTranslatef(-179,-100,0);
	glTranslatef(189,100,0);
	grass();
	glTranslatef(-189,-100,0);
	glTranslatef(223,100,0);
	grass();
	glTranslatef(-223,-100,0);
	glTranslatef(249,100,0);
	grass();
	glTranslatef(-249,-100,0);
	glTranslatef(288,100,0);
	grass();
	glTranslatef(-288,-100,0);
	glTranslatef(338,100,0);
	grass();
	glTranslatef(-338,-100,0);
	glTranslatef(378,100,0);
	grass();
	glTranslatef(-378,-100,0);
	glTranslatef(388,100,0);
	grass();
	glTranslatef(-388,-100,0);
	glTranslatef(500,100,0);
	grass();
	glTranslatef(-500,-100,0);
	glTranslatef(600,100,0);
	grass();
	glTranslatef(-600,-100,0);
	glTranslatef(50,100,0);
	grass();
	glTranslatef(-50,-100,0);
	glTranslatef(-50,100,0);
	grass();
	glTranslatef(50,-100,0);
	glTranslatef(-150,100,0);
	grass();
	glTranslatef(150,-100,0);
	glTranslatef(-200,100,0);
	grass();
	glTranslatef(200,-100,0);
	/*glTranslatef(-680,-650,0);
	grass1();
	glTranslatef(680,650,0);
	glTranslatef(-900,-650,0);
	grass1();
	glTranslatef(900,650,0);
	glTranslatef(-550,-650,0);
	grass1();
	glTranslatef(550,650,0);
	glTranslatef(-400,-650,0);
	grass1();
	glTranslatef(400,650,0);
	glTranslatef(-300,-650,0);
	grass1();
	glTranslatef(300,650,0);
	glTranslatef(-300,-650,0);
	grass1();
	glTranslatef(300,650,0);
	glTranslatef(-175,-650,0);
	grass1();
	glTranslatef(175,650,0);
	glTranslatef(-75,-650,0);
	grass1();
	glTranslatef(75,650,0);
	glTranslatef(-10,-650,0);
	grass1();
	glTranslatef(10,650,0);
	glTranslatef(-1,-650,0);
	grass1();
	glTranslatef(1,650,0);
	glTranslatef(-1,-650,0);
	grass1();
	glTranslatef(1,650,0);
	glTranslatef(10,650,0);
	grass1();
	glTranslatef(-10,-650,0);
	glTranslatef(75,650,0);
	grass1();
	glTranslatef(-75,-650,0);
	glTranslatef(0,650,0);
	grass1();
	glTranslatef(-0,-650,0);
	glTranslatef(10,-650,0);
	grass1();
	glTranslatef(-10,650,0);
	glTranslatef(75,-600,0);
	grass1();
	glTranslatef(-75,600,0);
	glTranslatef(150,-600,0);
	grass1();
	glTranslatef(-150,650,0);
	glTranslatef(250,-550,0);
	grass1();
	glTranslatef(-250,550,0);
	glTranslatef(150,-550,0);
	grass1();
	glTranslatef(-150,550,0);
	glTranslatef(75,-550,0);
	grass1();
	glTranslatef(-75,550,0);
	glTranslatef(65,-600,0);
	grass1();
	glTranslatef(-65,600,0);*/
	glTranslatef(-300,-700,0);
	grass1();
	glTranslatef(300,700,0);
	glTranslatef(-400,-700,0);
	grass1();
	glTranslatef(400,700,0);
	glTranslatef(-500,-700,0);
	grass1();
	glTranslatef(500,700,0);
	glTranslatef(-600,-700,0);
	grass1();
	glTranslatef(600,700,0);
	glTranslatef(-700,-700,0);
	grass1();
	glTranslatef(700,700,0);
	glTranslatef(-800,-700,0);
	grass1();
	glTranslatef(800,700,0);
	glTranslatef(-900,-700,0);
	grass1();
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(900,700,0);
	glTranslatef(-1000,-700,0);
	grass1();
	glTranslatef(1000,700,0);
	glTranslatef(10,-700,0);
	grass1();
	glTranslatef(-10,700,0);
	glTranslatef(110,-700,0);
	grass1();
	glTranslatef(-110,700,0);
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(-30,-700,0);
	grass1();
	glTranslatef(30,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-90,-700,0);
	grass1();
	glTranslatef(90,700,0);
	glTranslatef(-170,-700,0);
	grass1();
	glTranslatef(170,700,0);
	//////////////
	glTranslatef(500,-200,0);
	stone1();
	glTranslatef(-500,200,0);
	glTranslatef(550,-150,0);
	stone1();
	glTranslatef(-550,150,0);
	glTranslatef(575,-100,0);
	stone1();
	glTranslatef(-575,100,0);
	glTranslatef(450,-200,0);
	stone1();
	glTranslatef(-450,200,0);
	glTranslatef(400,-250,0);
	stone1();
	glTranslatef(-400,250,0);
	glTranslatef(350,-150,0);
	stone1();
	glTranslatef(-350,150,0);
	glTranslatef(350,-100,0);
	stone1();
	glTranslatef(-350,100,0);
	glTranslatef(400,-50,0);
	stone1();
	glTranslatef(-400,50,0);
	glTranslatef(450,-100,0);
	stone1();
	glTranslatef(-450,100,0);
	glTranslatef(425,-150,0);
	stone1();
	glTranslatef(-425,150,0);
	glTranslatef(525,-150,0);
	stone1();
	glTranslatef(-525,150,0);
	glTranslatef(400,-150,0);
	stone1();
	glTranslatef(-400,150,0);
	glTranslatef(350,-175,0);
	stone1();
	glTranslatef(-350,175,0);
	///////////////////////
	
	glTranslatef(-100,-100,0);
	stone2();
	glTranslatef(100,100,0);
	glTranslatef(-130,-100,0);
	stone2();
	glTranslatef(130,100,0);
	glTranslatef(-120,-100,0);
	stone2();
	glTranslatef(120,100,0);
	glTranslatef(-140,-100,0);
	stone2();
	glTranslatef(140,100,0);
	glTranslatef(-150,-100,0);
	stone2();
	glTranslatef(150,100,0);
	grass3();
	glTranslatef(225,100,0);
	grass3();
	glTranslatef(-225,-100,0);
	glTranslatef(325,130,0);
	grass3();
	glTranslatef(-325,-130,0);
	glTranslatef(435,79,0);
	grass3();
	glTranslatef(-435,-79,0);
	glTranslatef(175,85,0);
	grass3();
	glTranslatef(-175,-85,0);
	glTranslatef(500,60,0);
	note();
	glTranslatef(-500,-60,0);
	cloud();
	/*if(p!=200)
	{
	p++;
	glTranslatef(p,0,0);
	
	/*glTranslatef(-p,0,0);
	}*/
	glColor3f(0.000f, 0.000f, 0.545f);
	output(260,910,"Ardipithecus ramidus");
	glColor3f(0.000,0.000,0.000);
	output(250,880,"lived 4.4 millian years ago");
	output(220,850,"Ardipithecus ramidus had a small brain");
	output(250,820,"monkey like features");
	output(200,100,"PRESS 'A' TO CONTINUE");
	/////////////////////////////////////////////////////////
	glColor3f(0.000f, 0.000f, 0.545f);
	output(840,290,"Scientific classification");
	glColor3f(0.502f, 0.000f, 0.000f);
	output(840,265,"Kingdom : Animalia");
	output(840,235,"Phylum	: Chordata");
	output(840,205,"Class   : Mammalia");
	output(840,175,"Order   : Primates");
	output(840,145,"Family  : Hominidae");
	//////////////////////////////////////////////////////////
	
	human1();
	
	
	//glutPostRedisplay();
	glFlush();
}

void thirdpage(void){    		//second stage of human evolution    
	
	glClear(GL_COLOR_BUFFER_BIT);
	ground();
	sky();
	glTranslatef(900,100,0);
	tree2();
	glTranslatef(-900,-100,0);
	
	glTranslatef(800,100,0);
	tree2();
	glTranslatef(-800,-100,0);
	glTranslatef(700,100,0);
	tree2();
	glTranslatef(-700,-100,0);
	
	glTranslatef(650,100,0);
	tree();
	glTranslatef(-650,-100,0);
	glTranslatef(530,100,0);
	tree();
	glTranslatef(-530,-100,0);
	glTranslatef(410,100,0);
	tree();
	glTranslatef(-410,-100,0);
	glTranslatef(290,100,0);
	tree2();
	glTranslatef(-290,-100,0);
	glTranslatef(180,100,0);
	tree();
	glTranslatef(-180,-100,0);
	
	glTranslatef(75,100,0);
	tree2();
	glTranslatef(-75,-100,0);
	
	glTranslatef(1,100,0);
	tree2();
	glTranslatef(-1,-100,0);
	glTranslatef(1,100,0);
	grass();
	glTranslatef(-1,-100,0);
	glTranslatef(130,100,0);
	grass();
	glTranslatef(-130,-100,0);
	glTranslatef(179,100,0);
	grass();
	glTranslatef(-179,-100,0);
	glTranslatef(189,100,0);
	grass();
	glTranslatef(-189,-100,0);
	glTranslatef(223,100,0);
	grass();
	glTranslatef(-223,-100,0);
	glTranslatef(249,100,0);
	grass();
	glTranslatef(-249,-100,0);
	glTranslatef(288,100,0);
	grass();
	glTranslatef(-288,-100,0);
	glTranslatef(338,100,0);
	grass();
	glTranslatef(-338,-100,0);
	glTranslatef(378,100,0);
	grass();
	glTranslatef(-378,-100,0);
	glTranslatef(388,100,0);
	grass();
	glTranslatef(-388,-100,0);
	glTranslatef(500,100,0);
	grass();
	glTranslatef(-500,-100,0);
	glTranslatef(600,100,0);
	grass();
	glTranslatef(-600,-100,0);
	glTranslatef(50,100,0);
	grass();
	glTranslatef(-50,-100,0);
	glTranslatef(-50,100,0);
	grass();
	glTranslatef(50,-100,0);
	glTranslatef(-150,100,0);
	grass();
	glTranslatef(150,-100,0);
	glTranslatef(-200,100,0);
	grass();
	glTranslatef(200,-100,0);
	glTranslatef(-680,-650,0);
	grass1();
	glTranslatef(680,650,0);
	/*glTranslatef(-900,-650,0);
	grass1();
	glTranslatef(900,650,0);
	glTranslatef(-550,-650,0);
	grass1();
	glTranslatef(550,650,0);
	glTranslatef(-400,-650,0);
	grass1();
	glTranslatef(400,650,0);
	glTranslatef(-300,-650,0);
	grass1();
	glTranslatef(300,650,0);
	glTranslatef(-300,-650,0);
	grass1();
	glTranslatef(300,650,0);
	glTranslatef(-175,-650,0);
	grass1();
	glTranslatef(175,650,0);
	glTranslatef(-75,-650,0);
	grass1();
	glTranslatef(75,650,0);
	glTranslatef(-10,-650,0);
	grass1();
	glTranslatef(10,650,0);
	glTranslatef(75,650,0);
	grass1();
	glTranslatef(-75,-650,0);
	
	
	glTranslatef(150,-600,0);
	grass1();
	glTranslatef(-150,650,0);
	glTranslatef(250,-550,0);
	grass1();
	glTranslatef(-250,550,0);*/
	glTranslatef(-300,-700,0);
	grass1();
	glTranslatef(300,700,0);
	glTranslatef(-400,-700,0);
	grass1();
	glTranslatef(400,700,0);
	glTranslatef(-500,-700,0);
	grass1();
	glTranslatef(500,700,0);
	glTranslatef(-600,-700,0);
	grass1();
	glTranslatef(600,700,0);
	glTranslatef(-700,-700,0);
	grass1();
	glTranslatef(700,700,0);
	glTranslatef(-800,-700,0);
	grass1();
	glTranslatef(800,700,0);
	glTranslatef(-900,-700,0);
	grass1();
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(900,700,0);
	glTranslatef(-1000,-700,0);
	grass1();
	glTranslatef(1000,700,0);
	glTranslatef(10,-700,0);
	grass1();
	glTranslatef(-10,700,0);
	glTranslatef(110,-700,0);
	grass1();
	glTranslatef(-110,700,0);
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(-30,-700,0);
	grass1();
	glTranslatef(30,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-90,-700,0);
	grass1();
	glTranslatef(90,700,0);
	glTranslatef(-170,-700,0);
	grass1();
	glTranslatef(170,700,0);
	
	//////////////
	glTranslatef(500,-200,0);
	stone1();
	glTranslatef(-500,200,0);
	glTranslatef(550,-150,0);
	stone1();
	glTranslatef(-550,150,0);
	glTranslatef(575,-100,0);
	stone1();
	glTranslatef(-575,100,0);
	glTranslatef(450,-200,0);
	stone1();
	glTranslatef(-450,200,0);
	glTranslatef(400,-250,0);
	stone1();
	glTranslatef(-400,250,0);
	glTranslatef(350,-150,0);
	stone1();
	glTranslatef(-350,150,0);
	glTranslatef(350,-100,0);
	stone1();
	glTranslatef(-350,100,0);
	glTranslatef(400,-50,0);
	stone1();
	glTranslatef(-400,50,0);
	glTranslatef(450,-100,0);
	stone1();
	glTranslatef(-450,100,0);
	glTranslatef(425,-150,0);
	stone1();
	glTranslatef(-425,150,0);
	glTranslatef(525,-150,0);
	stone1();
	glTranslatef(-525,150,0);
	glTranslatef(400,-150,0);
	stone1();
	glTranslatef(-400,150,0);
	glTranslatef(350,-175,0);
	stone1();
	glTranslatef(-350,175,0);
	///////////////////////
	
	glTranslatef(-100,-100,0);
	stone2();
	glTranslatef(100,100,0);
	glTranslatef(-130,-100,0);
	stone2();
	glTranslatef(130,100,0);
	glTranslatef(-120,-100,0);
	stone2();
	glTranslatef(120,100,0);
	glTranslatef(-140,-100,0);
	stone2();
	glTranslatef(140,100,0);
	glTranslatef(-150,-100,0);
	stone2();
	glTranslatef(150,100,0);
	grass3();
	glTranslatef(225,100,0);
	grass3();
	glTranslatef(-225,-100,0);
	glTranslatef(325,130,0);
	grass3();
	glTranslatef(-325,-130,0);
	glTranslatef(435,79,0);
	grass3();
	glTranslatef(-435,-79,0);
	glTranslatef(175,85,0);
	grass3();
	glTranslatef(-175,-85,0);
	
	/*if(p!=200)
	{
	p++;
	glTranslatef(p,0,0);*/
	cloud();
	/*glTranslatef(-p,0,0);
	}*/
	glTranslatef(500,60,0);
	note();
	glTranslatef(-500,-60,0);
	glColor3f(0.000f, 0.000f, 0.545f);
	output(255,910,"Australopithecus anamensis");
	glColor3f(0.000,0.000,0.000);
	output(225,865,"lived 4.2 to 3.9 million years ago");
	output(250,835,"it is walk like a monkeys");
	output(220,100,"PRESS 'B' TO CONTINUE");
	/////////////////////////////////////////////////////////
	glColor3f(0.000f, 0.000f, 0.545f);
	output(840,290,"Scientific classification");
	glColor3f(0.502f, 0.000f, 0.000f);
	output(840,265,"Kingdom : Animalia");
	output(840,235,"Phylum	: Chordata");
	output(840,205,"Class   : Mammalia");
	output(840,175,"Order   : Primates");
	output(840,145,"Family  : Hominidae");
	//////////////////////////////////////////////////////////
	human2();
	glFlush();
	
}
void fourthpage(void){  		/////Third stage of human evolution
glClear(GL_COLOR_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);
	ground();
	sky();
	glTranslatef(900,100,0);
	tree2();
	glTranslatef(-900,-100,0);
	
	glTranslatef(800,100,0);
	tree2();
	glTranslatef(-800,-100,0);
	glTranslatef(700,100,0);
	tree2();
	glTranslatef(-700,-100,0);
	
	glTranslatef(650,100,0);
	tree();
	glTranslatef(-650,-100,0);
	glTranslatef(530,100,0);
	tree();
	glTranslatef(-530,-100,0);
	glTranslatef(410,100,0);
	tree();
	glTranslatef(-410,-100,0);
	glTranslatef(290,100,0);
	tree2();
	glTranslatef(-290,-100,0);
	glTranslatef(180,100,0);
	tree();
	glTranslatef(-180,-100,0);
	
	glTranslatef(75,100,0);
	tree2();
	glTranslatef(-75,-100,0);
	
	glTranslatef(1,100,0);
	tree2();
	glTranslatef(-1,-100,0);
	glTranslatef(1,100,0);
	grass();
	glTranslatef(-1,-100,0);
	glTranslatef(130,100,0);
	grass();
	glTranslatef(-130,-100,0);
	glTranslatef(179,100,0);
	grass();
	glTranslatef(-179,-100,0);
	glTranslatef(189,100,0);
	grass();
	glTranslatef(-189,-100,0);
	glTranslatef(223,100,0);
	grass();
	glTranslatef(-223,-100,0);
	glTranslatef(249,100,0);
	grass();
	glTranslatef(-249,-100,0);
	glTranslatef(288,100,0);
	grass();
	glTranslatef(-288,-100,0);
	glTranslatef(338,100,0);
	grass();
	glTranslatef(-338,-100,0);
	glTranslatef(378,100,0);
	grass();
	glTranslatef(-378,-100,0);
	glTranslatef(388,100,0);
	grass();
	glTranslatef(-388,-100,0);
	glTranslatef(500,100,0);
	grass();
	glTranslatef(-500,-100,0);
	glTranslatef(600,100,0);
	grass();
	glTranslatef(-600,-100,0);
	glTranslatef(50,100,0);
	grass();
	glTranslatef(-50,-100,0);
	glTranslatef(-50,100,0);
	grass();
	glTranslatef(50,-100,0);
	glTranslatef(-150,100,0);
	grass();
	glTranslatef(150,-100,0);
	glTranslatef(-200,100,0);
	grass();
	glTranslatef(200,-100,0);
	glTranslatef(-680,-650,0);
	grass1();
	glTranslatef(680,650,0);
	/*glTranslatef(-900,-650,0);
	grass1();
	glTranslatef(900,650,0);
	glTranslatef(-550,-650,0);
	grass1();
	glTranslatef(550,650,0);
	glTranslatef(-400,-650,0);
	grass1();
	glTranslatef(400,650,0);
	glTranslatef(-300,-650,0);
	grass1();
	glTranslatef(300,650,0);
	glTranslatef(-300,-650,0);
	grass1();
	glTranslatef(300,650,0);
	glTranslatef(-175,-650,0);
	grass1();
	glTranslatef(175,650,0);
	glTranslatef(-75,-650,0);
	grass1();
	glTranslatef(75,650,0);
	glTranslatef(-10,-650,0);
	grass1();
	glTranslatef(10,650,0);
	glTranslatef(75,650,0);
	grass1();
	glTranslatef(-75,-650,0);
	
	
	glTranslatef(150,-600,0);
	grass1();
	glTranslatef(-150,650,0);
	glTranslatef(250,-550,0);
	grass1();
	glTranslatef(-250,550,0);*/
	glTranslatef(-300,-700,0);
	grass1();
	glTranslatef(300,700,0);
	glTranslatef(-400,-700,0);
	grass1();
	glTranslatef(400,700,0);
	glTranslatef(-500,-700,0);
	grass1();
	glTranslatef(500,700,0);
	glTranslatef(-600,-700,0);
	grass1();
	glTranslatef(600,700,0);
	glTranslatef(-700,-700,0);
	grass1();
	glTranslatef(700,700,0);
	glTranslatef(-800,-700,0);
	grass1();
	glTranslatef(800,700,0);
	glTranslatef(-900,-700,0);
	grass1();
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(900,700,0);
	glTranslatef(-1000,-700,0);
	grass1();
	glTranslatef(1000,700,0);
	glTranslatef(10,-700,0);
	grass1();
	glTranslatef(-10,700,0);
	glTranslatef(110,-700,0);
	grass1();
	glTranslatef(-110,700,0);
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(-30,-700,0);
	grass1();
	glTranslatef(30,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-90,-700,0);
	grass1();
	glTranslatef(90,700,0);
	glTranslatef(-170,-700,0);
	grass1();
	glTranslatef(170,700,0);
	
	//////////////
	glTranslatef(500,-200,0);
	stone1();
	glTranslatef(-500,200,0);
	glTranslatef(550,-150,0);
	stone1();
	glTranslatef(-550,150,0);
	glTranslatef(575,-100,0);
	stone1();
	glTranslatef(-575,100,0);
	glTranslatef(450,-200,0);
	stone1();
	glTranslatef(-450,200,0);
	glTranslatef(400,-250,0);
	stone1();
	glTranslatef(-400,250,0);
	glTranslatef(350,-150,0);
	stone1();
	glTranslatef(-350,150,0);
	glTranslatef(350,-100,0);
	stone1();
	glTranslatef(-350,100,0);
	glTranslatef(400,-50,0);
	stone1();
	glTranslatef(-400,50,0);
	glTranslatef(450,-100,0);
	stone1();
	glTranslatef(-450,100,0);
	glTranslatef(425,-150,0);
	stone1();
	glTranslatef(-425,150,0);
	glTranslatef(525,-150,0);
	stone1();
	glTranslatef(-525,150,0);
	glTranslatef(400,-150,0);
	stone1();
	glTranslatef(-400,150,0);
	glTranslatef(350,-175,0);
	stone1();
	glTranslatef(-350,175,0);
	///////////////////////
	
	glTranslatef(-100,-100,0);
	stone2();
	glTranslatef(100,100,0);
	glTranslatef(-130,-100,0);
	stone2();
	glTranslatef(130,100,0);
	glTranslatef(-120,-100,0);
	stone2();
	glTranslatef(120,100,0);
	glTranslatef(-140,-100,0);
	stone2();
	glTranslatef(140,100,0);
	glTranslatef(-150,-100,0);
	stone2();
	glTranslatef(150,100,0);
	grass3();
	glTranslatef(225,100,0);
	grass3();
	glTranslatef(-225,-100,0);
	glTranslatef(325,130,0);
	grass3();
	glTranslatef(-325,-130,0);
	glTranslatef(435,79,0);
	grass3();
	glTranslatef(-435,-79,0);
	glTranslatef(175,85,0);
	grass3();
	glTranslatef(-175,-85,0);
	glTranslatef(500,60,0);
	note();
	glTranslatef(-500,-60,0);
	cloud();
	glColor3f(0.000f, 0.000f, 0.545f);
	output(260,910,"Astralopithecus africans");
	glColor3f(0.000,0.000,0.000);
	output(250,880,"lived 3.4 to 2.9 millian years ago");
	output(220,850,"its height will be raised to 3.5 to 5 feet");
	output(215,820,"it was considered as a 'killer ape'");
	output(200,100,"PRESS 'C' TO CONTINUE");
	/////////////////////////////////////////////////////////
	glColor3f(0.000f, 0.000f, 0.545f);
	output(840,290,"Scientific classification");
	glColor3f(0.502f, 0.000f, 0.000f);
	output(840,265,"Kingdom : Animalia");
	output(840,235,"Phylum	: Chordata");
	output(840,205,"Class   : Mammalia");
	output(840,175,"Order   : Primates");
	output(840,145,"Family  : Hominidae");
	//////////////////////////////////////////////////////////
	
	human3();
	glFlush();
}
void fifthpage(void)				/////fourth stage of human evolution Homo habils
{
	glClear(GL_COLOR_BUFFER_BIT);
	sky();
	ground();
	water();
	////////////////////////////		//tree
	glTranslatef(1,100,0);
	tree();
	glTranslatef(-1,-100,0);
	glTranslatef(290,100,0);
	tree2();
	glTranslatef(-290,-100,0);
	glTranslatef(180,100,0);
	tree();
	glTranslatef(-180,-100,0);
	glTranslatef(100,100,0);
	tree2();
	glTranslatef(-100,-100,0);
	glTranslatef(300,100,0);
	tree();
	glTranslatef(-300,-100,0);
	glTranslatef(350,100,0);
	tree2();
	glTranslatef(-350,-100,0);
	glTranslatef(450,100,0);
	tree2();
	glTranslatef(-450,-100,0);
	//////////////////////////		stone1
	glTranslatef(500,-200,0);
	stone1();
	glTranslatef(-500,200,0);
	glTranslatef(550,-150,0);
	stone1();
	glTranslatef(-550,150,0);
	glTranslatef(575,-100,0);
	stone1();
	glTranslatef(-575,100,0);
	glTranslatef(450,-200,0);
	stone1();
	glTranslatef(-450,200,0);
	glTranslatef(400,-250,0);
	stone1();
	glTranslatef(-400,250,0);
	glTranslatef(350,-150,0);
	stone1();
	glTranslatef(-350,150,0);
	glTranslatef(350,-100,0);
	stone1();
	glTranslatef(-350,100,0);
	glTranslatef(400,-50,0);
	stone1();
	glTranslatef(-400,50,0);
	glTranslatef(450,-100,0);
	stone1();
	glTranslatef(-450,100,0);
	glTranslatef(425,-150,0);
	stone1();
	glTranslatef(-425,150,0);
	glTranslatef(525,-150,0);
	stone1();
	glTranslatef(-525,150,0);
	glTranslatef(400,-150,0);
	stone1();
	glTranslatef(-400,150,0);
	glTranslatef(350,-175,0);
	stone1();
	glTranslatef(-350,175,0);
	///////////////////////////  grass
	glTranslatef(-680,-650,0);
	grass1();
	glTranslatef(680,650,0);
	glTranslatef(-600,-650,0);
	grass1();
	glTranslatef(600,650,0);
	glTranslatef(1,-300,0);
	grass();
	glTranslatef(-1,300,0);
	glTranslatef(10,-315,0);
	grass();
	glTranslatef(-10,315,0);
	glTranslatef(35,-325,0);
	grass();
	glTranslatef(-35,325,0);
	glTranslatef(-75,-325,0);
	grass();
	glTranslatef(75,325,0);
	glTranslatef(60,-315,0);
	grass();
	glTranslatef(-60,315,0);
	glTranslatef(100,-315,0);
	grass();
	glTranslatef(-100,315,0);
	glTranslatef(150,-315,0);
	grass();
	glTranslatef(-150,315,0);
	glTranslatef(195,-315,0);
	grass();
	glTranslatef(-195,315,0);
	glTranslatef(215,-315,0);
	grass();
	glTranslatef(-215,315,0);
	glTranslatef(250,-315,0);
	grass();
	glTranslatef(-250,315,0);
	glTranslatef(275,-315,0);
	grass();
	glTranslatef(-275,315,0);
	glTranslatef(300,-315,0);
	grass();
	glTranslatef(-300,315,0);
	glTranslatef(400,-315,0);
	grass();
	glTranslatef(-400,315,0);
	glTranslatef(450,-310,0);
	grass();
	glTranslatef(-450,310,0);
	glTranslatef(500,-310,0);
	grass();
	glTranslatef(-500,310,0);
	glTranslatef(600,-315,0);
	grass();
	glTranslatef(-600,315,0);
	glTranslatef(1,100,0);
	grass();
	glTranslatef(-1,-100,0);
	glTranslatef(50,100,0);
	grass();
	glTranslatef(-50,-100,0);
	glTranslatef(-50,100,0);
	grass();
	glTranslatef(50,-100,0);
	glTranslatef(-150,100,0);
	grass();
	glTranslatef(150,-100,0);
	glTranslatef(-200,100,0);
	grass();
	glTranslatef(200,-100,0);
	///////////////////////////
	glTranslatef(-180,-100,0);
	tree1();
	glTranslatef(180,100,0);
	glTranslatef(900,100,0);
	tree2();
	glTranslatef(-900,-100,0);

	//////////////////////////
	glTranslatef(40,-80,0);			//stone
	stone();
	glTranslatef(-40,80,0);
	glTranslatef(20,-80,0);
	stone();
	glTranslatef(-20,80,0);
	glTranslatef(50,-80,0);
	stone();
	glTranslatef(-50,80,0);
	
	
	/////////////////////////
	cloud();
	
	
	
	glTranslatef(-40,-15,0);
	fireman();
	glTranslatef(40,15,0);
	glTranslatef(-120,50,0);
	stone2();
	glTranslatef(120,-50,0);
	glTranslatef(-150,-40,0);
	stone2();
	glTranslatef(150,40,0);
	glTranslatef(-160,-40,0);
	stone2();
	glTranslatef(160,40,0);
	glTranslatef(-170,-40,0);
	stone2();
	glTranslatef(170,40,0);
	glTranslatef(-180,-40,0);
	stone2();
	glTranslatef(180,40,0);
	glTranslatef(-190,-40,0);
	stone2();
	glTranslatef(190,40,0);
	glTranslatef(-190,-40,0);
	stone2();
	glTranslatef(190,40,0);
	glTranslatef(500,100,0);///////////////////note
	note();
	glTranslatef(-500,-100,0);
	//////////////////////////////////////
	/////////////////////////////
	human4();
	glColor3f(0.000f, 0.000f, 0.545f);
	output(280,920,"Homo habils");
	glColor3f(0.000,0.000,0.000);
	output(250,880,"lived 2.4 to 1.5 millian years ago");
	output(220,850,"first species to make a use of stone");
	output(250,820,"brain is larger in size");
	output(200,100,"PRESS 'D' TO CONTINUE");
	//////////////////////////////////
	glColor3f(0.000f, 0.000f, 0.545f);
	output(840,345,"Scientific classification");
	glColor3f(0.502f, 0.000f, 0.000f);
	output(840,320,"Kingdom : Animalia");
	output(840,290,"Phylum	: Chordata");
	output(840,260,"Class   : Mammalia");
	output(840,230,"Order   : Primates");
	output(840,200,"Family  : Hominidae");
	glFlush();
}

void sixthpage(void)              	///////Fifth stage Homoerectus
{
	glClear(GL_COLOR_BUFFER_BIT);
	sky();
	ground1();
	
	glTranslatef(1,100,0);
	tree();
	glTranslatef(-1,-100,0);
	glTranslatef(90,100,0);
	tree2();
	glTranslatef(-90,-100,0);
	glTranslatef(250,100,0);
	tree2();
	glTranslatef(-250,-100,0);
	glTranslatef(370,100,0);
	tree();
	glTranslatef(-370,-100,0);
	glTranslatef(-300,-700,0);
	grass1();
	glTranslatef(300,700,0);
	glTranslatef(-400,-700,0);
	grass1();
	glTranslatef(400,700,0);
	glTranslatef(-500,-700,0);
	grass1();
	glTranslatef(500,700,0);
	glTranslatef(-600,-700,0);
	grass1();
	glTranslatef(600,700,0);
	glTranslatef(-700,-700,0);
	grass1();
	glTranslatef(700,700,0);
	glTranslatef(-800,-700,0);
	grass1();
	glTranslatef(800,700,0);
	glTranslatef(-900,-700,0);
	grass1();
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(900,700,0);
	glTranslatef(-1000,-700,0);
	grass1();
	glTranslatef(1000,700,0);
	glTranslatef(10,-700,0);
	grass1();
	glTranslatef(-10,700,0);
	glTranslatef(110,-700,0);
	grass1();
	glTranslatef(-110,700,0);
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(-30,-700,0);
	grass1();
	glTranslatef(30,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-90,-700,0);
	grass1();
	glTranslatef(90,700,0);
	glTranslatef(-170,-700,0);
	grass1();
	glTranslatef(170,700,0);
	glTranslatef(1,100,0);
	grass();
	glTranslatef(-1,-100,0);
	glTranslatef(50,100,0);
	grass();
	glTranslatef(-50,-100,0);
	glTranslatef(-70,100,0);
	grass();
	glTranslatef(70,-100,0);
	glTranslatef(-130,100,0);
	grass();
	glTranslatef(130,-100,0);
	glTranslatef(430,100,0);
	grass();
	glTranslatef(-430,-100,0);
	glTranslatef(480,100,0);
	grass();
	glTranslatef(-480,-100,0);
	glTranslatef(530,110,0);
	grass();
	glTranslatef(-530,-110,0);
	glTranslatef(560,100,0);
	grass();
	glTranslatef(-560,-100,0);
	glTranslatef(-160,-50,0);
	fire();
	glTranslatef(160,50,0);
	glTranslatef(-180,-15,0);
	fireman();
	glTranslatef(180,15,0);
	glTranslatef(70,-30,0);
	cave();
	glTranslatef(-70,30,0);
	glTranslatef(500,-200,0);
	stone1();
	glTranslatef(-500,200,0);
	glTranslatef(550,-150,0);
	stone1();
	glTranslatef(-550,150,0);
	glTranslatef(575,-100,0);
	stone1();
	glTranslatef(-575,100,0);
	glTranslatef(450,-200,0);
	stone1();
	glTranslatef(-450,200,0);
	glTranslatef(400,-250,0);
	stone1();
	glTranslatef(-400,250,0);
	glTranslatef(350,-150,0);
	stone1();
	glTranslatef(-350,150,0);
	glTranslatef(350,-100,0);
	stone1();
	glTranslatef(-350,100,0);
	glTranslatef(400,-50,0);
	stone1();
	glTranslatef(-400,50,0);
	glTranslatef(450,-100,0);
	stone1();
	glTranslatef(-450,100,0);
	glTranslatef(425,-150,0);
	stone1();
	glTranslatef(-425,150,0);
	glTranslatef(525,-150,0);
	stone1();
	glTranslatef(-525,150,0);
	glTranslatef(400,-150,0);
	stone1();
	glTranslatef(-400,150,0);
	glTranslatef(350,-175,0);
	stone1();
	glTranslatef(-350,175,0);
	cloud();
	glTranslatef(500,100,0);///////////////////note
	note();
	glTranslatef(-500,-100,0);
	erectus();
	/*int static k=0;
	if(k<=500)
	{
	glTranslatef(k,0,0);
	erectus();
	glTranslatef(-k,0,0);
	k=k+1;
	}
	else
	{
	glTranslatef(k,0,0);
	erectus();
	glTranslatef(-k,0,0);
	glutPostRedisplay();
	}*/
	glColor3f(0.000f, 0.000f, 0.545f);
	output(280,920,"Homo erectus");
	glColor3f(0.000,0.000,0.000);
	output(250,880,"lived 1.8 million to 300,000 years ago");
	output(220,850,"first species to make a use of fire");
	//output(250,820,"brain is larger in size");
	output(200,100,"PRESS E' TO CONTINUE");
	glColor3f(0.000f, 0.000f, 0.545f);
	output(840,345,"Scientific classification");
	glColor3f(0.502f, 0.000f, 0.000f);
	output(840,320,"Kingdom : Animalia");
	output(840,290,"Phylum	: Chordata");
	output(840,260,"Class   : Mammalia");
	output(840,230,"Order   : Primates");
	output(840,200,"Family  : Hominidae");
	glFlush();
	
	
}
void seventhpage(void)			/////sixth stage homosapiens
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	ground();
	sky();
	water();
	glTranslatef(1,100,0);
	tree();
	glTranslatef(-1,-100,0);
	glTranslatef(90,100,0);
	tree2();
	glTranslatef(-90,-100,0);
	glTranslatef(250,100,0);
	tree2();
	glTranslatef(-250,-100,0);
	glTranslatef(450,100,0);
	tree2();
	glTranslatef(-450,-100,0);
	glTranslatef(370,100,0);
	tree();
	glTranslatef(-370,-100,0);
	glTranslatef(-300,-700,0);
	grass1();
	glTranslatef(300,700,0);
	glTranslatef(-400,-700,0);
	grass1();
	glTranslatef(400,700,0);
	glTranslatef(-500,-700,0);
	grass1();
	glTranslatef(500,700,0);
	glTranslatef(-600,-700,0);
	grass1();
	glTranslatef(600,700,0);
	glTranslatef(-700,-700,0);
	grass1();
	glTranslatef(700,700,0);
	glTranslatef(-800,-700,0);
	grass1();
	glTranslatef(800,700,0);
	glTranslatef(-900,-700,0);
	grass1();
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(900,700,0);
	glTranslatef(-1000,-700,0);
	grass1();
	glTranslatef(1000,700,0);
	glTranslatef(10,-700,0);
	grass1();
	glTranslatef(-10,700,0);
	glTranslatef(110,-700,0);
	grass1();
	glTranslatef(-110,700,0);
	glTranslatef(210,-700,0);
	grass1();
	glTranslatef(-210,700,0);
	glTranslatef(-30,-700,0);
	grass1();
	glTranslatef(30,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-50,-700,0);
	grass1();
	glTranslatef(50,700,0);
	glTranslatef(-90,-700,0);
	grass1();
	glTranslatef(90,700,0);
	glTranslatef(-170,-700,0);
	grass1();
	glTranslatef(170,700,0);
	glTranslatef(1,100,0);
	grass();
	glTranslatef(-1,-100,0);
	glTranslatef(50,100,0);
	grass();
	glTranslatef(-50,-100,0);
	glTranslatef(-70,100,0);
	grass();
	glTranslatef(70,-100,0);
	glTranslatef(-130,100,0);
	grass();
	glTranslatef(130,-100,0);
	glTranslatef(430,100,0);
	grass();
	glTranslatef(-430,-100,0);
	glTranslatef(480,100,0);
	grass();
	glTranslatef(-480,-100,0);
	glTranslatef(530,110,0);
	grass();
	glTranslatef(-530,-110,0);
	glTranslatef(560,100,0);
	grass();
	glTranslatef(-560,-100,0);
	
	
	glTranslatef(500,-200,0);
	stone1();
	glTranslatef(-500,200,0);
	glTranslatef(550,-150,0);
	stone1();
	glTranslatef(-550,150,0);
	glTranslatef(575,-100,0);
	stone1();
	glTranslatef(-575,100,0);
	glTranslatef(450,-200,0);
	stone1();
	glTranslatef(-450,200,0);
	glTranslatef(400,-250,0);
	stone1();
	glTranslatef(-400,250,0);
	glTranslatef(350,-150,0);
	stone1();
	glTranslatef(-350,150,0);
	glTranslatef(350,-100,0);
	stone1();
	glTranslatef(-350,100,0);
	glTranslatef(400,-50,0);
	stone1();
	glTranslatef(-400,50,0);
	glTranslatef(450,-100,0);
	stone1();
	glTranslatef(-450,100,0);
	glTranslatef(425,-150,0);
	stone1();
	glTranslatef(-425,150,0);
	glTranslatef(525,-150,0);
	stone1();
	glTranslatef(-525,150,0);
	glTranslatef(400,-150,0);
	stone1();
	glTranslatef(-400,150,0);
	glTranslatef(350,-175,0);
	stone1();
	glTranslatef(-350,175,0);
	cloud();
	glTranslatef(500,100,0);///////////////////note
	note();
	glTranslatef(-500,-100,0);
	////////////////////////////		//tree
	glColor3f(0.000f, 0.000f, 0.545f);
	output(280,920,"Homo sapiens");
	glColor3f(0.000,0.000,0.000);
	output(250,880,"Homo sapiens is a wise species");
	output(180,850,"Homo sapiens also called as Homo sapien sapiens");
	//output(250,820,"brain is larger in size");
	output(200,100,"PRESS 'F' TO CONTINUE");
	glColor3f(0.000f, 0.000f, 0.545f);
	output(840,345,"Scientific classification");
	glColor3f(0.502f, 0.000f, 0.000f);
	output(840,320,"Kingdom : Animalia");
	output(840,290,"Phylum	: Chordata");
	output(840,260,"Class   : Mammalia");
	output(840,230,"Order   : Primates");
	output(840,200,"Family  : Hominidae");
	glFlush();
	homosapiens();
	
	glFlush();
}
void eightpage(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	ground();
	sky();
	glTranslatef(20,100,0);
	human2();
	glTranslatef(-20,-100,0);
	glTranslatef(180,100,0);
	human3();
	glTranslatef(-180,-100,0);
	glTranslatef(330,100,0);
	human4();
	glTranslatef(-330,-100,0);
	glTranslatef(480,100,0);
	erectus();
	glTranslatef(-480,-100,0);
	glTranslatef(600,100,0);
	homosapiens();
	glTranslatef(-600,-100,0);
	glTranslatef(-145,100,0);
	human1();
	glTranslatef(145,-100,0);
	glColor3f(0.000,0.000,0.000);
	output(20,260,"Ardipithecus Ramidus");
	output(180,260,"Australopithecus anamensis");
	output(365,260,"Australopithecus africans");
	output(550,260,"Homo habils");
	output(680,260,"Homo erectus");
	output(870,260,"Homo sapiens");
	glFlush();
}
void seventhkeys(unsigned char firstwindow,int x,int y)
{
	
	if(firstwindow=='F' || firstwindow=='f')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id8=glutCreateWindow("HUMAN EVOLUTION6");
	//glutDestroyWindow(id5);
	glutDisplayFunc(eightpage);
	myinit1();
	//glutMainLoop();
		
	//glClearColor(0.678f, 0.847f, 0.902f,0.000);
	}
}
void sixthkeys(unsigned char firstwindow,int x,int y)
{
	
	if(firstwindow=='E' || firstwindow=='e')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id7=glutCreateWindow("HUMAN EVOLUTION6");
	//glutDestroyWindow(id5);
	glutDisplayFunc(seventhpage);
	glutKeyboardFunc(seventhkeys);
	myinit1();
	//glutMainLoop();
		
	//glClearColor(0.678f, 0.847f, 0.902f,0.000);
	}
}

void fifthkeys(unsigned char firstwindow,int x,int y)
{
	
	if(firstwindow=='D' || firstwindow=='d')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id6=glutCreateWindow("HUMAN EVOLUTION5");
	//glutDestroyWindow(id5);
	glutDisplayFunc(sixthpage);
	glutKeyboardFunc(sixthkeys);
	myinit1();
	//glutMainLoop();
		
	//glClearColor(0.678f, 0.847f, 0.902f,0.000);
	}
}

void fourthkeys(unsigned char firstwindow,int x,int y)
{
	
	if(firstwindow=='C' || firstwindow=='c')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id5=glutCreateWindow("HUMAN EVOLUTION4");
	//glutDestroyWindow(id4);
	glutDisplayFunc(fifthpage);
	glutKeyboardFunc(fifthkeys);
	myinit1();
	//glutMainLoop();
		
	//glClearColor(0.678f, 0.847f, 0.902f,0.000);
	}
}
void thirdkeys(unsigned char firstwindow,int x,int y)
{
	
	if(firstwindow=='B' || firstwindow=='b')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id4=glutCreateWindow("HUMAN EVOLUTION3");
	//glutDestroyWindow(id3);
	glutDisplayFunc(fourthpage);
	glutKeyboardFunc(fourthkeys);
	myinit1();
	//glutMainLoop();
		
	glClearColor(0.678f, 0.847f, 0.902f,0.000);
	}
}
void secondkeys(unsigned char firstwindow,int x,int y)
{
	
	if(firstwindow=='A' || firstwindow=='a')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id3=glutCreateWindow("HUMAN EVOLUTION2");
	//glutDestroyWindow(id2);
	glutDisplayFunc(thirdpage);
	glutKeyboardFunc(thirdkeys);
	myinit1();
	//glutMainLoop();
		
	//glClearColor(1.0,1.0,1.0,0.0);
	}
}
void firstwindow(unsigned char firstwindow,int x,int y)
{
	if(firstwindow=='S' || firstwindow=='s')
	{
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1400,900);
	id2=glutCreateWindow("HUMAN EVOLUTION");
	//glutDestroyWindow(id1);
	glutDisplayFunc(secondpage);
	glutKeyboardFunc(secondkeys);
	myinit();
	//glutMainLoop();
		
	//glClearColor(1.0,1.0,1.0,0.0);
	}
}


int main(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1400,900);
	glutInitWindowPosition(0,0);
	id1=glutCreateWindow("HUMAN EVOLUTION");
	glutDisplayFunc(display);
	glutKeyboardFunc(firstwindow);
	myinit();
	glutMainLoop();	
}

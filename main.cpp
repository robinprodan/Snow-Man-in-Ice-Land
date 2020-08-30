#include<windows.h>
#ifdef __APPLE__
#include<GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

float snow1 = 0, snow2 = 0, snow3 = 0, theta;
void timer(int);

float p=-180.0;

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    gluOrtho2D(-180,180,-180,180);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{

    glBegin(GL_POLYGON);
    glVertex2f(cx,cy);

    for(int i=0; i<=360; i++)

    {
        float angle = i* 3.1416/180;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();

}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

if(p<=180)
       p=p+.09;
      else
        p=-180;
    glutPostRedisplay();

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i (-15,13);
    glVertex2i (15,13); //hats
    glVertex2i (15, 20);
    glVertex2i (-15, 20);

    glEnd();

    glColor3ub (102,204,0);
    glBegin(GL_POLYGON);

    glVertex2i (-180,-180);
    glVertex2i (180,-180); //ground
    glVertex2i (180,-10);
    glVertex2i (-180,-10);

    glEnd();

    glColor3ub (102,51,0);
    glBegin(GL_POLYGON);
    glVertex2i (-120,-120); //tree1
    glVertex2i (-110, -120);
    glVertex2i (-110, -20);
    glVertex2i (-120, -20);
    glEnd();

    glColor3ub (0,153,0);
    glBegin(GL_TRIANGLES);
    glVertex2i (-140,-20); //tree2
    glVertex2i (-90, -20);
    glVertex2i (-110,90);

    glEnd();

    glColor3ub (102,51,0);
    glBegin(GL_POLYGON);
    glVertex2i (-63,-110); //tee3
    glVertex2i (-55,-110);
    glVertex2i (-55, 20);
    glVertex2i (-63, 20);
    glEnd();

    glColor3ub (0,153,0);
    glBegin(GL_TRIANGLES);
    glVertex2i (-85,20); //tree3
    glVertex2i (-30, 20);
    glVertex2i (-58,100);

    glEnd();

    glColor3ub (0,153,0);
    glBegin(GL_TRIANGLES);
    glVertex2i (-90,40); //tree3
    glVertex2i (-28, 40);
    glVertex2i (-58,130);

    glEnd();

    glColor3ub (103,76,0);
    glBegin(GL_TRIANGLES);
    glVertex2i (50,-10); //mountain
    glVertex2i (180,-10);
    glVertex2i (135,120);

    glEnd();

    glColor3f (1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2i (110,80); //mountain2
    glVertex2i (150,80);
    glVertex2i (135,120);

    glEnd();

    glColor3f (1.0,.5,0.0);
    glBegin(GL_POLYGON);
    glVertex2i (+50,-80); //tree4
    glVertex2i (+55, -80);
    glVertex2i (+55, 90);
    glVertex2i (+50, 90);

    glEnd();

    glColor3f (0.0,.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2i (+60,-90); //home
    glVertex2i (+160, -90);
    glVertex2i (+160, -20);
    glVertex2i (+60, -20);

    glEnd();

    glColor3f (1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i (+50,-20); //home_roof
    glVertex2i (+170, -20);
    glVertex2i (+170, 8);
    glVertex2i (+40, 10);

    glEnd();

    glColor3f (.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2i (+100,-90); //home_door
    glVertex2i (+125, -90);
    glVertex2i (+125, -35);
    glVertex2i (+100,-35);

    glEnd();

    glColor3f (.5,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex2i (+100,-90); //home_door
    glVertex2i (+115, -86);
    glVertex2i (+115, -39);
    glVertex2i (+100,-35);

    glEnd();

    glColor3f (0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i (+60,-100); //home_bottom part
    glVertex2i (+160, -100);
    glVertex2i (+160, -90);
    glVertex2i (+60,-90);

    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i (21,-35);
    glVertex2i (48,-47);
    glVertex2i (45,-43); //hand
    glVertex2i (21,-30);
    glEnd();

    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i (-21,-35);
    glVertex2i (-48,-47); //hand
    glVertex2i (-45,-43);
    glVertex2i (-21,-30);
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i (-13,13); //cap
    glVertex2i (13,13);
    glVertex2i (15, 40);
    glVertex2i (-15, 40);

    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0,0,0);
    circle(15,15,0,0);//head serial
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(6,5,0);
    circle(2,2,0,0);//eye
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(-6,5,0);
    circle(2,2,0,0);//eye
    glPopMatrix();

    glColor3f (1.0,.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i (0,0); //nose
    glVertex2i (0, -8);
    glVertex2i (8, -8);

    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0,-30,0); //2nd circle
    circle(22,20,0,0);
    glPopMatrix();

    glColor3f(1.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(0,-18,0); //button
    circle(1.2,1.2,0,0);
    glPopMatrix();

    glColor3f(1.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(0,-22,0); //button
    circle(1.2,1.2,0,0);
    glPopMatrix();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0,-58,0); //3rd cycle
    circle(25,25,0,0);
    glPopMatrix();

    glColor3f(0.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0,-58,0); //3rd cycle point
    circle(2,2,0,0);
    glPopMatrix();

    glColor3f(1.0f, 0.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0,-65,0); //3rd cycle point
    circle(2,2,0,0);
    glPopMatrix();

    //tree start here
    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++)
    {
        theta = i*3.14/180;
        glVertex2f(30*cos(theta)+30, 30*sin(theta)+90);
    }
    glEnd();
    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++)
    {
        theta = i*3.14/180;
        glVertex2f(30*cos(theta)+50, 30*sin(theta)+93);
    }
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++)
    {
        theta = i*3.14/180;
        glVertex2f(30*cos(theta)+70, 30*sin(theta)+93);
    }
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++)
    {
        theta = i*3.14/180;
        glVertex2f(30*cos(theta)+30, 30*sin(theta)+120);
    }
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++)
    {
        theta = i*3.14/180;
        glVertex2f(30*cos(theta)+70, 30*sin(theta)+120);
    }
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i <= 360; i++)
    {
        theta = i*3.14/180;
        glVertex2f(30*cos(theta)+50, 30*sin(theta)+140);
    }
    glEnd();
    //tree ends here

    //snow starts here
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-50,191+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-20,184+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0,227+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(50,180+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(10,171+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-30,254+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-150,167+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-120,182+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(10,192+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(150,215+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(110,175+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-130,162+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(135,202+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(120,188+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(22,203+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(55,175+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(110,165+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-30,207+snow3);
    glEnd();

    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(50,220+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(20,250+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(30,188+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-50,265+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-10,181+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(35,241+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(150,166+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(120,222+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-17,192+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-157,195+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-119,189+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(133,192+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-142,186+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-124,192+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-22,185+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-55,191+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-110,198+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-30,186+snow3);
    glEnd();



    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-40,191+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-10,184+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(10,227+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(40,180+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0,171+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-20,254+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-140,167+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-110,182+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(20,192+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(160,215+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(145,175+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-120,162+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(125,202+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(110,188+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(12,203+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(45,175+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(100,165+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-20,207+snow3);
    glEnd();

    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(40,220+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(10,250+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(70,188+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-70,265+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-57,181+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(65,241+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(175,166+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(165,222+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-7,192+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-147,195+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-109,189+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(123,192+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-132,186+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-114,192+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-12,185+snow3);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-45,191+snow2);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-100,198+snow1);
    glEnd();
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(-60,186+snow3);
    glEnd();

    //ends here


    //big snow start left


  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0,-p+90,0);
    circle(2,2,0,0);
    glPopMatrix();

  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(20,-p+80,0);
    circle(1,1,0,0);
    glPopMatrix();


     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(30,-p+100,0);
    circle(2,2,0,0);
    glPopMatrix();


      glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(40,-p+70,0);
    circle(2,2,0,0);
    glPopMatrix();

  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(50,-p+40,0);
    circle(2.5,2.5,0,0);
    glPopMatrix();


glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(70,-p+90,0);
    circle(1,1,0,0);
    glPopMatrix();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(85,-p+80,0);
    circle(1,1,0,0);
    glPopMatrix();


    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(100,-p+30,0);
    circle(2,2,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(120,-p+48,0);
    circle(3,3,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(130,-p+68,0);
    circle(1,1,0,0);
    glPopMatrix();

 glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(150,-p+28,0);
    circle(2,2,0,0);
    glPopMatrix();

//end big snow left



//right big snow




  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-20,-p+80,0);
    circle(1,1,0,0);
    glPopMatrix();


     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-30,-p+100,0);
    circle(2,2,0,0);
    glPopMatrix();


      glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-40,-p+70,0);
    circle(2,2,0,0);
    glPopMatrix();

  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-50,-p+40,0);
    circle(2.5,2.5,0,0);
    glPopMatrix();


glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-70,-p+90,0);
    circle(1,1,0,0);
    glPopMatrix();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-85,-p+80,0);
    circle(1,1,0,0);
    glPopMatrix();


    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-100,-p+30,0);
    circle(2,2,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-120,-p+48,0);
    circle(3,3,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-130,-p+68,0);
    circle(1,1,0,0);
    glPopMatrix();

 glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-150,-p+28,0);
    circle(2,2,0,0);
    glPopMatrix();











//end right big snow


   //snow on land
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-150,-150,0);
    circle(2,2,0,0);
    glPopMatrix();



  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-20,-130,0);
    circle(1,1,0,0);
    glPopMatrix();


     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-30,-145,0);
    circle(2,2,0,0);
    glPopMatrix();


      glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-40,-130,0);
    circle(2,2,0,0);
    glPopMatrix();

  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-50,-110,0);
    circle(2.5,2.5,0,0);
    glPopMatrix();


glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-70,-170,0);
    circle(1,1,0,0);
    glPopMatrix();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-85,-150,0);
    circle(1,1,0,0);
    glPopMatrix();


    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-100,-120,0);
    circle(2,2,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-120,-148,0);
    circle(3,3,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-130,-168,0);
    circle(1,1,0,0);
    glPopMatrix();





    //right

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(150,-150,0);
    circle(2,2,0,0);
    glPopMatrix();



  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(20,-130,0);
    circle(1,1,0,0);
    glPopMatrix();


     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(30,-145,0);
    circle(2,2,0,0);
    glPopMatrix();


      glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(40,-130,0);
    circle(2,2,0,0);
    glPopMatrix();

  glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(50,-110,0);
    circle(2.5,2.5,0,0);
    glPopMatrix();


glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(70,-170,0);
    circle(1,1,0,0);
    glPopMatrix();

    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(85,-150,0);
    circle(1,1,0,0);
    glPopMatrix();


    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(100,-120,0);
    circle(2,2,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(120,-148,0);
    circle(3,3,0,0);
    glPopMatrix();

     glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(130,-168,0);
    circle(1,1,0,0);
    glPopMatrix();


   //end snow on land


    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(160,160,0); //moon
    circle(16,16,0,0);
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(170,170,0); //moon
    circle(20,20,0,0);
    glPopMatrix();

    glFlush();





}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1500/60, timer, 0);
    if (snow1 > -280)
    {
        snow1-=1;
    }
    if (snow2 > -280)
    {
        snow2-=2;
    }
    if (snow3 > -280)
    {
        snow3-=1.5;
    }
    if(snow1 <= -280)
    {
        snow1 = 181;
    }
    if(snow2 <= -280)
    {
        snow2 = 281;
    }
    if(snow3 <= -280)
    {
        snow3 = 181;
    }
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Lab project");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(1000,timer, 0);
    glutMainLoop();
    return 0;
}


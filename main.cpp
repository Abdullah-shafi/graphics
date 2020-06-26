#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846


void sound2(int val);
void time(int val);

GLfloat position = -0.2f;//cloud
GLfloat speed = 0.04f;




void update(int value) {
    if(position > 4.5)
        position = -3.0f;
    position += speed;
glutPostRedisplay();
glutTimerFunc(100, update, 0);
}

GLfloat position1 = 0.0f;//car
GLfloat speed1 = 0.04f;

void update1(int value1) {
    if(position1 > 3.5)
        position1 = -2.0f;
    position1 += speed1;
glutPostRedisplay();
glutTimerFunc(100, update1, 0);
}

GLfloat position2 = -2.0f;//boat
GLfloat speed2 = 0.02f;

void update2(int value2) {
    if(position2 > 2.0)
        position2 = -3.0f;
    position2 += speed2;
glutPostRedisplay();
glutTimerFunc(100, update2, 0);
}

GLfloat position3 = 0.0f;//fish
GLfloat speed3 = 0.02f;

void update3(int value3) {
    if(position3 > 1.8)
        position3 = -0.9f;
    position3 += speed3;
glutPostRedisplay();
glutTimerFunc(100, update3, 0);
}


GLfloat position4 = 0.0f;//train
GLfloat speed4 = 0.06f;

void update4(int value4) {
    if(position4 >4)
        position4 = -2.0f;
    position4 += speed4;
glutPostRedisplay();
glutTimerFunc(100, update4, 0);
}


GLfloat position5 = 0.0f;//sun
GLfloat speed5 = 0.006f;

void update5(int value4) {
    if(position5 <-1.5)
        position5 = 2.0f;
    position5 -= speed5;
glutPostRedisplay();
glutTimerFunc(100, update5, 0);
}

GLfloat position6 = 0.0f;//rain
GLfloat speed6 = 0.08f;

void update6(int value5) {
    if(position6 <-3.5)
        position6 = 2.8f;
    position6 -= speed6;
glutPostRedisplay();
glutTimerFunc(100, update6, 0);
}


GLfloat position7 = 0.0f;//bird sky
GLfloat speed7 = 0.06f;

void update7(int value7) {
    if(position7 >4)
        position7 =- 2.2f;
    position7 += speed7;
glutPostRedisplay();
glutTimerFunc(100, update7, 0);
}

GLfloat position8 = 0.0f;//bird1
GLfloat speed8 = 0.06f;

void update8(int value8) {
    if(position8 >3.5)
        position8 = -3.55f;
    position8 += speed8;
glutPostRedisplay();
glutTimerFunc(100, update8, 0);
}


GLfloat position9 = 0.0f;//bird2
GLfloat speed9 = 0.04f;

void update9(int value9) {
    if(position9 >3.5)
        position9 = 3.55f;
    position9 += speed9;
glutPostRedisplay();
glutTimerFunc(100, update9, 0);
}


GLfloat position10 = 0.0f;//bird1 return
GLfloat speed10 = 0.06f;

void update10(int value10) {
    if(position10 <-1.9)
        position10 = 3.1f;
    position10 -= speed10;
glutPostRedisplay();
glutTimerFunc(100, update10, 0);
}


void init() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}


void sound()
{
    PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    glutTimerFunc(14000,sound2,1);

}
void sound2(int val)
{

    PlaySound("b.wav", NULL, SND_ASYNC|SND_FILENAME);


}



void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
gluOrtho2D(-2,2,-2,2);





glBegin(GL_QUADS);//sky
glColor3ub(119,237,244);
glVertex2f(-2,2);
glVertex2f(-2,-2);
glVertex2f(2,-2);
glVertex2f(2,2);
glEnd();

glPushMatrix();
glTranslatef(position7,0.0, 0.0f);

 int i1005678921w;//bird

GLfloat x105678921w=-1.4f; GLfloat y105678921w=1.7f; GLfloat radius105678921w =.06f;
int triangleAmount105678921w = 20;

GLfloat twicePi105678921w = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x105678921w, y105678921w);
for(i1005678921w = 0; i1005678921w <= triangleAmount105678921w;i1005678921w++) {
glVertex2f(
                x105678921w + (radius105678921w * cos(i1005678921w*  twicePi105678921w / triangleAmount105678921w)),
   y105678921w + (radius105678921w * sin(i1005678921w * twicePi105678921w / triangleAmount105678921w))
);
}
  glEnd();

  int i1005678921wt;//bird

GLfloat x105678921wt=-1.54f; GLfloat y105678921wt=1.7f; GLfloat radius105678921wt =.1f;
int triangleAmount105678921wt = 20;

GLfloat twicePi105678921wt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x105678921wt, y105678921wt);
for(i1005678921wt = 0; i1005678921wt <= triangleAmount105678921wt;i1005678921wt++) {
glVertex2f(
                x105678921wt + (radius105678921wt * cos(i1005678921wt*  twicePi105678921wt / triangleAmount105678921wt)),
   y105678921wt + (radius105678921wt * sin(i1005678921wt * twicePi105678921wt / triangleAmount105678921wt))
);
}
  glEnd();


 int i1005678921wg;//bird

GLfloat x105678921wg=-1.38f; GLfloat y105678921wg=1.7f; GLfloat radius105678921wg =.02f;
int triangleAmount105678921wg = 20;

GLfloat twicePi105678921wg = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x105678921wg, y105678921wg);
for(i1005678921wg = 0; i1005678921wg <= triangleAmount105678921wg;i1005678921wg++) {
glVertex2f(
                x105678921wg + (radius105678921wg * cos(i1005678921wg*  twicePi105678921wg / triangleAmount105678921wg)),
   y105678921wg + (radius105678921wg * sin(i1005678921wg * twicePi105678921wg / triangleAmount105678921wg))
);
}
  glEnd();


   glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.7);
glVertex2f(-1.64,1.7);

glEnd();


glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.65);
glVertex2f(-1.64,1.7);

glEnd();

glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.75);
glVertex2f(-1.64,1.7);

glEnd();


glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.35,1.72);
glVertex2f(-1.3,1.7);

glEnd();



glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.35,1.68);
glVertex2f(-1.3,1.7);

glEnd();

glBegin(GL_TRIANGLES);//bird
  glColor3ub(255,69,0);
  glVertex2f(-1.55, 1.7f);
  glVertex2f(-1.65,1.85f);
  glVertex2f( -1.45,1.85f);
 glEnd();

 glPopMatrix();



/* glBegin(GL_TRIANGLES);//bird
  glColor3ub(255,0,0);
  glVertex2f(-1.6,1.7f);
  glVertex2f(-1.45,1.9f);
  glVertex2f( -1.5,1.7f);
 glEnd();*/











  int i1005678921;//hill

GLfloat x105678921=-1.6f; GLfloat y105678921=.9f; GLfloat radius105678921 =.48f;
int triangleAmount105678921 = 20;

GLfloat twicePi105678921 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x105678921, y105678921);
for(i1005678921 = 0; i1005678921 <= triangleAmount105678921;i1005678921++) {
glVertex2f(
                x105678921 + (radius105678921 * cos(i1005678921*  twicePi105678921 / triangleAmount105678921)),
   y105678921 + (radius105678921 * sin(i1005678921 * twicePi105678921 / triangleAmount105678921))
);
}
  glEnd();

  int i10056789212;//hill

GLfloat x1056789212=-1.0f; GLfloat y1056789212=.9f; GLfloat radius1056789212 =.48f;
int triangleAmount1056789212 = 20;

GLfloat twicePi1056789212 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x1056789212, y1056789212);
for(i10056789212 = 0; i10056789212 <= triangleAmount1056789212;i10056789212++) {
glVertex2f(
                x1056789212 + (radius1056789212 * cos(i10056789212*  twicePi1056789212 / triangleAmount1056789212)),
   y1056789212 + (radius1056789212 * sin(i10056789212 * twicePi1056789212 / triangleAmount1056789212))
);
}
  glEnd();


    int i105678921o;//hill

GLfloat x105678921o=-2.0f; GLfloat y105678921o=1.4f; GLfloat radius105678921o=.25f;
int triangleAmount105678921o = 20;

GLfloat twicePi105678921o = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x105678921o, y105678921o);
for(i105678921o = 0; i105678921o <= triangleAmount105678921o;i105678921o++) {
glVertex2f(
                x105678921o + (radius105678921o * cos(i105678921o*  twicePi105678921o / triangleAmount105678921o)),
   y105678921o + (radius105678921o * sin(i105678921o * twicePi105678921o / triangleAmount105678921o))
);
}
  glEnd();




  ////////////sun/////////////////



glPushMatrix();
glTranslatef(0.0,position5, 0.0f);

int i1;//sun

GLfloat x=0.2f; GLfloat y=1.75f; GLfloat radius =.2f;
int triangleAmount = 20;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,255,0);
glVertex2f(x, y);
for(i1 = 0; i1 <= triangleAmount;i1++) {
glVertex2f(
                x + (radius * cos(i1 *  twicePi / triangleAmount)),
   y + (radius * sin(i1 * twicePi / triangleAmount))
);
}
  glEnd();
glPopMatrix();




glBegin(GL_QUADS);//railLine
glColor3ub(240,230,140);
glVertex2f(-2,1.1);
glVertex2f(2,1.1);
glVertex2f(2,.67);
glVertex2f(-2,.67);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-2,.75);
glVertex2f(-1.9,.75);
glVertex2f(-1.9,1.05);
glVertex2f(-2,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.85,.75);
glVertex2f(-1.73,.75);
glVertex2f(-1.73,1.05);
glVertex2f(-1.85,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.65,.75);
glVertex2f(-1.53,.75);
glVertex2f(-1.53,1.05);
glVertex2f(-1.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.45,.75);
glVertex2f(-1.33,.75);
glVertex2f(-1.33,1.05);
glVertex2f(-1.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.25,.75);
glVertex2f(-1.13,.75);
glVertex2f(-1.13,1.05);
glVertex2f(-1.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.05,.75);
glVertex2f(-.93,.75);
glVertex2f(-.93,1.05);
glVertex2f(-1.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.85,.75);
glVertex2f(-.73,.75);
glVertex2f(-.73,1.05);
glVertex2f(-.85,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.65,.75);
glVertex2f(-.53,.75);
glVertex2f(-.53,1.05);
glVertex2f(-.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.45,.75);
glVertex2f(-.33,.75);
glVertex2f(-.33,1.05);
glVertex2f(-.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.25,.75);
glVertex2f(-.13,.75);
glVertex2f(-.13,1.05);
glVertex2f(-.25,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.05,.75);
glVertex2f(.06,.75);
glVertex2f(.06,1.05);
glVertex2f(-.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.25,.75);
glVertex2f(.14,.75);
glVertex2f(.14,1.05);
glVertex2f(.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.45,.75);
glVertex2f(.34,.75);
glVertex2f(.34,1.05);
glVertex2f(.45,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.65,.75);
glVertex2f(.54,.75);
glVertex2f(.54,1.05);
glVertex2f(.65,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.85,.75);
glVertex2f(.74,.75);
glVertex2f(.74,1.05);
glVertex2f(.85,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.05,.75);
glVertex2f(.94,.75);
glVertex2f(.94,1.05);
glVertex2f(1.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.25,.75);
glVertex2f(1.13,.75);
glVertex2f(1.13,1.05);
glVertex2f(1.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.45,.75);
glVertex2f(1.33,.75);
glVertex2f(1.33,1.05);
glVertex2f(1.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.65,.75);
glVertex2f(1.53,.75);
glVertex2f(1.53,1.05);
glVertex2f(1.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.85,.75);
glVertex2f(1.73,.75);
glVertex2f(1.73,1.05);
glVertex2f(1.85,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.85,.75);
glVertex2f(1.73,.75);
glVertex2f(1.73,1.05);
glVertex2f(1.85,1.05);

glEnd();

glBegin(GL_LINES);//railLine
glColor3f(128,0,0);
glLineWidth(7.5);
glVertex2f(-2,1);
    glVertex2f(2,1);

glEnd();


glBegin(GL_LINES);//railLine
glColor3f(128,0,0);
glLineWidth(7.5);
glVertex2f(-2,.8);
    glVertex2f(2,.8);

glEnd();




glPushMatrix();
glTranslatef(position4,0.0, 0.0f);


int i100s;//train

GLfloat x2s=-1.7f; GLfloat y2s=.9f; GLfloat radius2s =.1f;
int triangleAmount2s = 20;

GLfloat twicePi2s = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2s, y2s);
for(i100s = 0; i100s <= triangleAmount2s;i100s++) {
glVertex2f(
                x2s + (radius2s * cos(i100s *  twicePi2s / triangleAmount2s)),
   y2s + (radius2s * sin(i100s * twicePi2s / triangleAmount2s))
);
}
  glEnd();


   int i100ss;//train

GLfloat x2ss=-1.5f; GLfloat y2ss=.9f; GLfloat radius2ss =.1f;
int triangleAmount2ss = 20;

GLfloat twicePi2ss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ss, y2ss);
for(i100ss = 0; i100ss <= triangleAmount2ss;i100ss++) {
glVertex2f(
                x2ss + (radius2ss * cos(i100ss *  twicePi2ss / triangleAmount2ss)),
   y2ss + (radius2ss * sin(i100ss * twicePi2ss / triangleAmount2ss))
);
}
  glEnd();

  glBegin(GL_QUADS);//train
glColor3ub(0,0,128);
glVertex2f(-1.9,.86);
glVertex2f(-1.3,.86);
glVertex2f(-1.3,1.2);
glVertex2f(-1.9,1.2);

glEnd();

glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-1.83,.96);
glVertex2f(-1.38,.96);
glVertex2f(-1.38,1.15);
glVertex2f(-1.83,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-1.92,1.2);
    glVertex2f(-1.28,1.2);

glEnd();



int i100ssss;//train

GLfloat x2ssss=-.88f; GLfloat y2ssss=.9f; GLfloat radius2ssss =.1f;
int triangleAmount2ssss = 20;

GLfloat twicePi2ssss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss, y2ssss);
for(i100ssss = 0; i100ssss <= triangleAmount2ssss;i100ssss++) {
glVertex2f(
                x2ssss + (radius2ssss * cos(i100ssss *  twicePi2ssss / triangleAmount2ssss)),
   y2ssss + (radius2ssss * sin(i100ssss * twicePi2ssss / triangleAmount2ssss))
);
}
  glEnd();




   int i100sss;//train

GLfloat x2sss=-.7f; GLfloat y2sss=.9f; GLfloat radius2sss =.1f;
int triangleAmount2sss = 20;

GLfloat twicePi2sss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2sss, y2sss);
for(i100sss = 0; i100sss <= triangleAmount2sss;i100sss++) {
glVertex2f(
                x2sss + (radius2sss * cos(i100sss *  twicePi2sss / triangleAmount2sss)),
   y2sss + (radius2sss * sin(i100sss * twicePi2sss/ triangleAmount2sss))
);
}
  glEnd();


  glBegin(GL_QUADS);//train
glColor3ub(128,0,128);
glVertex2f(-1.09,.86);
glVertex2f(-.5,.86);
glVertex2f(-.5,1.2);
glVertex2f(-1.09,1.2);

glEnd();

glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-1.02,.95);
glVertex2f(-.58,.95);
glVertex2f(-.58,1.15);
glVertex2f(-1.02,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-1.1,1.2);
    glVertex2f(-.48,1.2);

glEnd();


int i100ssss1;//train

GLfloat x2ssss1=-.1f; GLfloat y2ssss1=.9f; GLfloat radius2ssss1 =.1f;
int triangleAmount2ssss1 = 20;

GLfloat twicePi2ssss1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss1, y2ssss1);
for(i100ssss1 = 0; i100ssss1 <= triangleAmount2ssss1;i100ssss1++) {
glVertex2f(
                x2ssss1 + (radius2ssss1 * cos(i100ssss1 *  twicePi2ssss1 / triangleAmount2ssss1)),
   y2ssss1 + (radius2ssss1 * sin(i100ssss1 * twicePi2ssss1 / triangleAmount2ssss1))
);
}
  glEnd();

   glBegin(GL_QUADS);//train
glColor3ub(255,0,0);
glVertex2f(-.3,.86);
glVertex2f(.1,.86);
glVertex2f(.1,1.2);
glVertex2f(-.3,1.2);

glEnd();




glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-.25,.95);
glVertex2f(.05,.95);
glVertex2f(.05,1.15);
glVertex2f(-.25,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-.32,1.2);
    glVertex2f(.12,1.2);

glEnd();


int i100ssss12;//train

GLfloat x2ssss12=.23f; GLfloat y2ssss12=.9f; GLfloat radius2ssss12 =.1f;
int triangleAmount2ssss12 = 20;

GLfloat twicePi2ssss12 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss12, y2ssss12);
for(i100ssss12 = 0; i100ssss12 <= triangleAmount2ssss12;i100ssss12++) {
glVertex2f(
                x2ssss12 + (radius2ssss12 * cos(i100ssss12 *  twicePi2ssss12 / triangleAmount2ssss12)),
   y2ssss12 + (radius2ssss12 * sin(i100ssss12 * twicePi2ssss12 / triangleAmount2ssss12))
);
}
  glEnd();

  int i100ssss13;//train

GLfloat x2ssss13=.41f; GLfloat y2ssss13=.9f; GLfloat radius2ssss13 =.1f;
int triangleAmount2ssss13 = 20;

GLfloat twicePi2ssss13 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss13, y2ssss13);
for(i100ssss13 = 0; i100ssss13 <= triangleAmount2ssss13;i100ssss13++) {
glVertex2f(
                x2ssss13 + (radius2ssss13 * cos(i100ssss13 *  twicePi2ssss13 / triangleAmount2ssss13)),
   y2ssss13 + (radius2ssss13 * sin(i100ssss13 * twicePi2ssss13 / triangleAmount2ssss13))
);
}
  glEnd();

     glBegin(GL_QUADS);//train
glColor3ub(255,255,0);
glVertex2f(.1,.86);
glVertex2f(.53,.86);
glVertex2f(.53,1.05);
glVertex2f(.1,1.05);

glEnd();


   glBegin(GL_QUADS);//train
glColor3ub(255,0,0);
glVertex2f(.28,1.2);
glVertex2f(.43,1.2);
glVertex2f(.43,1.05);
glVertex2f(.28,1.05);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(.27,1.2);
    glVertex2f(.45,1.2);

glEnd();


glBegin(GL_QUADS);//train
glColor3ub(0,0,0);
glVertex2f(-1.3,.9);
glVertex2f(-1.09,.9);
glVertex2f(-1.09,.95);
glVertex2f(-1.3,.95);

glEnd();


glBegin(GL_QUADS);//train
glColor3ub(0,0,0);
glVertex2f(-.5,.9);
glVertex2f(-.3,.9);
glVertex2f(-.3,.95);
glVertex2f(-.5,.95);

glEnd();

  glPopMatrix();


















glBegin(GL_QUADS);//river
glColor3ub(86,164,220);
glVertex2f(-2,.7);
glVertex2f(-2,-2);
glVertex2f(2,-2);
glVertex2f(2,.7);

glEnd();


glPushMatrix();
glTranslatef(position3,0.0, 0.0f);

glBegin(GL_TRIANGLES);//fish
  glColor3f(255,215,0);
  glVertex2f(1.2, -.3f);
  glVertex2f(1.4,-.4f);
  glVertex2f( 1.2,-0.5f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish
 glColor3f(255,215,0);
  glVertex2f(1.1, -.35f);
  glVertex2f(1.2,-.4f);
  glVertex2f( 1.1,-0.45f);
 glEnd();

int v;//fish

GLfloat xttx=1.32; GLfloat yttx=-.39f; GLfloat radiusttx =.02f;
int triangleAmountttx = 20;

GLfloat twicePittx = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttx, yttx);
for(v = 0; v <= triangleAmountttx;v++) {
glVertex2f(
                xttx + (radiusttx * cos(v *  twicePittx / triangleAmountttx)),
   yttx + (radiusttx * sin(v * twicePittx / triangleAmountttx))
);
}
  glEnd();


  glBegin(GL_TRIANGLES);//fish 2
  glColor3f(255,0,255);
  glVertex2f(.8, -.7f);
  glVertex2f(1.0,-.8f);
  glVertex2f( .8,-0.9f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish2
 glColor3f(255,0,255);
  glVertex2f(.7, -.75f);
  glVertex2f(.8,-.8f);
  glVertex2f( .7,-0.85f);
 glEnd();

 int vy;//fish 2

GLfloat xttxy=.93; GLfloat yttxy=-.8f; GLfloat radiusttxy =.02f;
int triangleAmountttxy = 20;

GLfloat twicePittxy = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttxy, yttxy);
for(vy = 0; vy <= triangleAmountttxy;vy++) {
glVertex2f(
                xttxy + (radiusttxy * cos(vy *  twicePittxy / triangleAmountttxy)),
   yttxy + (radiusttxy * sin(vy * twicePittxy / triangleAmountttxy))
);
}
  glEnd();


  glBegin(GL_TRIANGLES);//fish 3
  glColor3f(0,0,255);
  glVertex2f(.8, .1f);
  glVertex2f(1.0,.2f);
  glVertex2f( .8,.3f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish 3
 glColor3f(0,0,255);
  glVertex2f(.7, .15f);
  glVertex2f(.8,.2f);
  glVertex2f( .7,0.25f);
 glEnd();

  int vyu;//fish 3

GLfloat xttxyu=.93; GLfloat yttxyu=.2f; GLfloat radiusttxyu=.02f;
int triangleAmountttxyu = 20;

GLfloat twicePittxyu = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttxyu, yttxyu);
for(vyu = 0; vyu <= triangleAmountttxyu;vyu++) {
glVertex2f(
                xttxyu + (radiusttxyu * cos(vyu *  twicePittxyu / triangleAmountttxyu)),
   yttxyu + (radiusttxyu * sin(vyu * twicePittxyu / triangleAmountttxyu))
);
}
  glEnd();

  glPopMatrix();






glPushMatrix();
glTranslatef(position2,0.0, 0.0f);

glBegin(GL_QUADS);//boat
glColor3ub(0,0,0);
glVertex2f(.5,.3);
glVertex2f(1.4,.3);
glVertex2f(1.3,.2);
glVertex2f(.6,.2);

glEnd();


glBegin(GL_QUADS);//boat
glColor3ub(255,165,0);
glVertex2f(.75,.5);
glVertex2f(1.15,.5);
glVertex2f(1.25,.3);
glVertex2f(.65,.3);

glEnd();

glBegin(GL_LINES);//boat
glColor3f(255,215,0);
glVertex2f(.95,.5);
glVertex2f(.95,.8);
    glEnd();

    glBegin(GL_QUADS);//boat
glColor3ub(255,0,0);
glVertex2f(.8,.8);
glVertex2f(1.1,.76);
glVertex2f(1.1,.55);
glVertex2f(.8,.6);

glEnd();

glPopMatrix();




glBegin(GL_POLYGON);//field
glColor3ub(3,250,28);
glVertex2f(-2,.1);
glVertex2f(-2,-2);
glVertex2f(2,-2);


glVertex2f(2,-1.8);
glVertex2f(2,-1.5);
glVertex2f(.4,-1.2);
glVertex2f(.6,-1);
glVertex2f(.4,-.8);
glVertex2f(.7,-.5);
glVertex2f(.4,-.3);

glVertex2f(.5,.1);

glEnd();




 //////////////////////////////Bird//////////////////////////////////




/////////////////////////////////1st bird

glPushMatrix();
glTranslatef(position8,0.0, 0.0f);


 glBegin(GL_LINES);
  glColor3f(0,0,0);

  glVertex2f(-0.45,.5);
  glVertex2f(-0.55,.6);
  glEnd();

glBegin(GL_LINES);
  glColor3f(0,0,0);

  glVertex2f(-0.45,.5);
  glVertex2f(-0.35,.6);
  glEnd();


  glPopMatrix();





/////////////////////////////////2st bird

glPushMatrix();
glTranslatef(position9,position9, 0.0f);


 glBegin(GL_LINES);
  glColor3f(0,0,0);

  glVertex2f(-0.45,.5);
  glVertex2f(-0.55,.6);
  glEnd();

glBegin(GL_LINES);
  glColor3f(0,0,0);

  glVertex2f(-0.45,.5);
  glVertex2f(-0.35,.6);
  glEnd();


  glPopMatrix();
























glBegin(GL_QUADS);//tree

glColor3ub(128,0,0);

glVertex2f(-0.4,.1);
glVertex2f(-0.4,-.2);
glVertex2f(-.55,-.2);
glVertex2f(-.55,.1);

glEnd();
 int r1;//tree1

GLfloat xttkr1=-.45f; GLfloat yttkr1=.13f; GLfloat radiusttkr1 =.32f;
int triangleAmountttkr1 = 20;

GLfloat twicePittkr1= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1, yttkr1);
for(r1 = 0; r1 <= triangleAmountttkr1;r1++) {
glVertex2f(
                xttkr1 + (radiusttkr1 * cos(r1 *  twicePittkr1 / triangleAmountttkr1)),
   yttkr1 + (radiusttkr1 * sin(r1 * twicePittkr1 / triangleAmountttkr1))
);
}
  glEnd();


int r2;//tree2


GLfloat xttkr2=-.45f; GLfloat yttkr2=0.0f; GLfloat radiusttkr2 =.3f;
int triangleAmountttkr2 = 20;

GLfloat twicePittkr2 =  PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr2, yttkr2);
for(r2 = 0; r2 <= triangleAmountttkr2;r2++) {
glVertex2f(
                xttkr2 + (radiusttkr2 * cos(r2 *  twicePittkr2 / triangleAmountttkr2)),
   yttkr2 + (radiusttkr2 * sin(r2 * twicePittkr2 / triangleAmountttkr2))
);
}
  glEnd();

  int r1n;//tree1

GLfloat xttkr1n=-.45f; GLfloat yttkr1n=.23f; GLfloat radiusttkr1n =.35f;
int triangleAmountttkr1n = 20;

GLfloat twicePittkr1n= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1n, yttkr1n);
for(r1n = 0; r1n <= triangleAmountttkr1n;r1n++) {
glVertex2f(
                xttkr1n + (radiusttkr1n * cos(r1n *  twicePittkr1n / triangleAmountttkr1n)),
   yttkr1n + (radiusttkr1n * sin(r1n * twicePittkr1n / triangleAmountttkr1n))
);
}
  glEnd();


  int r1np;//tree1

GLfloat xttkr1np=-.45f; GLfloat yttkr1np=.35f; GLfloat radiusttkr1np =.28f;
int triangleAmountttkr1np = 20;

GLfloat twicePittkr1np= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1np, yttkr1np);
for(r1np = 0; r1np <= triangleAmountttkr1np;r1np++) {
glVertex2f(
                xttkr1np + (radiusttkr1np * cos(r1np *  twicePittkr1np / triangleAmountttkr1np)),
   yttkr1np + (radiusttkr1np * sin(r1np * twicePittkr1np / triangleAmountttkr1np))
);
}
  glEnd();























int i1005;//flower1

GLfloat x105=-.09f; GLfloat y105=-1.0f; GLfloat radius105 =.05f;
int triangleAmount105 = 20;

GLfloat twicePi105 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x105, y105);
for(i1005 = 0; i1005 <= triangleAmount105;i1005++) {
glVertex2f(
                x105 + (radius105 * cos(i1005*  twicePi105 / triangleAmount105)),
   y105 + (radius105 * sin(i1005 * twicePi105 / triangleAmount105))
);
}
  glEnd();


int i10056;

GLfloat x1056=-.01f; GLfloat y1056=-1.0f; GLfloat radius1056 =.07f;
int triangleAmount1056 = 20;

GLfloat twicePi1056 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x1056, y1056);
for(i10056 = 0; i10056 <= triangleAmount1056;i10056++) {
glVertex2f(
                x1056 + (radius1056 * cos(i10056*  twicePi1056 / triangleAmount1056)),
   y1056 + (radius1056 * sin(i10056 * twicePi1056 / triangleAmount1056))
);
}
  glEnd();




int i100567;

GLfloat x10567=-.2f; GLfloat y10567=-1.0f; GLfloat radius10567 =.05f;
int triangleAmount10567 = 20;

GLfloat twicePi10567 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x10567, y10567);
for(i100567 = 0; i100567 <= triangleAmount10567;i100567++) {
glVertex2f(
                x10567 + (radius10567 * cos(i100567*  twicePi10567 / triangleAmount10567)),
   y10567 + (radius10567 * sin(i100567 * twicePi10567 / triangleAmount10567))
);
}
  glEnd();



int i1005678;

GLfloat x105678=-.25f; GLfloat y105678=-1.03f; GLfloat radius105678 =.05f;
int triangleAmount105678 = 20;

GLfloat twicePi105678 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x105678, y105678);
for(i1005678 = 0; i1005678 <= triangleAmount105678;i1005678++) {
glVertex2f(
                x105678 + (radius105678 * cos(i1005678*  twicePi105678 / triangleAmount105678)),
   y105678 + (radius105678 * sin(i1005678 * twicePi105678 / triangleAmount105678))
);
}
  glEnd();


  int i10056789;

GLfloat x1056789=.2f; GLfloat y1056789=-1.03f; GLfloat radius1056789 =.06f;
int triangleAmount1056789 = 20;

GLfloat twicePi1056789 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x1056789, y1056789);
for(i10056789 = 0; i10056789 <= triangleAmount1056789;i10056789++) {
glVertex2f(
                x1056789 + (radius1056789 * cos(i10056789*  twicePi1056789 / triangleAmount1056789)),
   y1056789 + (radius1056789 * sin(i10056789 * twicePi1056789 / triangleAmount1056789))
);
}
  glEnd();



  int i100567892;

GLfloat x10567892=.15f; GLfloat y10567892=-1.0f; GLfloat radius10567892 =.06f;
int triangleAmount10567892 = 20;

GLfloat twicePi10567892 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x10567892, y1056789);
for(i100567892 = 0; i100567892 <= triangleAmount10567892;i100567892++) {
glVertex2f(
                x10567892 + (radius10567892 * cos(i100567892*  twicePi10567892 / triangleAmount10567892)),
   y10567892 + (radius10567892 * sin(i100567892 * twicePi10567892 / triangleAmount10567892))
);
}
  glEnd();

glBegin(GL_TRIANGLES);//flower
 glColor3ub(0,128,0);
  glVertex2f(-.3, -1.1f);
  glVertex2f(.3,-1.1f);
  glVertex2f(0.0,-1.2f);
 glEnd();







glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(-.2,-1.0);
glVertex2f(-.1,-1.15);

glEnd();

glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(-0.08,-1.0);
glVertex2f(-0.05,-1.15);

glEnd();



glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(.2,-1.0);
glVertex2f(.1,-1.15);

glEnd();






//paddy

glBegin(GL_QUADS);
glColor3ub(210,105,30);

glVertex2f(-.25,.1);
glVertex2f(-.15,.1);
glVertex2f(-.15,-.1);
glVertex2f(-.25,-.1);

glEnd();




 int z;//paddy

GLfloat xtz=-.2f; GLfloat ytz=-.4f; GLfloat radiustz =.4f;
int triangleAmounttz = 20;

GLfloat twicePitz = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,215,0);
glVertex2f(xtz, ytz);
for(z = 0; z <= triangleAmounttz;z++) {
glVertex2f(
                xtz + (radiustz * cos(z *  twicePitz / triangleAmounttz)),
   ytz + (radiustz * sin(z * twicePitz/ triangleAmounttz))
);
}
  glEnd();
glBegin(GL_QUADS);
glColor3ub(255,215,0);

glVertex2f(-.59,-.4);
glVertex2f(.2,-.4);
glVertex2f(.2,-.8);
glVertex2f(-.59,-.8);

glEnd();










glBegin(GL_POLYGON);//road
glColor3ub(217,191,161);
glVertex2f(-2,-1.45);
glVertex2f(2,-1.1);
glVertex2f(2,-1.7);
glVertex2f(-2,-1.95);

glEnd();




/////////////////////car////////////////////////////

glPushMatrix();
glTranslatef(position1,0.0, 0.0f);






	glBegin(GL_QUADS);//car
glColor3ub(139,0,0);
glVertex2f(-1.4,-1.5);
glVertex2f(-.4,-1.4);
glVertex2f(-.4,-1.5);
glVertex2f(-1.4,-1.6);

glEnd();

glBegin(GL_QUADS);//car
glColor3ub(255,165,0);
glVertex2f(-1.3,-1.2);
glVertex2f(-.6,-1.1);
glVertex2f(-.6,-1.42);
glVertex2f(-1.3,-1.48);

glEnd();





int j;//car

GLfloat x4=-.55f; GLfloat y4=-1.6f; GLfloat radius4 =.13f;
int triangleAmount4 = 20;

GLfloat twicePi4 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(47,79,79);
glVertex2f(x4, y4);
for(j = 0; j <= triangleAmount4;j++) {
glVertex2f(
                x4 + (radius4 * cos(j *  twicePi4 / triangleAmount4)),
   y4 + (radius4 * sin(j * twicePi4 / triangleAmount4))
);
}
  glEnd();

  int k;//car

GLfloat x5=-1.1f; GLfloat y5=-1.66f; GLfloat radius5 =.13f;
int triangleAmount5 = 20;

GLfloat twicePi5 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(47,79,79);
glVertex2f(x5, y5);
for(k = 0; k <= triangleAmount5;k++) {
glVertex2f(
                x5 + (radius5 * cos(k *  twicePi5 / triangleAmount5)),
   y5 + (radius5 * sin(k * twicePi5 / triangleAmount5))
);
}
  glEnd();

   int kp;//car

GLfloat x5p=-1.1f; GLfloat y5p=-1.66f; GLfloat radius5p =.05f;
int triangleAmount5p = 20;

GLfloat twicePi5p = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,0,255);
glVertex2f(x5p, y5p);
for(kp = 0; kp <= triangleAmount5p;kp++) {
glVertex2f(
                x5p + (radius5p * cos(kp *  twicePi5p / triangleAmount5p)),
   y5p + (radius5p * sin(kp * twicePi5p / triangleAmount5p))
);
}
  glEnd();

  int jb;//car

GLfloat x4b=-.55f; GLfloat y4b=-1.6f; GLfloat radius4b =.05f;
int triangleAmount4b = 20;

GLfloat twicePi4b = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,0,255);
glVertex2f(x4b, y4b);
for(jb = 0; jb <= triangleAmount4b;jb++) {
glVertex2f(
                x4b + (radius4b * cos(jb *  twicePi4b / triangleAmount4b)),
   y4b + (radius4b * sin(jb * twicePi4b / triangleAmount4b))
);
}
  glEnd();





  glBegin(GL_QUADS);//cow
glColor3ub(255,69,0);
glVertex2f(-.1,-1.3);
glVertex2f(.4,-1.3);
glVertex2f(.4,-1.55);
glVertex2f(-.1,-1.55);

glEnd();

glBegin(GL_LINES);//cow rough
	glColor3ub(0,0,0);
	glLineWidth(9.5);
	glVertex2f(-.1,-1.32);
    glVertex2f(-.4,-1.5);

	glEnd();



	glBegin(GL_TRIANGLES);//cow tail
glColor3ub(255,69,0);
glVertex2f(-.1,-1.35);
glVertex2f(-.1,-1.43);
glVertex2f(-.3,-1.5);


glEnd();

glBegin(GL_TRIANGLES);//cow shing
glColor3ub(0,0,0);
glVertex2f(.3,-1.3);
glVertex2f(.28,-1.1);
glVertex2f(.52,-1.3);


glEnd();

glBegin(GL_TRIANGLES);//cow shing
glColor3ub(0,0,0);
glVertex2f(.25,-1.3);
glVertex2f(.55,-1.12);
glVertex2f(.47,-1.3);


glEnd();





glBegin(GL_TRIANGLES);//cow tail
glColor3ub(0,0,0);
glVertex2f(.3,-1.3);
glVertex2f(.28,-1.1);
glVertex2f(.52,-1.3);


glEnd();




  glBegin(GL_QUADS);//cowleg
glColor3ub(255,69,0);
glVertex2f(.2,-1.55);
glVertex2f(.3,-1.55);
glVertex2f(.33,-1.7);
glVertex2f(.27,-1.7);

glEnd();

glBegin(GL_QUADS);//cowleg
glColor3ub(0,0,0);
glVertex2f(.24,-1.65);
glVertex2f(.32,-1.65);
glVertex2f(.33,-1.7);
glVertex2f(.27,-1.7);

glEnd();


  glBegin(GL_QUADS);//cowleg
glColor3ub(255,69,0);
glVertex2f(0.02,-1.55);
glVertex2f(0.12,-1.55);
glVertex2f(0.08,-1.7);
glVertex2f(0.02,-1.7);

glEnd();


  glBegin(GL_QUADS);//cowleg
glColor3ub(0,0,0);
glVertex2f(0.02,-1.65);
glVertex2f(0.1,-1.65);
glVertex2f(0.08,-1.7);
glVertex2f(0.02,-1.7);

glEnd();




 int jbt;//cow head

GLfloat x4bt=.38f; GLfloat y4bt=-1.3f; GLfloat radius4bt =.13f;
int triangleAmount4bt = 20;

GLfloat twicePi4bt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x4bt, y4bt);
for(jbt = 0; jbt <= triangleAmount4bt;jbt++) {
glVertex2f(
                x4bt + (radius4bt * cos(jbt *  twicePi4bt / triangleAmount4bt)),
   y4bt + (radius4bt * sin(jbt * twicePi4bt / triangleAmount4bt))
);
}
  glEnd();



  /*
 glBegin(GL_TRIANGLES);//cow shing
glColor3ub(0,0,0);
glVertex2f(.34,-1.35);
glVertex2f(.4,-1.3);
glVertex2f(.46,-1.35);


glEnd();





 int jbtu;//cow eye

GLfloat x4btu=.34f; GLfloat y4btu=-1.28f; GLfloat radius4btu =.03f;
int triangleAmount4btu = 20;

GLfloat twicePi4btu = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x4btu, y4btu);
for(jbtu = 0; jbtu <= triangleAmount4btu;jbtu++) {
glVertex2f(
                x4btu + (radius4btu * cos(jbtu *  twicePi4btu / triangleAmount4btu)),
   y4btu + (radius4btu * sin(jbtu * twicePi4btu / triangleAmount4btu))
);
}
  glEnd();

  int jbtuo;//cow eye

GLfloat x4btuo=.34f; GLfloat y4btuo=-1.28f; GLfloat radius4btuo =.015f;
int triangleAmount4btuo = 20;

GLfloat  twicePi4btuo = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,255,255);
glVertex2f(x4btuo, y4btuo);
for(jbtuo = 0; jbtuo <= triangleAmount4btuo;jbtuo++) {
glVertex2f(
                x4btuo + (radius4btuo * cos(jbtuo *  twicePi4btuo / triangleAmount4btuo)),
   y4btuo + (radius4btuo * sin(jbtuo * twicePi4btuo / triangleAmount4btuo))
);
}
  glEnd();


   int jbtuk;//cow

GLfloat x4btuk=.45f; GLfloat y4btuk=-1.28f; GLfloat radius4btuk =.03f;
int triangleAmount4btuk = 20;

GLfloat twicePi4btuk = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x4btuk, y4btuk);
for(jbtuk = 0; jbtuk <= triangleAmount4btuk;jbtuk++) {
glVertex2f(
                x4btuk + (radius4btuk * cos(jbtuk *  twicePi4btuk / triangleAmount4btuk)),
   y4btuk + (radius4btuk * sin(jbtuk * twicePi4btuk / triangleAmount4btuk))
);
}
  glEnd();




   int jbtukl;//cow eye

GLfloat x4btukl=.13f; GLfloat y4btukl=-1.35f; GLfloat radius4btukl =.09f;
int triangleAmount4btukl = 20;

GLfloat twicePi4btukl = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x4btukl, y4btukl);
for(jbtukl = 0; jbtukl <= triangleAmount4btukl;jbtukl++) {
glVertex2f(
                x4btukl + (radius4btukl * cos(jbtukl *  twicePi4btukl / triangleAmount4btukl)),
   y4btukl + (radius4btukl * sin(jbtukl * twicePi4btukl / triangleAmount4btukl))
);
}
  glEnd();





  int jbtukls;//cow eye

GLfloat x4btukls=.45f; GLfloat y4btukls=-1.28f; GLfloat radius4btukls =.015f;
int triangleAmount4btukls = 20;

GLfloat twicePi4btukls = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,255,255);
glVertex2f(x4btukls, y4btukls);
for(jbtukls = 0; jbtukls <= triangleAmount4btukls;jbtukls++) {
glVertex2f(
                x4btukls + (radius4btukls * cos(jbtukls *  twicePi4btukls / triangleAmount4btukls)),
   y4btukls + (radius4btukls * sin(jbtukls * twicePi4btukls / triangleAmount4btukls))
);
}
  glEnd();

*/



  glPopMatrix();











  int c;//tree1

GLfloat xt=-.2f; GLfloat yt=-1.57f; GLfloat radiust =.16f;
int triangleAmountt = 20;

GLfloat twicePit = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xt, yt);
for(c = 0; c <= triangleAmountt;c++) {
glVertex2f(
                xt + (radiust * cos(c *  twicePit / triangleAmountt)),
   yt + (radiust * sin(c * twicePit / triangleAmountt))
);
}
  glEnd();





     int d;//tree1

GLfloat xtt=-.2f; GLfloat ytt=-1.43f; GLfloat radiustt =.12f;
int triangleAmounttt = 20;

GLfloat twicePitt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtt, ytt);
for(d = 0; d <= triangleAmounttt;d++) {
glVertex2f(
                xtt + (radiustt * cos(d *  twicePitt / triangleAmounttt)),
   ytt + (radiustt * sin(d * twicePitt / triangleAmounttt))
);
}
  glEnd();


    int e;//tree1

GLfloat x9=-.2f; GLfloat y9=-1.37f; GLfloat radius9 =.08f;
int triangleAmount9 = 20;

GLfloat twicePi9 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(x9, y9);
for(e = 0; e <= triangleAmount9;e++) {
glVertex2f(
                x9 + (radius9 * cos(e *  twicePi9 / triangleAmount9)),
   y9 + (radius9 * sin(e * twicePi9 / triangleAmount9))
);
}
  glEnd();


    int p;//tree2

GLfloat xt1=-1.2f; GLfloat yt1=-1.67f; GLfloat radiust1 =.14f;
int triangleAmountt1 = 20;

GLfloat twicePit1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xt1, yt1);
for(p = 0; p <= triangleAmountt1;p++) {
glVertex2f(
                xt1 + (radiust1 * cos(p *  twicePit1 / triangleAmountt1)),
   yt1 + (radiust1 * sin(p * twicePit1 / triangleAmountt1))
);
}
  glEnd();

    int g;//tree2

GLfloat xtt8=-1.2f; GLfloat ytt8=-1.53f; GLfloat radiustt8 =.1f;
int triangleAmounttt8 = 20;

GLfloat twicePitt8 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtt8, ytt8);
for(g = 0; g <= triangleAmounttt8;g++) {
glVertex2f(
                xtt8 + (radiustt8 * cos(g *  twicePitt8 / triangleAmounttt8)),
   ytt8 + (radiustt8 * sin(g * twicePitt8 / triangleAmounttt8))
);
}
  glEnd();


    int h;//tree2

GLfloat x95=-1.2f; GLfloat y95=-1.47f; GLfloat radius95 =.06f;
int triangleAmount95 = 20;

GLfloat twicePi95 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(x95, y95);
for(h = 0; h <= triangleAmount95;h++) {
glVertex2f(
                x95 + (radius95 * cos(h *  twicePi95 / triangleAmount95)),
   y95 + (radius95 * sin(h * twicePi95 / triangleAmount95))
);
}
  glEnd();



    int l;//tree3

GLfloat xtn=1.1f; GLfloat ytn=-1.47f; GLfloat radiustn =.16f;
int triangleAmounttn = 20;

GLfloat twicePitn = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtn, ytn);
for(l = 0; l <= triangleAmounttn;l++) {
glVertex2f(
                xtn + (radiustn * cos(l *  twicePitn / triangleAmounttn)),
   ytn + (radiustn * sin(l * twicePitn / triangleAmounttn))
);
}
  glEnd();

    int o;//tree3

GLfloat xttk=1.1f; GLfloat yttk=-1.36f; GLfloat radiusttk =.12f;
int triangleAmountttk = 20;

GLfloat twicePittk = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xttk, yttk);
for(o = 0; o <= triangleAmountttk;o++) {
glVertex2f(
                xttk + (radiusttk * cos(o *  twicePittk / triangleAmountttk)),
   yttk + (radiusttk * sin(o * twicePittk / triangleAmountttk))
);
}
  glEnd();

  int r;//tree3

GLfloat xttkr=1.1f; GLfloat yttkr=-1.3f; GLfloat radiusttkr =.08f;
int triangleAmountttkr = 20;

GLfloat twicePittkr = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xttkr, yttkr);
for(r = 0; r <= triangleAmountttkr;r++) {
glVertex2f(
                xttkr + (radiusttkr * cos(r *  twicePittkr / triangleAmountttkr)),
   yttkr + (radiusttkr * sin(r * twicePittkr / triangleAmountttkr))
);
}
  glEnd();

  glBegin(GL_QUADS);//tree line 3
glColor3ub(128,0,0);
glVertex2f(1.05,-1.63);
glVertex2f(1.15,-1.63);
glVertex2f(1.15,-1.8);
glVertex2f(1.05,-1.8);

glEnd();

  glBegin(GL_QUADS);//treeLine2
glColor3ub(128,0,0);
glVertex2f(-.25,-1.72);
glVertex2f(-.15,-1.72);
glVertex2f(-.15,-1.88);
glVertex2f(-.25,-1.88);

glEnd();

  glBegin(GL_QUADS);//treeLine3
glColor3ub(128,0,0);
glVertex2f(-1.25,-1.8);
glVertex2f(-1.15,-1.8);
glVertex2f(-1.15,-1.95);
glVertex2f(-1.25,-1.95);

glEnd();






////////////House///////////////



glTranslated(-.9,-.7,0);

//House
glBegin(GL_QUADS);
glColor3ub(187,127,11);

glVertex2f(-.5,.5);
glVertex2f(.3,.5);
glVertex2f(0,1.1);
glVertex2f(-.8,1.1);

glEnd();



glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(.3,.5);
glVertex2f(0,1.1);

glEnd();

    glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0,1.1);
glVertex2f(-.8,1.1);

glEnd();





glBegin(GL_QUADS);
glColor3ub(187,127,11);

glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);
glVertex2f(.2,-.2);
glVertex2f(.2,.5);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,-.3);
glVertex2f(.2,-.2);

glEnd();





glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(.3,.5);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(.2,-.2);
glVertex2f(.2,.5);

glEnd();



glBegin(GL_QUADS);//3
glColor3ub(187,127,11);

glVertex2f(-1,.5);
glVertex2f(-.7,1);
glVertex2f(-.8,1.1);
glVertex2f(-1.1,.6);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
    glVertex2f(-1.1,.6);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
    glVertex2f(-1.1,.6);
glVertex2f(-.8,1.1);

glEnd();



glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.8,1.1);
glVertex2f(-.5,.5);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
glVertex2f(-.74,.96);

glEnd();


glBegin(GL_POLYGON);//4
glColor3f(1,1,0);

glVertex2f(-.73,.96);
glVertex2f(-1,.5);
glColor3f(1,1,1);
glVertex2f(-1,0);
glVertex2f(-.5,-.3);
glVertex2f(-.5,.5);



glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
glVertex2f(-1,0);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,0);
glVertex2f(-.5,-.3);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);
glEnd();


glBegin(GL_LINES);//Door
glColor3f(0,0,0);
glVertex2f(-.2,-.25);
glVertex2f(-.2,.2);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.1,-.25);
glVertex2f(-.1,.2);
glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0,-.23);
glVertex2f(0,.2);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.2,.2);
glVertex2f(0,.2);
glEnd();






glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.85,.6);
glVertex2f(-.85,.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.85,.3);
glVertex2f(-.65,.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.65,.3);
glVertex2f(-.65,.6);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.65,.6);
glVertex2f(-.85,.6);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.75,.6);
glVertex2f(-.75,.3);

glEnd();











///////Sky Bird2//////////

glTranslatef(0.1,0.5,0);


glPushMatrix();
glTranslatef(position7,0.0, 0.0f);

// int i1005678921w;//bird

//GLfloat x105678921w=-1.4f; GLfloat y105678921w=1.7f; GLfloat radius105678921w =.06f;
//int triangleAmount105678921w = 20;

//GLfloat twicePi105678921w = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x105678921w, y105678921w);
for(i1005678921w = 0; i1005678921w <= triangleAmount105678921w;i1005678921w++) {
glVertex2f(
                x105678921w + (radius105678921w * cos(i1005678921w*  twicePi105678921w / triangleAmount105678921w)),
   y105678921w + (radius105678921w * sin(i1005678921w * twicePi105678921w / triangleAmount105678921w))
);
}
  glEnd();

//  int i1005678921wt;//bird

//GLfloat x105678921wt=-1.54f; GLfloat y105678921wt=1.7f; GLfloat radius105678921wt =.1f;
//int triangleAmount105678921wt = 20;

//GLfloat twicePi105678921wt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x105678921wt, y105678921wt);
for(i1005678921wt = 0; i1005678921wt <= triangleAmount105678921wt;i1005678921wt++) {
glVertex2f(
                x105678921wt + (radius105678921wt * cos(i1005678921wt*  twicePi105678921wt / triangleAmount105678921wt)),
   y105678921wt + (radius105678921wt * sin(i1005678921wt * twicePi105678921wt / triangleAmount105678921wt))
);
}
  glEnd();


// int i1005678921wg;//bird

//GLfloat x105678921wg=-1.38f; GLfloat y105678921wg=1.7f; GLfloat radius105678921wg =.02f;
//int triangleAmount105678921wg = 20;

//GLfloat twicePi105678921wg = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x105678921wg, y105678921wg);
for(i1005678921wg = 0; i1005678921wg <= triangleAmount105678921wg;i1005678921wg++) {
glVertex2f(
                x105678921wg + (radius105678921wg * cos(i1005678921wg*  twicePi105678921wg / triangleAmount105678921wg)),
   y105678921wg + (radius105678921wg * sin(i1005678921wg * twicePi105678921wg / triangleAmount105678921wg))
);
}
  glEnd();


   glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.7);
glVertex2f(-1.64,1.7);

glEnd();


glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.65);
glVertex2f(-1.64,1.7);

glEnd();

glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.75);
glVertex2f(-1.64,1.7);

glEnd();


glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.35,1.72);
glVertex2f(-1.3,1.7);

glEnd();



glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.35,1.68);
glVertex2f(-1.3,1.7);

glEnd();

glBegin(GL_TRIANGLES);//bird
  glColor3ub(255,69,0);
  glVertex2f(-1.55, 1.7f);
  glVertex2f(-1.65,1.85f);
  glVertex2f( -1.45,1.85f);
 glEnd();

 glPopMatrix();

glLoadIdentity();





glutTimerFunc(5500,time,0);
glutPostRedisplay();

glFlush();
}


























/////////////////////Afternoon/////////////




void aff() {
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//glEnable(GL_LIGHTING);
glLoadIdentity();
gluOrtho2D(-2,2,-2,2);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


/*
glEnable(GL_LIGHTING);
GLfloat global_ambient[]={1.9,0.9,0.0,0.1};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient);
*/


glBegin(GL_QUADS);//sky
glColor3ub(73,102,148);
glVertex2f(-2,2);
glVertex2f(-2,-2);

glVertex2f(2,-2);
glVertex2f(2,2);

glEnd();


glPushMatrix();
glTranslatef(position7,0.0, 0.0f);

 int i1005678921w;//bird

GLfloat x105678921w=-1.4f; GLfloat y105678921w=1.7f; GLfloat radius105678921w =.06f;
int triangleAmount105678921w = 20;

GLfloat twicePi105678921w = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x105678921w, y105678921w);
for(i1005678921w = 0; i1005678921w <= triangleAmount105678921w;i1005678921w++) {
glVertex2f(
                x105678921w + (radius105678921w * cos(i1005678921w*  twicePi105678921w / triangleAmount105678921w)),
   y105678921w + (radius105678921w * sin(i1005678921w * twicePi105678921w / triangleAmount105678921w))
);
}
  glEnd();

  int i1005678921wt;//bird

GLfloat x105678921wt=-1.54f; GLfloat y105678921wt=1.7f; GLfloat radius105678921wt =.1f;
int triangleAmount105678921wt = 20;

GLfloat twicePi105678921wt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x105678921wt, y105678921wt);
for(i1005678921wt = 0; i1005678921wt <= triangleAmount105678921wt;i1005678921wt++) {
glVertex2f(
                x105678921wt + (radius105678921wt * cos(i1005678921wt*  twicePi105678921wt / triangleAmount105678921wt)),
   y105678921wt + (radius105678921wt * sin(i1005678921wt * twicePi105678921wt / triangleAmount105678921wt))
);
}
  glEnd();


 int i1005678921wg;//bird

GLfloat x105678921wg=-1.38f; GLfloat y105678921wg=1.7f; GLfloat radius105678921wg =.02f;
int triangleAmount105678921wg = 20;

GLfloat twicePi105678921wg = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x105678921wg, y105678921wg);
for(i1005678921wg = 0; i1005678921wg <= triangleAmount105678921wg;i1005678921wg++) {
glVertex2f(
                x105678921wg + (radius105678921wg * cos(i1005678921wg*  twicePi105678921wg / triangleAmount105678921wg)),
   y105678921wg + (radius105678921wg * sin(i1005678921wg * twicePi105678921wg / triangleAmount105678921wg))
);
}
  glEnd();


   glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.7);
glVertex2f(-1.64,1.7);

glEnd();


glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.65);
glVertex2f(-1.64,1.7);

glEnd();

glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.75,1.75);
glVertex2f(-1.64,1.7);

glEnd();


glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.35,1.72);
glVertex2f(-1.3,1.7);

glEnd();



glBegin(GL_LINES);//bird
glColor3f(128,0,0);
glVertex2f(-1.35,1.68);
glVertex2f(-1.3,1.7);

glEnd();

glBegin(GL_TRIANGLES);//bird
  glColor3ub(255,69,0);
  glVertex2f(-1.55, 1.7f);
  glVertex2f(-1.65,1.85f);
  glVertex2f( -1.45,1.85f);
 glEnd();

 glPopMatrix();





  int i1005678921;//hill

GLfloat x105678921=-1.6f; GLfloat y105678921=.9f; GLfloat radius105678921 =.48f;
int triangleAmount105678921 = 20;

GLfloat twicePi105678921 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x105678921, y105678921);
for(i1005678921 = 0; i1005678921 <= triangleAmount105678921;i1005678921++) {
glVertex2f(
                x105678921 + (radius105678921 * cos(i1005678921*  twicePi105678921 / triangleAmount105678921)),
   y105678921 + (radius105678921 * sin(i1005678921 * twicePi105678921 / triangleAmount105678921))
);
}
  glEnd();

  int i10056789212;//hill

GLfloat x1056789212=-1.0f; GLfloat y1056789212=.9f; GLfloat radius1056789212 =.48f;
int triangleAmount1056789212 = 20;

GLfloat twicePi1056789212 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x1056789212, y1056789212);
for(i10056789212 = 0; i10056789212 <= triangleAmount1056789212;i10056789212++) {
glVertex2f(
                x1056789212 + (radius1056789212 * cos(i10056789212*  twicePi1056789212 / triangleAmount1056789212)),
   y1056789212 + (radius1056789212 * sin(i10056789212 * twicePi1056789212 / triangleAmount1056789212))
);
}
  glEnd();


    int i105678921o;//hill

GLfloat x105678921o=-2.0f; GLfloat y105678921o=1.4f; GLfloat radius105678921o=.25f;
int triangleAmount105678921o = 20;

GLfloat twicePi105678921o = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x105678921o, y105678921o);
for(i105678921o = 0; i105678921o <= triangleAmount105678921o;i105678921o++) {
glVertex2f(
                x105678921o + (radius105678921o * cos(i105678921o*  twicePi105678921o / triangleAmount105678921o)),
   y105678921o + (radius105678921o * sin(i105678921o * twicePi105678921o / triangleAmount105678921o))
);
}
  glEnd();




  ////////////sun/////////////////



glPushMatrix();
glTranslatef(0.0,position5, 0.0f);

int i1;//sun

GLfloat x=0.2f; GLfloat y=1.75f; GLfloat radius =.2f;
int triangleAmount = 20;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,0,13);
glVertex2f(x, y);
for(i1 = 0; i1 <= triangleAmount;i1++) {
glVertex2f(
                x + (radius * cos(i1 *  twicePi / triangleAmount)),
   y + (radius * sin(i1 * twicePi / triangleAmount))
);
}
  glEnd();
glPopMatrix();




glBegin(GL_QUADS);//railLine
glColor3ub(240,230,140);
glVertex2f(-2,1.1);
glVertex2f(2,1.1);
glVertex2f(2,.67);
glVertex2f(-2,.67);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-2,.75);
glVertex2f(-1.9,.75);
glVertex2f(-1.9,1.05);
glVertex2f(-2,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.85,.75);
glVertex2f(-1.73,.75);
glVertex2f(-1.73,1.05);
glVertex2f(-1.85,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.65,.75);
glVertex2f(-1.53,.75);
glVertex2f(-1.53,1.05);
glVertex2f(-1.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.45,.75);
glVertex2f(-1.33,.75);
glVertex2f(-1.33,1.05);
glVertex2f(-1.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.25,.75);
glVertex2f(-1.13,.75);
glVertex2f(-1.13,1.05);
glVertex2f(-1.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.05,.75);
glVertex2f(-.93,.75);
glVertex2f(-.93,1.05);
glVertex2f(-1.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.85,.75);
glVertex2f(-.73,.75);
glVertex2f(-.73,1.05);
glVertex2f(-.85,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.65,.75);
glVertex2f(-.53,.75);
glVertex2f(-.53,1.05);
glVertex2f(-.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.45,.75);
glVertex2f(-.33,.75);
glVertex2f(-.33,1.05);
glVertex2f(-.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.25,.75);
glVertex2f(-.13,.75);
glVertex2f(-.13,1.05);
glVertex2f(-.25,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.05,.75);
glVertex2f(.06,.75);
glVertex2f(.06,1.05);
glVertex2f(-.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.25,.75);
glVertex2f(.14,.75);
glVertex2f(.14,1.05);
glVertex2f(.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.45,.75);
glVertex2f(.34,.75);
glVertex2f(.34,1.05);
glVertex2f(.45,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.65,.75);
glVertex2f(.54,.75);
glVertex2f(.54,1.05);
glVertex2f(.65,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.85,.75);
glVertex2f(.74,.75);
glVertex2f(.74,1.05);
glVertex2f(.85,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.05,.75);
glVertex2f(.94,.75);
glVertex2f(.94,1.05);
glVertex2f(1.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.25,.75);
glVertex2f(1.13,.75);
glVertex2f(1.13,1.05);
glVertex2f(1.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.45,.75);
glVertex2f(1.33,.75);
glVertex2f(1.33,1.05);
glVertex2f(1.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.65,.75);
glVertex2f(1.53,.75);
glVertex2f(1.53,1.05);
glVertex2f(1.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.85,.75);
glVertex2f(1.73,.75);
glVertex2f(1.73,1.05);
glVertex2f(1.85,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.85,.75);
glVertex2f(1.73,.75);
glVertex2f(1.73,1.05);
glVertex2f(1.85,1.05);

glEnd();

glBegin(GL_LINES);//railLine
glColor3f(128,0,0);
glLineWidth(7.5);
glVertex2f(-2,1);
    glVertex2f(2,1);

glEnd();


glBegin(GL_LINES);//railLine
glColor3f(128,0,0);
glLineWidth(7.5);
glVertex2f(-2,.8);
    glVertex2f(2,.8);

glEnd();




glPushMatrix();
glTranslatef(position4,0.0, 0.0f);


int i100s;//train

GLfloat x2s=-1.7f; GLfloat y2s=.9f; GLfloat radius2s =.1f;
int triangleAmount2s = 20;

GLfloat twicePi2s = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2s, y2s);
for(i100s = 0; i100s <= triangleAmount2s;i100s++) {
glVertex2f(
                x2s + (radius2s * cos(i100s *  twicePi2s / triangleAmount2s)),
   y2s + (radius2s * sin(i100s * twicePi2s / triangleAmount2s))
);
}
  glEnd();


   int i100ss;//train

GLfloat x2ss=-1.5f; GLfloat y2ss=.9f; GLfloat radius2ss =.1f;
int triangleAmount2ss = 20;

GLfloat twicePi2ss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ss, y2ss);
for(i100ss = 0; i100ss <= triangleAmount2ss;i100ss++) {
glVertex2f(
                x2ss + (radius2ss * cos(i100ss *  twicePi2ss / triangleAmount2ss)),
   y2ss + (radius2ss * sin(i100ss * twicePi2ss / triangleAmount2ss))
);
}
  glEnd();

  glBegin(GL_QUADS);//train
glColor3ub(0,0,128);
glVertex2f(-1.9,.86);
glVertex2f(-1.3,.86);
glVertex2f(-1.3,1.2);
glVertex2f(-1.9,1.2);

glEnd();

glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-1.83,.96);
glVertex2f(-1.38,.96);
glVertex2f(-1.38,1.15);
glVertex2f(-1.83,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-1.92,1.2);
    glVertex2f(-1.28,1.2);

glEnd();



int i100ssss;//train

GLfloat x2ssss=-.88f; GLfloat y2ssss=.9f; GLfloat radius2ssss =.1f;
int triangleAmount2ssss = 20;

GLfloat twicePi2ssss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss, y2ssss);
for(i100ssss = 0; i100ssss <= triangleAmount2ssss;i100ssss++) {
glVertex2f(
                x2ssss + (radius2ssss * cos(i100ssss *  twicePi2ssss / triangleAmount2ssss)),
   y2ssss + (radius2ssss * sin(i100ssss * twicePi2ssss / triangleAmount2ssss))
);
}
  glEnd();




   int i100sss;//train

GLfloat x2sss=-.7f; GLfloat y2sss=.9f; GLfloat radius2sss =.1f;
int triangleAmount2sss = 20;

GLfloat twicePi2sss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2sss, y2sss);
for(i100sss = 0; i100sss <= triangleAmount2sss;i100sss++) {
glVertex2f(
                x2sss + (radius2sss * cos(i100sss *  twicePi2sss / triangleAmount2sss)),
   y2sss + (radius2sss * sin(i100sss * twicePi2sss/ triangleAmount2sss))
);
}
  glEnd();


  glBegin(GL_QUADS);//train
glColor3ub(128,0,128);
glVertex2f(-1.09,.86);
glVertex2f(-.5,.86);
glVertex2f(-.5,1.2);
glVertex2f(-1.09,1.2);

glEnd();

glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-1.02,.95);
glVertex2f(-.58,.95);
glVertex2f(-.58,1.15);
glVertex2f(-1.02,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-1.1,1.2);
    glVertex2f(-.48,1.2);

glEnd();


int i100ssss1;//train

GLfloat x2ssss1=-.1f; GLfloat y2ssss1=.9f; GLfloat radius2ssss1 =.1f;
int triangleAmount2ssss1 = 20;

GLfloat twicePi2ssss1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss1, y2ssss1);
for(i100ssss1 = 0; i100ssss1 <= triangleAmount2ssss1;i100ssss1++) {
glVertex2f(
                x2ssss1 + (radius2ssss1 * cos(i100ssss1 *  twicePi2ssss1 / triangleAmount2ssss1)),
   y2ssss1 + (radius2ssss1 * sin(i100ssss1 * twicePi2ssss1 / triangleAmount2ssss1))
);
}
  glEnd();

   glBegin(GL_QUADS);//train
glColor3ub(255,0,0);
glVertex2f(-.3,.86);
glVertex2f(.1,.86);
glVertex2f(.1,1.2);
glVertex2f(-.3,1.2);

glEnd();




glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-.25,.95);
glVertex2f(.05,.95);
glVertex2f(.05,1.15);
glVertex2f(-.25,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-.32,1.2);
    glVertex2f(.12,1.2);

glEnd();


int i100ssss12;//train

GLfloat x2ssss12=.23f; GLfloat y2ssss12=.9f; GLfloat radius2ssss12 =.1f;
int triangleAmount2ssss12 = 20;

GLfloat twicePi2ssss12 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss12, y2ssss12);
for(i100ssss12 = 0; i100ssss12 <= triangleAmount2ssss12;i100ssss12++) {
glVertex2f(
                x2ssss12 + (radius2ssss12 * cos(i100ssss12 *  twicePi2ssss12 / triangleAmount2ssss12)),
   y2ssss12 + (radius2ssss12 * sin(i100ssss12 * twicePi2ssss12 / triangleAmount2ssss12))
);
}
  glEnd();

  int i100ssss13;//train

GLfloat x2ssss13=.41f; GLfloat y2ssss13=.9f; GLfloat radius2ssss13 =.1f;
int triangleAmount2ssss13 = 20;

GLfloat twicePi2ssss13 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss13, y2ssss13);
for(i100ssss13 = 0; i100ssss13 <= triangleAmount2ssss13;i100ssss13++) {
glVertex2f(
                x2ssss13 + (radius2ssss13 * cos(i100ssss13 *  twicePi2ssss13 / triangleAmount2ssss13)),
   y2ssss13 + (radius2ssss13 * sin(i100ssss13 * twicePi2ssss13 / triangleAmount2ssss13))
);
}
  glEnd();

     glBegin(GL_QUADS);//train
glColor3ub(255,255,0);
glVertex2f(.1,.86);
glVertex2f(.53,.86);
glVertex2f(.53,1.05);
glVertex2f(.1,1.05);

glEnd();


   glBegin(GL_QUADS);//train
glColor3ub(255,0,0);
glVertex2f(.28,1.2);
glVertex2f(.43,1.2);
glVertex2f(.43,1.05);
glVertex2f(.28,1.05);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(.27,1.2);
    glVertex2f(.45,1.2);

glEnd();


glBegin(GL_QUADS);//train
glColor3ub(0,0,0);
glVertex2f(-1.3,.9);
glVertex2f(-1.09,.9);
glVertex2f(-1.09,.95);
glVertex2f(-1.3,.95);

glEnd();


glBegin(GL_QUADS);//train
glColor3ub(0,0,0);
glVertex2f(-.5,.9);
glVertex2f(-.3,.9);
glVertex2f(-.3,.95);
glVertex2f(-.5,.95);

glEnd();

  glPopMatrix();



glPushMatrix();//1st
glTranslatef(position,0.0, 0.0f);


  //Cloud


int i10;

GLfloat x1=-1.2f; GLfloat y1=1.7f; GLfloat radius1 =.2f;
int triangleAmount1 = 20;

GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(176,196,222);

glVertex2f(x1, y1);
for(i10 = 0; i10 <= triangleAmount1;i10++) {
glVertex2f(
                x1 + (radius1 * cos(i10 *  twicePi1 / triangleAmount1)),
   y1 + (radius1 * sin(i10 * twicePi1 / triangleAmount1))
);
}
  glEnd();




  int i100;//meg2

GLfloat x2=-1.4f; GLfloat y2=1.5f; GLfloat radius2 =.17f;
int triangleAmount2 = 20;

GLfloat twicePi2 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(176,196,222);
glVertex2f(x2, y2);
for(i100 = 0; i100 <= triangleAmount2;i100++) {
glVertex2f(
                x2 + (radius2 * cos(i100 *  twicePi2 / triangleAmount2)),
   y2 + (radius2 * sin(i100 * twicePi2 / triangleAmount2))
);
}
  glEnd();


  int i1000;//meg3

GLfloat x3=-1.1f; GLfloat y3=1.5f; GLfloat radius3 =.17f;
int triangleAmount3 = 20;

GLfloat twicePi3 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(176,196,222);
glVertex2f(x3, y3);
for(i1000 = 0; i1000 <= triangleAmount3;i1000++) {
glVertex2f(
                x3 + (radius3 * cos(i1000 *  twicePi3 / triangleAmount3)),
   y3 + (radius3 * sin(i1000 * twicePi3 / triangleAmount3))
);
}
  glEnd();




glPopMatrix();













glBegin(GL_QUADS);//river
glColor3ub(86,164,220);
glVertex2f(-2,.7);
glVertex2f(-2,-2);
glColor3ub(140,132,133);
glVertex2f(2,-2);
glVertex2f(2,.7);

glEnd();


glPushMatrix();
glTranslatef(position3,0.0, 0.0f);

glBegin(GL_TRIANGLES);//fish
  glColor3f(255,215,0);
  glVertex2f(1.2, -.3f);
  glVertex2f(1.4,-.4f);
  glVertex2f( 1.2,-0.5f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish
 glColor3f(255,215,0);
  glVertex2f(1.1, -.35f);
  glVertex2f(1.2,-.4f);
  glVertex2f( 1.1,-0.45f);
 glEnd();

int v;//fish

GLfloat xttx=1.32; GLfloat yttx=-.39f; GLfloat radiusttx =.02f;
int triangleAmountttx = 20;

GLfloat twicePittx = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttx, yttx);
for(v = 0; v <= triangleAmountttx;v++) {
glVertex2f(
                xttx + (radiusttx * cos(v *  twicePittx / triangleAmountttx)),
   yttx + (radiusttx * sin(v * twicePittx / triangleAmountttx))
);
}
  glEnd();



  glBegin(GL_TRIANGLES);//fish 2
  glColor3f(255,0,255);
  glVertex2f(.8, -.7f);
  glVertex2f(1.0,-.8f);
  glVertex2f( .8,-0.9f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish2
 glColor3f(255,0,255);
  glVertex2f(.7, -.75f);
  glVertex2f(.8,-.8f);
  glVertex2f( .7,-0.85f);
 glEnd();

 int vy;//fish 2

GLfloat xttxy=.93; GLfloat yttxy=-.8f; GLfloat radiusttxy =.02f;
int triangleAmountttxy = 20;

GLfloat twicePittxy = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttxy, yttxy);
for(vy = 0; vy <= triangleAmountttxy;vy++) {
glVertex2f(
                xttxy + (radiusttxy * cos(vy *  twicePittxy / triangleAmountttxy)),
   yttxy + (radiusttxy * sin(vy * twicePittxy / triangleAmountttxy))
);
}
  glEnd();


  glBegin(GL_TRIANGLES);//fish 3
  glColor3f(0,0,255);
  glVertex2f(.8, 0.0f);
  glVertex2f(1.0,-.1f);
  glVertex2f( .8,-.2f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish 3
 glColor3f(0,0,255);
  glVertex2f(.7, -.05f);
  glVertex2f(.8,-.1f);
  glVertex2f( .7,-0.15f);
 glEnd();

  int vyu;//fish 3

GLfloat xttxyu=.93; GLfloat yttxyu=-.1f; GLfloat radiusttxyu=.02f;
int triangleAmountttxyu = 20;

GLfloat twicePittxyu = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttxyu, yttxyu);
for(vyu = 0; vyu <= triangleAmountttxyu;vyu++) {
glVertex2f(
                xttxyu + (radiusttxyu * cos(vyu *  twicePittxyu / triangleAmountttxyu)),
   yttxyu + (radiusttxyu * sin(vyu * twicePittxyu / triangleAmountttxyu))
);
}

glEnd();

  glPopMatrix();






glPushMatrix();
glTranslatef(position2,0.0, 0.0f);

glBegin(GL_QUADS);//boat
glColor3ub(0,0,0);
glVertex2f(.5,.3);
glVertex2f(1.4,.3);
glVertex2f(1.3,.2);
glVertex2f(.6,.2);

glEnd();


glBegin(GL_QUADS);//boat
glColor3ub(255,165,0);
glVertex2f(.75,.5);
glVertex2f(1.15,.5);
glVertex2f(1.25,.3);
glVertex2f(.65,.3);

glEnd();

glBegin(GL_LINES);//boat
glColor3f(255,215,0);
glVertex2f(.95,.5);
glVertex2f(.95,.8);
    glEnd();

    glBegin(GL_QUADS);//boat
glColor3ub(255,0,0);
glVertex2f(.8,.8);
glVertex2f(1.1,.76);
glVertex2f(1.1,.55);
glVertex2f(.8,.6);

glEnd();

glPopMatrix();




glBegin(GL_POLYGON);//field
glColor3ub(3,250,28);
glVertex2f(-2,.1);
glVertex2f(-2,-2);
glVertex2f(2,-2);


glVertex2f(2,-1.8);
glVertex2f(2,-1.5);
glVertex2f(.4,-1.2);
glVertex2f(.6,-1);
glVertex2f(.4,-.8);
glVertex2f(.7,-.5);
glVertex2f(.4,-.3);

glVertex2f(.5,.1);

glEnd();


glBegin(GL_QUADS);//tree

glColor3ub(128,0,0);

glVertex2f(-0.4,.1);
glVertex2f(-0.4,-.2);
glVertex2f(-.55,-.2);
glVertex2f(-.55,.1);

glEnd();
 int r1;//tree1

GLfloat xttkr1=-.45f; GLfloat yttkr1=.13f; GLfloat radiusttkr1 =.32f;
int triangleAmountttkr1 = 20;

GLfloat twicePittkr1= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1, yttkr1);
for(r1 = 0; r1 <= triangleAmountttkr1;r1++) {
glVertex2f(
                xttkr1 + (radiusttkr1 * cos(r1 *  twicePittkr1 / triangleAmountttkr1)),
   yttkr1 + (radiusttkr1 * sin(r1 * twicePittkr1 / triangleAmountttkr1))
);
}
  glEnd();


int r2;//tree2


GLfloat xttkr2=-.45f; GLfloat yttkr2=0.0f; GLfloat radiusttkr2 =.3f;
int triangleAmountttkr2 = 20;

GLfloat twicePittkr2 =  PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr2, yttkr2);
for(r2 = 0; r2 <= triangleAmountttkr2;r2++) {
glVertex2f(
                xttkr2 + (radiusttkr2 * cos(r2 *  twicePittkr2 / triangleAmountttkr2)),
   yttkr2 + (radiusttkr2 * sin(r2 * twicePittkr2 / triangleAmountttkr2))
);
}
  glEnd();

  int r1n;//tree1

GLfloat xttkr1n=-.45f; GLfloat yttkr1n=.23f; GLfloat radiusttkr1n =.35f;
int triangleAmountttkr1n = 20;

GLfloat twicePittkr1n= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1n, yttkr1n);
for(r1n = 0; r1n <= triangleAmountttkr1n;r1n++) {
glVertex2f(
                xttkr1n + (radiusttkr1n * cos(r1n *  twicePittkr1n / triangleAmountttkr1n)),
   yttkr1n + (radiusttkr1n * sin(r1n * twicePittkr1n / triangleAmountttkr1n))
);
}
  glEnd();


  int r1np;//tree1

GLfloat xttkr1np=-.45f; GLfloat yttkr1np=.35f; GLfloat radiusttkr1np =.28f;
int triangleAmountttkr1np = 20;

GLfloat twicePittkr1np= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1np, yttkr1np);
for(r1np = 0; r1np <= triangleAmountttkr1np;r1np++) {
glVertex2f(
                xttkr1np + (radiusttkr1np * cos(r1np *  twicePittkr1np / triangleAmountttkr1np)),
   yttkr1np + (radiusttkr1np * sin(r1np * twicePittkr1np / triangleAmountttkr1np))
);
}
  glEnd();


int i1005;//flower1

GLfloat x105=-.09f; GLfloat y105=-1.0f; GLfloat radius105 =.05f;
int triangleAmount105 = 20;

GLfloat twicePi105 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x105, y105);
for(i1005 = 0; i1005 <= triangleAmount105;i1005++) {
glVertex2f(
                x105 + (radius105 * cos(i1005*  twicePi105 / triangleAmount105)),
   y105 + (radius105 * sin(i1005 * twicePi105 / triangleAmount105))
);
}
  glEnd();


int i10056;

GLfloat x1056=-.01f; GLfloat y1056=-1.0f; GLfloat radius1056 =.07f;
int triangleAmount1056 = 20;

GLfloat twicePi1056 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x1056, y1056);
for(i10056 = 0; i10056 <= triangleAmount1056;i10056++) {
glVertex2f(
                x1056 + (radius1056 * cos(i10056*  twicePi1056 / triangleAmount1056)),
   y1056 + (radius1056 * sin(i10056 * twicePi1056 / triangleAmount1056))
);
}
  glEnd();




int i100567;

GLfloat x10567=-.2f; GLfloat y10567=-1.0f; GLfloat radius10567 =.05f;
int triangleAmount10567 = 20;

GLfloat twicePi10567 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x10567, y10567);
for(i100567 = 0; i100567 <= triangleAmount10567;i100567++) {
glVertex2f(
                x10567 + (radius10567 * cos(i100567*  twicePi10567 / triangleAmount10567)),
   y10567 + (radius10567 * sin(i100567 * twicePi10567 / triangleAmount10567))
);
}
  glEnd();



int i1005678;

GLfloat x105678=-.25f; GLfloat y105678=-1.03f; GLfloat radius105678 =.05f;
int triangleAmount105678 = 20;

GLfloat twicePi105678 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x105678, y105678);
for(i1005678 = 0; i1005678 <= triangleAmount105678;i1005678++) {
glVertex2f(
                x105678 + (radius105678 * cos(i1005678*  twicePi105678 / triangleAmount105678)),
   y105678 + (radius105678 * sin(i1005678 * twicePi105678 / triangleAmount105678))
);
}
  glEnd();


  int i10056789;

GLfloat x1056789=.2f; GLfloat y1056789=-1.03f; GLfloat radius1056789 =.06f;
int triangleAmount1056789 = 20;

GLfloat twicePi1056789 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x1056789, y1056789);
for(i10056789 = 0; i10056789 <= triangleAmount1056789;i10056789++) {
glVertex2f(
                x1056789 + (radius1056789 * cos(i10056789*  twicePi1056789 / triangleAmount1056789)),
   y1056789 + (radius1056789 * sin(i10056789 * twicePi1056789 / triangleAmount1056789))
);
}
  glEnd();



  int i100567892;

GLfloat x10567892=.15f; GLfloat y10567892=-1.0f; GLfloat radius10567892 =.06f;
int triangleAmount10567892 = 20;

GLfloat twicePi10567892 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x10567892, y1056789);
for(i100567892 = 0; i100567892 <= triangleAmount10567892;i100567892++) {
glVertex2f(
                x10567892 + (radius10567892 * cos(i100567892*  twicePi10567892 / triangleAmount10567892)),
   y10567892 + (radius10567892 * sin(i100567892 * twicePi10567892 / triangleAmount10567892))
);
}
  glEnd();

glBegin(GL_TRIANGLES);//flower
 glColor3ub(0,128,0);
  glVertex2f(-.3, -1.1f);
  glVertex2f(.3,-1.1f);
  glVertex2f(0.0,-1.2f);
 glEnd();







glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(-.2,-1.0);
glVertex2f(-.1,-1.15);

glEnd();

glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(-0.08,-1.0);
glVertex2f(-0.05,-1.15);

glEnd();



glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(.2,-1.0);
glVertex2f(.1,-1.15);

glEnd();








//paddy

glBegin(GL_QUADS);
glColor3ub(210,105,30);

glVertex2f(-.25,.1);
glVertex2f(-.15,.1);
glVertex2f(-.15,-.1);
glVertex2f(-.25,-.1);

glEnd();




 int z;//paddy

GLfloat xtz=-.2f; GLfloat ytz=-.4f; GLfloat radiustz =.4f;
int triangleAmounttz = 20;

GLfloat twicePitz = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,215,0);
glVertex2f(xtz, ytz);
for(z = 0; z <= triangleAmounttz;z++) {
glVertex2f(
                xtz + (radiustz * cos(z *  twicePitz / triangleAmounttz)),
   ytz + (radiustz * sin(z * twicePitz/ triangleAmounttz))
);
}
  glEnd();
glBegin(GL_QUADS);
glColor3ub(255,215,0);

glVertex2f(-.59,-.4);
glVertex2f(.2,-.4);

glVertex2f(.2,-.8);
glVertex2f(-.59,-.8);

glEnd();







glBegin(GL_POLYGON);//road
glColor3ub(217,191,161);
glVertex2f(-2,-1.45);
glVertex2f(2,-1.1);
glVertex2f(2,-1.7);
glVertex2f(-2,-1.95);

glEnd();



/////////////////////car////////////////////////////

glPushMatrix();
glTranslatef(position1,0.0, 0.0f);






	glBegin(GL_QUADS);//car
glColor3ub(139,0,0);
glVertex2f(-1.4,-1.5);
glVertex2f(-.4,-1.4);
glVertex2f(-.4,-1.5);
glVertex2f(-1.4,-1.6);

glEnd();

glBegin(GL_QUADS);//car
glColor3ub(255,165,0);
glVertex2f(-1.3,-1.2);
glVertex2f(-.6,-1.1);
glVertex2f(-.6,-1.42);
glVertex2f(-1.3,-1.48);

glEnd();





int j;//car

GLfloat x4=-.55f; GLfloat y4=-1.6f; GLfloat radius4 =.13f;
int triangleAmount4 = 20;

GLfloat twicePi4 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(47,79,79);
glVertex2f(x4, y4);
for(j = 0; j <= triangleAmount4;j++) {
glVertex2f(
                x4 + (radius4 * cos(j *  twicePi4 / triangleAmount4)),
   y4 + (radius4 * sin(j * twicePi4 / triangleAmount4))
);
}
  glEnd();

  int k;//car

GLfloat x5=-1.1f; GLfloat y5=-1.66f; GLfloat radius5 =.13f;
int triangleAmount5 = 20;

GLfloat twicePi5 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(47,79,79);
glVertex2f(x5, y5);
for(k = 0; k <= triangleAmount5;k++) {
glVertex2f(
                x5 + (radius5 * cos(k *  twicePi5 / triangleAmount5)),
   y5 + (radius5 * sin(k * twicePi5 / triangleAmount5))
);
}
  glEnd();

   int kp;//car

GLfloat x5p=-1.1f; GLfloat y5p=-1.66f; GLfloat radius5p =.05f;
int triangleAmount5p = 20;

GLfloat twicePi5p = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,0,255);
glVertex2f(x5p, y5p);
for(kp = 0; kp <= triangleAmount5p;kp++) {
glVertex2f(
                x5p + (radius5p * cos(kp *  twicePi5p / triangleAmount5p)),
   y5p + (radius5p * sin(kp * twicePi5p / triangleAmount5p))
);
}
  glEnd();

  int jb;//car

GLfloat x4b=-.55f; GLfloat y4b=-1.6f; GLfloat radius4b =.05f;
int triangleAmount4b = 20;

GLfloat twicePi4b = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,0,255);
glVertex2f(x4b, y4b);
for(jb = 0; jb <= triangleAmount4b;jb++) {
glVertex2f(
                x4b + (radius4b * cos(jb *  twicePi4b / triangleAmount4b)),
   y4b + (radius4b * sin(jb * twicePi4b / triangleAmount4b))
);
}
  glEnd();





  glBegin(GL_QUADS);//cow
glColor3ub(255,69,0);
glVertex2f(-.1,-1.3);
glVertex2f(.4,-1.3);
glVertex2f(.4,-1.55);
glVertex2f(-.1,-1.55);

glEnd();

glBegin(GL_LINES);//cow rough
	glColor3ub(0,0,0);
	glLineWidth(9.5);
	glVertex2f(-.1,-1.32);
    glVertex2f(-.4,-1.5);

	glEnd();



	glBegin(GL_TRIANGLES);//cow tail
glColor3ub(255,69,0);
glVertex2f(-.1,-1.35);
glVertex2f(-.1,-1.43);
glVertex2f(-.3,-1.5);


glEnd();

glBegin(GL_TRIANGLES);//cow shing
glColor3ub(0,0,0);
glVertex2f(.3,-1.3);
glVertex2f(.28,-1.1);
glVertex2f(.52,-1.3);


glEnd();

glBegin(GL_TRIANGLES);//cow shing
glColor3ub(0,0,0);
glVertex2f(.25,-1.3);
glVertex2f(.55,-1.12);
glVertex2f(.47,-1.3);


glEnd();





glBegin(GL_TRIANGLES);//cow tail
glColor3ub(0,0,0);
glVertex2f(.3,-1.3);
glVertex2f(.28,-1.1);
glVertex2f(.52,-1.3);


glEnd();




  glBegin(GL_QUADS);//cowleg
glColor3ub(255,69,0);
glVertex2f(.2,-1.55);
glVertex2f(.3,-1.55);
glVertex2f(.33,-1.7);
glVertex2f(.27,-1.7);

glEnd();

glBegin(GL_QUADS);//cowleg
glColor3ub(0,0,0);
glVertex2f(.24,-1.65);
glVertex2f(.32,-1.65);
glVertex2f(.33,-1.7);
glVertex2f(.27,-1.7);

glEnd();


  glBegin(GL_QUADS);//cowleg
glColor3ub(255,69,0);
glVertex2f(0.02,-1.55);
glVertex2f(0.12,-1.55);
glVertex2f(0.08,-1.7);
glVertex2f(0.02,-1.7);

glEnd();


  glBegin(GL_QUADS);//cowleg
glColor3ub(0,0,0);
glVertex2f(0.02,-1.65);
glVertex2f(0.1,-1.65);
glVertex2f(0.08,-1.7);
glVertex2f(0.02,-1.7);

glEnd();




 int jbt;//cow head

GLfloat x4bt=.38f; GLfloat y4bt=-1.3f; GLfloat radius4bt =.13f;
int triangleAmount4bt = 20;

GLfloat twicePi4bt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x4bt, y4bt);
for(jbt = 0; jbt <= triangleAmount4bt;jbt++) {
glVertex2f(
                x4bt + (radius4bt * cos(jbt *  twicePi4bt / triangleAmount4bt)),
   y4bt + (radius4bt * sin(jbt * twicePi4bt / triangleAmount4bt))
);
}
  glEnd();



  /*
 glBegin(GL_TRIANGLES);//cow shing
glColor3ub(0,0,0);
glVertex2f(.34,-1.35);
glVertex2f(.4,-1.3);
glVertex2f(.46,-1.35);


glEnd();





 int jbtu;//cow eye

GLfloat x4btu=.34f; GLfloat y4btu=-1.28f; GLfloat radius4btu =.03f;
int triangleAmount4btu = 20;

GLfloat twicePi4btu = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x4btu, y4btu);
for(jbtu = 0; jbtu <= triangleAmount4btu;jbtu++) {
glVertex2f(
                x4btu + (radius4btu * cos(jbtu *  twicePi4btu / triangleAmount4btu)),
   y4btu + (radius4btu * sin(jbtu * twicePi4btu / triangleAmount4btu))
);
}
  glEnd();

  int jbtuo;//cow eye

GLfloat x4btuo=.34f; GLfloat y4btuo=-1.28f; GLfloat radius4btuo =.015f;
int triangleAmount4btuo = 20;

GLfloat  twicePi4btuo = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,255,255);
glVertex2f(x4btuo, y4btuo);
for(jbtuo = 0; jbtuo <= triangleAmount4btuo;jbtuo++) {
glVertex2f(
                x4btuo + (radius4btuo * cos(jbtuo *  twicePi4btuo / triangleAmount4btuo)),
   y4btuo + (radius4btuo * sin(jbtuo * twicePi4btuo / triangleAmount4btuo))
);
}
  glEnd();


   int jbtuk;//cow

GLfloat x4btuk=.45f; GLfloat y4btuk=-1.28f; GLfloat radius4btuk =.03f;
int triangleAmount4btuk = 20;

GLfloat twicePi4btuk = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,0,0);
glVertex2f(x4btuk, y4btuk);
for(jbtuk = 0; jbtuk <= triangleAmount4btuk;jbtuk++) {
glVertex2f(
                x4btuk + (radius4btuk * cos(jbtuk *  twicePi4btuk / triangleAmount4btuk)),
   y4btuk + (radius4btuk * sin(jbtuk * twicePi4btuk / triangleAmount4btuk))
);
}
  glEnd();




   int jbtukl;//cow eye

GLfloat x4btukl=.13f; GLfloat y4btukl=-1.35f; GLfloat radius4btukl =.09f;
int triangleAmount4btukl = 20;

GLfloat twicePi4btukl = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,69,0);
glVertex2f(x4btukl, y4btukl);
for(jbtukl = 0; jbtukl <= triangleAmount4btukl;jbtukl++) {
glVertex2f(
                x4btukl + (radius4btukl * cos(jbtukl *  twicePi4btukl / triangleAmount4btukl)),
   y4btukl + (radius4btukl * sin(jbtukl * twicePi4btukl / triangleAmount4btukl))
);
}
  glEnd();





  int jbtukls;//cow eye

GLfloat x4btukls=.45f; GLfloat y4btukls=-1.28f; GLfloat radius4btukls =.015f;
int triangleAmount4btukls = 20;

GLfloat twicePi4btukls = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,255,255);
glVertex2f(x4btukls, y4btukls);
for(jbtukls = 0; jbtukls <= triangleAmount4btukls;jbtukls++) {
glVertex2f(
                x4btukls + (radius4btukls * cos(jbtukls *  twicePi4btukls / triangleAmount4btukls)),
   y4btukls + (radius4btukls * sin(jbtukls * twicePi4btukls / triangleAmount4btukls))
);
}
  glEnd();

*/



  glPopMatrix();







  int c;//tree1

GLfloat xt=-.2f; GLfloat yt=-1.57f; GLfloat radiust =.16f;
int triangleAmountt = 20;

GLfloat twicePit = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xt, yt);
for(c = 0; c <= triangleAmountt;c++) {
glVertex2f(
                xt + (radiust * cos(c *  twicePit / triangleAmountt)),
   yt + (radiust * sin(c * twicePit / triangleAmountt))
);
}
  glEnd();





     int d;//tree1

GLfloat xtt=-.2f; GLfloat ytt=-1.43f; GLfloat radiustt =.12f;
int triangleAmounttt = 20;

GLfloat twicePitt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtt, ytt);
for(d = 0; d <= triangleAmounttt;d++) {
glVertex2f(
                xtt + (radiustt * cos(d *  twicePitt / triangleAmounttt)),
   ytt + (radiustt * sin(d * twicePitt / triangleAmounttt))
);
}
  glEnd();


    int e;//tree1

GLfloat x9=-.2f; GLfloat y9=-1.37f; GLfloat radius9 =.08f;
int triangleAmount9 = 20;

GLfloat twicePi9 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(x9, y9);
for(e = 0; e <= triangleAmount9;e++) {
glVertex2f(
                x9 + (radius9 * cos(e *  twicePi9 / triangleAmount9)),
   y9 + (radius9 * sin(e * twicePi9 / triangleAmount9))
);
}
  glEnd();


    int p;//tree2

GLfloat xt1=-1.2f; GLfloat yt1=-1.67f; GLfloat radiust1 =.14f;
int triangleAmountt1 = 20;

GLfloat twicePit1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xt1, yt1);
for(p = 0; p <= triangleAmountt1;p++) {
glVertex2f(
                xt1 + (radiust1 * cos(p *  twicePit1 / triangleAmountt1)),
   yt1 + (radiust1 * sin(p * twicePit1 / triangleAmountt1))
);
}
  glEnd();

    int g;//tree2

GLfloat xtt8=-1.2f; GLfloat ytt8=-1.53f; GLfloat radiustt8 =.1f;
int triangleAmounttt8 = 20;

GLfloat twicePitt8 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtt8, ytt8);
for(g = 0; g <= triangleAmounttt8;g++) {
glVertex2f(
                xtt8 + (radiustt8 * cos(g *  twicePitt8 / triangleAmounttt8)),
   ytt8 + (radiustt8 * sin(g * twicePitt8 / triangleAmounttt8))
);
}
  glEnd();


    int h;//tree2

GLfloat x95=-1.2f; GLfloat y95=-1.47f; GLfloat radius95 =.06f;
int triangleAmount95 = 20;

GLfloat twicePi95 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(x95, y95);
for(h = 0; h <= triangleAmount95;h++) {
glVertex2f(
                x95 + (radius95 * cos(h *  twicePi95 / triangleAmount95)),
   y95 + (radius95 * sin(h * twicePi95 / triangleAmount95))
);
}
  glEnd();



    int l;//tree3

GLfloat xtn=1.1f; GLfloat ytn=-1.47f; GLfloat radiustn =.16f;
int triangleAmounttn = 20;

GLfloat twicePitn = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtn, ytn);
for(l = 0; l <= triangleAmounttn;l++) {
glVertex2f(
                xtn + (radiustn * cos(l *  twicePitn / triangleAmounttn)),
   ytn + (radiustn * sin(l * twicePitn / triangleAmounttn))
);
}
  glEnd();

    int o;//tree3

GLfloat xttk=1.1f; GLfloat yttk=-1.36f; GLfloat radiusttk =.12f;
int triangleAmountttk = 20;

GLfloat twicePittk = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xttk, yttk);
for(o = 0; o <= triangleAmountttk;o++) {
glVertex2f(
                xttk + (radiusttk * cos(o *  twicePittk / triangleAmountttk)),
   yttk + (radiusttk * sin(o * twicePittk / triangleAmountttk))
);
}
  glEnd();

  int r;//tree3

GLfloat xttkr=1.1f; GLfloat yttkr=-1.3f; GLfloat radiusttkr =.08f;
int triangleAmountttkr = 20;

GLfloat twicePittkr = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xttkr, yttkr);
for(r = 0; r <= triangleAmountttkr;r++) {
glVertex2f(
                xttkr + (radiusttkr * cos(r *  twicePittkr / triangleAmountttkr)),
   yttkr + (radiusttkr * sin(r * twicePittkr / triangleAmountttkr))
);
}
  glEnd();

  glBegin(GL_QUADS);//tree line 3
glColor3ub(128,0,0);
glVertex2f(1.05,-1.63);
glVertex2f(1.15,-1.63);
glVertex2f(1.15,-1.8);
glVertex2f(1.05,-1.8);

glEnd();

  glBegin(GL_QUADS);//treeLine2
glColor3ub(128,0,0);
glVertex2f(-.25,-1.72);
glVertex2f(-.15,-1.72);
glVertex2f(-.15,-1.88);
glVertex2f(-.25,-1.88);

glEnd();

  glBegin(GL_QUADS);//treeLine3
glColor3ub(128,0,0);
glVertex2f(-1.25,-1.8);
glVertex2f(-1.15,-1.8);
glVertex2f(-1.15,-1.95);
glVertex2f(-1.25,-1.95);

glEnd();







glTranslated(-.9,-.7,0);

//House
glBegin(GL_QUADS);
glColor3ub(187,127,11);

glVertex2f(-.5,.5);
glVertex2f(.3,.5);
glVertex2f(0,1.1);
glVertex2f(-.8,1.1);

glEnd();



glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(.3,.5);
glVertex2f(0,1.1);

glEnd();

    glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0,1.1);
glVertex2f(-.8,1.1);

glEnd();





glBegin(GL_QUADS);
glColor3ub(187,127,11);

glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);
glVertex2f(.2,-.2);
glVertex2f(.2,.5);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,-.3);
glVertex2f(.2,-.2);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(.3,.5);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(.2,-.2);
glVertex2f(.2,.5);

glEnd();



glBegin(GL_QUADS);//3
glColor3ub(187,127,11);

glVertex2f(-1,.5);
glVertex2f(-.7,1);
glVertex2f(-.8,1.1);
glVertex2f(-1.1,.6);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
    glVertex2f(-1.1,.6);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
    glVertex2f(-1.1,.6);
glVertex2f(-.8,1.1);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.8,1.1);
glVertex2f(-.5,.5);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
glVertex2f(-.74,.96);

glEnd();


glBegin(GL_POLYGON);//4
glColor3f(1,1,0);

glVertex2f(-.73,.96);
glVertex2f(-1,.5);
glColor3f(1,1,1);
glVertex2f(-1,0);
glVertex2f(-.5,-.3);
glVertex2f(-.5,.5);



glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
glVertex2f(-1,0);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,0);
glVertex2f(-.5,-.3);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);
glEnd();


glBegin(GL_LINES);//Door
glColor3f(0,0,0);
glVertex2f(-.2,-.25);
glVertex2f(-.2,.2);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.1,-.25);
glVertex2f(-.1,.2);
glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0,-.23);
glVertex2f(0,.2);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.2,.2);
glVertex2f(0,.2);
glEnd();






glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.85,.6);
glVertex2f(-.85,.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.85,.3);
glVertex2f(-.65,.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.65,.3);
glVertex2f(-.65,.6);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.65,.6);
glVertex2f(-.85,.6);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.75,.6);
glVertex2f(-.75,.3);

glEnd();




////////////////////Cloud2


glPushMatrix();//1st
glTranslatef(position,0.0, 0.0f);
glTranslatef(-.3,.6,0);
//int i10;

//GLfloat x1=-1.2f; GLfloat y1=1.7f; GLfloat radius1 =.2f;
//int triangleAmount1 = 20;

//GLfloat twicePi1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(176,196,222);

glVertex2f(x1, y1);
for(i10 = 0; i10 <= triangleAmount1;i10++) {
glVertex2f(
                x1 + (radius1 * cos(i10 *  twicePi1 / triangleAmount1)),
   y1 + (radius1 * sin(i10 * twicePi1 / triangleAmount1))
);
}
  glEnd();




//  int i100;//meg2

//GLfloat x2=-1.4f; GLfloat y2=1.5f; GLfloat radius2 =.17f;
//int triangleAmount2 = 20;

//GLfloat twicePi2 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(176,196,222);
glVertex2f(x2, y2);
for(i100 = 0; i100 <= triangleAmount2;i100++) {
glVertex2f(
                x2 + (radius2 * cos(i100 *  twicePi2 / triangleAmount2)),
   y2 + (radius2 * sin(i100 * twicePi2 / triangleAmount2))
);
}
  glEnd();


//  int i1000;//meg3

//GLfloat x3=-1.1f; GLfloat y3=1.5f; GLfloat radius3 =.17f;
//int triangleAmount3 = 20;

//GLfloat twicePi3 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(176,196,222);
glVertex2f(x3, y3);
for(i1000 = 0; i1000 <= triangleAmount3;i1000++) {
glVertex2f(
                x3 + (radius3 * cos(i1000 *  twicePi3 / triangleAmount3)),
   y3 + (radius3 * sin(i1000 * twicePi3 / triangleAmount3))
);
}
  glEnd();




glPopMatrix();

glLoadIdentity();












glutTimerFunc(7800,time,1);
glutPostRedisplay();



glFlush();
}












/////////////////////Night/////////////









void Night() {
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//glEnable(GL_LIGHTING);
glLoadIdentity();
gluOrtho2D(-2,2,-2,2);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


/*
glEnable(GL_LIGHTING);
GLfloat global_ambient[]={1.9,0.9,0.0,0.1};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient);
*/


glBegin(GL_QUADS);//sky
glColor3ub(60,57,53);
glVertex2f(-2,2);
glVertex2f(-2,-2);

glVertex2f(2,-2);
glVertex2f(2,2);

glEnd();




  int i1005678921;//hill

GLfloat x105678921=-1.6f; GLfloat y105678921=.9f; GLfloat radius105678921 =.48f;
int triangleAmount105678921 = 20;

GLfloat twicePi105678921 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x105678921, y105678921);
for(i1005678921 = 0; i1005678921 <= triangleAmount105678921;i1005678921++) {
glVertex2f(
                x105678921 + (radius105678921 * cos(i1005678921*  twicePi105678921 / triangleAmount105678921)),
   y105678921 + (radius105678921 * sin(i1005678921 * twicePi105678921 / triangleAmount105678921))
);
}
  glEnd();

  int i10056789212;//hill

GLfloat x1056789212=-1.0f; GLfloat y1056789212=.9f; GLfloat radius1056789212 =.48f;
int triangleAmount1056789212 = 20;

GLfloat twicePi1056789212 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x1056789212, y1056789212);
for(i10056789212 = 0; i10056789212 <= triangleAmount1056789212;i10056789212++) {
glVertex2f(
                x1056789212 + (radius1056789212 * cos(i10056789212*  twicePi1056789212 / triangleAmount1056789212)),
   y1056789212 + (radius1056789212 * sin(i10056789212 * twicePi1056789212 / triangleAmount1056789212))
);
}
  glEnd();


    int i105678921o;//hill

GLfloat x105678921o=-2.0f; GLfloat y105678921o=1.4f; GLfloat radius105678921o=.25f;
int triangleAmount105678921o = 20;

GLfloat twicePi105678921o = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(34,139,34);
glVertex2f(x105678921o, y105678921o);
for(i105678921o = 0; i105678921o <= triangleAmount105678921o;i105678921o++) {
glVertex2f(
                x105678921o + (radius105678921o * cos(i105678921o*  twicePi105678921o / triangleAmount105678921o)),
   y105678921o + (radius105678921o * sin(i105678921o * twicePi105678921o / triangleAmount105678921o))
);
}
  glEnd();




  ////////////moon/////////////////





int i1;//mo0n

GLfloat x=0.2f; GLfloat y=1.75f; GLfloat radius =.2f;
int triangleAmount = 20;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(1,1,1);
glVertex2f(x, y);
for(i1 = 0; i1 <= triangleAmount;i1++) {
glVertex2f(
                x + (radius * cos(i1 *  twicePi / triangleAmount)),
   y + (radius * sin(i1 * twicePi / triangleAmount))
);
}
  glEnd();





glBegin(GL_QUADS);//railLine
glColor3ub(240,230,140);
glVertex2f(-2,1.1);
glVertex2f(2,1.1);
glVertex2f(2,.67);
glVertex2f(-2,.67);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-2,.75);
glVertex2f(-1.9,.75);
glVertex2f(-1.9,1.05);
glVertex2f(-2,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.85,.75);
glVertex2f(-1.73,.75);
glVertex2f(-1.73,1.05);
glVertex2f(-1.85,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.65,.75);
glVertex2f(-1.53,.75);
glVertex2f(-1.53,1.05);
glVertex2f(-1.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.45,.75);
glVertex2f(-1.33,.75);
glVertex2f(-1.33,1.05);
glVertex2f(-1.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.25,.75);
glVertex2f(-1.13,.75);
glVertex2f(-1.13,1.05);
glVertex2f(-1.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-1.05,.75);
glVertex2f(-.93,.75);
glVertex2f(-.93,1.05);
glVertex2f(-1.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.85,.75);
glVertex2f(-.73,.75);
glVertex2f(-.73,1.05);
glVertex2f(-.85,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.65,.75);
glVertex2f(-.53,.75);
glVertex2f(-.53,1.05);
glVertex2f(-.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.45,.75);
glVertex2f(-.33,.75);
glVertex2f(-.33,1.05);
glVertex2f(-.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.25,.75);
glVertex2f(-.13,.75);
glVertex2f(-.13,1.05);
glVertex2f(-.25,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(-.05,.75);
glVertex2f(.06,.75);
glVertex2f(.06,1.05);
glVertex2f(-.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.25,.75);
glVertex2f(.14,.75);
glVertex2f(.14,1.05);
glVertex2f(.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.45,.75);
glVertex2f(.34,.75);
glVertex2f(.34,1.05);
glVertex2f(.45,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.65,.75);
glVertex2f(.54,.75);
glVertex2f(.54,1.05);
glVertex2f(.65,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(.85,.75);
glVertex2f(.74,.75);
glVertex2f(.74,1.05);
glVertex2f(.85,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.05,.75);
glVertex2f(.94,.75);
glVertex2f(.94,1.05);
glVertex2f(1.05,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.25,.75);
glVertex2f(1.13,.75);
glVertex2f(1.13,1.05);
glVertex2f(1.25,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.45,.75);
glVertex2f(1.33,.75);
glVertex2f(1.33,1.05);
glVertex2f(1.45,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.65,.75);
glVertex2f(1.53,.75);
glVertex2f(1.53,1.05);
glVertex2f(1.65,1.05);

glEnd();

glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.85,.75);
glVertex2f(1.73,.75);
glVertex2f(1.73,1.05);
glVertex2f(1.85,1.05);

glEnd();


glBegin(GL_QUADS);//railLine
glColor3ub(128,0,0);
glVertex2f(1.85,.75);
glVertex2f(1.73,.75);
glVertex2f(1.73,1.05);
glVertex2f(1.85,1.05);

glEnd();

glBegin(GL_LINES);//railLine
glColor3f(128,0,0);
glLineWidth(7.5);
glVertex2f(-2,1);
    glVertex2f(2,1);

glEnd();


glBegin(GL_LINES);//railLine
glColor3f(128,0,0);
glLineWidth(7.5);
glVertex2f(-2,.8);
    glVertex2f(2,.8);

glEnd();




glPushMatrix();
glTranslatef(position4,0.0, 0.0f);


int i100s;//train

GLfloat x2s=-1.7f; GLfloat y2s=.9f; GLfloat radius2s =.1f;
int triangleAmount2s = 20;

GLfloat twicePi2s = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2s, y2s);
for(i100s = 0; i100s <= triangleAmount2s;i100s++) {
glVertex2f(
                x2s + (radius2s * cos(i100s *  twicePi2s / triangleAmount2s)),
   y2s + (radius2s * sin(i100s * twicePi2s / triangleAmount2s))
);
}
  glEnd();


   int i100ss;//train

GLfloat x2ss=-1.5f; GLfloat y2ss=.9f; GLfloat radius2ss =.1f;
int triangleAmount2ss = 20;

GLfloat twicePi2ss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ss, y2ss);
for(i100ss = 0; i100ss <= triangleAmount2ss;i100ss++) {
glVertex2f(
                x2ss + (radius2ss * cos(i100ss *  twicePi2ss / triangleAmount2ss)),
   y2ss + (radius2ss * sin(i100ss * twicePi2ss / triangleAmount2ss))
);
}
  glEnd();

  glBegin(GL_QUADS);//train
glColor3ub(0,0,128);
glVertex2f(-1.9,.86);
glVertex2f(-1.3,.86);
glVertex2f(-1.3,1.2);
glVertex2f(-1.9,1.2);

glEnd();

glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-1.83,.96);
glVertex2f(-1.38,.96);
glVertex2f(-1.38,1.15);
glVertex2f(-1.83,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-1.92,1.2);
    glVertex2f(-1.28,1.2);

glEnd();



int i100ssss;//train

GLfloat x2ssss=-.88f; GLfloat y2ssss=.9f; GLfloat radius2ssss =.1f;
int triangleAmount2ssss = 20;

GLfloat twicePi2ssss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss, y2ssss);
for(i100ssss = 0; i100ssss <= triangleAmount2ssss;i100ssss++) {
glVertex2f(
                x2ssss + (radius2ssss * cos(i100ssss *  twicePi2ssss / triangleAmount2ssss)),
   y2ssss + (radius2ssss * sin(i100ssss * twicePi2ssss / triangleAmount2ssss))
);
}
  glEnd();




   int i100sss;//train

GLfloat x2sss=-.7f; GLfloat y2sss=.9f; GLfloat radius2sss =.1f;
int triangleAmount2sss = 20;

GLfloat twicePi2sss = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2sss, y2sss);
for(i100sss = 0; i100sss <= triangleAmount2sss;i100sss++) {
glVertex2f(
                x2sss + (radius2sss * cos(i100sss *  twicePi2sss / triangleAmount2sss)),
   y2sss + (radius2sss * sin(i100sss * twicePi2sss/ triangleAmount2sss))
);
}
  glEnd();


  glBegin(GL_QUADS);//train
glColor3ub(128,0,128);
glVertex2f(-1.09,.86);
glVertex2f(-.5,.86);
glVertex2f(-.5,1.2);
glVertex2f(-1.09,1.2);

glEnd();

glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-1.02,.95);
glVertex2f(-.58,.95);
glVertex2f(-.58,1.15);
glVertex2f(-1.02,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-1.1,1.2);
    glVertex2f(-.48,1.2);

glEnd();


int i100ssss1;//train

GLfloat x2ssss1=-.1f; GLfloat y2ssss1=.9f; GLfloat radius2ssss1 =.1f;
int triangleAmount2ssss1 = 20;

GLfloat twicePi2ssss1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss1, y2ssss1);
for(i100ssss1 = 0; i100ssss1 <= triangleAmount2ssss1;i100ssss1++) {
glVertex2f(
                x2ssss1 + (radius2ssss1 * cos(i100ssss1 *  twicePi2ssss1 / triangleAmount2ssss1)),
   y2ssss1 + (radius2ssss1 * sin(i100ssss1 * twicePi2ssss1 / triangleAmount2ssss1))
);
}
  glEnd();

   glBegin(GL_QUADS);//train
glColor3ub(255,0,0);
glVertex2f(-.3,.86);
glVertex2f(.1,.86);
glVertex2f(.1,1.2);
glVertex2f(-.3,1.2);

glEnd();




glBegin(GL_QUADS);//train
glColor3ub(240,230,140);
glVertex2f(-.25,.95);
glVertex2f(.05,.95);
glVertex2f(.05,1.15);
glVertex2f(-.25,1.15);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(-.32,1.2);
    glVertex2f(.12,1.2);

glEnd();


int i100ssss12;//train

GLfloat x2ssss12=.23f; GLfloat y2ssss12=.9f; GLfloat radius2ssss12 =.1f;
int triangleAmount2ssss12 = 20;

GLfloat twicePi2ssss12 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss12, y2ssss12);
for(i100ssss12 = 0; i100ssss12 <= triangleAmount2ssss12;i100ssss12++) {
glVertex2f(
                x2ssss12 + (radius2ssss12 * cos(i100ssss12 *  twicePi2ssss12 / triangleAmount2ssss12)),
   y2ssss12 + (radius2ssss12 * sin(i100ssss12 * twicePi2ssss12 / triangleAmount2ssss12))
);
}
  glEnd();

  int i100ssss13;//train

GLfloat x2ssss13=.41f; GLfloat y2ssss13=.9f; GLfloat radius2ssss13 =.1f;
int triangleAmount2ssss13 = 20;

GLfloat twicePi2ssss13 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(x2ssss13, y2ssss13);
for(i100ssss13 = 0; i100ssss13 <= triangleAmount2ssss13;i100ssss13++) {
glVertex2f(
                x2ssss13 + (radius2ssss13 * cos(i100ssss13 *  twicePi2ssss13 / triangleAmount2ssss13)),
   y2ssss13 + (radius2ssss13 * sin(i100ssss13 * twicePi2ssss13 / triangleAmount2ssss13))
);
}
  glEnd();

     glBegin(GL_QUADS);//train
glColor3ub(255,255,0);
glVertex2f(.1,.86);
glVertex2f(.53,.86);
glVertex2f(.53,1.05);
glVertex2f(.1,1.05);

glEnd();


   glBegin(GL_QUADS);//train
glColor3ub(255,0,0);
glVertex2f(.28,1.2);
glVertex2f(.43,1.2);
glVertex2f(.43,1.05);
glVertex2f(.28,1.05);

glEnd();

glBegin(GL_LINES);//train
glColor3f(0,0,0);
glLineWidth(9.5);
glVertex2f(.27,1.2);
    glVertex2f(.45,1.2);

glEnd();


glBegin(GL_QUADS);//train
glColor3ub(0,0,0);
glVertex2f(-1.3,.9);
glVertex2f(-1.09,.9);
glVertex2f(-1.09,.95);
glVertex2f(-1.3,.95);

glEnd();


glBegin(GL_QUADS);//train
glColor3ub(0,0,0);
glVertex2f(-.5,.9);
glVertex2f(-.3,.9);
glVertex2f(-.3,.95);
glVertex2f(-.5,.95);

glEnd();

  glPopMatrix();















glBegin(GL_QUADS);//river
glColor3ub(86,164,220);
glVertex2f(-2,.7);
glVertex2f(-2,-2);
glColor3ub(1,1,1);
glVertex2f(2,-2);
glVertex2f(2,.7);

glEnd();


glPushMatrix();
glTranslatef(position3,0.0, 0.0f);

glBegin(GL_TRIANGLES);//fish
  glColor3f(255,215,0);
  glVertex2f(1.2, -.3f);
  glVertex2f(1.4,-.4f);
  glVertex2f( 1.2,-0.5f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish
 glColor3f(255,215,0);
  glVertex2f(1.1, -.35f);
  glVertex2f(1.2,-.4f);
  glVertex2f( 1.1,-0.45f);
 glEnd();

int v;//fish

GLfloat xttx=1.32; GLfloat yttx=-.39f; GLfloat radiusttx =.02f;
int triangleAmountttx = 20;

GLfloat twicePittx = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttx, yttx);
for(v = 0; v <= triangleAmountttx;v++) {
glVertex2f(
                xttx + (radiusttx * cos(v *  twicePittx / triangleAmountttx)),
   yttx + (radiusttx * sin(v * twicePittx / triangleAmountttx))
);
}
  glEnd();


  glBegin(GL_TRIANGLES);//fish 2
  glColor3f(255,0,255);
  glVertex2f(.8, -.7f);
  glVertex2f(1.0,-.8f);
  glVertex2f( .8,-0.9f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish2
 glColor3f(255,0,255);
  glVertex2f(.7, -.75f);
  glVertex2f(.8,-.8f);
  glVertex2f( .7,-0.85f);
 glEnd();

 int vy;//fish 2

GLfloat xttxy=.93; GLfloat yttxy=-.8f; GLfloat radiusttxy =.02f;
int triangleAmountttxy = 20;

GLfloat twicePittxy = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttxy, yttxy);
for(vy = 0; vy <= triangleAmountttxy;vy++) {
glVertex2f(
                xttxy + (radiusttxy * cos(vy *  twicePittxy / triangleAmountttxy)),
   yttxy + (radiusttxy * sin(vy * twicePittxy / triangleAmountttxy))
);
}
  glEnd();


  glBegin(GL_TRIANGLES);//fish 3
  glColor3f(0,0,255);
  glVertex2f(.8, 0.0f);
  glVertex2f(1.0,-.1f);
  glVertex2f( .8,-.2f);
 glEnd();

 glBegin(GL_TRIANGLES);//fish 3
 glColor3f(0,0,255);
  glVertex2f(.7, -.05f);
  glVertex2f(.8,-.1f);
  glVertex2f( .7,-0.15f);
 glEnd();

  int vyu;//fish 3

GLfloat xttxyu=.93; GLfloat yttxyu=-.1f; GLfloat radiusttxyu=.02f;
int triangleAmountttxyu = 20;

GLfloat twicePittxyu = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,0,0);
glVertex2f(xttxyu, yttxyu);
for(vyu = 0; vyu <= triangleAmountttxyu;vyu++) {
glVertex2f(
                xttxyu + (radiusttxyu * cos(vyu *  twicePittxyu / triangleAmountttxyu)),
   yttxyu + (radiusttxyu * sin(vyu * twicePittxyu / triangleAmountttxyu))
);
}

glEnd();

  glPopMatrix();






glPushMatrix();
glTranslatef(position2,0.0, 0.0f);

glBegin(GL_QUADS);//boat
glColor3ub(0,0,0);
glVertex2f(.5,.3);
glVertex2f(1.4,.3);
glVertex2f(1.3,.2);
glVertex2f(.6,.2);

glEnd();


glBegin(GL_QUADS);//boat
glColor3ub(255,165,0);
glVertex2f(.75,.5);
glVertex2f(1.15,.5);
glVertex2f(1.25,.3);
glVertex2f(.65,.3);

glEnd();

glBegin(GL_LINES);//boat
glColor3f(255,215,0);
glVertex2f(.95,.5);
glVertex2f(.95,.8);
    glEnd();

    glBegin(GL_QUADS);//boat
glColor3ub(255,0,0);
glVertex2f(.8,.8);
glVertex2f(1.1,.76);
glVertex2f(1.1,.55);
glVertex2f(.8,.6);

glEnd();

glPopMatrix();




glBegin(GL_POLYGON);//field
glColor3ub(3,250,28);
glVertex2f(-2,.1);
glColor3ub(1,1,1);
glVertex2f(-2,-2);
glVertex2f(2,-2);


glVertex2f(2,-1.8);
glVertex2f(2,-1.5);
glVertex2f(.4,-1.2);
glColor3ub(1,1,1);
glVertex2f(.6,-1);
glVertex2f(.4,-.8);
glVertex2f(.7,-.5);
glColor3ub(1,1,1);
glVertex2f(.4,-.3);

glVertex2f(.5,.1);

glEnd();








//////////////////////////////Bird return//////////////////////////////////




/////////////////////////////////1st bird

glPushMatrix();
glTranslatef(position10,0.0, 0.0f);


 glBegin(GL_LINES);
  glColor3f(1,1,1);

  glVertex2f(1.65,.5);
  glVertex2f(1.55,.6);
  glEnd();

glBegin(GL_LINES);
  glColor3f(1,1,1);

  glVertex2f(1.65,.5);
  glVertex2f(1.75,.6);
  glEnd();


  glPopMatrix();







glBegin(GL_QUADS);//tree

glColor3ub(128,0,0);

glVertex2f(-0.4,.1);
glVertex2f(-0.4,-.2);
glVertex2f(-.55,-.2);
glVertex2f(-.55,.1);

glEnd();
 int r1;//tree1

GLfloat xttkr1=-.45f; GLfloat yttkr1=.13f; GLfloat radiusttkr1 =.32f;
int triangleAmountttkr1 = 20;

GLfloat twicePittkr1= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1, yttkr1);
for(r1 = 0; r1 <= triangleAmountttkr1;r1++) {
glVertex2f(
                xttkr1 + (radiusttkr1 * cos(r1 *  twicePittkr1 / triangleAmountttkr1)),
   yttkr1 + (radiusttkr1 * sin(r1 * twicePittkr1 / triangleAmountttkr1))
);
}
  glEnd();


int r2;//tree2


GLfloat xttkr2=-.45f; GLfloat yttkr2=0.0f; GLfloat radiusttkr2 =.3f;
int triangleAmountttkr2 = 20;

GLfloat twicePittkr2 =  PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr2, yttkr2);
for(r2 = 0; r2 <= triangleAmountttkr2;r2++) {
glVertex2f(
                xttkr2 + (radiusttkr2 * cos(r2 *  twicePittkr2 / triangleAmountttkr2)),
   yttkr2 + (radiusttkr2 * sin(r2 * twicePittkr2 / triangleAmountttkr2))
);
}
  glEnd();

  int r1n;//tree1

GLfloat xttkr1n=-.45f; GLfloat yttkr1n=.23f; GLfloat radiusttkr1n =.35f;
int triangleAmountttkr1n = 20;

GLfloat twicePittkr1n= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1n, yttkr1n);
for(r1n = 0; r1n <= triangleAmountttkr1n;r1n++) {
glVertex2f(
                xttkr1n + (radiusttkr1n * cos(r1n *  twicePittkr1n / triangleAmountttkr1n)),
   yttkr1n + (radiusttkr1n * sin(r1n * twicePittkr1n / triangleAmountttkr1n))
);
}
  glEnd();


  int r1np;//tree1

GLfloat xttkr1np=-.45f; GLfloat yttkr1np=.35f; GLfloat radiusttkr1np =.28f;
int triangleAmountttkr1np = 20;

GLfloat twicePittkr1np= PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(0,100,0);
glVertex2f(xttkr1np, yttkr1np);
for(r1np = 0; r1np <= triangleAmountttkr1np;r1np++) {
glVertex2f(
                xttkr1np + (radiusttkr1np * cos(r1np *  twicePittkr1np / triangleAmountttkr1np)),
   yttkr1np + (radiusttkr1np * sin(r1np * twicePittkr1np / triangleAmountttkr1np))
);
}
  glEnd();














int i1005;//flower1

GLfloat x105=-.09f; GLfloat y105=-1.0f; GLfloat radius105 =.05f;
int triangleAmount105 = 20;

GLfloat twicePi105 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x105, y105);
for(i1005 = 0; i1005 <= triangleAmount105;i1005++) {
glVertex2f(
                x105 + (radius105 * cos(i1005*  twicePi105 / triangleAmount105)),
   y105 + (radius105 * sin(i1005 * twicePi105 / triangleAmount105))
);
}
  glEnd();


int i10056;

GLfloat x1056=-.01f; GLfloat y1056=-1.0f; GLfloat radius1056 =.07f;
int triangleAmount1056 = 20;

GLfloat twicePi1056 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x1056, y1056);
for(i10056 = 0; i10056 <= triangleAmount1056;i10056++) {
glVertex2f(
                x1056 + (radius1056 * cos(i10056*  twicePi1056 / triangleAmount1056)),
   y1056 + (radius1056 * sin(i10056 * twicePi1056 / triangleAmount1056))
);
}
  glEnd();




int i100567;

GLfloat x10567=-.2f; GLfloat y10567=-1.0f; GLfloat radius10567 =.05f;
int triangleAmount10567 = 20;

GLfloat twicePi10567 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x10567, y10567);
for(i100567 = 0; i100567 <= triangleAmount10567;i100567++) {
glVertex2f(
                x10567 + (radius10567 * cos(i100567*  twicePi10567 / triangleAmount10567)),
   y10567 + (radius10567 * sin(i100567 * twicePi10567 / triangleAmount10567))
);
}
  glEnd();



int i1005678;

GLfloat x105678=-.25f; GLfloat y105678=-1.03f; GLfloat radius105678 =.05f;
int triangleAmount105678 = 20;

GLfloat twicePi105678 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x105678, y105678);
for(i1005678 = 0; i1005678 <= triangleAmount105678;i1005678++) {
glVertex2f(
                x105678 + (radius105678 * cos(i1005678*  twicePi105678 / triangleAmount105678)),
   y105678 + (radius105678 * sin(i1005678 * twicePi105678 / triangleAmount105678))
);
}
  glEnd();


  int i10056789;

GLfloat x1056789=.2f; GLfloat y1056789=-1.03f; GLfloat radius1056789 =.06f;
int triangleAmount1056789 = 20;

GLfloat twicePi1056789 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x1056789, y1056789);
for(i10056789 = 0; i10056789 <= triangleAmount1056789;i10056789++) {
glVertex2f(
                x1056789 + (radius1056789 * cos(i10056789*  twicePi1056789 / triangleAmount1056789)),
   y1056789 + (radius1056789 * sin(i10056789 * twicePi1056789 / triangleAmount1056789))
);
}
  glEnd();



  int i100567892;

GLfloat x10567892=.15f; GLfloat y10567892=-1.0f; GLfloat radius10567892 =.06f;
int triangleAmount10567892 = 20;

GLfloat twicePi10567892 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(255,0,0);
glVertex2f(x10567892, y1056789);
for(i100567892 = 0; i100567892 <= triangleAmount10567892;i100567892++) {
glVertex2f(
                x10567892 + (radius10567892 * cos(i100567892*  twicePi10567892 / triangleAmount10567892)),
   y10567892 + (radius10567892 * sin(i100567892 * twicePi10567892 / triangleAmount10567892))
);
}
  glEnd();

glBegin(GL_TRIANGLES);//flower
 glColor3ub(0,128,0);
  glVertex2f(-.3, -1.1f);
  glVertex2f(.3,-1.1f);
  glVertex2f(0.0,-1.2f);
 glEnd();







glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(-.2,-1.0);
glVertex2f(-.1,-1.15);

glEnd();

glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(-0.08,-1.0);
glVertex2f(-0.05,-1.15);

glEnd();



glBegin(GL_LINES);
glColor3f(128,0,0);
glVertex2f(.2,-1.0);
glVertex2f(.1,-1.15);

glEnd();








//paddy

glBegin(GL_QUADS);
glColor3ub(210,105,30);

glVertex2f(-.25,.1);
glVertex2f(-.15,.1);
glColor3ub(1,1,1);
glVertex2f(-.15,-.1);
glVertex2f(-.25,-.1);

glEnd();




 int z;//paddy

GLfloat xtz=-.2f; GLfloat ytz=-.4f; GLfloat radiustz =.4f;
int triangleAmounttz = 20;

GLfloat twicePitz = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3ub(255,215,0);
glVertex2f(xtz, ytz);
for(z = 0; z <= triangleAmounttz;z++) {
glVertex2f(
                xtz + (radiustz * cos(z *  twicePitz / triangleAmounttz)),
   ytz + (radiustz * sin(z * twicePitz/ triangleAmounttz))
);
}
  glEnd();
glBegin(GL_QUADS);
glColor3ub(255,215,0);

glVertex2f(-.59,-.4);
glVertex2f(.2,-.4);
glColor3ub(1,1,1);
glVertex2f(.2,-.8);
glVertex2f(-.59,-.8);

glEnd();







glBegin(GL_POLYGON);//road
glColor3ub(217,191,161);
glVertex2f(-2,-1.45);
glVertex2f(2,-1.1);
glColor3ub(1,1,1);
glVertex2f(2,-1.7);
glVertex2f(-2,-1.95);

glEnd();







  int c;//tree1

GLfloat xt=-.2f; GLfloat yt=-1.57f; GLfloat radiust =.16f;
int triangleAmountt = 20;

GLfloat twicePit = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xt, yt);
for(c = 0; c <= triangleAmountt;c++) {
glVertex2f(
                xt + (radiust * cos(c *  twicePit / triangleAmountt)),
   yt + (radiust * sin(c * twicePit / triangleAmountt))
);
}
  glEnd();





     int d;//tree1

GLfloat xtt=-.2f; GLfloat ytt=-1.43f; GLfloat radiustt =.12f;
int triangleAmounttt = 20;

GLfloat twicePitt = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtt, ytt);
for(d = 0; d <= triangleAmounttt;d++) {
glVertex2f(
                xtt + (radiustt * cos(d *  twicePitt / triangleAmounttt)),
   ytt + (radiustt * sin(d * twicePitt / triangleAmounttt))
);
}
  glEnd();


    int e;//tree1

GLfloat x9=-.2f; GLfloat y9=-1.37f; GLfloat radius9 =.08f;
int triangleAmount9 = 20;

GLfloat twicePi9 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(x9, y9);
for(e = 0; e <= triangleAmount9;e++) {
glVertex2f(
                x9 + (radius9 * cos(e *  twicePi9 / triangleAmount9)),
   y9 + (radius9 * sin(e * twicePi9 / triangleAmount9))
);
}
  glEnd();


    int p;//tree2

GLfloat xt1=-1.2f; GLfloat yt1=-1.67f; GLfloat radiust1 =.14f;
int triangleAmountt1 = 20;

GLfloat twicePit1 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xt1, yt1);
for(p = 0; p <= triangleAmountt1;p++) {
glVertex2f(
                xt1 + (radiust1 * cos(p *  twicePit1 / triangleAmountt1)),
   yt1 + (radiust1 * sin(p * twicePit1 / triangleAmountt1))
);
}
  glEnd();

    int g;//tree2

GLfloat xtt8=-1.2f; GLfloat ytt8=-1.53f; GLfloat radiustt8 =.1f;
int triangleAmounttt8 = 20;

GLfloat twicePitt8 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtt8, ytt8);
for(g = 0; g <= triangleAmounttt8;g++) {
glVertex2f(
                xtt8 + (radiustt8 * cos(g *  twicePitt8 / triangleAmounttt8)),
   ytt8 + (radiustt8 * sin(g * twicePitt8 / triangleAmounttt8))
);
}
  glEnd();


    int h;//tree2

GLfloat x95=-1.2f; GLfloat y95=-1.47f; GLfloat radius95 =.06f;
int triangleAmount95 = 20;

GLfloat twicePi95 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(x95, y95);
for(h = 0; h <= triangleAmount95;h++) {
glVertex2f(
                x95 + (radius95 * cos(h *  twicePi95 / triangleAmount95)),
   y95 + (radius95 * sin(h * twicePi95 / triangleAmount95))
);
}
  glEnd();



    int l;//tree3

GLfloat xtn=1.1f; GLfloat ytn=-1.47f; GLfloat radiustn =.16f;
int triangleAmounttn = 20;

GLfloat twicePitn = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xtn, ytn);
for(l = 0; l <= triangleAmounttn;l++) {
glVertex2f(
                xtn + (radiustn * cos(l *  twicePitn / triangleAmounttn)),
   ytn + (radiustn * sin(l * twicePitn / triangleAmounttn))
);
}
  glEnd();

    int o;//tree3

GLfloat xttk=1.1f; GLfloat yttk=-1.36f; GLfloat radiusttk =.12f;
int triangleAmountttk = 20;

GLfloat twicePittk = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xttk, yttk);
for(o = 0; o <= triangleAmountttk;o++) {
glVertex2f(
                xttk + (radiusttk * cos(o *  twicePittk / triangleAmountttk)),
   yttk + (radiusttk * sin(o * twicePittk / triangleAmountttk))
);
}
  glEnd();

  int r;//tree3

GLfloat xttkr=1.1f; GLfloat yttkr=-1.3f; GLfloat radiusttkr =.08f;
int triangleAmountttkr = 20;

GLfloat twicePittkr = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
//glColor3f(128,0,0);
glColor3f(0,128,0);
glVertex2f(xttkr, yttkr);
for(r = 0; r <= triangleAmountttkr;r++) {
glVertex2f(
                xttkr + (radiusttkr * cos(r *  twicePittkr / triangleAmountttkr)),
   yttkr + (radiusttkr * sin(r * twicePittkr / triangleAmountttkr))
);
}
  glEnd();

  glBegin(GL_QUADS);//tree line 3
glColor3ub(128,0,0);
glVertex2f(1.05,-1.63);
glVertex2f(1.15,-1.63);
glVertex2f(1.15,-1.8);
glVertex2f(1.05,-1.8);

glEnd();

  glBegin(GL_QUADS);//treeLine2
glColor3ub(128,0,0);
glVertex2f(-.25,-1.72);
glVertex2f(-.15,-1.72);
glVertex2f(-.15,-1.88);
glVertex2f(-.25,-1.88);

glEnd();

  glBegin(GL_QUADS);//treeLine3
glColor3ub(128,0,0);
glVertex2f(-1.25,-1.8);
glVertex2f(-1.15,-1.8);
glVertex2f(-1.15,-1.95);
glVertex2f(-1.25,-1.95);

glEnd();







glTranslated(-.9,-.7,0);

//House
glBegin(GL_QUADS);
glColor3ub(187,127,11);

glVertex2f(-.5,.5);
glVertex2f(.3,.5);
glVertex2f(0,1.1);
glVertex2f(-.8,1.1);

glEnd();



glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(.3,.5);
glVertex2f(0,1.1);

glEnd();

    glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0,1.1);
glVertex2f(-.8,1.1);

glEnd();





glBegin(GL_QUADS);
glColor3ub(187,127,11);

glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);
glVertex2f(.2,-.2);
glVertex2f(.2,.5);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,-.3);
glVertex2f(.2,-.2);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(.3,.5);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(.2,-.2);
glVertex2f(.2,.5);

glEnd();



glBegin(GL_QUADS);//3
glColor3ub(187,127,11);

glVertex2f(-1,.5);
glVertex2f(-.7,1);
glVertex2f(-.8,1.1);
glVertex2f(-1.1,.6);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
    glVertex2f(-1.1,.6);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
    glVertex2f(-1.1,.6);
glVertex2f(-.8,1.1);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.8,1.1);
glVertex2f(-.5,.5);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
glVertex2f(-.74,.96);

glEnd();


glBegin(GL_POLYGON);//4
glColor3ub(205,133,63);

glVertex2f(-.73,.96);
glVertex2f(-1,.5);
glVertex2f(-1,0);
glVertex2f(-.5,-.3);
glVertex2f(-.5,.5);



glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,.5);
glVertex2f(-1,0);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-1,0);
glVertex2f(-.5,-.3);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.5,.5);
glVertex2f(-.5,-.3);
glEnd();


glBegin(GL_QUADS);//Door
glColor3ub(255,255,0);
glVertex2f(-.2,-.25);
glVertex2f(-.2,.2);
glVertex2f(0,.2);
glVertex2f(0,-.23);
glEnd();

glBegin(GL_LINES);//Door
glColor3f(0,0,0);
glVertex2f(-.2,-.25);
glVertex2f(-.2,.2);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.1,-.25);
glVertex2f(-.1,.2);
glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0,-.23);
glVertex2f(0,.2);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.2,.2);
glVertex2f(0,.2);
glEnd();

glBegin(GL_QUADS);//window
glColor3ub(255,255,0);
glVertex2f(-.85,.3);
glVertex2f(-.85,.6);
glVertex2f(-.65,.6);
glVertex2f(-.65,.3);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.85,.6);
glVertex2f(-.85,.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.85,.3);
glVertex2f(-.65,.3);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.65,.3);
glVertex2f(-.65,.6);

glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.65,.6);
glVertex2f(-.85,.6);

glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-.75,.6);
glVertex2f(-.75,.3);

glEnd();


/*
glutTimerFunc(2500,time,1);
glutPostRedisplay();

*/








//////////Rain///////////////


glPushMatrix();
glTranslatef(0.0, position6,0.0f);


//glLoadIdentity();
glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.7);
glVertex2f(-1,2.6);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.7);
glVertex2f(-.8,2.6);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.7);
glVertex2f(-.6,2.6);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.7);
glVertex2f(-.4,2.6);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.7);
glVertex2f(-.2,2.6);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.7);
glVertex2f(0,2.6);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.7);
glVertex2f(.2,2.6);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.7);
glVertex2f(.4,2.6);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.7);
glVertex2f(.4,2.6);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.7);
glVertex2f(.6,2.6);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.7);
glVertex2f(.8,2.6);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.7);
glVertex2f(1,2.6);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.7);
glVertex2f(1.2,2.6);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.7);
glVertex2f(1.4,2.6);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.7);
glVertex2f(1.6,2.6);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.7);
glVertex2f(1.6,2.6);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.7);
glVertex2f(1.8,2.6);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.7);
glVertex2f(2,2.6);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.7);
glVertex2f(2.2,2.6);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.7);
glVertex2f(2.4,2.6);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.7);
glVertex2f(2.6,2.6);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.7);
glVertex2f(2.8,2.6);

glEnd();




////2nd/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.5);
glVertex2f(-1,2.4);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.5);
glVertex2f(-.8,2.4);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.5);
glVertex2f(-.6,2.4);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.5);
glVertex2f(-.4,2.4);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.5);
glVertex2f(-.2,2.4);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.5);
glVertex2f(0,2.4);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.5);
glVertex2f(.2,2.4);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.5);
glVertex2f(.4,2.4);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.5);
glVertex2f(.4,2.4);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.5);
glVertex2f(.6,2.4);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.5);
glVertex2f(.8,2.4);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.5);
glVertex2f(1,2.4);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.5);
glVertex2f(1.2,2.4);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.5);
glVertex2f(1.4,2.4);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.5);
glVertex2f(1.6,2.4);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.5);
glVertex2f(1.6,2.4);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.5);
glVertex2f(1.8,2.4);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.5);
glVertex2f(2,2.4);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.5);
glVertex2f(2.2,2.4);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.5);
glVertex2f(2.4,2.4);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.5);
glVertex2f(2.6,2.4);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.5);
glVertex2f(2.8,2.4);

glEnd();





////3rd/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.3);
glVertex2f(-1,2.2);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.3);
glVertex2f(-.8,2.2);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.3);
glVertex2f(-.6,2.2);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.3);
glVertex2f(-.4,2.2);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.3);
glVertex2f(-.2,2.2);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.3);
glVertex2f(0,2.2);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.3);
glVertex2f(.2,2.2);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.3);
glVertex2f(.4,2.2);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.3);
glVertex2f(.4,2.2);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.3);
glVertex2f(.6,2.2);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.3);
glVertex2f(.8,2.2);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.3);
glVertex2f(1,2.2);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.3);
glVertex2f(1.2,2.2);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.3);
glVertex2f(1.4,2.2);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.3);
glVertex2f(1.6,2.2);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.3);
glVertex2f(1.6,2.2);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.3);
glVertex2f(1.8,2.2);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.3);
glVertex2f(2,2.2);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.3);
glVertex2f(2.2,2.2);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.3);
glVertex2f(2.4,2.2);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.3);
glVertex2f(2.6,2.2);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.3);
glVertex2f(2.8,2.2);

glEnd();



////4th/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.1);
glVertex2f(-1,2.0);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.1);
glVertex2f(-.8,2.0);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.1);
glVertex2f(-.6,2.0);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.1);
glVertex2f(-.4,2.0);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.1);
glVertex2f(-.2,2.0);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.1);
glVertex2f(0,2.0);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.1);
glVertex2f(.2,2.0);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.1);
glVertex2f(.4,2.0);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.1);
glVertex2f(.4,2.0);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.1);
glVertex2f(.6,2.0);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.1);
glVertex2f(.8,2.0);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.1);
glVertex2f(1,2.0);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.1);
glVertex2f(1.2,2.0);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.1);
glVertex2f(1.4,2.0);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.1);
glVertex2f(1.6,2.0);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.1);
glVertex2f(1.6,2.0);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.1);
glVertex2f(1.8,2.0);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.1);
glVertex2f(2,2.0);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.1);
glVertex2f(2.2,2.0);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.1);
glVertex2f(2.4,2.0);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.1);
glVertex2f(2.6,2.0);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.1);
glVertex2f(2.8,2.0);

glEnd();


////5th/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,1.9);
glVertex2f(-1,1.8);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,1.9);
glVertex2f(-.8,1.8);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,1.9);
glVertex2f(-.6,1.8);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,1.9);
glVertex2f(-.4,1.8);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,1.9);
glVertex2f(-.2,1.8);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,1.9);
glVertex2f(0,1.8);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,1.9);
glVertex2f(.2,1.8);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,1.9);
glVertex2f(.4,1.8);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,1.9);
glVertex2f(.4,1.8);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,1.9);
glVertex2f(.6,1.8);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,1.9);
glVertex2f(.8,1.8);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,1.9);
glVertex2f(1,1.8);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,1.9);
glVertex2f(1.2,1.8);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,1.9);
glVertex2f(1.4,1.8);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,1.9);
glVertex2f(1.6,1.8);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,1.9);
glVertex2f(1.6,1.8);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,1.9);
glVertex2f(1.8,1.8);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,1.9);
glVertex2f(2,1.8);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,1.9);
glVertex2f(2.2,1.8);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,1.9);
glVertex2f(2.4,1.8);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,1.9);
glVertex2f(2.6,1.8);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,1.9);
glVertex2f(2.8,1.8);

glEnd();



////6th/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,1.7);
glVertex2f(-1,1.6);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,1.7);
glVertex2f(-.8,1.6);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,1.7);
glVertex2f(-.6,1.6);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,1.7);
glVertex2f(-.4,1.6);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,1.7);
glVertex2f(-.2,1.6);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,1.7);
glVertex2f(0,1.6);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,1.7);
glVertex2f(.2,1.6);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,1.7);
glVertex2f(.4,1.6);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,1.7);
glVertex2f(.4,1.6);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,1.7);
glVertex2f(.6,1.6);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,1.7);
glVertex2f(.8,1.6);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,1.7);
glVertex2f(1,1.6);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,1.7);
glVertex2f(1.2,1.6);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,1.7);
glVertex2f(1.4,1.6);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,1.7);
glVertex2f(1.6,1.6);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,1.7);
glVertex2f(1.6,1.6);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,1.7);
glVertex2f(1.8,1.6);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,1.7);
glVertex2f(2,1.6);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,1.7);
glVertex2f(2.2,1.6);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,1.7);
glVertex2f(2.4,1.6);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,1.7);
glVertex2f(2.6,1.6);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,1.7);
glVertex2f(2.8,1.6);

glEnd();





/////try

glTranslatef(0,-1,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.7);
glVertex2f(-1,2.6);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.7);
glVertex2f(-.8,2.6);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.7);
glVertex2f(-.6,2.6);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.7);
glVertex2f(-.4,2.6);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.7);
glVertex2f(-.2,2.6);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.7);
glVertex2f(0,2.6);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.7);
glVertex2f(.2,2.6);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.7);
glVertex2f(.4,2.6);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.7);
glVertex2f(.4,2.6);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.7);
glVertex2f(.6,2.6);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.7);
glVertex2f(.8,2.6);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.7);
glVertex2f(1,2.6);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.7);
glVertex2f(1.2,2.6);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.7);
glVertex2f(1.4,2.6);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.7);
glVertex2f(1.6,2.6);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.7);
glVertex2f(1.6,2.6);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.7);
glVertex2f(1.8,2.6);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.7);
glVertex2f(2,2.6);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.7);
glVertex2f(2.2,2.6);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.7);
glVertex2f(2.4,2.6);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.7);
glVertex2f(2.6,2.6);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.7);
glVertex2f(2.8,2.6);

glEnd();




////2nd/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.5);
glVertex2f(-1,2.4);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.5);
glVertex2f(-.8,2.4);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.5);
glVertex2f(-.6,2.4);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.5);
glVertex2f(-.4,2.4);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.5);
glVertex2f(-.2,2.4);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.5);
glVertex2f(0,2.4);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.5);
glVertex2f(.2,2.4);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.5);
glVertex2f(.4,2.4);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.5);
glVertex2f(.4,2.4);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.5);
glVertex2f(.6,2.4);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.5);
glVertex2f(.8,2.4);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.5);
glVertex2f(1,2.4);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.5);
glVertex2f(1.2,2.4);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.5);
glVertex2f(1.4,2.4);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.5);
glVertex2f(1.6,2.4);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.5);
glVertex2f(1.6,2.4);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.5);
glVertex2f(1.8,2.4);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.5);
glVertex2f(2,2.4);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.5);
glVertex2f(2.2,2.4);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.5);
glVertex2f(2.4,2.4);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.5);
glVertex2f(2.6,2.4);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.5);
glVertex2f(2.8,2.4);

glEnd();





////3rd/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.3);
glVertex2f(-1,2.2);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.3);
glVertex2f(-.8,2.2);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.3);
glVertex2f(-.6,2.2);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.3);
glVertex2f(-.4,2.2);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.3);
glVertex2f(-.2,2.2);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.3);
glVertex2f(0,2.2);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.3);
glVertex2f(.2,2.2);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.3);
glVertex2f(.4,2.2);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.3);
glVertex2f(.4,2.2);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.3);
glVertex2f(.6,2.2);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.3);
glVertex2f(.8,2.2);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.3);
glVertex2f(1,2.2);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.3);
glVertex2f(1.2,2.2);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.3);
glVertex2f(1.4,2.2);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.3);
glVertex2f(1.6,2.2);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.3);
glVertex2f(1.6,2.2);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.3);
glVertex2f(1.8,2.2);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.3);
glVertex2f(2,2.2);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.3);
glVertex2f(2.2,2.2);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.3);
glVertex2f(2.4,2.2);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.3);
glVertex2f(2.6,2.2);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.3);
glVertex2f(2.8,2.2);

glEnd();



////4th/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,2.1);
glVertex2f(-1,2.0);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,2.1);
glVertex2f(-.8,2.0);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,2.1);
glVertex2f(-.6,2.0);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,2.1);
glVertex2f(-.4,2.0);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,2.1);
glVertex2f(-.2,2.0);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,2.1);
glVertex2f(0,2.0);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,2.1);
glVertex2f(.2,2.0);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,2.1);
glVertex2f(.4,2.0);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,2.1);
glVertex2f(.4,2.0);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,2.1);
glVertex2f(.6,2.0);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,2.1);
glVertex2f(.8,2.0);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,2.1);
glVertex2f(1,2.0);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,2.1);
glVertex2f(1.2,2.0);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,2.1);
glVertex2f(1.4,2.0);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,2.1);
glVertex2f(1.6,2.0);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,2.1);
glVertex2f(1.6,2.0);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,2.1);
glVertex2f(1.8,2.0);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,2.1);
glVertex2f(2,2.0);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,2.1);
glVertex2f(2.2,2.0);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,2.1);
glVertex2f(2.4,2.0);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,2.1);
glVertex2f(2.6,2.0);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,2.1);
glVertex2f(2.8,2.0);

glEnd();


////5th/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,1.9);
glVertex2f(-1,1.8);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,1.9);
glVertex2f(-.8,1.8);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,1.9);
glVertex2f(-.6,1.8);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,1.9);
glVertex2f(-.4,1.8);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,1.9);
glVertex2f(-.2,1.8);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,1.9);
glVertex2f(0,1.8);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,1.9);
glVertex2f(.2,1.8);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,1.9);
glVertex2f(.4,1.8);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,1.9);
glVertex2f(.4,1.8);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,1.9);
glVertex2f(.6,1.8);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,1.9);
glVertex2f(.8,1.8);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,1.9);
glVertex2f(1,1.8);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,1.9);
glVertex2f(1.2,1.8);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,1.9);
glVertex2f(1.4,1.8);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,1.9);
glVertex2f(1.6,1.8);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,1.9);
glVertex2f(1.6,1.8);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,1.9);
glVertex2f(1.8,1.8);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,1.9);
glVertex2f(2,1.8);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,1.9);
glVertex2f(2.2,1.8);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,1.9);
glVertex2f(2.4,1.8);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,1.9);
glVertex2f(2.6,1.8);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,1.9);
glVertex2f(2.8,1.8);

glEnd();



////6th/////



// glTranslatef(1,.5,0);

glBegin(GL_LINES);//1
glColor3f(1,1,1);
glVertex2f(-1,1.7);
glVertex2f(-1,1.6);

glEnd();




glBegin(GL_LINES);//2
glColor3f(1,1,1);
glVertex2f(-.8,1.7);
glVertex2f(-.8,1.6);

glEnd();

glBegin(GL_LINES);//3
glColor3f(1,1,1);
glVertex2f(-.6,1.7);
glVertex2f(-.6,1.6);

glEnd();


glBegin(GL_LINES);//4
glColor3f(1,1,1);
glVertex2f(-.4,1.7);
glVertex2f(-.4,1.6);

glEnd();

glBegin(GL_LINES);//5
glColor3f(1,1,1);
glVertex2f(-.2,1.7);
glVertex2f(-.2,1.6);

glEnd();

glBegin(GL_LINES);//6
glColor3f(1,1,1);
glVertex2f(0,1.7);
glVertex2f(0,1.6);

glEnd();


glBegin(GL_LINES);//7
glColor3f(1,1,1);
glVertex2f(.2,1.7);
glVertex2f(.2,1.6);

glEnd();

glBegin(GL_LINES);//8
glColor3f(1,1,1);
glVertex2f(.4,1.7);
glVertex2f(.4,1.6);

glEnd();

glBegin(GL_LINES);//9
glColor3f(1,1,1);
glVertex2f(.4,1.7);
glVertex2f(.4,1.6);

glEnd();

glBegin(GL_LINES);//10
glColor3f(1,1,1);
glVertex2f(.6,1.7);
glVertex2f(.6,1.6);

glEnd();

glBegin(GL_LINES);//11
glColor3f(1,1,1);
glVertex2f(.8,1.7);
glVertex2f(.8,1.6);

glEnd();

glBegin(GL_LINES);//12
glColor3f(1,1,1);
glVertex2f(1,1.7);
glVertex2f(1,1.6);

glEnd();

glBegin(GL_LINES);//13
glColor3f(1,1,1);
glVertex2f(1.2,1.7);
glVertex2f(1.2,1.6);

glEnd();

glBegin(GL_LINES);//14
glColor3f(1,1,1);
glVertex2f(1.4,1.7);
glVertex2f(1.4,1.6);

glEnd();

glBegin(GL_LINES);//15
glColor3f(1,1,1);
glVertex2f(1.6,1.7);
glVertex2f(1.6,1.6);

glEnd();

glBegin(GL_LINES);//16
glColor3f(1,1,1);
glVertex2f(1.6,1.7);
glVertex2f(1.6,1.6);

glEnd();

glBegin(GL_LINES);//17
glColor3f(1,1,1);
glVertex2f(1.8,1.7);
glVertex2f(1.8,1.6);

glEnd();

glBegin(GL_LINES);//18
glColor3f(1,1,1);
glVertex2f(2,1.7);
glVertex2f(2,1.6);

glEnd();

glBegin(GL_LINES);//19
glColor3f(1,1,1);
glVertex2f(2.2,1.7);
glVertex2f(2.2,1.6);

glEnd();

glBegin(GL_LINES);//20
glColor3f(1,1,1);
glVertex2f(2.4,1.7);
glVertex2f(2.4,1.6);

glEnd();

glBegin(GL_LINES);//21
glColor3f(1,1,1);
glVertex2f(2.6,1.7);
glVertex2f(2.6,1.6);

glEnd();


glBegin(GL_LINES);//22
glColor3f(1,1,1);
glVertex2f(2.8,1.7);
glVertex2f(2.8,1.6);

glEnd();




glLoadIdentity();




glPopMatrix();












glFlush();
}







/////////////////////Time///////////////



void time(int val)
{
    if(val==0)
    {
      glutDisplayFunc(aff) ;

    }
    else if(val==1)
    {
       glutDisplayFunc(Night);
    }

}






///////////////////key/////////////////


void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here
//glutTimerFunc(100, update1, 0);
break;
case GLUT_KEY_DOWN:

   glutTimerFunc(100, update6, 0);
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
    glutTimerFunc(100, update1, 0);
//do something here
break;
}
glutPostRedisplay();
}


///////////u and d


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 't':
     glutTimerFunc(100, update4, 0);
    break;
case 'f':
     glutTimerFunc(100, update3, 0);
    break;
case 'b':
     glutTimerFunc(100, update7, 0);
    break;

case 'r':
     glutTimerFunc(100, update6, 0);
    break;

    case 'c':
     glutTimerFunc(100, update, 0);
    break;

    case 'u':
     glutTimerFunc(100, update2, 0);
    break;

glutPostRedisplay();
}}




int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(500,600);
glutCreateWindow("OpenGL Setup Test");
 glutInitWindowPosition(50, 50);
glutDisplayFunc(display);
glutSpecialFunc(SpecialInput);
 glutKeyboardFunc(handleKeypress);
   init();

      glutTimerFunc(100, update, 0);
      glutTimerFunc(100, update1, 0);
      glutTimerFunc(100, update2, 0);
      glutTimerFunc(100, update3, 0);
      glutTimerFunc(100, update4, 0);
      glutTimerFunc(100, update5, 0);
      glutTimerFunc(100, update6, 0);
      glutTimerFunc(100, update7, 0);
      glutTimerFunc(100, update8, 0);
      glutTimerFunc(100, update9, 0);

    glutTimerFunc(100, update10, 0);

    sound();
glutMainLoop();
return 0;
}


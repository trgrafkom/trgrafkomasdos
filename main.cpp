#include <windows.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void depan(void);
void tembok(void);
void tembokrumitdpnver(void);
void tembokrumitdpnhor(void);
void atap(void);void jendeladeckiri(void);
void lantai(void);
void jendela(void);
void jendelarumit(void);void palingdepan(void);
void jendeladec(void);void plrkiri(void);
void jendeladec2(void);void plr(void);
void jendeladeckanan(void);
void hilang(void);
void kerucutkiri(void);void decotengah(void);
void display(void);
void kerucut(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);


float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;


void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_NORMALIZE);
}


void haha()
{
    glLoadIdentity();
       gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
       glRotatef(xrot, 1.0f,0.0f, 0.0f);
       glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}


void init(void){
  glClearColor(0, 0, 0, 0);
   glMatrixMode(GL_PROJECTION);
   glEnable(GL_DEPTH_TEST);
   is_depth=1;
   glMatrixMode(GL_MODELVIEW);
   glPointSize(9.0);
   glLineWidth(6.0f);

   GLfloat ambientColor[] = {0.2f, 0.2f, 0.2f, 1.0f};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);


	GLfloat lightColor0[] = {1.0f, 1.0f, 1.0f, 1.0f};
	GLfloat lightPos0[] = {0.0f, -80.0f, 100.0f, 1.0f};
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);


	GLfloat lightColor1[] = {1.0f, 1.0f, 1.0f, 1.0f};

	GLfloat lightPos1[] = {80.0f, -90.0f, 100.0f, 0.0f};
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);
   }

void depan(void)
{
    //tembok depan kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(60,30,20);
    glVertex3f(90,30,20);
    glVertex3f(90,-50,20);glColor3f(1,1,1);
    glVertex3f(60,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(60,30,20);
    glVertex3f(90,30,20);
    glVertex3f(75,50,20);
    glEnd();



    //tembok depan kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-60,30,20);
    glVertex3f(-90,30,20);
    glVertex3f(-90,-50,20);glColor3f(1,1,1);
    glVertex3f(-60,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-60,30,20);
    glVertex3f(-90,30,20);
    glVertex3f(-75,50,20);
    glEnd();

    //tembok depan tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,20);
    glVertex3f(15,80,20);
    glVertex3f(15,-50,20);glColor3f(1,1,1);
    glVertex3f(-15,-50,20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(-14,80,19);
    glVertex3f(14,80,19);
    glVertex3f(14,-50,19);glColor3f(1,1,1);
    glVertex3f(-14,-50,19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,19);
    glVertex3f(-15,80,20);
    glVertex3f(15,80,20);
    glVertex3f(15,80,19);
    glEnd();

    //tembok depan tengah belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,10);
    glVertex3f(15,80,10);
    glVertex3f(15,30,10);glColor3f(1,1,1);
    glVertex3f(-15,30,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(-14,80,11);
    glVertex3f(14,80,11);
    glVertex3f(14,30,11);glColor3f(1,1,1);
    glVertex3f(-14,30,11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,11);
    glVertex3f(-15,80,10);
    glVertex3f(15,80,10);
    glVertex3f(15,80,11);
    glEnd();





}

void decotengah(void)
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,20.1);
    glVertex3f(15,80,20.1);
    glVertex3f(15,40,20.1);
    glVertex3f(-15,40,20.1);
    glEnd();

    //kotak tengah hitam atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(6,75,20.2);
    glVertex3f(11,75,20.2);
    glVertex3f(11,45,20.2);
    glVertex3f(6,45,20.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-4,75,20.2);
    glVertex3f(4,75,20.2);
    glVertex3f(4,45,20.2);
    glVertex3f(-4,45,20.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-6,75,20.2);
    glVertex3f(-11,75,20.2);
    glVertex3f(-11,45,20.2);
    glVertex3f(-6,45,20.2);
    glEnd();


    //pilar atas
    //kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(2,80,22);
    glVertex3f(3,80,22);
    glVertex3f(3,40,22);
    glVertex3f(2,40,22);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(2,80,22);
    glVertex3f(2,80,21);
    glVertex3f(2,40,21);
    glVertex3f(2,40,22);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(3,80,22);
    glVertex3f(3,80,21);
    glVertex3f(3,40,21);
    glVertex3f(3,40,22);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(2,80,21);
    glVertex3f(3,80,21);
    glVertex3f(3,40,21);
    glVertex3f(2,40,21);
    glEnd();

    //kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-2,80,22);
    glVertex3f(-3,80,22);
    glVertex3f(-3,40,22);
    glVertex3f(-2,40,22);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-2,80,22);
    glVertex3f(-2,80,21);
    glVertex3f(-2,40,21);
    glVertex3f(-2,40,22);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-3,80,22);
    glVertex3f(-3,80,21);
    glVertex3f(-3,40,21);
    glVertex3f(-3,40,22);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-2,80,21);
    glVertex3f(-3,80,21);
    glVertex3f(-3,40,21);
    glVertex3f(-2,40,21);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-3,80,22);
    glVertex3f(3,80,22);
    glVertex3f(5,80.1,19);
    glVertex3f(-5,80.1,19);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-3,40,22);
    glVertex3f(3,40,22);
    glVertex3f(5,40,20);
    glVertex3f(-5,40,20);
    glEnd();


}

void palingdepan(void)
{
    glBegin(GL_TRIANGLES);
    glColor3ub(207, 196, 167);
    glVertex3f(-10,-30,30);
    glVertex3f(0,-20,30);
    glVertex3f(10,-30,30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-10,-30,32);
    glVertex3f(-10,-30,20);
    glVertex3f(0,-20,20);
    glVertex3f(0,-20,32);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(10,-30,32);
    glVertex3f(10,-30,20);
    glVertex3f(0,-20,20);
    glVertex3f(0,-20,32);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(10,-30,30);
    glVertex3f(10,-30,20);
    glVertex3f(-10,-30,20);
    glVertex3f(-10,-30,30);
    glEnd();
    //pilar doble 1
    //kanan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(9,13,21);
    glVertex3f(10,13,21);
    glVertex3f(10,-50,21);
    glVertex3f(9,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(9,13,21);
    glVertex3f(9,13,20);
    glVertex3f(9,-50,20);
    glVertex3f(9,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(10,13,21);
    glVertex3f(10,13,20);
    glVertex3f(10,-50,20);
    glVertex3f(10,-50,21);
    glEnd();
    //kanan2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(7,13,22);
    glVertex3f(8,13,22);
    glVertex3f(8,-50,22);
    glVertex3f(7,-50,22);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(7,13,22);
    glVertex3f(7,13,21);
    glVertex3f(7,-50,21);
    glVertex3f(7,-50,22);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(8,13,22);
    glVertex3f(8,13,21);
    glVertex3f(8,-50,21);
    glVertex3f(8,-50,22);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(7,13,21);
    glVertex3f(8,13,21);
    glVertex3f(8,-50,21);
    glVertex3f(7,-50,21);
    glEnd();
    //kanan3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(7,-30,29);
    glVertex3f(8,-30,29);
    glVertex3f(8,-50,29);
    glVertex3f(7,-50,29);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(7,-30,29);
    glVertex3f(7,-30,28);
    glVertex3f(7,-50,28);
    glVertex3f(7,-50,29);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(8,-30,29);
    glVertex3f(8,-30,28);
    glVertex3f(8,-50,28);
    glVertex3f(8,-50,29);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(7,-30,28);
    glVertex3f(8,-30,28);
    glVertex3f(8,-50,28);
    glVertex3f(7,-50,28);
    glEnd();

    //pilar doble 1
    //kiri 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-9,13,21);
    glVertex3f(-10,13,21);
    glVertex3f(-10,-50,21);
    glVertex3f(-9,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-9,13,21);
    glVertex3f(-9,13,20);
    glVertex3f(-9,-50,20);
    glVertex3f(-9,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-10,13,21);
    glVertex3f(-10,13,20);
    glVertex3f(-10,-50,20);
    glVertex3f(-10,-50,21);
    glEnd();
    //kiri2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-7,13,22);
    glVertex3f(-8,13,22);
    glVertex3f(-8,-50,22);
    glVertex3f(-7,-50,22);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-7,13,22);
    glVertex3f(-7,13,21);
    glVertex3f(-7,-50,21);
    glVertex3f(-7,-50,22);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-8,13,22);
    glVertex3f(-8,13,21);
    glVertex3f(-8,-50,21);
    glVertex3f(-8,-50,22);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-7,13,21);
    glVertex3f(-8,13,21);
    glVertex3f(-8,-50,21);
    glVertex3f(-7,-50,21);
    glEnd();
    //kiri3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-7,-30,29);
    glVertex3f(-8,-30,29);
    glVertex3f(-8,-50,29);
    glVertex3f(-7,-50,29);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-7,-30,29);
    glVertex3f(-7,-30,28);
    glVertex3f(-7,-50,28);
    glVertex3f(-7,-50,29);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-8,-30,29);
    glVertex3f(-8,-30,28);
    glVertex3f(-8,-50,28);
    glVertex3f(-8,-50,29);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-7,-30,28);
    glVertex3f(-8,-30,28);
    glVertex3f(-8,-50,28);
    glVertex3f(-7,-50,28);
    glEnd();

    //atas pilar
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(10,13,20);
    glVertex3f(7,13,22);
    glVertex3f(-7,13,22);
    glVertex3f(-10,13,20);
    glEnd();

}

void tanah(void)
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(8,-50,60);
    glVertex3f(8,-50,-40);
    glVertex3f(100,-50,-40);
    glVertex3f(100,-50,60);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(8,-50,60);
    glVertex3f(8,-50,20);
    glVertex3f(8,-51,20);
    glVertex3f(8,-51,60);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(8,-50,60);
    glVertex3f(8,-51,60);
    glVertex3f(100,-51,60);
    glVertex3f(100,-50,60);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,20);
    glVertex3f(0,-51,20);
    glVertex3f(8,-51,20);
    glVertex3f(8,-50,20);
    glEnd();


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,80);
    glVertex3f(0,-51,80);
    glVertex3f(42,-51,80);
    glVertex3f(42,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(60,-50,80);
    glVertex3f(60,-51,80);
    glVertex3f(100,-51,80);
    glVertex3f(100,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(60,-50,100);
    glVertex3f(60,-51,100);
    glVertex3f(100,-51,100);
    glVertex3f(100,-50,100);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,120);
    glVertex3f(0,-51,120);
    glVertex3f(100,-51,120);
    glVertex3f(100,-50,120);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(0,-50,80);
    glVertex3f(0,-50,100);
    glVertex3f(42,-50,100);
    glVertex3f(42,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(0,-50,120);
    glVertex3f(0,-50,140);
    glVertex3f(100,-50,140);
    glVertex3f(100,-50,120);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(60,-50,80);
    glVertex3f(60,-50,100);
    glVertex3f(100,-50,100);
    glVertex3f(100,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,100);
    glVertex3f(0,-51,100);
    glVertex3f(42,-51,100);
    glVertex3f(42,-50,100);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(42,-50,80);
    glVertex3f(42,-50,100);
    glVertex3f(42,-51,100);
    glVertex3f(42,-51,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(60,-50,80);
    glVertex3f(60,-50,100);
    glVertex3f(60,-51,100);
    glVertex3f(60,-51,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(59, 57, 53);
    glVertex3f(0,-51,-40);
    glVertex3f(0,-51,140);
    glVertex3f(100,-51,140);
    glVertex3f(100,-51,-40);
    glEnd();

    //kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(-8,-50,60);
    glVertex3f(-8,-50,-40);
    glVertex3f(-100,-50,-40);
    glVertex3f(-100,-50,60);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-8,-50,60);
    glVertex3f(-8,-50,20);
    glVertex3f(-8,-51,20);
    glVertex3f(-8,-51,60);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-8,-50,60);
    glVertex3f(-8,-51,60);
    glVertex3f(-100,-51,60);
    glVertex3f(-100,-50,60);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,20);
    glVertex3f(0,-51,20);
    glVertex3f(-8,-51,20);
    glVertex3f(-8,-50,20);
    glEnd();


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,80);
    glVertex3f(0,-51,80);
    glVertex3f(-42,-51,80);
    glVertex3f(-42,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-60,-50,80);
    glVertex3f(-60,-51,80);
    glVertex3f(-100,-51,80);
    glVertex3f(-100,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-60,-50,100);
    glVertex3f(-60,-51,100);
    glVertex3f(-100,-51,100);
    glVertex3f(-100,-50,100);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,120);
    glVertex3f(0,-51,120);
    glVertex3f(-100,-51,120);
    glVertex3f(-100,-50,120);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(0,-50,80);
    glVertex3f(0,-50,100);
    glVertex3f(-42,-50,100);
    glVertex3f(-42,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(0,-50,120);
    glVertex3f(0,-50,140);
    glVertex3f(-100,-50,140);
    glVertex3f(-100,-50,120);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(64, 55, 31);
    glVertex3f(-60,-50,80);
    glVertex3f(-60,-50,100);
    glVertex3f(-100,-50,100);
    glVertex3f(-100,-50,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(0,-50,100);
    glVertex3f(0,-51,100);
    glVertex3f(-42,-51,100);
    glVertex3f(-42,-50,100);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-42,-50,80);
    glVertex3f(-42,-50,100);
    glVertex3f(-42,-51,100);
    glVertex3f(-42,-51,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-60,-50,80);
    glVertex3f(-60,-50,100);
    glVertex3f(-60,-51,100);
    glVertex3f(-60,-51,80);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(59, 57, 53);
    glVertex3f(0,-51,-40);
    glVertex3f(0,-51,140);
    glVertex3f(-100,-51,140);
    glVertex3f(-100,-51,-40);
    glEnd();




}

void plr(void)
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(13,80,21);
    glVertex3f(16,80,21);
    glVertex3f(16,-50,21);
    glVertex3f(13,-50,21);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(18,80,19);
    glVertex3f(16,80,21);
    glVertex3f(16,-50,21);
    glVertex3f(18,-50,19);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(18,80,19);
    glVertex3f(18,80,16);
    glVertex3f(18,-50,16);
    glVertex3f(18,-50,19);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(16,80,14);
    glVertex3f(18,80,16);
    glVertex3f(18,-50,16);
    glVertex3f(16,-50,14);
    glEnd();
    //belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(13,80,14);
    glVertex3f(16,80,14);
    glVertex3f(16,-50,14);
    glVertex3f(13,-50,14);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(12,80,19);
    glVertex3f(12,80,16);
    glVertex3f(12,-50,16);
    glVertex3f(12,-50,19);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(14,80,21);
    glVertex3f(12,80,16);
    glVertex3f(12,-50,16);
    glVertex3f(14,-50,21);
    glEnd();

}
void plrkiri(void)
{
     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-13,80,21);
    glVertex3f(-16,80,21);
    glVertex3f(-16,-50,21);
    glVertex3f(-13,-50,21);
    glEnd();

     glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-18,80,19);
    glVertex3f(-16,80,21);
    glVertex3f(-16,-50,21);
    glVertex3f(-18,-50,19);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-18,80,19);
    glVertex3f(-18,80,16);
    glVertex3f(-18,-50,16);
    glVertex3f(-18,-50,19);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-16,80,14);
    glVertex3f(-18,80,16);
    glVertex3f(-18,-50,16);
    glVertex3f(-16,-50,14);
    glEnd();
    //belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-13,80,14);
    glVertex3f(-16,80,14);
    glVertex3f(-16,-50,14);
    glVertex3f(-13,-50,14);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-12,80,19);
    glVertex3f(-12,80,16);
    glVertex3f(-12,-50,16);
    glVertex3f(-12,-50,19);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-14,80,21);
    glVertex3f(-12,80,16);
    glVertex3f(-12,-50,16);
    glVertex3f(-14,-50,21);
    glEnd();

}
void kerucut(void)
{
    //kerucutjancukkanan1
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(13,80,21);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(13,80,14);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(18,80,19);
    glVertex3f(14.5,90,17.5);
    glVertex3f(18,80,16);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(12,80,19);
    glVertex3f(14.5,90,17.5);
    glVertex3f(12,80,16);
    glEnd();
    //kerucutjancukkanan2
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(18,80,19);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(18,80,16);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(13,80,14);
    glVertex3f(14.5,90,17.5);
    glVertex3f(12,80,16);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(12,80,18);
    glVertex3f(14.5,90,17.5);
    glVertex3f(13,80,21);
    glEnd();
}

void kerucutkiri(void)
{
     //kerucutjancukkanan1
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-13,80,21);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-16,80,21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-13,80,14);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-16,80,14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-18,80,19);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-18,80,16);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-12,80,19);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-12,80,16);
    glEnd();
 //kerucutjancukkanan1
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(13,80,21);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(13,80,14);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(18,80,19);
    glVertex3f(14.5,90,17.5);
    glVertex3f(18,80,16);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(12,80,19);
    glVertex3f(14.5,90,17.5);
    glVertex3f(12,80,16);
    glEnd();
    //kerucutjancukkanan2
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(18,80,19);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(18,80,16);
    glVertex3f(14.5,90,17.5);
    glVertex3f(16,80,14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(13,80,14);
    glVertex3f(14.5,90,17.5);
    glVertex3f(12,80,16);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(12,80,18);
    glVertex3f(14.5,90,17.5);
    glVertex3f(13,80,21);
    glEnd();    glVertex3f(-14.5,90,17.5);
    glVertex3f(-12,80,16);
    glEnd();
    //kerucutjancukkanan2
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-18,80,19);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-16,80,21);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-18,80,16);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-16,80,14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-13,80,14);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-12,80,16);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-12,80,18);
    glVertex3f(-14.5,90,17.5);
    glVertex3f(-13,80,21);
    glEnd();
}

void tembok(void)
{
    //tembok belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(128, 81, 40);
    glVertex3f(-90,-50,-30);
    glVertex3f(-90,30,-30);
    glVertex3f(90,30,-30);//glColor3f(1,1,1);
    glVertex3f(90,-50,-30);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-90,-50,-30.01);
    glVertex3f(-90,30,-30.01);
    glVertex3f(90,30,-30.01);//glColor3f(1,1,1);
    glVertex3f(90,-50,-30.01);
    glEnd();

    //tembok kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(90,30,20);
    glVertex3f(90,30,-30);
    glVertex3f(90,-50,-30);
    glVertex3f(90,-50,20);
    glEnd();


    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(89,30,20);
    glVertex3f(89,30,-30);
    glVertex3f(89,-50,-30);
    glVertex3f(89,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(89,30,20);
    glVertex3f(90,30,20);
    glVertex3f(90,-50,20);
    glVertex3f(89,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(89,30,20);
    glVertex3f(90,30,20);
    glVertex3f(90,30,-30);
    glVertex3f(89,30,-30);
    glEnd();

    //tembok lanjutan kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(60,30,20);
    glVertex3f(60,30,5);
    glVertex3f(60,-50,5);glColor3ub(58, 77, 92);
    glVertex3f(60,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(61,30,19.99);
    glVertex3f(61,30,5);
    glVertex3f(61,-50,5);
    glVertex3f(61,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(61,30,19.99);
    glVertex3f(60,30,19.99);
    glVertex3f(60,-50,19.99);
    glVertex3f(61,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(61,30,5);
    glVertex3f(60,30,5);
    glVertex3f(60,-50,5);
    glVertex3f(61,-50,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(60,30,20);
    glVertex3f(61,30,20);
    glVertex3f(61,30,5);
    glVertex3f(60,30,5);
    glEnd();

    //tembok kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-90,30,20);
    glVertex3f(-90,30,-30);
    glVertex3f(-90,-50,-30);
    glVertex3f(-90,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(-89,30,20);
    glVertex3f(-89,30,-30);
    glVertex3f(-89,-50,-30);
    glVertex3f(-89,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-89,30,20);
    glVertex3f(-90,30,20);
    glVertex3f(-90,-50,20);
    glVertex3f(-89,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-89,30,20);
    glVertex3f(-90,30,20);
    glVertex3f(-90,30,-30);
    glVertex3f(-89,30,-30);
    glEnd();

    //tembok lanjutan kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-60,30,20);
    glVertex3f(-60,30,5);
    glVertex3f(-60,-50,5);
    glVertex3f(-60,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(-61,30,19.99);
    glVertex3f(-61,30,5);
    glVertex3f(-61,-50,5);
    glVertex3f(-61,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-61,30,19.99);
    glVertex3f(-60,30,19.99);
    glVertex3f(-60,-50,19.99);
    glVertex3f(-61,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-61,30,5);
    glVertex3f(-60,30,5);
    glVertex3f(-60,-50,5);
    glVertex3f(-61,-50,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-60,30,20);
    glVertex3f(-61,30,20);
    glVertex3f(-61,30,5);
    glVertex3f(-60,30,5);
    glEnd();

    //tembok lanjutan tengah kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,30,20);
    glVertex3f(15,30,5);
    glVertex3f(15,-50,5);
    glVertex3f(15,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(14,30,19.99);
    glVertex3f(14,30,5);
    glVertex3f(14,-50,5);
    glVertex3f(14,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,30,19.99);
    glVertex3f(14,30,19.99);
    glVertex3f(14,-50,19.99);
    glVertex3f(15,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,30,5);
    glVertex3f(14,30,5);
    glVertex3f(14,-50,5);
    glVertex3f(15,-50,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(14,30,20);
    glVertex3f(15,30,20);
    glVertex3f(15,30,5);
    glVertex3f(14,30,5);
    glEnd();

    //2 kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,80,20);
    glVertex3f(15,80,10);
    glVertex3f(15,30,10);
    glVertex3f(15,30,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(14,80,19.99);
    glVertex3f(14,80,10);
    glVertex3f(14,30,10);
    glVertex3f(14,30,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,80,19.99);
    glVertex3f(14,80,19.99);
    glVertex3f(14,30,19.99);
    glVertex3f(15,30,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,80,10);
    glVertex3f(14,80,10);
    glVertex3f(14,30,10);
    glVertex3f(15,30,10);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(14,80,20);
    glVertex3f(15,80,20);
    glVertex3f(15,80,10);
    glVertex3f(14,80,10);
    glEnd();

    //tembok lanjutan tengah kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,30,20);
    glVertex3f(-15,30,5);
    glVertex3f(-15,-50,5);
    glVertex3f(-15,-50,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(-14,30,19.99);
    glVertex3f(-14,30,5);
    glVertex3f(-14,-50,5);
    glVertex3f(-14,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,30,19.99);
    glVertex3f(-14,30,19.99);
    glVertex3f(-14,-50,19.99);
    glVertex3f(-15,-50,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,30,5);
    glVertex3f(-14,30,5);
    glVertex3f(-14,-50,5);
    glVertex3f(-15,-50,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-14,30,20);
    glVertex3f(-15,30,20);
    glVertex3f(-15,30,5);
    glVertex3f(-14,30,5);
    glEnd();

    //2 kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,20);
    glVertex3f(-15,80,10);
    glVertex3f(-15,30,10);
    glVertex3f(-15,30,20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(193, 207, 180);
    glVertex3f(-14,80,19.99);
    glVertex3f(-14,80,10);
    glVertex3f(-14,30,10);
    glVertex3f(-14,30,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,19.99);
    glVertex3f(-14,80,19.99);
    glVertex3f(-14,30,19.99);
    glVertex3f(-15,30,19.99);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,80,10);
    glVertex3f(-14,80,10);
    glVertex3f(-14,30,10);
    glVertex3f(-15,30,10);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-14,80,20);
    glVertex3f(-15,80,20);
    glVertex3f(-15,80,10);
    glVertex3f(-14,80,10);
    glEnd();


    }

void tembokrumitdpnver(void)
{
    //tembok rumit kanan veritikal 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(24,30,10);
    glVertex3f(22,30,5);
    glVertex3f(22,-50,5);
    glVertex3f(24,-50,10);
    glEnd();

    //tembok rumit kanan veritikal 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(33,30,10);
    glVertex3f(35,30,5);
    glVertex3f(35,-50,5);
    glVertex3f(33,-50,10);
    glEnd();

    //tembok rumit kanan veritikal 3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(42,30,10);
    glVertex3f(40,30,5);
    glVertex3f(40,-50,5);
    glVertex3f(42,-50,10);
    glEnd();

    //tembok rumit kanan veritikal 4
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(51,30,10);
    glVertex3f(53,30,5);
    glVertex3f(53,-50,5);
    glVertex3f(51,-50,10);
    glEnd();

    //tembok rumit kiri veritikal 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-24,30,10);
    glVertex3f(-22,30,5);
    glVertex3f(-22,-50,5);
    glVertex3f(-24,-50,10);
    glEnd();

    //tembok rumit kiri veritikal 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-33,30,10);
    glVertex3f(-35,30,5);
    glVertex3f(-35,-50,5);
    glVertex3f(-33,-50,10);
    glEnd();

    //tembok rumit kiri veritikal 3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-42,30,10);
    glVertex3f(-40,30,5);
    glVertex3f(-40,-50,5);
    glVertex3f(-42,-50,10);
    glEnd();

    //tembok rumit kiri veritikal 4
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-51,30,10);
    glVertex3f(-53,30,5);
    glVertex3f(-53,-50,5);
    glVertex3f(-51,-50,10);
    glEnd();
}

void tembokrumitdpnhor(void)
{
    //kanan horisontal belakang 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(15,30,5);
    glVertex3f(22,30,5);
    glVertex3f(22,-50,5);
    glVertex3f(15,-50,5);
    glEnd();

    //kanan horisontal depan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(24,30,10);
    glVertex3f(33,30,10);
    glVertex3f(33,-50,10);
    glVertex3f(24,-50,10);
    glEnd();

    //kanan horisontal belakang 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(35,30,5);
    glVertex3f(40,30,5);
    glVertex3f(40,-50,5);
    glVertex3f(35,-50,5);
    glEnd();

    //kanan horisontal depan 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(42,30,10);
    glVertex3f(51,30,10);
    glVertex3f(51,-50,10);
    glVertex3f(42,-50,10);
    glEnd();

    //kanan horisontal belakang 3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(53,30,5);
    glVertex3f(60,30,5);
    glVertex3f(60,-50,5);
    glVertex3f(53,-50,5);
    glEnd();

    //kiri horisontal belakang 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,30,5);
    glVertex3f(-22,30,5);
    glVertex3f(-22,-50,5);
    glVertex3f(-15,-50,5);
    glEnd();

    //kiri horisontal depan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-24,30,10);
    glVertex3f(-33,30,10);
    glVertex3f(-33,-50,10);
    glVertex3f(-24,-50,10);
    glEnd();

    //kiri horisontal belakang 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-35,30,5);
    glVertex3f(-40,30,5);
    glVertex3f(-40,-50,5);
    glVertex3f(-35,-50,5);
    glEnd();

    //kiri horisontal depan 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-42,30,10);
    glVertex3f(-51,30,10);
    glVertex3f(-51,-50,10);
    glVertex3f(-42,-50,10);
    glEnd();

    //kiri horisontal belakang 3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-53,30,5);
    glVertex3f(-60,30,5);
    glVertex3f(-60,-50,5);
    glVertex3f(-53,-50,5);
    glEnd();

    //garis
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.658824,0.658824,0.658824);
    glVertex3f(-60,30,10);
    glVertex3f(-60,30,5);
    glVertex3f(60,30,5);glColor3f(1,1,1);
    glVertex3f(60,30,10);
    glEnd();
}

void atap(void)
{
    //garis
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.658824,0.658824,0.658824);
    glVertex3f(-60,30,10);
    glVertex3f(-60,30,5);
    glVertex3f(60,30,5);glColor3f(1,1,1);
    glVertex3f(60,30,10);
    glEnd();

    //atap depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255, 235, 205);
    glVertex3f(-60,30,10);glColor3f(1,0,1);
    glVertex3f(-75,50,-10);
    glVertex3f(75,50,-10);glColor3ub(220, 20, 60);
    glVertex3f(60,30,10);
    glEnd();

    //atap belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.73,0.16,0);
    glVertex3f(-90,30,-30);glColor3f(1,0,1);
    glVertex3f(-75,50,-10);
    glVertex3f(75,50,-10);glColor3f(0.73,0.16,0);
    glVertex3f(90,30,-30);
    glEnd();

    //atap kanan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.73,0,0);
    glVertex3f(75,50,20);glColor3f(1,0,1);
    glVertex3f(75,50,-10);glColor3f(0.73,0,0);
    glVertex3f(90,30,-30);
    glVertex3f(90,30,20);
    glEnd();

    //atap kanan 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.73,0,0);
    glVertex3f(75,50,20);
    glVertex3f(60,30,20);
    glVertex3f(60,30,10);glColor3f(1,0,1);
    glVertex3f(75,50,-10);
    glEnd();

     //atap kiri 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.73,0,0);
    glVertex3f(-75,50,20);glColor3f(1,0,1);
    glVertex3f(-75,50,-10);glColor3f(0.73,0,0);
    glVertex3f(-90,30,-30);
    glVertex3f(-90,30,20);
    glEnd();

    //atap kiri 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.73,0,0);
    glVertex3f(-75,50,20);
    glVertex3f(-60,30,20);
    glVertex3f(-60,30,10);glColor3f(1,0,1);
    glVertex3f(-75,50,-10);
    glEnd();


}

void lantai(void)
{
    //lantai 1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(-60,-50,5);
    glVertex3f(-60,-50,20);
    glVertex3f(-90,-50,20);
    glVertex3f(-90,-50,-30);
    glVertex3f(0,-50,-30);glColor3f(1,1,1);
    glVertex3f(0,-50,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(60,-50,5);
    glVertex3f(60,-50,20);
    glVertex3f(90,-50,20);
    glVertex3f(90,-50,-30);
    glVertex3f(0,-50,-30);glColor3f(1,1,1);
    glVertex3f(0,-50,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(92, 73, 57);
    glVertex3f(-60,-49,5);
    glVertex3f(-60,-49,20);
    glVertex3f(-90,-49,20);
    glVertex3f(-90,-49,-30);
    glVertex3f(0,-49,-30);glColor3f(1,1,1);
    glVertex3f(0,-49,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(92, 73, 57);
    glVertex3f(60,-49,5);
    glVertex3f(60,-49,20);
    glVertex3f(90,-49,20);
    glVertex3f(90,-49,-30);
    glVertex3f(0,-49,-30);glColor3f(1,1,1);
    glVertex3f(0,-49,5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(60,-49,20);
    glVertex3f(90,-49,20);
    glVertex3f(90,-50,20);
    glVertex3f(60,-50,20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,-49,20);
    glVertex3f(-90,-49,20);
    glVertex3f(-90,-50,20);
    glVertex3f(-60,-50,20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,-49,5);
    glVertex3f(60,-49,5);
    glVertex3f(60,-50,5);
    glVertex3f(-60,-50,5);
    glEnd();



    //lantai 2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(-60,-20,5);
    glVertex3f(-60,-20,20);
    glVertex3f(-90,-20,20);
    glVertex3f(-90,-20,-30);
    glVertex3f(0,-20,-30);glColor3f(1,1,1);
    glVertex3f(0,-20,5);
    glEnd();

     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(60,-20,5);
    glVertex3f(60,-20,5);
    glVertex3f(90,-20,5);
    glVertex3f(90,-20,-30);
    glVertex3f(0,-20,-30);glColor3f(1,1,1);
    glVertex3f(0,-20,5);
    glEnd();
//
    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(75,-19,5);
    glVertex3f(90,-19,5);
    glVertex3f(90,-30,10);
    glVertex3f(75,-30,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(21, 52, 77);
    glVertex3f(75,-30,20);
    glVertex3f(90,-30,20);
    glVertex3f(90,-30,10);
    glVertex3f(75,-30,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(70,-40,20);
    glVertex3f(75,-30,20);
    glVertex3f(75,-30,10);
    glVertex3f(70,-40,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(21, 52, 77);
    glVertex3f(70,-40,20);
    glVertex3f(75,-30,20);
    glVertex3f(75,-30,10);
    glVertex3f(70,-40,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(21, 52, 77);
    glVertex3f(60,-40,20);
    glVertex3f(70,-40,20);
    glVertex3f(70,-40,10);
    glVertex3f(60,-40,10);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(60,-50,0);
    glVertex3f(70,-50,0);
    glVertex3f(70,-40,10);
    glVertex3f(60,-40,10);
    glEnd();
//
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(92, 73, 57);
    glVertex3f(-60,-19,5);
    glVertex3f(-60,-19,20);
    glVertex3f(-90,-19,20);
    glVertex3f(-90,-19,-30);
    glVertex3f(0,-19,-30);glColor3f(1,1,1);
    glVertex3f(0,-19,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(92, 73, 57);
    glVertex3f(60,-19,5);
    glVertex3f(60,-19,5);
    glVertex3f(90,-19,5);
    glVertex3f(90,-19,-30);
    glVertex3f(0,-19,-30);glColor3f(1,1,1);
    glVertex3f(0,-19,5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(60,-19,0);
    glVertex3f(90,-19,0);
    glVertex3f(90,-20,0);
    glVertex3f(60,-20,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,-19,19.99);
    glVertex3f(-90,-19,19.99);
    glVertex3f(-90,-20,19.99);
    glVertex3f(-60,-20,19.99);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,-19,4.99);
    glVertex3f(60,-19,4.99);
    glVertex3f(60,-20,4.99);
    glVertex3f(-60,-20,4.99);
    glEnd();

    //lantai 3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(-60,10,5);
    glVertex3f(-60,10,5);
    glVertex3f(-90,10,5);
    glVertex3f(-90,10,-30);
    glVertex3f(0,10,-30);glColor3f(1,1,1);
    glVertex3f(0,10,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(60,10,5);
    glVertex3f(60,10,20);
    glVertex3f(90,10,20);
    glVertex3f(90,10,-30);
    glVertex3f(0,10,-30);glColor3f(1,1,1);
    glVertex3f(0,10,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(60,10,5);
    glVertex3f(60,10,20);
    glVertex3f(90,10,20);
    glVertex3f(90,10,-30);
    glVertex3f(0,10,-30);glColor3f(1,1,1);
    glVertex3f(0,10,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(92, 73, 57);
    glVertex3f(-60,11,5);
    glVertex3f(-60,11,5);
    glVertex3f(-90,11,5);
    glVertex3f(-90,11,-30);
    glVertex3f(0,11,-30);glColor3f(1,1,1);
    glVertex3f(0,11,5);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(92, 73, 57);
    glVertex3f(60,11,5);
    glVertex3f(60,11,20);
    glVertex3f(90,11,20);
    glVertex3f(90,11,-30);
    glVertex3f(0,11,-30);glColor3f(1,1,1);
    glVertex3f(0,11,5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,11,5);
    glVertex3f(-90,11,5);
    glVertex3f(-90,10,5);
    glVertex3f(-60,10,5);
    glEnd();

    //
    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-75,10,5);
    glVertex3f(-90,10,5);
    glVertex3f(-90,0,10);
    glVertex3f(-75,0,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(21, 52, 77);
    glVertex3f(-75,0,20);
    glVertex3f(-90,0,20);
    glVertex3f(-90,0,10);
    glVertex3f(-75,0,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-70,-10,20);
    glVertex3f(-75,0,20);
    glVertex3f(-75,0,10);
    glVertex3f(-70,-10,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(21, 52, 77);
    glVertex3f(-70,-10,20);
    glVertex3f(-75,0,20);
    glVertex3f(-75,0,10);
    glVertex3f(-70,-10,10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(21, 52, 77);
    glVertex3f(-60,-10,20);
    glVertex3f(-70,-10,20);
    glVertex3f(-70,-10,10);
    glVertex3f(-60,-10,10);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,-20,0);
    glVertex3f(-70,-20,0);
    glVertex3f(-70,-10,10);
    glVertex3f(-60,-10,10);
    glEnd();
    //

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(60,11,19.99);
    glVertex3f(90,11,19.99);
    glVertex3f(90,11,19.99);
    glVertex3f(60,11,19.99);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,11,4.9);
    glVertex3f(60,11,4.9);
    glVertex3f(60,10,4.9);
    glVertex3f(-60,10,4.9);
    glEnd();
}

void jendela(void)
{
    //jendela kanan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(65,15,21);
    glVertex3f(72,15,21);
    glVertex3f(72,-50,21);
    glVertex3f(65,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(65,15,21);glColor3ub(222, 184, 135);
    glVertex3f(65,15,20);
    glVertex3f(65,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(65,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(72,15,21);glColor3ub(222, 184, 135);
    glVertex3f(72,15,20);
    glVertex3f(72,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(72,-50,21);
    glEnd();

    //jemdela kanan 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(78,15,21);
    glVertex3f(85,15,21);
    glVertex3f(85,-50,21);
    glVertex3f(78,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(78,15,21);glColor3ub(222, 184, 135);
    glVertex3f(78,15,20);
    glVertex3f(78,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(78,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(85,15,21);glColor3ub(222, 184, 135);
    glVertex3f(85,15,20);
    glVertex3f(85,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(85,-50,21);
    glEnd();


    //jendela kiri 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-65,15,21);
    glVertex3f(-72,15,21);
    glVertex3f(-72,-50,21);
    glVertex3f(-65,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-65,15,21);glColor3ub(222, 184, 135);
    glVertex3f(-65,15,20);
    glVertex3f(-65,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(-65,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-72,15,21);glColor3ub(222, 184, 135);
    glVertex3f(-72,15,20);
    glVertex3f(-72,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(-72,-50,21);
    glEnd();

    //jemdela kiri 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-78,15,21);
    glVertex3f(-85,15,21);
    glVertex3f(-85,-50,21);
    glVertex3f(-78,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-78,15,21);glColor3ub(222, 184, 135);
    glVertex3f(-78,15,20);
    glVertex3f(-78,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(-78,-50,21);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-85,15,21);glColor3ub(222, 184, 135);
    glVertex3f(-85,15,20);
    glVertex3f(-85,-50,20);glColor3f(0.5,0.2,0.1);
    glVertex3f(-85,-50,21);
    glEnd();

}

void jendelarumit(void)
{
    //jendela rumit kanan 1
    //atas
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(24,15,10.1);glColor3f(0,0,0);
    glVertex3f(22,15,5.1);
    glVertex3f(22,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(24,-5,10.1);
    glVertex3f(33,-5,10.1);
    glVertex3f(33,15,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(33,15,10.1);glColor3f(0,0,0);
    glVertex3f(35,15,5.1);
    glVertex3f(35,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(33,-5,10.1);
    glEnd();
    //temgah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(24,-10,10.1);glColor3f(0,0,0);
    glVertex3f(22,-10,5.1);
    glVertex3f(22,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(24,-28,10.1);
    glVertex3f(33,-28,10.1);
    glVertex3f(33,-10,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(33,-10,10.1);glColor3f(0,0,0);
    glVertex3f(35,-10,5.1);
    glVertex3f(35,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(33,-28,10.1);
    glEnd();glColor3ub(222, 184, 135);
    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(22,-30,10.1);
    glVertex3f(35,-30,10.1);
    glVertex3f(35,-50,10.1);
    glVertex3f(22,-50,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(22,-30,10.1);
    glVertex3f(22,-30,5.1);
    glVertex3f(22,-50,5.1);
    glVertex3f(22,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(35,-30,10.1);
    glVertex3f(35,-30,5.1);
    glVertex3f(35,-50,5.1);
    glVertex3f(35,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(22,-30,10.1);
    glVertex3f(22,-30,5.1);
    glVertex3f(35,-30,5.1);
    glVertex3f(35,-30,10.1);
    glEnd();

    //jendela rumit kanan 2
    //atas
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(42,15,10.1);glColor3f(0,0,0);
    glVertex3f(40,15,5.1);
    glVertex3f(40,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(42,-5,10.1);
    glVertex3f(51,-5,10.1);
    glVertex3f(51,15,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(51,15,10.1);glColor3f(0,0,0);
    glVertex3f(53,15,5.1);
    glVertex3f(53,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(51,-5,10.1);
    glEnd();
    //temgah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(42,-10,10.1);glColor3f(0,0,0);
    glVertex3f(40,-10,5.1);
    glVertex3f(40,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(42,-28,10.1);
    glVertex3f(51,-28,10.1);
    glVertex3f(51,-10,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(51,-10,10.1);glColor3f(0,0,0);
    glVertex3f(53,-10,5.1);
    glVertex3f(53,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(51,-28,10.1);
    glEnd();glColor3ub(222, 184, 135);
    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(40,-30,10.1);
    glVertex3f(53,-30,10.1);
    glVertex3f(53,-50,10.1);
    glVertex3f(40,-50,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(40,-30,10.1);
    glVertex3f(40,-30,5.1);
    glVertex3f(40,-50,5.1);
    glVertex3f(40,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(53,-30,10.1);
    glVertex3f(53,-30,5.1);
    glVertex3f(53,-50,5.1);
    glVertex3f(53,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(40,-30,10.1);
    glVertex3f(40,-30,5.1);
    glVertex3f(53,-30,5.1);
    glVertex3f(53,-30,10.1);
    glEnd();


    //jendela rumit kiri 1
    //atas
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(-24,15,10.1);glColor3f(0,0,0);
    glVertex3f(-22,15,5.1);
    glVertex3f(-22,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-24,-5,10.1);
    glVertex3f(-33,-5,10.1);
    glVertex3f(-33,15,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-33,15,10.1);glColor3f(0,0,0);
    glVertex3f(-35,15,5.1);
    glVertex3f(-35,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-33,-5,10.1);
    glEnd();
    //temgah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(-24,-10,10.1);glColor3f(0,0,0);
    glVertex3f(-22,-10,5.1);
    glVertex3f(-22,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-24,-28,10.1);
    glVertex3f(-33,-28,10.1);
    glVertex3f(-33,-10,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-33,-10,10.1);glColor3f(0,0,0);
    glVertex3f(-35,-10,5.1);
    glVertex3f(-35,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-33,-28,10.1);
    glEnd();glColor3ub(222, 184, 135);
    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-22,-30,10.1);
    glVertex3f(-35,-30,10.1);
    glVertex3f(-35,-50,10.1);
    glVertex3f(-22,-50,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-22,-30,10.1);
    glVertex3f(-22,-30,5.1);
    glVertex3f(-22,-50,5.1);
    glVertex3f(-22,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-35,-30,10.1);
    glVertex3f(-35,-30,5.1);
    glVertex3f(-35,-50,5.1);
    glVertex3f(-35,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-22,-30,10.1);
    glVertex3f(-22,-30,5.1);
    glVertex3f(-35,-30,5.1);
    glVertex3f(-35,-30,10.1);
    glEnd();

    //jendela rumit kiri 2
    //atas
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(-42,15,10.1);glColor3f(0,0,0);
    glVertex3f(-40,15,5.1);
    glVertex3f(-40,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-42,-5,10.1);
    glVertex3f(-51,-5,10.1);
    glVertex3f(-51,15,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-51,15,10.1);glColor3f(0,0,0);
    glVertex3f(-53,15,5.1);
    glVertex3f(-53,-5,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-51,-5,10.1);
    glEnd();
    //temgah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(222, 184, 135);
    glVertex3f(-42,-10,10.1);glColor3f(0,0,0);
    glVertex3f(-40,-10,5.1);
    glVertex3f(-40,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-42,-28,10.1);
    glVertex3f(-51,-28,10.1);
    glVertex3f(-51,-10,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-51,-10,10.1);glColor3f(0,0,0);
    glVertex3f(-53,-10,5.1);
    glVertex3f(-53,-28,5.1);glColor3ub(222, 184, 135);
    glVertex3f(-51,-28,10.1);
    glEnd();glColor3ub(222, 184, 135);
    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-40,-30,10.1);
    glVertex3f(-53,-30,10.1);
    glVertex3f(-53,-50,10.1);
    glVertex3f(-40,-50,10.1);
    glEnd();
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-40,-30,10.1);
    glVertex3f(-40,-30,5.1);
    glVertex3f(-40,-50,5.1);
    glVertex3f(-40,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-53,-30,10.1);
    glVertex3f(-53,-30,5.1);
    glVertex3f(-53,-50,5.1);
    glVertex3f(-53,-50,10.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-40,-30,10.1);
    glVertex3f(-40,-30,5.1);
    glVertex3f(-53,-30,5.1);
    glVertex3f(-53,-30,10.1);
    glEnd();
}

void jendeladec(void)
{
    //kanan 1
    //bawah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(54, 41, 16);
    glVertex3f(23,-31,10.2);
    glVertex3f(34,-31,10.2);
    glVertex3f(34,-49,10.2);
    glVertex3f(23,-49,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(23,-32,10.3);
    glVertex3f(34,-32,10.3);
    glVertex3f(34,-31,10.3);
    glVertex3f(23,-31,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(33,-31,10.3);
    glVertex3f(34,-31,10.3);
    glVertex3f(34,-49,10.3);
    glVertex3f(33,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(24,-31,10.3);
    glVertex3f(23,-31,10.3);
    glVertex3f(23,-49,10.3);
    glVertex3f(24,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(23,-49,10.3);
    glVertex3f(34,-49,10.3);
    glVertex3f(34,-48,10.3);
    glVertex3f(23,-48,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(26,-31,10.3);
    glVertex3f(27,-31,10.3);
    glVertex3f(27,-49,10.3);
    glVertex3f(26,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(31,-31,10.3);
    glVertex3f(30,-31,10.3);
    glVertex3f(30,-49,10.3);
    glVertex3f(31,-49,10.3);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(25,-11,10.2);
    glVertex3f(32,-11,10.2);
    glVertex3f(32,-27,10.2);
    glVertex3f(25,-27,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(25.5,-12,10.3);
    glVertex3f(27,-12,10.3);
    glVertex3f(27,-26,10.3);
    glVertex3f(25.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(29.5,-12,10.3);
    glVertex3f(27.5,-12,10.3);
    glVertex3f(27.5,-26,10.3);
    glVertex3f(29.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(30,-12,10.3);
    glVertex3f(31.5,-12,10.3);
    glVertex3f(31.5,-26,10.3);
    glVertex3f(30,-26,10.3);
    glEnd();

    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(25,14,10.2);
    glVertex3f(32,14,10.2);
    glVertex3f(32,-4,10.2);
    glVertex3f(25,-4,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(25.5,13,10.3);
    glVertex3f(27,13,10.3);
    glVertex3f(27,-3,10.3);
    glVertex3f(25.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(29.5,13,10.3);
    glVertex3f(27.5,13,10.3);
    glVertex3f(27.5,-3,10.3);
    glVertex3f(29.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(30,13,10.3);
    glVertex3f(31.5,13,10.3);
    glVertex3f(31.5,-3,10.3);
    glVertex3f(30,-3,10.3);
    glEnd();


    //kanan 2
    //bawah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(54, 41, 16);
    glVertex3f(41,-31,10.2);
    glVertex3f(52,-31,10.2);
    glVertex3f(52,-49,10.2);
    glVertex3f(41,-49,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(41,-32,10.3);
    glVertex3f(52,-32,10.3);
    glVertex3f(52,-31,10.3);
    glVertex3f(41,-31,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(51,-31,10.3);
    glVertex3f(52,-31,10.3);
    glVertex3f(52,-49,10.3);
    glVertex3f(51,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(42,-31,10.3);
    glVertex3f(41,-31,10.3);
    glVertex3f(41,-49,10.3);
    glVertex3f(42,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(41,-49,10.3);
    glVertex3f(52,-49,10.3);
    glVertex3f(52,-48,10.3);
    glVertex3f(41,-48,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(44,-31,10.3);
    glVertex3f(45,-31,10.3);
    glVertex3f(45,-49,10.3);
    glVertex3f(44,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(49,-31,10.3);
    glVertex3f(48,-31,10.3);
    glVertex3f(48,-49,10.3);
    glVertex3f(49,-49,10.3);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(43,-11,10.2);
    glVertex3f(50,-11,10.2);
    glVertex3f(50,-27,10.2);
    glVertex3f(43,-27,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(43.5,-12,10.3);
    glVertex3f(45,-12,10.3);
    glVertex3f(45,-26,10.3);
    glVertex3f(43.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(47.5,-12,10.3);
    glVertex3f(45.5,-12,10.3);
    glVertex3f(45.5,-26,10.3);
    glVertex3f(47.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(48,-12,10.3);
    glVertex3f(49.5,-12,10.3);
    glVertex3f(49.5,-26,10.3);
    glVertex3f(48,-26,10.3);
    glEnd();

    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(43,14,10.2);
    glVertex3f(50,14,10.2);
    glVertex3f(50,-4,10.2);
    glVertex3f(43,-4,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(43.5,13,10.3);
    glVertex3f(45,13,10.3);
    glVertex3f(45,-3,10.3);
    glVertex3f(43.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(47.5,13,10.3);
    glVertex3f(45.5,13,10.3);
    glVertex3f(45.5,-3,10.3);
    glVertex3f(47.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(48,13,10.3);
    glVertex3f(49.5,13,10.3);
    glVertex3f(49.5,-3,10.3);
    glVertex3f(48,-3,10.3);
    glEnd();


}

void jendeladec2(void)
{
     //kiri 1
    //bawah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(54, 41, 16);
    glVertex3f(-23,-31,10.2);
    glVertex3f(-34,-31,10.2);
    glVertex3f(-34,-49,10.2);
    glVertex3f(-23,-49,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-23,-32,10.3);
    glVertex3f(-34,-32,10.3);
    glVertex3f(-34,-31,10.3);
    glVertex3f(-23,-31,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-33,-31,10.3);
    glVertex3f(-34,-31,10.3);
    glVertex3f(-34,-49,10.3);
    glVertex3f(-33,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-24,-31,10.3);
    glVertex3f(-23,-31,10.3);
    glVertex3f(-23,-49,10.3);
    glVertex3f(-24,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-23,-49,10.3);
    glVertex3f(-34,-49,10.3);
    glVertex3f(-34,-48,10.3);
    glVertex3f(-23,-48,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-26,-31,10.3);
    glVertex3f(-27,-31,10.3);
    glVertex3f(-27,-49,10.3);
    glVertex3f(-26,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-31,-31,10.3);
    glVertex3f(-30,-31,10.3);
    glVertex3f(-30,-49,10.3);
    glVertex3f(-31,-49,10.3);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-25,-11,10.2);
    glVertex3f(-32,-11,10.2);
    glVertex3f(-32,-27,10.2);
    glVertex3f(-25,-27,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-25.5,-12,10.3);
    glVertex3f(-27,-12,10.3);
    glVertex3f(-27,-26,10.3);
    glVertex3f(-25.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-29.5,-12,10.3);
    glVertex3f(-27.5,-12,10.3);
    glVertex3f(-27.5,-26,10.3);
    glVertex3f(-29.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-30,-12,10.3);
    glVertex3f(-31.5,-12,10.3);
    glVertex3f(-31.5,-26,10.3);
    glVertex3f(-30,-26,10.3);
    glEnd();

    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-25,14,10.2);
    glVertex3f(-32,14,10.2);
    glVertex3f(-32,-4,10.2);
    glVertex3f(-25,-4,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-25.5,13,10.3);
    glVertex3f(-27,13,10.3);
    glVertex3f(-27,-3,10.3);
    glVertex3f(-25.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-29.5,13,10.3);
    glVertex3f(-27.5,13,10.3);
    glVertex3f(-27.5,-3,10.3);
    glVertex3f(-29.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-30,13,10.3);
    glVertex3f(-31.5,13,10.3);
    glVertex3f(-31.5,-3,10.3);
    glVertex3f(-30,-3,10.3);
    glEnd();


    //kiri 2
    //bawah
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(54, 41, 16);
    glVertex3f(-41,-31,10.2);
    glVertex3f(-52,-31,10.2);
    glVertex3f(-52,-49,10.2);
    glVertex3f(-41,-49,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-41,-32,10.3);
    glVertex3f(-52,-32,10.3);
    glVertex3f(-52,-31,10.3);
    glVertex3f(-41,-31,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-51,-31,10.3);
    glVertex3f(-52,-31,10.3);
    glVertex3f(-52,-49,10.3);
    glVertex3f(-51,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-42,-31,10.3);
    glVertex3f(-41,-31,10.3);
    glVertex3f(-41,-49,10.3);
    glVertex3f(-42,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-41,-49,10.3);
    glVertex3f(-52,-49,10.3);
    glVertex3f(-52,-48,10.3);
    glVertex3f(-41,-48,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-44,-31,10.3);
    glVertex3f(-45,-31,10.3);
    glVertex3f(-45,-49,10.3);
    glVertex3f(-44,-49,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-49,-31,10.3);
    glVertex3f(-48,-31,10.3);
    glVertex3f(-48,-49,10.3);
    glVertex3f(-49,-49,10.3);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-43,-11,10.2);
    glVertex3f(-50,-11,10.2);
    glVertex3f(-50,-27,10.2);
    glVertex3f(-43,-27,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-43.5,-12,10.3);
    glVertex3f(-45,-12,10.3);
    glVertex3f(-45,-26,10.3);
    glVertex3f(-43.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-47.5,-12,10.3);
    glVertex3f(-45.5,-12,10.3);
    glVertex3f(-45.5,-26,10.3);
    glVertex3f(-47.5,-26,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-48,-12,10.3);
    glVertex3f(-49.5,-12,10.3);
    glVertex3f(-49.5,-26,10.3);
    glVertex3f(-48,-26,10.3);
    glEnd();

    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-43,14,10.2);
    glVertex3f(-50,14,10.2);
    glVertex3f(-50,-4,10.2);
    glVertex3f(-43,-4,10.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-43.5,13,10.3);
    glVertex3f(-45,13,10.3);
    glVertex3f(-45,-3,10.3);
    glVertex3f(-43.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-47.5,13,10.3);
    glVertex3f(-45.5,13,10.3);
    glVertex3f(-45.5,-3,10.3);
    glVertex3f(-47.5,-3,10.3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-48,13,10.3);
    glVertex3f(-49.5,13,10.3);
    glVertex3f(-49.5,-3,10.3);
    glVertex3f(-48,-3,10.3);
    glEnd();
}

void jendeladeckanan(void)
{
    //jendela dec kanan 1
    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(65,13,21.1);
    glVertex3f(72,13,21.1);
    glVertex3f(72,-3,21.1);
    glVertex3f(65,-3,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(65.5,12,21.2);
    glVertex3f(67,12,21.2);
    glVertex3f(67,-2,21.2);
    glVertex3f(65.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(67.5,12,21.2);
    glVertex3f(69.5,12,21.2);
    glVertex3f(69.5,-2,21.2);
    glVertex3f(67.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(207, 196, 167);
    glVertex3f(65,9,21.2);
    glVertex3f(72,9,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(70,12,21.2);
    glVertex3f(71.5,12,21.2);
    glVertex3f(71.5,-2,21.2);
    glVertex3f(70,-2,21.2);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(65,-11,21.1);
    glVertex3f(72,-11,21.1);
    glVertex3f(72,-27,21.1);
    glVertex3f(65,-27,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(65.5,-12,21.2);
    glVertex3f(67,-12,21.2);
    glVertex3f(67,-26,21.2);
    glVertex3f(65.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(67.5,-12,21.2);
    glVertex3f(69.5,-12,21.2);
    glVertex3f(69.5,-26,21.2);
    glVertex3f(67.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(70,-12,21.2);
    glVertex3f(71.5,-12,21.2);
    glVertex3f(71.5,-26,21.2);
    glVertex3f(70,-26,21.2);
    glEnd();

    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(65,-31,21.1);
    glVertex3f(72,-31,21.1);
    glVertex3f(72,-49,21.1);
    glVertex3f(65,-49,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(65.5,-32,21.2);
    glVertex3f(67,-32,21.2);
    glVertex3f(67,-48,21.2);
    glVertex3f(65.5,-48,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(67.5,-32,21.2);
    glVertex3f(69.5,-32,21.2);
    glVertex3f(69.5,-48,21.2);
    glVertex3f(67.5,-48,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(70,-32,21.2);
    glVertex3f(71.5,-32,21.2);
    glVertex3f(71.5,-48,21.2);
    glVertex3f(70,-48,21.2);
    glEnd();




    //jendela dec kanan 2
    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(78,13,21.1);
    glVertex3f(85,13,21.1);
    glVertex3f(85,-3,21.1);
    glVertex3f(78,-3,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(78.5,12,21.2);
    glVertex3f(80,12,21.2);
    glVertex3f(80,-2,21.2);
    glVertex3f(78.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(80.5,12,21.2);
    glVertex3f(82.5,12,21.2);
    glVertex3f(82.5,-2,21.2);
    glVertex3f(80.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(207, 196, 167);
    glVertex3f(78,9,21.2);
    glVertex3f(85,9,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(83,12,21.2);
    glVertex3f(84.5,12,21.2);
    glVertex3f(84.5,-2,21.2);
    glVertex3f(83,-2,21.2);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(78,-12,21.1);
    glVertex3f(85,-12,21.1);
    glVertex3f(85,-26,21.1);
    glVertex3f(78,-26,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(78.5,-13,21.2);
    glVertex3f(80,-13,21.2);
    glVertex3f(80,-26,21.2);
    glVertex3f(78.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(80.5,-13,21.2);
    glVertex3f(82.5,-13,21.2);
    glVertex3f(82.5,-26,21.2);
    glVertex3f(80.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(83,-13,21.2);
    glVertex3f(84.5,-13,21.2);
    glVertex3f(84.5,-26,21.2);
    glVertex3f(83,-26,21.2);
    glEnd();

    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(78,-31,21.1);
    glVertex3f(85,-31,21.1);
    glVertex3f(85,-49,21.1);
    glVertex3f(78,-49,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(78.5,-32,21.2);
    glVertex3f(80,-32,21.2);
    glVertex3f(80,-49,21.2);
    glVertex3f(78.5,-49,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(80.5,-32,21.2);
    glVertex3f(82.5,-32,21.2);
    glVertex3f(82.5,-49,21.2);
    glVertex3f(80.5,-49,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(83,-32,21.2);
    glVertex3f(84.5,-32,21.2);
    glVertex3f(84.5,-49,21.2);
    glVertex3f(83,-49,21.2);
    glEnd();

    //bawah tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(72,-31,20.1);
    glVertex3f(78,-31,20.1);
    glVertex3f(78,-49,20.1);
    glVertex3f(72,-49,20.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(72.5,-32,20.2);
    glVertex3f(74,-32,20.2);
    glVertex3f(74,-49,20.2);
    glVertex3f(72.5,-49,20.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(74.5,-32,20.2);
    glVertex3f(75.5,-32,20.2);
    glVertex3f(75.5,-49,20.2);
    glVertex3f(74.5,-49,20.2);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(76,-32,20.2);
    glVertex3f(77.5,-32,20.2);
    glVertex3f(77.5,-49,20.2);
    glVertex3f(76,-49,20.2);
    glEnd();

    //tengah atas
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(72,13,20.1);
    glVertex3f(78,13,20.1);
    glVertex3f(78,-8,20.1);
    glVertex3f(77,-6,20.1);
    glVertex3f(75,-5,20.1);
    glVertex3f(73,-6,20.1);
    glVertex3f(72,-8,20.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(72.5,12,20.2);
    glVertex3f(74,12,20.2);
    glVertex3f(74,-3,20.2);
    glVertex3f(72.5,-3,20.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(74.5,12,20.2);
    glVertex3f(75.5,12,20.2);
    glVertex3f(75.5,-3,20.2);
    glVertex3f(74.5,-3,20.2);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(76,12,20.2);
    glVertex3f(77.5,12,20.2);
    glVertex3f(77.5,-3,20.2);
    glVertex3f(76,-3,20.2);
    glEnd();



}

void jendeladeckiri(void)
{
    //jendela dec kiri 1
    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-65,13,21.1);
    glVertex3f(-72,13,21.1);
    glVertex3f(-72,-3,21.1);
    glVertex3f(-65,-3,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-65.5,12,21.2);
    glVertex3f(-67,12,21.2);
    glVertex3f(-67,-2,21.2);
    glVertex3f(-65.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-67.5,12,21.2);
    glVertex3f(-69.5,12,21.2);
    glVertex3f(-69.5,-2,21.2);
    glVertex3f(-67.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(207, 196, 167);
    glVertex3f(-65,9,21.2);
    glVertex3f(-72,9,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-70,12,21.2);
    glVertex3f(-71.5,12,21.2);
    glVertex3f(-71.5,-2,21.2);
    glVertex3f(-70,-2,21.2);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-65,-11,21.1);
    glVertex3f(-72,-11,21.1);
    glVertex3f(-72,-27,21.1);
    glVertex3f(-65,-27,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-65.5,-12,21.2);
    glVertex3f(-67,-12,21.2);
    glVertex3f(-67,-26,21.2);
    glVertex3f(-65.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(-54, 41, 16);
    glVertex3f(-67.5,-12,21.2);
    glVertex3f(-69.5,-12,21.2);
    glVertex3f(-69.5,-26,21.2);
    glVertex3f(-67.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-70,-12,21.2);
    glVertex3f(-71.5,-12,21.2);
    glVertex3f(-71.5,-26,21.2);
    glVertex3f(-70,-26,21.2);
    glEnd();

    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-65,-31,21.1);
    glVertex3f(-72,-31,21.1);
    glVertex3f(-72,-49,21.1);
    glVertex3f(-65,-49,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-65.5,-32,21.2);
    glVertex3f(-67,-32,21.2);
    glVertex3f(-67,-48,21.2);
    glVertex3f(-65.5,-48,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-67.5,-32,21.2);
    glVertex3f(-69.5,-32,21.2);
    glVertex3f(-69.5,-48,21.2);
    glVertex3f(-67.5,-48,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-70,-32,21.2);
    glVertex3f(-71.5,-32,21.2);
    glVertex3f(-71.5,-48,21.2);
    glVertex3f(-70,-48,21.2);
    glEnd();




    //jendela dec kiri 2
    //atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-78,13,21.1);
    glVertex3f(-85,13,21.1);
    glVertex3f(-85,-3,21.1);
    glVertex3f(-78,-3,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-78.5,12,21.2);
    glVertex3f(-80,12,21.2);
    glVertex3f(-80,-2,21.2);
    glVertex3f(-78.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-80.5,12,21.2);
    glVertex3f(-82.5,12,21.2);
    glVertex3f(-82.5,-2,21.2);
    glVertex3f(-80.5,-2,21.2);
    glEnd();

    glPushMatrix();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(207, 196, 167);
    glVertex3f(-78,9,21.2);
    glVertex3f(-85,9,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-83,12,21.2);
    glVertex3f(-84.5,12,21.2);
    glVertex3f(-84.5,-2,21.2);
    glVertex3f(-83,-2,21.2);
    glEnd();

    //tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-78,-12,21.1);
    glVertex3f(-85,-12,21.1);
    glVertex3f(-85,-26,21.1);
    glVertex3f(-78,-26,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-78.5,-13,21.2);
    glVertex3f(-80,-13,21.2);
    glVertex3f(-80,-26,21.2);
    glVertex3f(-78.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-80.5,-13,21.2);
    glVertex3f(-82.5,-13,21.2);
    glVertex3f(-82.5,-26,21.2);
    glVertex3f(-80.5,-26,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-83,-13,21.2);
    glVertex3f(-84.5,-13,21.2);
    glVertex3f(-84.5,-26,21.2);
    glVertex3f(-83,-26,21.2);
    glEnd();

    //bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-78,-31,21.1);
    glVertex3f(-85,-31,21.1);
    glVertex3f(-85,-49,21.1);
    glVertex3f(-78,-49,21.1);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-78.5,-32,21.2);
    glVertex3f(-80,-32,21.2);
    glVertex3f(-80,-49,21.2);
    glVertex3f(-78.5,-49,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-80.5,-32,21.2);
    glVertex3f(-82.5,-32,21.2);
    glVertex3f(-82.5,-49,21.2);
    glVertex3f(-80.5,-49,21.2);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-83,-32,21.2);
    glVertex3f(-84.5,-32,21.2);
    glVertex3f(-84.5,-49,21.2);
    glVertex3f(-83,-49,21.2);
    glEnd();

    //bawah tengah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(207, 196, 167);
    glVertex3f(-72,-31,20.1);
    glVertex3f(-78,-31,20.1);
    glVertex3f(-78,-49,20.1);
    glVertex3f(-72,-49,20.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-72.5,-32,20.2);
    glVertex3f(-74,-32,20.2);
    glVertex3f(-74,-49,20.2);
    glVertex3f(-72.5,-49,20.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-74.5,-32,20.2);
    glVertex3f(-75.5,-32,20.2);
    glVertex3f(-75.5,-49,20.2);
    glVertex3f(-74.5,-49,20.2);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-76,-32,20.2);
    glVertex3f(-77.5,-32,20.2);
    glVertex3f(-77.5,-49,20.2);
    glVertex3f(-76,-49,20.2);
    glEnd();

    //bawah atas
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207, 196, 167);
    glVertex3f(-72,13,20.1);
    glVertex3f(-78,13,20.1);
    glVertex3f(-78,-8,20.1);
    glVertex3f(-77,-6,20.1);
    glVertex3f(-75,-5,20.1);
    glVertex3f(-73,-6,20.1);
    glVertex3f(-72,-8,20.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-72.5,12,20.2);
    glVertex3f(-74,12,20.2);
    glVertex3f(-74,-3,20.2);
    glVertex3f(-72.5,-3,20.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-74.5,12,20.2);
    glVertex3f(-75.5,12,20.2);
    glVertex3f(-75.5,-3,20.2);
    glVertex3f(-74.5,-3,20.2);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(54, 41, 16);
    glVertex3f(-76,12,20.2);
    glVertex3f(-77.5,12,20.2);
    glVertex3f(-77.5,-3,20.2);
    glVertex3f(-76,-3,20.2);
    glEnd();
}

void decodalam (void)
{
    //papan tulis
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(20,-25,-29.9);
    glVertex3f(50,-25,-29.9);
    glVertex3f(50,-45,-29.9);
    glVertex3f(20,-45,-29.9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-26,-29.8);
    glVertex3f(49,-26,-29.8);
    glVertex3f(49,-44,-29.8);
    glVertex3f(21,-44,-29.8);
    glEnd();

    //mejakursi
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-20);
    glVertex3f(49,-45,-20);
    glVertex3f(49,-45,-18);
    glVertex3f(21,-45,-18);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-45,-20);
    glVertex3f(49,-45,-20);
    glVertex3f(49,-50,-20);
    glVertex3f(21,-50,-20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-18);
    glVertex3f(49,-45,-18);
    glVertex3f(49,-50,-18);
    glVertex3f(21,-50,-18);
    glEnd();

    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-16);
    glVertex3f(49,-45,-16);
    glVertex3f(49,-45,-14);
    glVertex3f(21,-45,-14);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-45,-16);
    glVertex3f(49,-45,-16);
    glVertex3f(49,-50,-16);
    glVertex3f(21,-50,-16);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-14);
    glVertex3f(49,-45,-14);
    glVertex3f(49,-50,-14);
    glVertex3f(21,-50,-14);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-11);
    glVertex3f(49,-45,-11);
    glVertex3f(49,-45,-9);
    glVertex3f(21,-45,-9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-45,-11);
    glVertex3f(49,-45,-11);
    glVertex3f(49,-50,-11);
    glVertex3f(21,-50,-11);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-9);
    glVertex3f(49,-45,-9);
    glVertex3f(49,-50,-9);
    glVertex3f(21,-50,-9);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-5);
    glVertex3f(49,-45,-5);
    glVertex3f(49,-45,-3);
    glVertex3f(21,-45,-3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-45,-5);
    glVertex3f(49,-45,-5);
    glVertex3f(49,-50,-5);
    glVertex3f(21,-50,-5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-45,-3);
    glVertex3f(49,-45,-3);
    glVertex3f(49,-50,-3);
    glVertex3f(21,-50,-3);
    glEnd();

    //lt2 kanan
    //papan tulis
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(20,5,-29.9);
    glVertex3f(50,5,-29.9);
    glVertex3f(50,-15,-29.9);
    glVertex3f(20,-15,-29.9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,4,-29.8);
    glVertex3f(49,4,-29.8);
    glVertex3f(49,-14,-29.8);
    glVertex3f(21,-14,-29.8);
    glEnd();

    //m&k
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-20);
    glVertex3f(49,-15,-20);
    glVertex3f(49,-15,-18);
    glVertex3f(21,-15,-18);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-15,-20);
    glVertex3f(49,-15,-20);
    glVertex3f(49,-20,-20);
    glVertex3f(21,-20,-20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-18);
    glVertex3f(49,-15,-18);
    glVertex3f(49,-20,-18);
    glVertex3f(21,-20,-18);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-16);
    glVertex3f(49,-15,-16);
    glVertex3f(49,-15,-14);
    glVertex3f(21,-15,-14);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-15,-16);
    glVertex3f(49,-15,-16);
    glVertex3f(49,-20,-16);
    glVertex3f(21,-20,-16);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-14);
    glVertex3f(49,-15,-14);
    glVertex3f(49,-20,-14);
    glVertex3f(21,-20,-14);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-11);
    glVertex3f(49,-15,-11);
    glVertex3f(49,-15,-9);
    glVertex3f(21,-15,-9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-15,-11);
    glVertex3f(49,-15,-11);
    glVertex3f(49,-20,-11);
    glVertex3f(21,-20,-11);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-9);
    glVertex3f(49,-15,-9);
    glVertex3f(49,-20,-9);
    glVertex3f(21,-20,-9);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-5);
    glVertex3f(49,-15,-5);
    glVertex3f(49,-15,-3);
    glVertex3f(21,-15,-3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(21,-15,-5);
    glVertex3f(49,-15,-5);
    glVertex3f(49,-20,-5);
    glVertex3f(21,-20,-5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(21,-15,-3);
    glVertex3f(49,-15,-3);
    glVertex3f(49,-20,-3);
    glVertex3f(21,-20,-3);
    glEnd();

    //lt2 kiri
    //papan tulis
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-20,5,-29.9);
    glVertex3f(-50,5,-29.9);
    glVertex3f(-50,-15,-29.9);
    glVertex3f(-20,-15,-29.9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,4,-29.8);
    glVertex3f(-49,4,-29.8);
    glVertex3f(-49,-14,-29.8);
    glVertex3f(-21,-14,-29.8);
    glEnd();

    //m&k
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-20);
    glVertex3f(-49,-15,-20);
    glVertex3f(-49,-15,-18);
    glVertex3f(-21,-15,-18);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-21,-15,-20);
    glVertex3f(-49,-15,-20);
    glVertex3f(-49,-20,-20);
    glVertex3f(-21,-20,-20);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-18);
    glVertex3f(-49,-15,-18);
    glVertex3f(-49,-20,-18);
    glVertex3f(-21,-20,-18);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-16);
    glVertex3f(-49,-15,-16);
    glVertex3f(-49,-15,-14);
    glVertex3f(-21,-15,-14);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-21,-15,-16);
    glVertex3f(-49,-15,-16);
    glVertex3f(-49,-20,-16);
    glVertex3f(-21,-20,-16);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-14);
    glVertex3f(-49,-15,-14);
    glVertex3f(-49,-20,-14);
    glVertex3f(-21,-20,-14);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-11);
    glVertex3f(-49,-15,-11);
    glVertex3f(-49,-15,-9);
    glVertex3f(-21,-15,-9);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-21,-15,-11);
    glVertex3f(-49,-15,-11);
    glVertex3f(-49,-20,-11);
    glVertex3f(-21,-20,-11);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-9);
    glVertex3f(-49,-15,-9);
    glVertex3f(-49,-20,-9);
    glVertex3f(-21,-20,-9);
    glEnd();
    //
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-5);
    glVertex3f(-49,-15,-5);
    glVertex3f(-49,-15,-3);
    glVertex3f(-21,-15,-3);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-21,-15,-5);
    glVertex3f(-49,-15,-5);
    glVertex3f(-49,-20,-5);
    glVertex3f(-21,-20,-5);
    glEnd();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-21,-15,-3);
    glVertex3f(-49,-15,-3);
    glVertex3f(-49,-20,-3);
    glVertex3f(-21,-20,-3);
    glEnd();

}


void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    depan();
    tembok();
    tembokrumitdpnver();
    tembokrumitdpnhor();
    atap();
    lantai();
    jendela();
    decotengah();
    plrkiri();
    tanah();
    kerucut();kerucutkiri();
    plr();
    jendelarumit();
    jendeladec();
    jendeladec2();
    palingdepan();
    jendeladeckanan();
    jendeladeckiri();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}
void hilang(void)
{
    glClear(GL_DEPTH_BUFFER_BIT| GL_COLOR_BUFFER_BIT);
    tembok();
    lantai();
    tanah();
    decodalam();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void display(void)
{
    if(is_depth)
        tampil();
    else
    hilang();

}
    void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;


}

void mouseMotion(int x, int y)
{
    haha();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }

}
void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi =1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50, lebar / tinggi, 5, 500);
    glTranslated(0, -5, -400);
    glMatrixMode(GL_MODELVIEW);

}

void keyboard(unsigned char key, int x, int y)
{

    switch(key)
    {
        case 'w':
        case 'W':
            glTranslated(0,0,3);
            break;
        case 'd':
        case 'D':
            glTranslated(3,0,0);
            break;
        case 's':
        case 'S':
            glTranslated(0,0,-3);
            break;
        case 'a':
        case 'A':
            glTranslated(-3,0,0);
            break;
        case '7':
            glTranslated(0,3,0);
            break;
        case '9':
            glTranslated(0,-3,0);
            break;
        case '2':
            glRotated(2,1,0,0);
            break;
        case '8':
            glRotated(-2,1,0,0);
            break;
        case '6':
            glRotated(2,0,1,0);
            break;
        case '4':
            glRotatef(-2.0, 0.0, 1.0, 0.0);
            break;
        case '1':
            glRotated(2,0,0,1);
            break;
        case '3':
            glRotated(-2,0,0,1);
            break;
        case '5':
            if (is_depth)
            {
                is_depth = 0;
                hilang();
            }
            else
            {
                is_depth = 1;
                tampil();
            }
    }
    display();


}



int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(250, 80);
    glutInitWindowSize(1440, 900);
    glutCreateWindow("TR GRAFKOM");
    init();
    initRendering();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();

    return 0;
}

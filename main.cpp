#include <windows.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void depan(void);
void tembok(void);
void tembokrumitdpnver(void);
void tembokrumitdpnhor(void);
void atap(void);
void lantai(void);
void jendela(void);
void jendelarumit(void);
void jendeladec(void);
void jendeladec2(void);
void hilang(void);
void display(void);
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
    glVertex3f(60,-50,5);
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
    glVertex3f(60,-20,20);
    glVertex3f(90,-20,20);
    glVertex3f(90,-20,-30);
    glVertex3f(0,-20,-30);glColor3f(1,1,1);
    glVertex3f(0,-20,5);
    glEnd();

     glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.11,0.68);
    glVertex3f(60,-20,5);
    glVertex3f(60,-20,20);
    glVertex3f(90,-20,20);
    glVertex3f(90,-20,-30);
    glVertex3f(0,-20,-30);glColor3f(1,1,1);
    glVertex3f(0,-20,5);
    glEnd();

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
    glVertex3f(60,-19,20);
    glVertex3f(90,-19,20);
    glVertex3f(90,-19,-30);
    glVertex3f(0,-19,-30);glColor3f(1,1,1);
    glVertex3f(0,-19,5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(60,-19,19.99);
    glVertex3f(90,-19,19.99);
    glVertex3f(90,-20,19.99);
    glVertex3f(60,-20,19.99);
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
    glVertex3f(-60,10,20);
    glVertex3f(-90,10,20);
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
    glVertex3f(-60,11,20);
    glVertex3f(-90,11,20);
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
    glVertex3f(60,11,19.99);
    glVertex3f(90,11,19.99);
    glVertex3f(90,11,19.99);
    glVertex3f(60,11,19.99);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(66, 51, 38);
    glVertex3f(-60,11,19.99);
    glVertex3f(-90,11,19.99);
    glVertex3f(-90,10,19.99);
    glVertex3f(-60,10,19.99);
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
    jendelarumit();
    jendeladec();
    jendeladec2();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}
void hilang(void)
{
    glClear(GL_DEPTH_BUFFER_BIT| GL_COLOR_BUFFER_BIT);
    tembok();
    lantai();
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
    glutCreateWindow("3D");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();

    return 0;
}

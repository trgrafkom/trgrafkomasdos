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

    //tembok depan kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-60,30,20);
    glVertex3f(-90,30,20);
    glVertex3f(-90,-50,20);glColor3f(1,1,1);
    glVertex3f(-60,-50,20);
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


}

void tembok(void)
{
    //tembok belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.658824,0.658824,0.658824);
    glVertex3f(-90,-50,-30);
    glVertex3f(-90,30,-30);
    glVertex3f(90,30,-30);glColor3f(1,1,1);
    glVertex3f(90,-50,-30);
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

    //tembok lanjutan kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(60,30,20);
    glVertex3f(60,30,5);
    glVertex3f(60,-50,5);
    glVertex3f(60,-50,20);
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

    //tembok lanjutan kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-60,30,20);
    glVertex3f(-60,30,5);
    glVertex3f(-60,-50,5);
    glVertex3f(-60,-50,20);
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

    //tembok lanjutan tengah kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.2,0.1);
    glVertex3f(-15,30,20);
    glVertex3f(-15,30,5);
    glVertex3f(-15,-50,5);
    glVertex3f(-15,-50,20);
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
    glColor3f(1,1,1);
    glVertex3f(15,30,5);
    glVertex3f(22,30,5);
    glVertex3f(22,-50,5);
    glVertex3f(15,-50,5);
    glEnd();

    //kanan horisontal depan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(24,30,10);
    glVertex3f(33,30,10);
    glVertex3f(33,-50,10);
    glVertex3f(24,-50,10);
    glEnd();

    //kanan horisontal belakang 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(35,30,5);
    glVertex3f(40,30,5);
    glVertex3f(40,-50,5);
    glVertex3f(35,-50,5);
    glEnd();

    //kanan horisontal depan 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(42,30,10);
    glVertex3f(51,30,10);
    glVertex3f(51,-50,10);
    glVertex3f(42,-50,10);
    glEnd();

    //kanan horisontal belakang 3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(53,30,5);
    glVertex3f(60,30,5);
    glVertex3f(60,-50,5);
    glVertex3f(53,-50,5);
    glEnd();

    //kiri horisontal belakang 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15,30,5);
    glVertex3f(-22,30,5);
    glVertex3f(-22,-50,5);
    glVertex3f(-15,-50,5);
    glEnd();

    //kiri horisontal depan 1
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-24,30,10);
    glVertex3f(-33,30,10);
    glVertex3f(-33,-50,10);
    glVertex3f(-24,-50,10);
    glEnd();

    //kiri horisontal belakang 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35,30,5);
    glVertex3f(-40,30,5);
    glVertex3f(-40,-50,5);
    glVertex3f(-35,-50,5);
    glEnd();

    //kiri horisontal depan 2
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-42,30,10);
    glVertex3f(-51,30,10);
    glVertex3f(-51,-50,10);
    glVertex3f(-42,-50,10);
    glEnd();

    //kiri horisontal belakang 3
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
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
    glColor3f(0.73,0.16,0);
    glVertex3f(-60,30,10);glColor3f(1,0,1);
    glVertex3f(-75,50,-10);
    glVertex3f(75,50,-10);glColor3f(0.73,0.16,0);
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

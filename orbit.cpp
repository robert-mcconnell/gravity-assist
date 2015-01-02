#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>

GLfloat speed = 0.3;
GLfloat days = 365;
GLfloat year = 0.0;
GLfloat day = 0.0;
GLfloat earthOrbitRad = 1.0;
GLfloat dayTime = 5.0 * speed;
GLfloat yearTime = days/360.0 * dayTime * speed;
void init(void);
void time(void);
void display(void);
void physics(void);
void reshapeFunc(int x, int y);
      
void init(void){
	glShadeModel (GL_FLAT);
	glClearColor (0.110, 0.183, 0.255, 1.0);
}

void time(void){
	day += dayTime;
	year += yearTime;
	display();
}

void display(void){
   glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix();  
	glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
	physics();
	glFlush();
	glutSwapBuffers();
}   	

void physics(void){
	
	glPushMatrix();

	//sun
	glRotatef(90.0,1.0,0.0,0.0);
    glColor3ub(255,255,255);
    glutWireSphere(0.3,20,20);
	glPushMatrix();
		
	glRotatef(90.0,1.0,0.0,0.0);	
	glRotatef(year,0.0,1.0,0.0);
	glTranslatef(earthOrbitRad,0.0,0.0);
	glRotatef(-year,0.0,1.0,0.0);
	glPushMatrix();
    
	glRotatef(day,0.25,1.0,0.0);    
	
	//earth
    glColor3ub(255,255,255);
	glutWireSphere(0.1,20,20);
	
    glPopMatrix();
}


void reshapeFunc(int x, int y)
{
    if (y == 0 || x==0) return;
 
    glLoadIdentity();
    gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,20.0);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);
    display();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Space Simulator");
    init();
	glutReshapeFunc(reshapeFunc);
    glutDisplayFunc(display);
	glutIdleFunc(time);
    glutMainLoop();
    return 0;
}


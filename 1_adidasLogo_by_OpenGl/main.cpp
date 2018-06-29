#include<windows.h>
#include <GL/glut.h>


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(1.0, 1.0, 1.0);
	//Adjust the point size
	glPointSize(10.0);

	// Draw a couple of points

	//Set colour to red
	glColor3f(0.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(90, 60);
		glVertex2i(140, 80);

		glVertex2i(140, 80);
		glVertex2i(150, 50);

		glVertex2i(150, 50);
		glVertex2i(100, 50);

		glVertex2i(100, 50);
		glVertex2i(90, 60);

	glEnd();
	glColor3f(0.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(150, 100);
		glVertex2i(190, 120);

		glVertex2i(190, 120);
		glVertex2i(220, 50);

		glVertex2i(220, 50);
		glVertex2i(170, 50);

		glVertex2i(170, 50);
		glVertex2i(150, 100);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);

	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(200, 140);
		glVertex2i(240, 170);

		glVertex2i(240, 170);
		glVertex2i(290, 50);

		glVertex2i(290, 50);
		glVertex2i(240, 50);

		glVertex2i(240, 50);
		glVertex2i(200, 140);
glEnd();
	glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(200, 200);				// Set window position
	glutInitWindowSize(400, 400);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}

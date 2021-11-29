#include <GL/gl.h>
#include <GL/glut.h>
#include <Windows.h>
#include <MMSystem.h>
float p=400, q=400;
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
//FLOOR
glColor3ub (224,255,255);
glBegin(GL_POLYGON);
glVertex3f (0, 20, 0);
glVertex3f (205, 157.5, 0);
glVertex3f (380, 157.5, 0);
glVertex3f (560, 30, 0);
glVertex3f (560, 0, 0);
glVertex3f (0, 0, 0);
glEnd();

//Square wall
glColor3ub (204,255,204);
glBegin(GL_POLYGON);
glVertex3f (205, 157.5, 0);
glVertex3f (205, 280, 0);
glVertex3f (380, 280, 0);
glVertex3f (380, 157.5, 0);
glEnd();

//ceiling
glColor3ub (204,153,255);
glBegin(GL_POLYGON);
glVertex3f (105, 360, 0);
glVertex3f (205, 280, 0);
glVertex3f (380, 280, 0);
glVertex3f (490, 360, 0);
glEnd();

//left wall
glColor3ub (153,204,255);
glBegin(GL_POLYGON);
glVertex3f (0, 360, 0);
glVertex3f (105, 360, 0);
glVertex3f (205, 280, 0);
glVertex3f (205, 157.5, 0);
glVertex3f (0, 20, 0);
glEnd();

//frame left-black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (40, 280, 0);
glVertex3f (90, 273, 0);
glVertex3f (90, 217, 0);
glVertex3f (40, 210, 0);
glEnd();

//frame left-yellow
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (47, 272, 0);
glVertex3f (85, 268, 0);
glVertex3f (85, 222, 0);
glVertex3f (47, 217, 0);
glEnd();

//frame left-triangle
glColor3ub (255,0,255);
glBegin(GL_POLYGON);
glVertex3f (80, 221, 0);
glVertex3f (68, 260, 0);
glVertex3f (53, 217, 0);
glEnd();

//frame left-triangle
glColor3ub (255,0,255);
glBegin(GL_POLYGON);
glVertex3f (80, 269, 0);
glVertex3f (68, 235, 0);
glVertex3f (53, 272, 0);
glEnd();

//frame left-middle
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (68, 260, 0);
glVertex3f (76, 247, 0);
glVertex3f (68, 232, 0);
glVertex3f (60, 247, 0);
glEnd();

//frame right-black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (100, 273, 0);
glVertex3f (150, 268, 0);
glVertex3f (150, 222, 0);
glVertex3f (100, 217, 0);
glEnd();

//frame right-red
glColor3ub (220,20,60);
glBegin(GL_POLYGON);
glVertex3f (106, 268, 0);
glVertex3f (146, 265, 0);
glVertex3f (146, 226, 0);
glVertex3f (106, 222, 0);
glEnd();

//frame right-yellow
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (114, 262, 0);
glVertex3f (138, 261, 0);
glVertex3f (138, 225, 0);
glVertex3f (114, 223, 0);
glEnd();

//frame right-violet
glColor3ub (127,7,222);
glBegin(GL_POLYGON);
glVertex3f (126, 258, 0);
glVertex3f (136, 243, 0);
glVertex3f (126, 227, 0);
glVertex3f (116, 243, 0);
glEnd();

//AC-white
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex3f (70, 350, 0);
glVertex3f (156, 303, 0);
glVertex3f (155, 277, 0);
glVertex3f (50, 310, 0);
glEnd();

//AC-side
glColor3ub (255, 230, 230);
glBegin(GL_POLYGON);
glVertex3f (50, 345, 0);
glVertex3f (70, 350, 0);
glVertex3f (70, 320, 0);
glVertex3f (66, 314, 0);
glVertex3f (60, 311, 0);
glVertex3f (50, 310, 0);
glEnd();

//AC-down line
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (72, 314, 0);
glVertex3f (150, 285, 0);
glVertex3f (150, 282, 0);
glVertex3f (70, 310, 0);
glEnd();

//AC-up line
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (102, 319, 0);
glVertex3f (125, 309, 0);
glVertex3f (123, 302, 0);
glVertex3f (100, 310, 0);
glEnd();

//right wall
glColor3ub (153,204,255);
glBegin(GL_POLYGON);
glVertex3f (560, 360, 0);
glVertex3f (490, 360, 0);
glVertex3f (380, 280, 0);
glVertex3f (380, 157.5, 0);
glVertex3f (560, 30, 0);
glEnd();

//ceiling design
glColor3ub (153,204,255);
glBegin(GL_POLYGON);
glVertex3f (235, 340, 0);
glVertex3f (350, 340, 0);
glVertex3f (325, 290, 0);
glVertex3f (260, 290, 0);
glEnd();

//ceiling-side
glColor3ub (128,128,0);
glBegin(GL_POLYGON);
glVertex3f (235, 350, 0);
glVertex3f (350, 350, 0);
glVertex3f (350, 340, 0);
glVertex3f (235, 340, 0);
glEnd();

//triangle-1
glColor3ub (204,255,204);
glBegin(GL_POLYGON);
glVertex3f (295,320, 0);
glVertex3f (285,310, 0);
glVertex3f (235,340, 0);
glEnd();

//triangle-2
glColor3ub (204,255,204);
glBegin(GL_POLYGON);
glVertex3f (295,320, 0);
glVertex3f (305,310, 0);
glVertex3f (350,340, 0);
glEnd();

//triangle-3
glColor3ub (204,255,204);
glBegin(GL_POLYGON);
glVertex3f (295,290, 0);
glVertex3f (305,310, 0);
glVertex3f (285,310, 0);
glEnd();

//window
glColor3ub (153,204,255);
glBegin(GL_POLYGON);
glVertex3f (218, 275, 0);
glVertex3f (310, 275, 0);
glVertex3f (310, 192, 0);
glVertex3f (218, 192, 0);
glEnd();

//window-white
glColor3ub (245,245,245);
glBegin(GL_POLYGON);
glVertex3f (222, 271, 0);
glVertex3f (306, 271, 0);
glVertex3f (306, 196, 0);
glVertex3f (222, 196, 0);
glEnd();

//w-door
glColor3ub (42,33,165);
glBegin(GL_POLYGON);
glVertex3f (222, 271, 0);
glVertex3f (245, 260, 0);
glVertex3f (245, 205, 0);
glVertex3f (222, 196, 0);
glEnd();

//w-door
glColor3ub (42,33,165);
glBegin(GL_POLYGON);
glVertex3f (306, 271, 0);
glVertex3f (306, 196, 0);
glVertex3f (280, 205, 0);
glVertex3f (280, 260, 0);
glEnd();

//w stick-1
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (263, 271, 0);
glVertex3f (267, 271, 0);
glVertex3f (267, 196, 0);
glVertex3f (263, 196, 0);
glEnd();

//w stick-2
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (222, 237, 0);
glVertex3f (306, 237, 0);
glVertex3f (306, 233, 0);
glVertex3f (222, 233, 0);
glEnd();

//w stick-3
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (222, 254, 0);
glVertex3f (306, 254, 0);
glVertex3f (306, 250, 0);
glVertex3f (222, 250, 0);
glEnd();

//w stick-4
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (222, 220, 0);
glVertex3f (306, 220, 0);
glVertex3f (306, 216, 0);
glVertex3f (222, 216, 0);
glEnd();

//right-wall TV
glColor3ub (0, 255, 204);
glBegin(GL_POLYGON);
glVertex3f (400, 260, 0);
glVertex3f (510, 280, 0);
glVertex3f (510, 180, 0);
glVertex3f (400, 200, 0);
glEnd();

//screen
glColor3ub (51, 153, 255);
glBegin(GL_POLYGON);
glVertex3f (400, 220, 0);
glVertex3f (510, 230, 0);
glVertex3f (510, 180, 0);
glVertex3f (400, 205, 0);
glEnd();


//border
glColor3ub (0, 0, 102);
glBegin(GL_POLYGON);
glVertex3f (400, 260, 0);
glVertex3f (510, 280, 0);
glVertex3f (510, 275, 0);
glVertex3f (400, 255, 0);
glEnd();

//border
glColor3ub (0, 0, 102);
glBegin(GL_POLYGON);
glVertex3f (400, 205, 0);
glVertex3f (510, 185, 0);
glVertex3f (510, 180, 0);
glVertex3f (400, 200, 0);
glEnd();

//border
glColor3ub (0, 0, 102);
glBegin(GL_POLYGON);
glVertex3f (510, 280, 0);
glVertex3f (520, 280, 0);
glVertex3f (520, 180, 0);
glVertex3f (510, 180, 0);
glEnd();

//board
glColor3ub (255,0,255);
glBegin(GL_POLYGON);
glVertex3f (530, 238, 0);
glVertex3f (550, 240, 0);
glVertex3f (550, 220, 0);
glVertex3f (530, 223, 0);
glEnd();

//wire
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (520, 201, 0);
glVertex3f (541, 201, 0);
glVertex3f (541, 199, 0);
glVertex3f (520, 199, 0);
glEnd();

//wire
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (539, 230, 0);
glVertex3f (541, 230, 0);
glVertex3f (541, 199, 0);
glVertex3f (539, 199, 0);
glEnd();

//socket
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (535, 233, 0);
glVertex3f (545, 233, 0);
glVertex3f (545, 225, 0);
glVertex3f (535, 225, 0);
glEnd();

//House
glColor3ub (102, 153, 0);
glBegin(GL_POLYGON);
glVertex3f (410, 245, 0);
glVertex3f (440, 245, 0);
glVertex3f (440, 225, 0);
glVertex3f (410, 225, 0);
glEnd();

//House-ceiling
glColor3ub (0, 102, 153);
glBegin(GL_POLYGON);
glVertex3f (405, 245, 0);
glVertex3f (425, 255, 0);
glVertex3f (445, 245, 0);
glEnd();

//House-door
glColor3ub (255, 255, 51);
glBegin(GL_POLYGON);
glVertex3f (421, 240, 0);
glVertex3f (429, 240, 0);
glVertex3f (429, 225, 0);
glVertex3f (421, 225, 0);
glEnd();

//House-stage
glColor3ub (0, 102, 153);
glBegin(GL_POLYGON);
glVertex3f (407, 228, 0);
glVertex3f (443, 228, 0);
glVertex3f (443, 225, 0);
glVertex3f (407, 225, 0);
glEnd();

//Hill-1
glColor3ub (51, 204, 51);
glBegin(GL_POLYGON);
glVertex3f (455, 245, 0);
glVertex3f (466, 260, 0);
glVertex3f (475, 245, 0);
glEnd();

//Hill-2
glColor3ub (51, 204, 51);
glBegin(GL_POLYGON);
glVertex3f (470, 240, 0);
glVertex3f (490, 265, 0);
glVertex3f (510, 240, 0);
glEnd();

//Tree-black
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (459, 236, 0);
glVertex3f (461, 236, 0);
glVertex3f (461, 230, 0);
glVertex3f (459, 230, 0);
glEnd();

//Tree-leaf
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex3f (454, 236, 0);
glVertex3f (460, 244, 0);
glVertex3f (466, 236, 0);
glEnd();

//Tree-leaf
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex3f (454, 240, 0);
glVertex3f (460, 248, 0);
glVertex3f (466, 240, 0);
glEnd();

//Tree-leaf
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex3f (454, 244, 0);
glVertex3f (460, 252, 0);
glVertex3f (466, 244, 0);
glEnd();

//Tree-black
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (489, 240, 0);
glVertex3f (491, 240, 0);
glVertex3f (491, 234, 0);
glVertex3f (489, 234, 0);
glEnd();

//Tree-leaf
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex3f (484, 240, 0);
glVertex3f (490, 248, 0);
glVertex3f (496, 240, 0);
glEnd();

//Tree-leaf
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex3f (484, 244, 0);
glVertex3f (490, 252, 0);
glVertex3f (496, 244, 0);
glEnd();

//Tree-leaf
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex3f (484, 248, 0);
glVertex3f (490, 256, 0);
glVertex3f (496, 248, 0);
glEnd();

//Clock
glColor3ub (71, 209, 71);
glBegin(GL_POLYGON);
glVertex3f (320, 270, 0);
glVertex3f (370, 270, 0);
glVertex3f (370, 200, 0);
glVertex3f (320, 200, 0);
glEnd();

//Border
glColor3ub (255, 255, 0);
glBegin(GL_POLYGON);
glVertex3f (325, 265, 0);
glVertex3f (365, 265, 0);
glVertex3f (365, 205, 0);
glVertex3f (325, 205, 0);
glEnd();

//left-bar
glColor3ub (71, 209, 71);
glBegin(GL_POLYGON);
glVertex3f (320, 270, 0);
glVertex3f (340, 270, 0);
glVertex3f (340, 200, 0);
glVertex3f (320, 200, 0);
glEnd();

//clockwise
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (343, 270, 0);
glVertex3f (347, 270, 0);
glVertex3f (347, 260, 0);
glVertex3f (343, 260, 0);
glEnd();

//clockwise
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (343, 210, 0);
glVertex3f (347, 210, 0);
glVertex3f (347, 200, 0);
glVertex3f (343, 200, 0);
glEnd();

//clockwise
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (360, 237, 0);
glVertex3f (370, 237, 0);
glVertex3f (370, 233, 0);
glVertex3f (360, 233, 0);
glEnd();

//clockwise
glColor3ub (255,215,0);
glBegin(GL_POLYGON);
glVertex3f (341, 235, 0);
glVertex3f (345, 239, 0);
glVertex3f (349, 235, 0);
glVertex3f (345, 231, 0);
glEnd();

//nine=9
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (325, 240, 0);
glVertex3f (327, 240, 0);
glVertex3f (327, 235, 0);
glVertex3f (325, 235, 0);
glEnd();

//nine=9
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (334, 240, 0);
glVertex3f (336, 240, 0);
glVertex3f (336, 235, 0);
glVertex3f (334, 235, 0);
glEnd();

//nine=9
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (326, 240, 0);
glVertex3f (335, 240, 0);
glVertex3f (333, 238, 0);
glVertex3f (326, 238, 0);
glEnd();

//nine=9
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (326, 236, 0);
glVertex3f (335, 236, 0);
glVertex3f (335, 235, 0);
glVertex3f (326, 235, 0);
glEnd();

//nine=9
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (334, 235, 0);
glVertex3f (336, 235, 0);
glVertex3f (336, 230, 0);
glVertex3f (334, 230, 0);
glEnd();

//nine=9
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (325, 232, 0);
glVertex3f (334, 232, 0);
glVertex3f (334, 230, 0);
glVertex3f (325, 230, 0);
glEnd();

//hours
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (337, 253, 0);
glVertex3f (339, 253, 0);
glVertex3f (346, 235, 0);
glVertex3f (344, 235, 0);
glEnd();

//minutes
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (344, 235, 0);
glVertex3f (346, 235, 0);
glVertex3f (346, 215, 0);
glVertex3f (344, 215, 0);
glEnd();

//wear drove
glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex3f (335, 185, 0);
glVertex3f (380, 185, 0);
glVertex3f (485, 149, 0);
glVertex3f (390, 149, 0);
glEnd();

//border
glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex3f (349, 181, 0);
glVertex3f (378, 181, 0);
glVertex3f (463, 152, 0);
glVertex3f (395, 152, 0);
glEnd();

//border
glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex3f (390, 149, 0);
glVertex3f (485, 149, 0);
glVertex3f (487, 80, 0);
glVertex3f (390, 80, 0);
glEnd();

//drawer
glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex3f (335, 185, 0);
glVertex3f (390, 149, 0);
glVertex3f (390, 80, 0);
glVertex3f (333, 154, 0);
glEnd();

//drawer
glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex3f (395, 144, 0);
glVertex3f (480, 144, 0);
glVertex3f (482, 85, 0);
glVertex3f (395, 85, 0);
glEnd();

//box
glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex3f (338, 180, 0);
glVertex3f (366, 159, 0);
glVertex3f (366, 142, 0);
glVertex3f (338, 168, 0);
glEnd();

//box
glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex3f (338, 165, 0);
glVertex3f (366, 138, 0);
glVertex3f (366, 118, 0);
glVertex3f (338, 154, 0);
glEnd();

//box
glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex3f (370, 155, 0);
glVertex3f (387, 143, 0);
glVertex3f (387, 93, 0);
glVertex3f (370, 115, 0);
glEnd();

//handle
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (374, 137, 0);
glVertex3f (376, 135, 0);
glVertex3f (376, 120, 0);
glVertex3f (374, 121, 0);
glEnd();

//handle
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (345, 167, 0);
glVertex3f (346, 169, 0);
glVertex3f (354, 162, 0);
glVertex3f (353, 160, 0);
glEnd();

//handle
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (345, 150, 0);
glVertex3f (346, 152, 0);
glVertex3f (353, 144, 0);
glVertex3f (352, 142, 0);
glEnd();

//right table
glColor3ub (448,0,211);
glBegin(GL_POLYGON);
glVertex3f (200, 178, 0);
glVertex3f (230, 177, 0);
glVertex3f (214, 167, 0);
glVertex3f (180, 168, 0);
glEnd();

//border
glColor3ub (255,0,0);
glBegin(GL_POLYGON);
glVertex3f (214, 167, 0);
glVertex3f (230, 177, 0);
glVertex3f (230, 167, 0);
glVertex3f (214, 157, 0);
glEnd();

//border
glColor3ub (139,69,19);
glBegin(GL_POLYGON);
glVertex3f (180, 168, 0);
glVertex3f (214, 167, 0);
glVertex3f (215, 140, 0);
glVertex3f (180, 140, 0);
glEnd();

//border
glColor3ub (139,69,19);
glBegin(GL_POLYGON);
glVertex3f (214, 158, 0);
glVertex3f (230, 167, 0);
glVertex3f (230, 148, 0);
glVertex3f (215, 140, 0);
glEnd();

//border
glColor3ub (255,85,85);
glBegin(GL_POLYGON);
glVertex3f (180, 168, 0);
glVertex3f (214, 167, 0);
glVertex3f (214, 158, 0);
glVertex3f (180, 159, 0);
glEnd();

//light
glColor3ub (106,90,205);
glBegin(GL_POLYGON);
glVertex3f (195, 210, 0);
glVertex3f (215, 210, 0);
glVertex3f (225, 190, 0);
glVertex3f (185, 190, 0);
glEnd();

//light
glColor3ub (123,104,238);
glBegin(GL_POLYGON);
glVertex3f (185, 190, 0);
glVertex3f (205, 210, 0);
glVertex3f (225, 190, 0);
glEnd();

//light
glColor3ub (0,171,240);
glBegin(GL_POLYGON);
glVertex3f (200, 190, 0);
glVertex3f (210, 190, 0);
glVertex3f (210, 170, 0);
glVertex3f (200, 170, 0);
glEnd();

//light
glColor3ub (0,171,240);
glBegin(GL_POLYGON);
glVertex3f (195, 170, 0);
glVertex3f (200, 178, 0);
glVertex3f (200, 170, 0);
glEnd();

//light
glColor3ub (0,171,240);
glBegin(GL_POLYGON);
glVertex3f (215, 170, 0);
glVertex3f (210, 178, 0);
glVertex3f (210, 170, 0);
glEnd();

//Bed
glColor3ub (170,85,0);
glBegin(GL_POLYGON);
glVertex3f (65, 175, 0);
glVertex3f (85, 172, 0);
glVertex3f (85, 60, 0);
glVertex3f (64, 60, 0);
glEnd();

//...
glColor3ub (170,85,0);
glBegin(GL_POLYGON);
glVertex3f (83, 125, 0);
glVertex3f (290, 120, 0);
glVertex3f (290, 60, 0);
glVertex3f (83, 60, 0);
glEnd();

//...
glColor3ub (51, 51, 255);
glBegin(GL_POLYGON);
glVertex3f (83, 125, 0);
glVertex3f (290, 120, 0);
glVertex3f (290, 107, 0);
glVertex3f (83, 110, 0);
glEnd();

//...
glColor3ub (170,85,0);
glBegin(GL_POLYGON);
glVertex3f (65, 175, 0);
glVertex3f (144, 190, 0);
glVertex3f (157, 188, 0);
glVertex3f (85, 172, 0);
glEnd();

//...
glColor3ub (187,0,187);
glBegin(GL_POLYGON);
glVertex3f (85, 172, 0);
glVertex3f (157, 188, 0);
glVertex3f (157, 158, 0);
glVertex3f (82, 125, 0);
glEnd();

//...
glColor3ub (0, 0, 153);
glBegin(GL_POLYGON);
glVertex3f (157, 158, 0);
glVertex3f (300, 157, 0);
glVertex3f (290, 120, 0);
glVertex3f (83, 125, 0);
glEnd();

//...
glColor3ub (51, 51, 255);
glBegin(GL_POLYGON);
glVertex3f (290, 120, 0);
glVertex3f (300, 158, 0);
glVertex3f (300, 130, 0);
glVertex3f (290, 60, 0);
glEnd();

//kombol
glColor3ub (204, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (235, 157, 0);
glVertex3f (265, 157, 0);
glVertex3f (250, 120, 0);
glVertex3f (210, 120, 0);
glEnd();

//..
glColor3ub (204, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (210, 120, 0);
glVertex3f (250, 120, 0);
glVertex3f (250, 70, 0);
glVertex3f (210, 70, 0);
glEnd();

//balish1
glColor3ub (204, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (96, 150, 0);
glVertex3f (148, 170, 0);
glVertex3f (156, 154, 0);
glVertex3f (112, 130, 0);
glEnd();

//balish
glColor3ub (128, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (95, 145, 0);
glVertex3f (96, 150, 0);
glVertex3f (112, 130, 0);
glVertex3f (107, 130, 0);
glEnd();

//left draware
glColor3ub (128,0,0);
glBegin(GL_POLYGON);
glVertex3f (68, 118, 0);
glVertex3f (138, 116, 0);
glVertex3f (104, 94, 0);
glVertex3f (18, 96, 0);
glEnd();

//border
glColor3ub (128,0,128);
glBegin(GL_POLYGON);
glVertex3f (18, 96, 0);
glVertex3f (104, 94, 0);
glVertex3f (104, 28, 0);
glVertex3f (16, 28, 0);
glEnd();

//border
glColor3ub (128,0,0);
glBegin(GL_POLYGON);
glVertex3f (24, 90, 0);
glVertex3f (97, 88, 0);
glVertex3f (97, 34, 0);
glVertex3f (22, 34, 0);
glEnd();

//side
glColor3ub (128,0,128);
glBegin(GL_POLYGON);
glVertex3f (104, 94, 0);
glVertex3f (138, 116, 0);
glVertex3f (138, 60, 0);
glVertex3f (104, 28, 0);
glEnd();

//box
glColor3ub (128,0,0);
glBegin(GL_POLYGON);
glVertex3f (108, 90, 0);
glVertex3f (134, 108, 0);
glVertex3f (134, 65, 0);
glVertex3f (108, 40, 0);
glEnd();

//box
glColor3ub (128,0,128);
glBegin(GL_POLYGON);
glVertex3f (108, 67, 0);
glVertex3f (134, 87, 0);
glVertex3f (134, 83, 0);
glVertex3f (108, 63, 0);
glEnd();

//handle
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (117, 86, 0);
glVertex3f (130, 96, 0);
glVertex3f (130, 92, 0);
glVertex3f (117, 82, 0);
glEnd();

//handle
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (117, 61, 0);
glVertex3f (129, 71, 0);
glVertex3f (129, 67, 0);
glVertex3f (117, 57, 0);
glEnd();

//fuldani
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (60, 110, 0);
glVertex3f (55, 120, 0);
glVertex3f (60, 130, 0);
glVertex3f (60, 140, 0);
glVertex3f (80, 140, 0);
glVertex3f (80, 130, 0);
glVertex3f (85, 120, 0);
glVertex3f (80, 110, 0);
glVertex3f (80, 100, 0);
glVertex3f (60, 100, 0);
glEnd();

//line
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (60, 135, 0);
glVertex3f (80, 135, 0);
glVertex3f (80, 130, 0);
glVertex3f (60, 130, 0);
glEnd();

//line
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (60, 110, 0);
glVertex3f (80, 110, 0);
glVertex3f (80, 105, 0);
glVertex3f (60, 105, 0);
glEnd();

//line
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (69, 130, 0);
glVertex3f (71, 130, 0);
glVertex3f (71, 110, 0);
glVertex3f (69, 110, 0);
glEnd();

//line
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (76, 130, 0);
glVertex3f (78, 130, 0);
glVertex3f (78, 110, 0);
glVertex3f (76, 110, 0);
glEnd();

//line
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (62, 130, 0);
glVertex3f (64, 130, 0);
glVertex3f (64, 110, 0);
glVertex3f (62, 110, 0);
glEnd();

//Flower stick
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (75, 140, 0);
glVertex3f (82, 150, 0);
glVertex3f (84, 148, 0);
glVertex3f (78, 140, 0);
glEnd();

//Flower
glColor3ub (0,0,255);
glBegin(GL_POLYGON);
glVertex3f (82, 148, 0);
glVertex3f (82, 162, 0);
glVertex3f (90, 150, 0);
glEnd();

//Flower
glColor3ub (255,0,0);
glBegin(GL_POLYGON);
glVertex3f (85, 158, 0);
glVertex3f (97, 155, 0);
glVertex3f (91, 150, 0);
glEnd();

//Flower stick
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (60, 150, 0);
glVertex3f (63, 150, 0);
glVertex3f (65, 140, 0);
glVertex3f (62, 140, 0);
glEnd();

glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (60, 160, 0);
glVertex3f (70, 165, 0);
glVertex3f (61, 148, 0);
glEnd();

//Flower
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (62, 160, 0);
glVertex3f (45, 158, 0);
glVertex3f (63, 148, 0);
glEnd();

//Flower
glColor3ub (0,143,0);
glBegin(GL_POLYGON);
glVertex3f (55, 175, 0);
glVertex3f (65, 162, 0);
glVertex3f (52, 159, 0);
glEnd();

//Flower stick
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (74, 160, 0);
glVertex3f (77, 160, 0);
glVertex3f (71, 140, 0);
glVertex3f (68, 140, 0);
glEnd();

//Flower
glColor3ub (255,0,0);
glBegin(GL_POLYGON);
glVertex3f (76, 175, 0);
glVertex3f (79, 165, 0);
glVertex3f (76, 160, 0);
glVertex3f (73, 165, 0);
glEnd();

//Flower
glColor3ub (0,250,154);
glBegin(GL_POLYGON);
glVertex3f (79, 165, 0);
glVertex3f (86, 165, 0);
glVertex3f (78, 160, 0);
glVertex3f (76, 160, 0);
glEnd();

//Flower
glColor3ub (0,250,154);
glBegin(GL_POLYGON);
glVertex3f (67, 165, 0);
glVertex3f (73, 165, 0);
glVertex3f (76, 160, 0);
glVertex3f (73, 160, 0);
glEnd();

//Flower
glColor3ub (0,0,255);
glBegin(GL_POLYGON);
glVertex3f (65, 160, 0);
glVertex3f (70, 150, 0);
glVertex3f (65, 140, 0);
glEnd();

//Flower
glColor3ub (0,0,255);
glBegin(GL_POLYGON);
glVertex3f (75, 160, 0);
glVertex3f (70, 150, 0);
glVertex3f (75, 140, 0);
glEnd();

//Flower
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (72, 160, 0);
glVertex3f (70, 150, 0);
glVertex3f (73, 160, 0);
glEnd();

//Flower
glColor3ub (255,255,0);
glBegin(GL_POLYGON);
glVertex3f (68, 160, 0);
glVertex3f (70, 150, 0);
glVertex3f (67, 160, 0);
glEnd();

//Table
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex3f (560, 120, 0);
glVertex3f (560, 100, 0);
glVertex3f (477, 100, 0);
glVertex3f (395, 145, 0);
glVertex3f (490, 145, 0);
glEnd();

//Table border
glColor3ub (107, 107, 71);
glBegin(GL_POLYGON);
glVertex3f (400, 142, 0);
glVertex3f (410, 137, 0);
glVertex3f (410, 80, 0);
glVertex3f (400, 80, 0);
glEnd();

//Table border
glColor3ub (107, 107, 71);
glBegin(GL_POLYGON);
glVertex3f (475, 100, 0);
glVertex3f (485, 100, 0);
glVertex3f (485, 80, 0);
glVertex3f (475, 80, 0);
glEnd();

//Table stand
glColor3ub (107, 107, 71);
glBegin(GL_POLYGON);
glVertex3f (482, 100, 0);
glVertex3f (492, 100, 0);
glVertex3f (492, 30, 0);
glVertex3f (482, 30, 0);
glEnd();

//Table stand
glColor3ub (185, 185, 146);
glBegin(GL_POLYGON);
glVertex3f (395, 145, 0);
glVertex3f (477, 100, 0);
glVertex3f (477, 95, 0);
glVertex3f (395, 140, 0);
glEnd();

//Table stand
glColor3ub (185, 185, 146);
glBegin(GL_POLYGON);
glVertex3f (477, 100, 0);
glVertex3f (560, 100, 0);
glVertex3f (560, 95, 0);
glVertex3f (477, 95, 0);
glEnd();

//Tool
glColor3ub (185, 185, 146);
glBegin(GL_POLYGON);
glVertex3f (370, 110, 0);
glVertex3f (420, 110, 0);
glVertex3f (450, 90, 0);
glVertex3f (390, 90, 0);

//Tool-border
glColor3ub (78, 78, 50);
glBegin(GL_POLYGON);
glVertex3f (370, 110, 0);
glVertex3f (390, 90, 0);
glVertex3f (390, 85, 0);
glVertex3f (370, 105, 0);
glEnd();

//Tool-border
glColor3ub (78, 78, 50);
glBegin(GL_POLYGON);
glVertex3f (390, 90, 0);
glVertex3f (450, 90, 0);
glVertex3f (450, 85, 0);
glVertex3f (390, 85, 0);
glEnd();

//Tool-stand
glColor3ub (78, 78, 50);
glBegin(GL_POLYGON);
glVertex3f (370, 109, 0);
glVertex3f (380, 96, 0);
glVertex3f (380, 70, 0);
glVertex3f (370, 70, 0);
glEnd();

//Tool-stand
glColor3ub (78, 78, 50);
glBegin(GL_POLYGON);
glVertex3f (410, 85, 0);
glVertex3f (420, 85, 0);
glVertex3f (420, 70, 0);
glVertex3f (410, 70, 0);
glEnd();

//Tool-stand
glColor3ub (78, 78, 50);
glBegin(GL_POLYGON);
glVertex3f (439, 85, 0);
glVertex3f (449, 85, 0);
glVertex3f (449, 40, 0);
glVertex3f (439, 40, 0);
glEnd();

//Tool-stand
glColor3ub (78, 78, 50);
glBegin(GL_POLYGON);
glVertex3f (393, 85, 0);
glVertex3f (403, 85, 0);
glVertex3f (403, 40, 0);
glVertex3f (393, 40, 0);
glEnd();

//Laptop
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (440, 135, 0);
glVertex3f (480, 140, 0);
glVertex3f (535, 115, 0);
glVertex3f (490, 110, 0);
glEnd();

//Laptop-border
glColor3ub (179, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (485, 170, 0);
glVertex3f (540, 155, 0);
glVertex3f (535, 115, 0);
glVertex3f (480, 140, 0);
glEnd();

//Laptop
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (488, 165, 0);
glVertex3f (537, 152, 0);
glVertex3f (532, 120, 0);
glVertex3f (483, 142, 0);
glEnd();

//papos
glColor3ub (128,0,128);
glBegin(GL_POLYGON);
glVertex3f (220, 58, 0);
glVertex3f (280, 58, 0);
glVertex3f (270, 35, 0);
glVertex3f (200, 35, 0);
glEnd();

//papos
glColor3ub (255,0,255);
glBegin(GL_POLYGON);
glVertex3f (240, 58, 0);
glVertex3f (262, 58, 0);
glVertex3f (244, 35, 0);
glVertex3f (222, 35, 0);
glEnd();

//boat
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (p, 215, 0);
glVertex3f (p+50, 215, 0);
glVertex3f (p+40, 205, 0);
glVertex3f (p+10, 205, 0);
glEnd();

//Boat house
glColor3ub (153, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (p+12, 215, 0);
glVertex3f (p+12, 222, 0);
glVertex3f (p+25, 225, 0);
glVertex3f (p+38, 222, 0);
glVertex3f (p+38, 215, 0);
glVertex3f (p+12, 215, 0);
glEnd();

//stick
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (p+7, 222, 0);
glVertex3f (p+9, 222, 0);
glVertex3f (p+6, 205, 0);
glVertex3f (p+3, 205, 0);
glEnd();

//boat moving
  if(p<=460)
  {
   p=p+0.003;
  }
 else
  {
   p=400;
  }

 glutPostRedisplay();

//bird
glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (q+10, 252, 0);
glVertex3f (q+15, 251, 0);
glVertex3f (q+15, 249, 0);
glVertex3f (q+10, 247, 0);
glVertex3f (q, 250, 0);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (q+15, 251, 0);
glVertex3f (q+20, 249, 0);
glVertex3f (q+15, 249, 0);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (q+8, 250, 0);
glVertex3f (q+9, 258, 0);
glVertex3f (q+13, 250, 0);
glEnd();

//bird moving
 if(q<=490)
  {
   q=q+0.010;
  }
 else
  {
   q=400;
  }

 glutPostRedisplay();

glFlush ();

}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 560.0, 0.0, 360.0, 0.0, 560.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("ROOM INTERIOR DESIGN");
init ();
glutDisplayFunc(display);
//PlaySound("2.wav", NULL, SND_2|SND_LOOP);
//sndPlaySound("E:\ROOM INTERIOR\2.wav", SND_ASYNC);
//sndPlaySound("2.wav",SND_ASYNC);
glutMainLoop();
return 0;
}




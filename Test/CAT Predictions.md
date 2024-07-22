#

## CAT One Predictions

### Detailed Walkthrough for CAT Prediction 1

**1. Write a simple OpenGL program to render a green triangle on a blue background.**

```cpp
#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);    // Clear display window

    // Set the background color to blue
    glClearColor(0.0, 0.0, 1.0, 0.0);

    // Set the color to green
    glColor3f(0.0, 1.0, 0.0);

    // Draw a triangle
    glBegin(GL_TRIANGLES);
        glVertex2f(0.0, 0.5);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
    glEnd();

    glFlush();    // Process all OpenGL routines
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Green Triangle on Blue Background");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
```

**Explanation:**

- **glutInit()**: Initializes the GLUT library.
- **glutInitDisplayMode()**: Sets the initial display mode.
- **glutInitWindowSize()**: Sets the initial window size.
- **glutInitWindowPosition()**: Sets the initial window position.
- **glutCreateWindow()**: Creates the window with the specified title.
- **glutDisplayFunc()**: Registers the display callback function.
- **glutMainLoop()**: Enters the GLUT event processing loop.
- **glClearColor()**: Sets the clear color (background color).
- **glClear()**: Clears the window.
- **glColor3f()**: Sets the current drawing color.
- **glBegin()** and **glEnd()**: Delimit the vertices of a primitive or a group of like primitives.
- **glVertex2f()**: Specifies a vertex.

---

**2. Explain how transformations (translation, rotation, scaling) are applied to graphical objects in OpenGL.**

**Translation:**

- **glTranslatef(x, y, z)**: Translates the object by \(x\), \(y\), and \(z\) units along the respective axes.

**Rotation:**

- **glRotatef(angle, x, y, z)**: Rotates the object by the specified angle around the vector \((x, y, z)\).

**Scaling:**

- **glScalef(x, y, z)**: Scales the object by \(x\), \(y\), and \(z\) along the respective axes.

**Example:**

```cpp
glPushMatrix();         // Save current transformation
glTranslatef(0.5, 0.0, 0.0); // Translate by 0.5 units along x-axis
glRotatef(45.0, 0.0, 0.0, 1.0); // Rotate by 45 degrees around z-axis
glScalef(2.0, 2.0, 1.0); // Scale by 2 along x and y axes
// Draw object here
glPopMatrix();          // Restore previous transformation
```

---

**3. Describe the RGB color model and how it differs from the CMYK color model.**

**RGB (Red, Green, Blue):**

- Additive color model used for digital displays.
- Colors are created by adding varying intensities of red, green, and blue light.
- Used in screens, cameras, and other digital devices.

**CMYK (Cyan, Magenta, Yellow, Key/Black):**

- Subtractive color model used for printing.
- Colors are created by subtracting varying amounts of cyan, magenta, yellow, and black inks.
- Used in printers and color printing processes.

**Differences:**

- RGB is additive (adding light), while CMYK is subtractive (subtracting light).
- RGB is used for digital displays, while CMYK is used for printing.

---

**4. Differentiate between raster graphics and vector graphics.**

**Raster Graphics:**

- Represent images as a grid of individual pixels.
- Resolution-dependent, leading to loss of quality when scaled.
- Common formats: JPEG, PNG, BMP.

**Vector Graphics:**

- Represent images using geometric shapes (lines, curves).
- Resolution-independent, maintaining quality at any scale.
- Common formats: SVG, AI, EPS.

**Key Differences:**

- Raster graphics are made up of pixels, while vector graphics are made up of paths.
- Raster graphics lose quality when scaled, vector graphics do not.

---

**5. What is double buffering in computer graphics, and why is it used?**

**Double Buffering:**

- Technique to prevent flickering and provide smooth animations.
- Uses two buffers: one for displaying the current frame, and one for drawing the next frame.
- The buffers are swapped once the drawing is complete.

**Usage:**

- Prevents flickering by ensuring the display buffer is not updated directly.
- Provides smoother animations and better visual experience.

---

**6. Explain the following OpenGL functions:**

- **glutReshapeFunc()**: Sets the reshape callback for the current window.
- **glutIdleFunc()**: Sets the global idle callback.
- **glVertex3f()**: Specifies a vertex in 3D space.

**Example:**

```cpp
void reshape(int w, int h) {
    // Code to handle window resizing
}

void idle() {
    // Code to handle idle state
}

void display() {
    glBegin(GL_TRIANGLES);
        glVertex3f(0.0, 1.0, 0.0);
        glVertex3f(-1.0, -1.0, 0.0);
        glVertex3f(1.0, -1.0, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Example");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}
```

---

**7. Consider a display system with a resolution of 1920 x 1080 and a refresh rate of 60Hz:**

- **Calculate the total number of pixels displayed per second.**
  - Resolution: \(1920 \times 1080 = 2,073,600\) pixels per frame.
    - Refresh rate: 60 frames per second.
    - Total pixels per second: \(2,073,600 \times 60 = 124,416,000\) pixels per second.

  - **What is the pixel access time in nanoseconds?**
    - Total time per second: \(1 \times 10^9\) nanoseconds.
    - Total pixels per second: \(124,416,000\) pixels.
    - Access time per pixel: \(\frac{1 \times 10^9 \text{ nanoseconds}}{124,416,000 \text{ pixels}} \approx 8.04\) nanoseconds per pixel.

---

### Detailed Walkthrough for CAT Prediction 2

**1. Write an OpenGL program to draw a circle inside a square, with a white background and a blue circle.**

```cpp
#include <GL/glut.h>
#include <math.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);    // Clear display window

    // Set the background color to white
    glClearColor(1.0, 1.0, 1.0, 0.0);

    // Set the color to blue
    glColor3f(0.0, 0.0, 1.0);

    // Draw a square
    glBegin(GL_QUADS);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(-0.5, 0.5);
    glEnd();

    // Draw a circle
    float radius = 0.5;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.14159 / 180;
        glVertex2f(radius * cos(theta), radius * sin(theta));
    }
    glEnd();

    glFlush();    // Process all OpenGL routines
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Circle inside a Square");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
```

**Explanation:**

- **glutInit()**: Initializes the GLUT library.
- **glutInitDisplayMode()**: Sets the initial display mode.
- **glutInitWindowSize()**: Sets the initial window size.
- **glutInitWindowPosition()**:

 Sets the initial window position.

- **glutCreateWindow()**: Creates the window with the specified title.
- **glutDisplayFunc()**: Registers the display callback function.
- **glutMainLoop()**: Enters the GLUT event processing loop.
- **glClearColor()**: Sets the clear color (background color).
- **glClear()**: Clears the window.
- **glColor3f()**: Sets the current drawing color.
- **glBegin()** and **glEnd()**: Delimit the vertices of a primitive or a group of like primitives.
- **glVertex2f()**: Specifies a vertex.

---

**2. Discuss the significance of frame buffers in computer graphics.**

**Frame Buffers:**

- A frame buffer is a portion of RAM containing a bitmap that drives a video display.
- It stores the pixel data that represents the image on the screen.
- Frame buffers allow for double buffering and other techniques to improve rendering quality and performance.
- They are crucial for operations like rendering, texturing, and image composition.

**Uses:**

- **Double Buffering**: Prevents flickering and tearing by swapping between front and back buffers.
- **Off-screen Rendering**: Renders images off-screen before displaying them.
- **Texture Mapping**: Stores textures used in rendering 3D scenes.

---

**3. Explain the HSV color model and how it is different from the RGB model.**

**HSV (Hue, Saturation, Value):**

- **Hue**: Represents the color type (angle on the color wheel, 0-360 degrees).
- **Saturation**: Represents the intensity or purity of the color (0-100%).
- **Value**: Represents the brightness of the color (0-100%).

**RGB (Red, Green, Blue):**

- **Red, Green, Blue**: Represents the intensity of these primary colors.

**Differences:**

- **HSV**: More intuitive for humans to describe colors in terms of hue, saturation, and brightness.
- **RGB**: Used for digital displays, directly representing the intensities of red, green, and blue.

**Example:**

- HSV: Easier to adjust color properties like lightness or shade.
- RGB: Easier to use for direct manipulation of pixel colors in digital devices.

---

**4. Define the terms:**

- **Aliasing and Anti-aliasing**:
  - **Aliasing**: The visual stair-stepping of edges that occurs in digital images due to the square pixels.
  - **Anti-aliasing**: Techniques used to smooth out the edges and reduce the stair-stepping effect.

- **Clipping and Windowing**:
  - **Clipping**: The process of confining drawing to a designated region or clipping window.
  - **Windowing**: The technique of mapping a portion of a world coordinate system to device coordinates.

**Explanation:**

- **Aliasing** can make images look jagged and rough. **Anti-aliasing** improves the visual quality by smoothing edges.
- **Clipping** is essential in rendering to ensure only visible portions of objects are drawn. **Windowing** helps in transforming world coordinates to screen coordinates for display.

---

**5. How does OpenGL handle 3D transformations and projections?**

**3D Transformations:**

- **Translation**: Moving objects in 3D space.
  - **glTranslatef(x, y, z)**

- **Rotation**: Rotating objects around an axis.
  - **glRotatef(angle, x, y, z)**

- **Scaling**: Resizing objects.
  - **glScalef(x, y, z)**

**Projections:**

- **Orthographic Projection**: Projects objects without perspective distortion.
  - **glOrtho(left, right, bottom, top, near, far)**

- **Perspective Projection**: Projects objects with perspective, making distant objects appear smaller.
  - **gluPerspective(fov, aspect, near, far)**

**Example:**

```cpp
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(45.0, 1.0, 1.0, 100.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glTranslatef(0.0, 0.0, -5.0);
```

---

**6. Explain the following OpenGL functions:**

- **glutKeyboardFunc()**: Registers a keyboard callback function.
- **glutMouseFunc()**: Registers a mouse callback function.
- **glutTimerFunc()**: Registers a timer callback function.

**Example:**

```cpp
void keyboard(unsigned char key, int x, int y) {
    if (key == 27) exit(0); // Exit on 'ESC'
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        // Handle left mouse button click
    }
}

void timer(int value) {
    // Handle timer events
    glutTimerFunc(1000, timer, 0); // Register next timer event
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Example");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutTimerFunc(1000, timer, 0);
    glutMainLoop();
    return 0;
}
```

---

**7. Consider a raster system with a resolution of 1366 x 768 and a refresh rate of 75Hz:**

- **Calculate the total number of pixels displayed per second.**
  - Resolution: \(1366 \times 768 = 1,049,088\) pixels per frame.
  - Refresh rate: 75 frames per second.
  - Total pixels per second: \(1,049,088 \times 75 = 78,681,600\) pixels per second.

- **Determine the pixel access time in microseconds.**
  - Total time per second: \(1 \times 10^6\) microseconds.
  - Total pixels per second: \(78,681,600\) pixels.
  - Access time per pixel: \(\frac{1 \times 10^6 \text{ microseconds}}{78,681,600 \text{ pixels}} \approx 12.7\) microseconds per pixel.

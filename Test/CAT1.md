#

## CAT ONE

### 1. Write a simple OpenGL program for rendering on a black background a red square

```cpp
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0); // Red color
    glBegin(GL_QUADS); // Drawing a square
        glVertex2f(-0.5, -0.5);
        glVertex2f( 0.5, -0.5);
        glVertex2f( 0.5,  0.5);
        glVertex2f(-0.5,  0.5);
    glEnd();
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Black background
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Red Square on Black Background");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
```

### 2. How is color represented in computer graphics and how does this relate to the Human Visual System?

Color in computer graphics is often represented using the RGB (Red, Green, Blue) color model. Each color is a combination of the three primary colors, where each color component is usually represented by a value between 0 and 255 or a floating-point value between 0.0 and 1.0.

The human visual system perceives color through photoreceptor cells in the retina called cones. There are three types of cones, each sensitive to different wavelengths corresponding to red, green, and blue light. This tri-chromatic vision is the basis for the RGB color model used in computer graphics.

### 3. Describe three uses of chromaticity diagram

1. **Color Matching**: Chromaticity diagrams help in determining the mixture of colors needed to reproduce a particular hue. This is essential for color calibration in monitors and printers.
2. **Gamut Representation**: They illustrate the range of colors (gamut) that a device can display or print. The diagram helps in comparing the color capabilities of different devices.
3. **Color Mixing**: They are used in understanding how different colors can be combined. For instance, it shows how different wavelengths of light combine to form a perceived color.

### 4. Distinguish between the following terms

i. **Image Processing and Image Synthesis**:

- **Image Processing**: Refers to the manipulation and analysis of existing images to enhance, restore, or extract information. Examples include filtering, edge detection, and image segmentation.
- **Image Synthesis**: Refers to the creation of images from models or data. Examples include 3D rendering and computer-generated imagery (CGI).

ii. **Simulation and Animation**:

- **Simulation**: Involves creating a model that mimics the behavior of a real-world system over time. It often requires accurate physical and mathematical modeling.
- **Animation**: Involves creating a sequence of frames to give the illusion of movement. It can be hand-drawn, computer-generated, or stop-motion.

iii. **Window Port and View Port**:

- **Window Port**: Refers to the region in the application’s coordinate system that is mapped to the viewport. It is defined in the logical coordinates of the application.
- **View Port**: Refers to the rectangular area of the window where the final image is displayed. It is defined in device coordinates (pixels).

### 5. A key feature of the design of OpenGL is the separation of interaction (input and windowing functions) from rendering. Briefly explain the two libraries that are used to extend the low-level functionality of OpenGL

1. **GLUT (OpenGL Utility Toolkit)**: Provides functions for windowing, input handling, and other tasks that are not directly related to rendering. It simplifies the process of creating windows and handling input events like keyboard and mouse.
2. **GLEW (OpenGL Extension Wrangler Library)**: Manages OpenGL extensions, making it easier to use advanced features of OpenGL that may not be supported by all hardware or drivers.

### 6. Explain the following OpenGL functions

i. **glClear(GL_COLOR_BUFFER_BIT)**: Clears the color buffer, setting all pixels in the window to the current clear color. This is usually done at the start of rendering a new frame.

ii. **glutDisplayFunc(display)**: Registers the display callback function, which is called whenever the window needs to be redrawn. The `display` function contains the rendering code.

iii. **glutMainLoop()**: Enters the GLUT event processing loop. This function never returns and will continuously process events such as input and window redisplay requests.

iv. **glColor3f(1.0, 0.0, 0.0)**: Sets the current drawing color to red. The parameters represent the red, green, and blue components of the color.

### 7. Consider two raster systems with the resolutions of 1280 x 720 and 2048 x 1536

i. **Describe two ways of refreshing a display screen**:

- **Vertical Refresh**: The entire screen is refreshed from top to bottom in a single pass. This is common in CRT monitors.
- **Interlaced Refresh**: The screen is refreshed in two passes; first, the odd lines are refreshed, then the even lines. This method reduces flicker and was common in older televisions.

ii. **How many pixels could be accessed per second in each of these systems by a display controller with a refresh rate of 120Hz?**

- For 1280 x 720 resolution: \( 1280 \times 720 \times 120 = 110,592,000 \) pixels per second.
- For 2048 x 1536 resolution: \( 2048 \times 1536 \times 120 = 377,487,360 \) pixels per second.

iii. **What is the access time per pixel in each system?**

- For 1280 x 720 resolution: \( \frac{1}{110,592,000} \approx 9.04 \times 10^{-9} \) seconds (or 9.04 nanoseconds) per pixel.
- For 2048 x 1536 resolution: \( \frac{1}{377,487,360} \approx 2.65 \times 10^{-9} \) seconds (or 2.65 nanoseconds) per pixel.

Sure, I'll take you through these questions from the exam paper. Here's a breakdown of each question and an explanation to help you understand and answer them.

---

### Question a)
**How is color represented in computer graphics and how does this relate to the Human Visual System?**

**Explanation:**
- Color in computer graphics is commonly represented using color models such as RGB (Red, Green, Blue), CMYK (Cyan, Magenta, Yellow, Black), and HSL/HSV (Hue, Saturation, Lightness/Value).
- The RGB model is most widely used in digital displays and computer graphics. Each color is created by combining these three primary colors in various intensities.
- The human visual system perceives color through photoreceptor cells in the eyes called cones. There are three types of cones, each sensitive to red, green, or blue light, similar to the RGB model. This similarity allows computer graphics to effectively mimic colors as perceived by humans.

---

### Question b)
**Alice came across the graphic below in the course of her studies and wondered what program could have been used to generate it. Write out the program that can be used to generate and display the graphic on the screen.**

**Explanation:**
- This question is asking for a sample program that could generate a specific graphic. Although the graphic is not provided here, a typical answer might involve writing a short program using a graphics library such as OpenGL, DirectX, or a higher-level language/library like Processing or Pygame.
- If the graphic involves simple shapes or patterns, a program in Processing (a Java-based language) might look something like this:

```java
void setup() {
  size(400, 400);
  background(255);
}

void draw() {
  fill(150, 0, 0);
  ellipse(200, 200, 150, 150); // Example shape
}
```

---

### Question c)
**Film animators use a variety of methods for depicting and emphasizing motion sequences. Discuss two traditional animation techniques giving examples.**

**Explanation:**
1. **Cel Animation:** This traditional technique involves creating individual frames where each frame is drawn by hand on transparent sheets (cels). These cels are then layered over a static background to create the illusion of motion. Example: Classic Disney movies like "Snow White and the Seven Dwarfs."
2. **Stop Motion Animation:** This technique involves photographing physical objects in slightly different positions frame by frame. When the sequence of images is played back, it creates the illusion of movement. Example: "The Nightmare Before Christmas."

---

### Question d)
**A key feature of the design of OpenGL is the separation of interaction (input and windowing functions) from rendering. Briefly explain the two libraries that are used to extend the low-level functionality of OpenGL.**

**Explanation:**
1. **GLUT (OpenGL Utility Toolkit):** This library handles windowing, input, and events. It provides functionalities for creating windows, capturing keyboard and mouse inputs, and managing events.
2. **GLEW (OpenGL Extension Wrangler Library):** This library provides an efficient mechanism for determining which OpenGL extensions are supported on the target platform. It simplifies the process of loading and using advanced OpenGL features.

---

### Question e)
**Distinguish between the following terms:**
i. **Emissive and non-emissive displays**
   - **Emissive Displays:** Emit light directly from the display elements (pixels). Examples include LED, OLED, and plasma displays.
   - **Non-emissive Displays:** Rely on external light sources to illuminate the display elements. Examples include LCDs, which use a backlight to produce images.

ii. **Image processing and image synthesis**
   - **Image Processing:** Involves manipulating and analyzing existing images to improve their quality, extract information, or perform various transformations. Examples include filtering, edge detection, and noise reduction.
   - **Image Synthesis:** Involves generating new images from scratch using algorithms and computational techniques. Examples include 3D rendering, computer-generated imagery (CGI), and procedural texture generation.

iii. **Interlacing scan and progressive scan**
   - **Interlacing Scan:** A technique used in traditional television displays where each frame is divided into two fields, with odd and even lines displayed alternately. This reduces bandwidth but can cause flickering and motion artifacts.
   - **Progressive Scan:** Displays the entire frame in a single pass, providing smoother motion and better image quality. This is common in modern displays and digital video standards.

---

I hope this helps! Let me know if you need further clarification on any of the questions.
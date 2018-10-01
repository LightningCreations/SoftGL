CC := clang

GL_OBJ := gl/gl.o
GLEW_OBJ := glew/glew.o
GLX_OBJ := glx/glx.o

OUTPUT := libGL.so.1 libGLEW.so.2.0 libGLX.so.0

all: $(OUTPUT)

clean:
	rm -f $(GL_OBJ) $(GLEW_OBJ) $(GLX_OBJ) $(OUTPUT)

libGL.so.1: $(GL_OBJ)
	$(CC) -shared -o $@ $?

libGLEW.so.2.0: $(GLEW_OBJ)
	$(CC) -shared -o $@ $?

libGLX.so.0: $(GLX_OBJ)
	$(CC) -shared -o $@ $?

%.o: %.c
	$(CC) -fPIC -c -o $@ $?

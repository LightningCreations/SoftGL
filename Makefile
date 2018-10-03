CC := clang

GL_OBJ := gl/gl.o

OUTPUT := libGL.so.1

all: $(OUTPUT)

clean:
	rm -f $(GL_OBJ) $(OUTPUT)

libGL.so.1: $(GL_OBJ)
	$(CC) -shared -o $@ $?
%.o: %.c
	$(CC) -Wno-incompatible-pointer-types -Wno-pointer-sign -fPIC -c -o $@ $?

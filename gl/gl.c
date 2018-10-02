#include <GL/gl.h>

typedef void(*voidFnPtr)();

void glBindTexture(GLenum target, GLuint texture) {}
void glBlendFunc(GLenum sfactor, GLenum dfactor) {}
void glClear(GLbitfield mask) {}
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {}
void glCullFace(GLenum mode) {}
void glDeleteTextures(GLsizei n, const GLuint * textures) {}
void glDepthFunc(GLenum func) {}
void glDepthMask(GLboolean flag) {}
void glDisable(GLbitfield mask) {}
void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {}
void glEnable(GLenum cap) {}
void glFrontFace(GLenum mode) {}
void glGenTextures(GLsizei n, GLuint * textures) {}
void glGetFloatv(GLenum pname, GLfloat * params) {}
void glGetIntegerv(GLenum pname, GLint * params) {}
void glTexImage2D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * data) {}
void glTexParameterf(GLenum target, GLenum pname, GLfloat param) {}
void glTexParameteri(GLenum target, GLenum pname, GLint param) {}
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {}
voidFnPtr glXGetProcAddressARB(const GLubyte * procname) {
	return 0;
}

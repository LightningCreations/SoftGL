#include <GL/gl.h>
#include <stdio.h>

typedef void(*voidFnPtr)();

void glBindTexture(GLenum target, GLuint texture) {
	printf("**SOFTGL** Unsupported function glBindTexture() called!\n");
}

void glBlendFunc(GLenum sfactor, GLenum dfactor) {
	printf("**SOFTGL** Unsupported function glBlendFunc() called!\n");
}

void glClear(GLbitfield mask) {
	printf("**SOFTGL** Unsupported function glClear() called!\n");
}

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
	printf("**SOFTGL** Unsupported function glClearColor() called!\n");
}

void glCullFace(GLenum mode) {
	printf("**SOFTGL** Unsupported function glCullFace() called!\n");
}

void glDeleteTextures(GLsizei n, const GLuint * textures) {
	printf("**SOFTGL** Unsupported function glDeleteTextures() called!\n");
}

void glDepthFunc(GLenum func) {
	printf("**SOFTGL** Unsupported function glDepthFunc() called!\n");
}

void glDepthMask(GLboolean flag) {
	printf("**SOFTGL** Unsupported function glDepthMask() called!\n");
}

void glDisable(GLbitfield mask) {
	printf("**SOFTGL** Unsupported function glDisable() called!\n");
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) {
	printf("**SOFTGL** Unsupported function glDrawElements() called!\n");
}

void glEnable(GLenum cap) {
	printf("**SOFTGL** Unsupported function glEnable() called!\n");
}

void glFrontFace(GLenum mode) {
	printf("**SOFTGL** Unsupported function glFrontFace() called!\n");
}

void glGenTextures(GLsizei n, GLuint * textures) {
	printf("**SOFTGL** Unsupported function glGenTextures() called!\n");
}

void glGetFloatv(GLenum pname, GLfloat * params) {
	printf("**SOFTGL** Unsupported function glGetFloatv() called!\n");
}

void glGetIntegerv(GLenum pname, GLint * params) {
	printf("**SOFTGL** Unsupported function glGetIntegerv() called!\n");
}

void glTexImage2D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * data) {
	printf("**SOFTGL** Unsupported function glTexImage2D() called!\n");
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param) {
	printf("**SOFTGL** Unsupported function glTexParameterf() called!\n");
}

void glTexParameteri(GLenum target, GLenum pname, GLint param) {
	printf("**SOFTGL** Unsupported function glTexParameteri() called!\n");
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
	printf("**SOFTGL** Unsupported function glViewport() called!\n");
}

voidFnPtr glXGetProcAddressARB(const GLubyte * procname) {
	printf("**SOFTGL** Unsupported function glXGetProcAddressARB(%s) called!\n", procname);
	return 0;
}

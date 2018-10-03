#include <GL/gl.h>
#include <GL/glx.h>

#include <stdio.h>
#include <string.h>

typedef void(*voidFnPtr)();

int error = GL_NO_ERROR;

void glBindBuffer(GLenum target, GLuint buffer) {
	printf("**SOFTGL** Unsupported function glBindBuffer() called!\n");
}

void glBindFramebuffer(GLenum target, GLuint buffer) {
	printf("**SOFTGL** Unsupported function glBindFramebuffer() called!\n");
}

void glBindTexture(GLenum target, GLuint texture) {
	printf("**SOFTGL** Unsupported function glBindTexture() called!\n");
}

void glBindVertexArray(GLuint array) {
	printf("**SOFTGL** Unsupported function glBindVertexArray() called!\n");
}

void glBlendFunc(GLenum sfactor, GLenum dfactor) {
	printf("**SOFTGL** Unsupported function glBlendFunc() called!\n");
}

void glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage) {
	printf("**SOFTGL** Unsupported function glBufferData() called!\n");
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

void glEnableVertexAttribArray(GLuint index) {
	printf("**SOFTGL** Unsupported function glEnableVertexAttribArray() called!\n");
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
	printf("**SOFTGL** Unsupported function glFramebufferTexture2D() called!\n");
}

void glFrontFace(GLenum mode) {
	printf("**SOFTGL** Unsupported function glFrontFace() called!\n");
}

void glGenBuffers(GLsizei n, GLuint * buffers) {
	printf("**SOFTGL** Unsupported function glGenBuffers() called!\n");
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers) {
	printf("**SOFTGL** Unsupported function glGenFramebuffers() called!\n");
}

void glGenTextures(GLsizei n, GLuint * textures) {
	printf("**SOFTGL** Unsupported function glGenTextures() called!\n");
}

void glGenVertexArrays(GLsizei n, GLuint * arrays) {
	printf("**SOFTGL** Unsupported function glGenVertexArrays() called!\n");
}

void glGenerateMipmap(GLenum target) {
	printf("**SOFTGL** Unsupported function glGenerateMipmap() called!\n");
}

void glGetFloatv(GLenum pname, GLfloat * params) {
	printf("**SOFTGL** Unsupported function glGetFloatv(%X) called!\n", pname);
}

void glGetIntegerv(GLenum pname, GLint * params) {
	if(pname == GL_NUM_EXTENSIONS)
		*params = 0;
	else
		printf("**SOFTGL** Unsupported function glGetIntegerv(%i) called!\n", pname);
}

const GLubyte * glGetString(GLenum name) {
	if(name == GL_VERSION)
		return "4.5";
	else {
		printf("**SOFTGL** Unsupported function glGetString(%i) called!\n", name);
		return "";
	}
}

const GLubyte * glGetStringi(GLenum name, GLint index) {
	if(name == GL_EXTENSIONS) {
		error = GL_INVALID_VALUE;
		return NULL;
	} else {
		printf("**SOFTGL** Unsupported function glGetString(%i) called!\n", name);
		return "";
	}
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

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer) {
	printf("**SOFTGL** Unsupported function glVertexAttribPointer() called!\n");
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
	printf("**SOFTGL** Unsupported function glViewport() called!\n");
}

Display * glXDisplay = NULL;

XVisualInfo* glXChooseVisual(Display * dpy, int screen, int * attribList) {
	printf("**SOFTGL** Unsupported function glXChooseVisual() called!\n");
	return 0;
}

GLXContext glXCreateContext(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct) {
	printf("**SOFTGL** Unsupported function glXCreateContext() called!\n");
	glXDisplay = dpy;
	return 0;
}

void glXDestroyContext(Display * dpy, GLXContext ctx) {
	printf("**SOFTGL** Unsupported function glXDestroyContext() called!\n");
}

const char * glXGetClientString(Display * dpy, int name) {
	if(name == GLX_VENDOR) {
		return "Lightning Creations";
	} else if(name == GLX_VERSION) {
		return "1.4 SoftGL";
	} else if(name == GLX_EXTENSIONS) {
		return "";
	}
	return NULL;
}

Display * glXGetCurrentDisplay() {
	printf("**SOFTGL** Unsupported function glXGetCurrentDisplay() called!\n");
	return 0;
}

voidFnPtr glXGetProcAddressARB(const GLubyte * procname) {
	if(strcmp("glBindBuffer", procname) == 0) {
		return glBindBuffer;
	} else if(strcmp("glBindFramebuffer", procname) == 0) {
		return glBindFramebuffer;
	} else if(strcmp("glBindVertexArray", procname) == 0) {
		return glBindVertexArray;
	} else if(strcmp("glBufferData", procname) == 0) {
		return glBufferData;
	} else if(strcmp("glEnableVertexAttribArray", procname) == 0) {
		return glEnableVertexAttribArray;
	} else if(strcmp("glFramebufferTexture2D", procname) == 0) {
		return glFramebufferTexture2D;
	} else if(strcmp("glGetIntegerv", procname) == 0) {
		return glGetIntegerv;
	} else if(strcmp("glGetString", procname) == 0) {
		return glGetString;
	} else if(strcmp("glGetStringi", procname) == 0) {
		return glGetStringi;
	} else if(strcmp("glGenBuffers", procname) == 0) {
		return glGenBuffers;
	} else if(strcmp("glGenFramebuffers", procname) == 0) {
		return glGenFramebuffers;
	} else if(strcmp("glGenVertexArrays", procname) == 0) {
		return glGenVertexArrays;
	} else if(strcmp("glGenerateMipmap", procname) == 0) {
		return glGenerateMipmap;
	} else if(strcmp("glVertexAttribPointer", procname) == 0) {
		return glVertexAttribPointer;
	} else if(strcmp("glXChooseVisual", procname) == 0) {
		return glXChooseVisual;
	} else if(strcmp("glXCreateContext", procname) == 0) {
		return glXCreateContext;
	} else if(strcmp("glXDestroyContext", procname) == 0) {
		return glXDestroyContext;
	} else if(strcmp("glXGetCurrentDisplay", procname) == 0) {
		return glXGetCurrentDisplay;
	} else if(strcmp("glXMakeCurrent", procname) == 0) {
		return glXMakeCurrent;
	} else if(strcmp("glXQueryDrawable", procname) == 0) {
		return glXQueryDrawable;
	} else if(strcmp("glXSwapBuffers", procname) == 0) {
		return glXSwapBuffers;
	}
	printf("**SOFTGL** Unsupported function glXGetProcAddressARB(%s) called!\n", procname);
	return 0;
}

Bool glXMakeCurrent(Display * dpy, GLXDrawable drawable, GLXContext ctx) {
	printf("**SOFTGL** Unsupported function glXMakeCurrent() called!\n");
	return True;
}

void glXQueryDrawable(Display * dpy, GLXDrawable drawable, int attribute, unsigned int * value) {
	printf("**SOFTGL** Unsupported function glXQueryDrawable() called!\n");
}

Bool glXQueryVersion(Display * dpy, int * major, int * minor) {
	*major = 1;
	*minor = 4;
	return True;
}

void glXSwapBuffers(Display * dpy, GLXDrawable drawable) {
	printf("**SOFTGL** Unsupported function glXSwapBuffers() called!\n");
}


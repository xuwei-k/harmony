/*
 *  Licensed to the Apache Software Foundation (ASF) under one or more
 *  contributor license agreements.  See the NOTICE file distributed with
 *  this work for additional information regarding copyright ownership.
 *  The ASF licenses this file to You under the Apache License, Version 2.0
 *  (the "License"); you may not use this file except in compliance with
 *  the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
 /**
 * @author Oleg V. Khaschansky
 */
/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>
#include "nativelib_common.h"

#ifndef _Included_org_apache_harmony_awt_gl_opengl_GL
#define _Included_org_apache_harmony_awt_gl_opengl_GL

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_init (JNIEnv *, jclass);


JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glVertexPointer(JNIEnv *, jobject, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPixelStoref(JNIEnv *, jobject, jint, jfloat);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glRectd(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTranslated(JNIEnv *, jobject, jdouble, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glLineStipple(JNIEnv *, jobject, jint, jshort);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glBlendFunc(JNIEnv *, jobject, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glColor4ubv(JNIEnv *, jobject, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexImage1D(JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_gluOrtho2D(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDrawArrays(JNIEnv *, jobject, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPixelStorei(JNIEnv *, jobject, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexParameteri(JNIEnv *, jobject, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glRotated(JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glGetIntegerv(JNIEnv *, jobject, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexGendv(JNIEnv *, jobject, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexCoord2d(JNIEnv *, jobject, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPixelTransferf(JNIEnv *, jobject, jint, jfloat);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glCopyTexSubImage2D(JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glEnd(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glColorMask(JNIEnv *, jobject, jbyte, jbyte, jbyte, jbyte);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glFlush(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glMatrixMode(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexEnvf(JNIEnv *, jobject, jint, jint, jfloat);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPixelZoom(JNIEnv *, jobject, jfloat, jfloat);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glScissor(JNIEnv *, jobject, jint, jint, jint, jint);

JNIEXPORT jint  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glGetError(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDrawPixels(JNIEnv *, jobject, jint, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glCopyPixels(JNIEnv *, jobject, jint, jint, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glBlendFuncSeparate(JNIEnv *, jobject, jint, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glEnableClientState(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glMultMatrixd(JNIEnv *, jobject, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glClear(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPopMatrix(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glColorPointer(JNIEnv *, jobject, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glScaled(JNIEnv *, jobject, jdouble, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDisable(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glRasterPos2i(JNIEnv *, jobject, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glEnable(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glBitmap(JNIEnv *, jobject, jint, jint, jfloat, jfloat, jfloat, jfloat, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glColorTable(JNIEnv *, jobject, jint, jint, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glGenTextures(JNIEnv *, jobject, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glFinish(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDeleteTextures(JNIEnv *, jobject, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDisableClientState(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glBegin(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glVertex2d(JNIEnv *, jobject, jdouble, jdouble);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glLineWidth(JNIEnv *, jobject, jfloat);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glLoadMatrixd(JNIEnv *, jobject, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glReadPixels(JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glBindTexture(JNIEnv *, jobject, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPushMatrix(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexGeni(JNIEnv *, jobject, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glStencilFunc(JNIEnv *, jobject, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexImage2D(JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glPixelMapusv(JNIEnv *, jobject, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glViewport(JNIEnv *, jobject, jint, jint, jint, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glLoadIdentity(JNIEnv *, jobject);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glTexSubImage2D(JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jint, jint, jlong);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDrawBuffer(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glReadBuffer(JNIEnv *, jobject, jint);

JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glStencilOp(JNIEnv *, jobject, jint, jint, jint);

JNIEXPORT jbyte  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glIsList(JNIEnv *, jobject, jint);
JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glNewList(JNIEnv *, jobject, jint, jint);
JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glCallList(JNIEnv *, jobject, jint);
JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glEndList(JNIEnv *, jobject);
JNIEXPORT jint  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glGenLists(JNIEnv *, jobject, jint);
JNIEXPORT void  JNICALL Java_org_apache_harmony_awt_gl_opengl_GL_glDeleteLists(JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
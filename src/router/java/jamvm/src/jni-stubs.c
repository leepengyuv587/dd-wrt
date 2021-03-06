/* Generated by gen-stubs.c from signature file sigs (profiling off) */

#include "jam.h"

#ifndef USE_MD_STUBS
#include "stubs.h"
#include "properties.h"
#include "jni-internal.h"

extern void *jni_env;

/* Static signatures */

/* ()I */
static uintptr_t *static__I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*))mb->code) (
	&jni_env,
	class);

    return ostack + 1;
}

/* ()J */
static uintptr_t *static__J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*))mb->code) (
	&jni_env,
	class);

    return ostack + 2;
}

/* ()L */
static uintptr_t *static__L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*))mb->code) (
	&jni_env,
	class));

    return ostack + 1;
}

/* ()V */
static uintptr_t *static__V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*))mb->code) (
	&jni_env,
	class);

    return ostack + 0;
}

/* (D)D */
static uintptr_t *static_D_D(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(double*)ostack = (*(double (*)(void*, void*, double))mb->code) (
	&jni_env,
	class,
	*(double *)&ostack[0]);

    return ostack + 2;
}

/* (D)J */
static uintptr_t *static_D_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, double))mb->code) (
	&jni_env,
	class,
	*(double *)&ostack[0]);

    return ostack + 2;
}

/* (DD)D */
static uintptr_t *static_DD_D(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(double*)ostack = (*(double (*)(void*, void*, double, double))mb->code) (
	&jni_env,
	class,
	*(double *)&ostack[0],
	*(double *)&ostack[2]);

    return ostack + 2;
}

/* (F)I */
static uintptr_t *static_F_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, float))mb->code) (
	&jni_env,
	class,
	*((float *)&ostack[0] + IS_BE64));

    return ostack + 1;
}

/* (I)B */
static uintptr_t *static_I_B(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(int8_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0]);

    return ostack + 1;
}

/* (I)F */
static uintptr_t *static_I_F(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *((float*)ostack + IS_BE64) = (*(float (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0]);

    return ostack + 1;
}

/* (I)I */
static uintptr_t *static_I_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0]);

    return ostack + 1;
}

/* (I)L */
static uintptr_t *static_I_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0]));

    return ostack + 1;
}

/* (II)I */
static uintptr_t *static_II_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1]);

    return ostack + 1;
}

/* (II)L */
static uintptr_t *static_II_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1]));

    return ostack + 1;
}

/* (III)I */
static uintptr_t *static_III_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2]);

    return ostack + 1;
}

/* (III)L */
static uintptr_t *static_III_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2]));

    return ostack + 1;
}

/* (IIII)I */
static uintptr_t *static_IIII_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3]);

    return ostack + 1;
}

/* (IIIII)L */
static uintptr_t *static_IIIII_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4]));

    return ostack + 1;
}

/* (IIIII)V */
static uintptr_t *static_IIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4]);

    return ostack + 0;
}

/* (IIIIIIIIIIIIIIIJJ)V */
static uintptr_t *static_IIIIIIIIIIIIIIIJJ_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8],
	*(uintptr_t *)&ostack[9],
	*(uintptr_t *)&ostack[10],
	*(uintptr_t *)&ostack[11],
	*(uintptr_t *)&ostack[12],
	*(uintptr_t *)&ostack[13],
	*(uintptr_t *)&ostack[14],
	*(int64_t *)&ostack[15],
	*(int64_t *)&ostack[17]);

    return ostack + 0;
}

/* (IJI)I */
static uintptr_t *static_IJI_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t, int64_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(uintptr_t *)&ostack[0],
	*(int64_t *)&ostack[1],
	*(uintptr_t *)&ostack[3]);

    return ostack + 1;
}

/* (J)D */
static uintptr_t *static_J_D(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(double*)ostack = (*(double (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0]);

    return ostack + 2;
}

/* (J)I */
static uintptr_t *static_J_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0]);

    return ostack + 1;
}

/* (J)J */
static uintptr_t *static_J_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0]);

    return ostack + 2;
}

/* (J)L */
static uintptr_t *static_J_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0]));

    return ostack + 1;
}

/* (J)V */
static uintptr_t *static_J_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0]);

    return ostack + 0;
}

/* (JI)I */
static uintptr_t *static_JI_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, int64_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(uintptr_t *)&ostack[2]);

    return ostack + 1;
}

/* (JI)J */
static uintptr_t *static_JI_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, int64_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(uintptr_t *)&ostack[2]);

    return ostack + 2;
}

/* (JI)V */
static uintptr_t *static_JI_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(uintptr_t *)&ostack[2]);

    return ostack + 0;
}

/* (JII)J */
static uintptr_t *static_JII_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, int64_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3]);

    return ostack + 2;
}

/* (JIIIII)V */
static uintptr_t *static_JIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6]);

    return ostack + 0;
}

/* (JIJJ)V */
static uintptr_t *static_JIJJ_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, uintptr_t, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(uintptr_t *)&ostack[2],
	*(int64_t *)&ostack[3],
	*(int64_t *)&ostack[5]);

    return ostack + 0;
}

/* (JJ)B */
static uintptr_t *static_JJ_B(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(int8_t (*)(void*, void*, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2]);

    return ostack + 1;
}

/* (JJ)J */
static uintptr_t *static_JJ_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2]);

    return ostack + 2;
}

/* (JJ)L */
static uintptr_t *static_JJ_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2]));

    return ostack + 1;
}

/* (JJ)V */
static uintptr_t *static_JJ_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2]);

    return ostack + 0;
}

/* (JJJIII)I */
static uintptr_t *static_JJJIII_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, int64_t, int64_t, int64_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2],
	*(int64_t *)&ostack[4],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8]);

    return ostack + 1;
}

/* (JJJJ)V */
static uintptr_t *static_JJJJ_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, int64_t, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2],
	*(int64_t *)&ostack[4],
	*(int64_t *)&ostack[6]);

    return ostack + 0;
}

/* (JJJJJJ)V */
static uintptr_t *static_JJJJJJ_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2],
	*(int64_t *)&ostack[4],
	*(int64_t *)&ostack[6],
	*(int64_t *)&ostack[8],
	*(int64_t *)&ostack[10]);

    return ostack + 0;
}

/* (JJJJJJJJJJJJ)I */
static uintptr_t *static_JJJJJJJJJJJJ_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t))mb->code) (
	&jni_env,
	class,
	*(int64_t *)&ostack[0],
	*(int64_t *)&ostack[2],
	*(int64_t *)&ostack[4],
	*(int64_t *)&ostack[6],
	*(int64_t *)&ostack[8],
	*(int64_t *)&ostack[10],
	*(int64_t *)&ostack[12],
	*(int64_t *)&ostack[14],
	*(int64_t *)&ostack[16],
	*(int64_t *)&ostack[18],
	*(int64_t *)&ostack[20],
	*(int64_t *)&ostack[22]);

    return ostack + 1;
}

/* Non-static signatures */

/* ()B */
static uintptr_t *__B(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(int8_t (*)(void*, void*))mb->code) (
	&jni_env,
	(void*)ostack[0]);

    return ostack + 1;
}

/* ()I */
static uintptr_t *__I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*))mb->code) (
	&jni_env,
	(void*)ostack[0]);

    return ostack + 1;
}

/* ()J */
static uintptr_t *__J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*))mb->code) (
	&jni_env,
	(void*)ostack[0]);

    return ostack + 2;
}

/* ()L */
static uintptr_t *__L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*))mb->code) (
	&jni_env,
	(void*)ostack[0]));

    return ostack + 1;
}

/* ()V */
static uintptr_t *__V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*))mb->code) (
	&jni_env,
	(void*)ostack[0]);

    return ostack + 0;
}

/* (FF)V */
static uintptr_t *_FF_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, float, float))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*((float *)&ostack[1] + IS_BE64),
	*((float *)&ostack[2] + IS_BE64));

    return ostack + 0;
}

/* (I)B */
static uintptr_t *_I_B(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(int8_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1]);

    return ostack + 1;
}

/* (I)I */
static uintptr_t *_I_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1]);

    return ostack + 1;
}

/* (I)J */
static uintptr_t *_I_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1]);

    return ostack + 2;
}

/* (I)L */
static uintptr_t *_I_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1]));

    return ostack + 1;
}

/* (I)V */
static uintptr_t *_I_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1]);

    return ostack + 0;
}

/* (II)B */
static uintptr_t *_II_B(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(int8_t (*)(void*, void*, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2]);

    return ostack + 1;
}

/* (II)L */
static uintptr_t *_II_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2]));

    return ostack + 1;
}

/* (II)V */
static uintptr_t *_II_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2]);

    return ostack + 0;
}

/* (III)I */
static uintptr_t *_III_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3]);

    return ostack + 1;
}

/* (III)V */
static uintptr_t *_III_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3]);

    return ostack + 0;
}

/* (IIII)V */
static uintptr_t *_IIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4]);

    return ostack + 0;
}

/* (IIIIII)I */
static uintptr_t *_IIIIII_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6]);

    return ostack + 1;
}

/* (IIIIII)L */
static uintptr_t *_IIIIII_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6]));

    return ostack + 1;
}

/* (IIIIII)V */
static uintptr_t *_IIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6]);

    return ostack + 0;
}

/* (IIIIIIII)V */
static uintptr_t *_IIIIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8]);

    return ostack + 0;
}

/* (IIIIIIIIII)V */
static uintptr_t *_IIIIIIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8],
	*(uintptr_t *)&ostack[9],
	*(uintptr_t *)&ostack[10]);

    return ostack + 0;
}

/* (IIIIIIIIIIIII)V */
static uintptr_t *_IIIIIIIIIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8],
	*(uintptr_t *)&ostack[9],
	*(uintptr_t *)&ostack[10],
	*(uintptr_t *)&ostack[11],
	*(uintptr_t *)&ostack[12],
	*(uintptr_t *)&ostack[13]);

    return ostack + 0;
}

/* (IIIIIIIIIIIIIIIIII)V */
static uintptr_t *_IIIIIIIIIIIIIIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(uintptr_t *)&ostack[2],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8],
	*(uintptr_t *)&ostack[9],
	*(uintptr_t *)&ostack[10],
	*(uintptr_t *)&ostack[11],
	*(uintptr_t *)&ostack[12],
	*(uintptr_t *)&ostack[13],
	*(uintptr_t *)&ostack[14],
	*(uintptr_t *)&ostack[15],
	*(uintptr_t *)&ostack[16],
	*(uintptr_t *)&ostack[17],
	*(uintptr_t *)&ostack[18]);

    return ostack + 0;
}

/* (IJ)J */
static uintptr_t *_IJ_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, uintptr_t, int64_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(int64_t *)&ostack[2]);

    return ostack + 2;
}

/* (IJJ)L */
static uintptr_t *_IJJ_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, uintptr_t, int64_t, int64_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(int64_t *)&ostack[2],
	*(int64_t *)&ostack[4]));

    return ostack + 1;
}

/* (IJJI)J */
static uintptr_t *_IJJI_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, uintptr_t, int64_t, int64_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(uintptr_t *)&ostack[1],
	*(int64_t *)&ostack[2],
	*(int64_t *)&ostack[4],
	*(uintptr_t *)&ostack[6]);

    return ostack + 2;
}

/* (J)J */
static uintptr_t *_J_J(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *(int64_t*)ostack = (*(int64_t (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1]);

    return ostack + 2;
}

/* (J)L */
static uintptr_t *_J_L(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (uintptr_t)REF_TO_OBJ((*(uintptr_t (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1]));

    return ostack + 1;
}

/* (J)V */
static uintptr_t *_J_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1]);

    return ostack + 0;
}

/* (JIII)I */
static uintptr_t *_JIII_I(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    *ostack = (*(uintptr_t (*)(void*, void*, int64_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1],
	*(uintptr_t *)&ostack[3],
	*(uintptr_t *)&ostack[4],
	*(uintptr_t *)&ostack[5]);

    return ostack + 1;
}

/* (JJII)V */
static uintptr_t *_JJII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, int64_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1],
	*(int64_t *)&ostack[3],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6]);

    return ostack + 0;
}

/* (JJIIII)V */
static uintptr_t *_JJIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1],
	*(int64_t *)&ostack[3],
	*(uintptr_t *)&ostack[5],
	*(uintptr_t *)&ostack[6],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8]);

    return ostack + 0;
}

/* (JJJIIIIIII)V */
static uintptr_t *_JJJIIIIIII_V(Class *class, MethodBlock *mb, uintptr_t *ostack) {
    if(!initJNILrefs())
        return NULL;

    (*(void (*)(void*, void*, int64_t, int64_t, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))mb->code) (
	&jni_env,
	(void*)ostack[0],
	*(int64_t *)&ostack[1],
	*(int64_t *)&ostack[3],
	*(int64_t *)&ostack[5],
	*(uintptr_t *)&ostack[7],
	*(uintptr_t *)&ostack[8],
	*(uintptr_t *)&ostack[9],
	*(uintptr_t *)&ostack[10],
	*(uintptr_t *)&ostack[11],
	*(uintptr_t *)&ostack[12],
	*(uintptr_t *)&ostack[13]);

    return ostack + 0;
}


JNIStub jni_static_stubs[] = {
    {"()I", static__I},
    {"()J", static__J},
    {"()L", static__L},
    {"()V", static__V},
    {"(D)D", static_D_D},
    {"(D)J", static_D_J},
    {"(DD)D", static_DD_D},
    {"(F)I", static_F_I},
    {"(I)B", static_I_B},
    {"(I)F", static_I_F},
    {"(I)I", static_I_I},
    {"(I)L", static_I_L},
    {"(II)I", static_II_I},
    {"(II)L", static_II_L},
    {"(III)I", static_III_I},
    {"(III)L", static_III_L},
    {"(IIII)I", static_IIII_I},
    {"(IIIII)L", static_IIIII_L},
    {"(IIIII)V", static_IIIII_V},
    {"(IIIIIIIIIIIIIIIJJ)V", static_IIIIIIIIIIIIIIIJJ_V},
    {"(IJI)I", static_IJI_I},
    {"(J)D", static_J_D},
    {"(J)I", static_J_I},
    {"(J)J", static_J_J},
    {"(J)L", static_J_L},
    {"(J)V", static_J_V},
    {"(JI)I", static_JI_I},
    {"(JI)J", static_JI_J},
    {"(JI)V", static_JI_V},
    {"(JII)J", static_JII_J},
    {"(JIIIII)V", static_JIIIII_V},
    {"(JIJJ)V", static_JIJJ_V},
    {"(JJ)B", static_JJ_B},
    {"(JJ)J", static_JJ_J},
    {"(JJ)L", static_JJ_L},
    {"(JJ)V", static_JJ_V},
    {"(JJJIII)I", static_JJJIII_I},
    {"(JJJJ)V", static_JJJJ_V},
    {"(JJJJJJ)V", static_JJJJJJ_V},
    {"(JJJJJJJJJJJJ)I", static_JJJJJJJJJJJJ_I},
    {NULL, NULL}
};

JNIStub jni_stubs[] = {
    {"()B", __B},
    {"()I", __I},
    {"()J", __J},
    {"()L", __L},
    {"()V", __V},
    {"(FF)V", _FF_V},
    {"(I)B", _I_B},
    {"(I)I", _I_I},
    {"(I)J", _I_J},
    {"(I)L", _I_L},
    {"(I)V", _I_V},
    {"(II)B", _II_B},
    {"(II)L", _II_L},
    {"(II)V", _II_V},
    {"(III)I", _III_I},
    {"(III)V", _III_V},
    {"(IIII)V", _IIII_V},
    {"(IIIIII)I", _IIIIII_I},
    {"(IIIIII)L", _IIIIII_L},
    {"(IIIIII)V", _IIIIII_V},
    {"(IIIIIIII)V", _IIIIIIII_V},
    {"(IIIIIIIIII)V", _IIIIIIIIII_V},
    {"(IIIIIIIIIIIII)V", _IIIIIIIIIIIII_V},
    {"(IIIIIIIIIIIIIIIIII)V", _IIIIIIIIIIIIIIIIII_V},
    {"(IJ)J", _IJ_J},
    {"(IJJ)L", _IJJ_L},
    {"(IJJI)J", _IJJI_J},
    {"(J)J", _J_J},
    {"(J)L", _J_L},
    {"(J)V", _J_V},
    {"(JIII)I", _JIII_I},
    {"(JJII)V", _JJII_V},
    {"(JJIIII)V", _JJIIII_V},
    {"(JJJIIIIIII)V", _JJJIIIIIII_V},
    {NULL, NULL}
};
#endif

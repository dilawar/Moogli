/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.9
 */

#include "sipAPI_moogli.h"

#line 553 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include "shapes/Sphere.hpp"
#line 12 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMoogliSphere.cpp"

#line 93 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include <osg/Vec3f>
using  osg::Vec3f;
#line 17 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMoogliSphere.cpp"
#line 156 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include <osg/Vec4f>
using osg::Vec4f;
#line 21 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMoogliSphere.cpp"


extern "C" {static PyObject *meth_MoogliSphere_set_geometry(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_set_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec3f* a0;
        float a1;
        uint a2;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9fu", &sipSelf, sipType_MoogliSphere, &sipCpp, sipType_Vec3f, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_geometry(*a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_set_geometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_set(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec3f* a0;
        float a1;
        uint a2;
        const Vec4f* a3;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9fuJ9", &sipSelf, sipType_MoogliSphere, &sipCpp, sipType_Vec3f, &a0, &a1, &a2, sipType_Vec4f, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set(*a0,a1,a2,*a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_set, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_set_vertices(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_set_vertices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_MoogliSphere, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_vertices(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_set_vertices, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_get_vertices(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_get_vertices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MoogliSphere, &sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->get_vertices();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_get_vertices, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_set_center(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_set_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec3f* a0;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_MoogliSphere, &sipCpp, sipType_Vec3f, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_center(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_set_center, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_get_center(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_get_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MoogliSphere, &sipCpp))
        {
            Vec3f*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec3f(sipCpp->get_center());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec3f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_get_center, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_set_radius(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_set_radius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_MoogliSphere, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_radius(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_set_radius, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_get_radius(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_get_radius(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MoogliSphere, &sipCpp))
        {
            float sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->get_radius();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_get_radius, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_get_color(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_get_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MoogliSphere, &sipCpp))
        {
            Vec4f*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec4f(sipCpp->get_color());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_get_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_set_color(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_set_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec4f* a0;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_MoogliSphere, &sipCpp, sipType_Vec4f, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_color(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_set_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MoogliSphere_move_center_by(PyObject *, PyObject *);}
static PyObject *meth_MoogliSphere_move_center_by(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec3f* a0;
        MoogliSphere *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_MoogliSphere, &sipCpp, sipType_Vec3f, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->move_center_by(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MoogliSphere, sipName_move_center_by, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MoogliSphere(void *, const sipTypeDef *);}
static void *cast_MoogliSphere(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_MoogliSphere)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_MoogliShape)->ctd_cast((MoogliShape *)(MoogliSphere *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MoogliSphere(void *, int);}
static void release_MoogliSphere(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<MoogliSphere *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_MoogliSphere(sipSimpleWrapper *);}
static void dealloc_MoogliSphere(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_MoogliSphere(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_MoogliSphere(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_MoogliSphere(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    MoogliSphere *sipCpp = 0;

    {
        const char* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "s", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new MoogliSphere(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const char* a0;
        const Vec3f* a1;
        float a2;
        uint a3;
        const Vec4f* a4;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "sJ9fuJ9", &a0, sipType_Vec3f, &a1, &a2, &a3, sipType_Vec4f, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new MoogliSphere(a0,*a1,a2,a3,*a4);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const MoogliSphere* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_MoogliSphere, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new MoogliSphere(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_MoogliSphere[] = {{3, 255, 1}};


static PyMethodDef methods_MoogliSphere[] = {
    {SIP_MLNAME_CAST(sipName_get_center), meth_MoogliSphere_get_center, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get_color), meth_MoogliSphere_get_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get_radius), meth_MoogliSphere_get_radius, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get_vertices), meth_MoogliSphere_get_vertices, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_move_center_by), meth_MoogliSphere_move_center_by, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set), meth_MoogliSphere_set, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_center), meth_MoogliSphere_set_center, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_color), meth_MoogliSphere_set_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_geometry), meth_MoogliSphere_set_geometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_radius), meth_MoogliSphere_set_radius, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_vertices), meth_MoogliSphere_set_vertices, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef__moogli_MoogliSphere = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_MoogliSphere,
        {0}
    },
    {
        sipNameNr_MoogliSphere,
        {0, 0, 1},
        11, methods_MoogliSphere,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_MoogliSphere,
    0,
    init_type_MoogliSphere,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_MoogliSphere,
    0,
    0,
    0,
    release_MoogliSphere,
    cast_MoogliSphere,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};

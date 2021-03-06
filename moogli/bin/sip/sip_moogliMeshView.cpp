/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.9
 */

#include "sipAPI_moogli.h"

#line 744 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include "view/View.hpp"
#line 12 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMeshView.cpp"

#line 612 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include "widgets/ColorBar.hpp"
#line 16 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMeshView.cpp"
#line 156 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include <osg/Vec4f>
using osg::Vec4f;
#line 20 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMeshView.cpp"
#line 36 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/moogli.sip"
#include <osg/Vec2f>
using osg::Vec2f;
#line 24 "/home1/dilawars/Work/GITHUB/BhallaLab/moogli/moogli/bin/sip/sip_moogliMeshView.cpp"


extern "C" {static PyObject *meth_MeshView_set_position(PyObject *, PyObject *);}
static PyObject *meth_MeshView_set_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec2f* a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_MeshView, &sipCpp, sipType_Vec2f, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_position(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_set_position, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_get_position(PyObject *, PyObject *);}
static PyObject *meth_MeshView_get_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MeshView, &sipCpp))
        {
            Vec2f*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2f(sipCpp->get_position());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_get_position, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_set_size(PyObject *, PyObject *);}
static PyObject *meth_MeshView_set_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec2f* a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_MeshView, &sipCpp, sipType_Vec2f, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_size(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_set_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_get_size(PyObject *, PyObject *);}
static PyObject *meth_MeshView_get_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MeshView, &sipCpp))
        {
            Vec2f*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec2f(sipCpp->get_size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec2f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_get_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_set_background_color(PyObject *, PyObject *);}
static PyObject *meth_MeshView_set_background_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const Vec4f* a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_MeshView, &sipCpp, sipType_Vec4f, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->set_background_color(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_set_background_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_get_background_color(PyObject *, PyObject *);}
static PyObject *meth_MeshView_get_background_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MeshView, &sipCpp))
        {
            Vec4f*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Vec4f(sipCpp->get_background_color());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Vec4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_get_background_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_resize(PyObject *, PyObject *);}
static PyObject *meth_MeshView_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_MeshView, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->resize(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_resize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_attach_color_bar(PyObject *, PyObject *);}
static PyObject *meth_MeshView_attach_color_bar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        ColorBar* a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_MeshView, &sipCpp, sipType_ColorBar, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->attach_color_bar(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_attach_color_bar, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_detach_color_bar(PyObject *, PyObject *);}
static PyObject *meth_MeshView_detach_color_bar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        ColorBar* a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_MeshView, &sipCpp, sipType_ColorBar, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->detach_color_bar(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_detach_color_bar, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_home(PyObject *, PyObject *);}
static PyObject *meth_MeshView_home(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_MeshView, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->home();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_home, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_forward(PyObject *, PyObject *);}
static PyObject *meth_MeshView_forward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->forward(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_forward, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_backward(PyObject *, PyObject *);}
static PyObject *meth_MeshView_backward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->backward(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_backward, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_left(PyObject *, PyObject *);}
static PyObject *meth_MeshView_left(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->left(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_left, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_right(PyObject *, PyObject *);}
static PyObject *meth_MeshView_right(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->right(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_right, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_up(PyObject *, PyObject *);}
static PyObject *meth_MeshView_up(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->up(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_up, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_down(PyObject *, PyObject *);}
static PyObject *meth_MeshView_down(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->down(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_down, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_zoom(PyObject *, PyObject *);}
static PyObject *meth_MeshView_zoom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->zoom(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_zoom, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_roll(PyObject *, PyObject *);}
static PyObject *meth_MeshView_roll(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->roll(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_roll, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_pitch(PyObject *, PyObject *);}
static PyObject *meth_MeshView_pitch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->pitch(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_pitch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_MeshView_yaw(PyObject *, PyObject *);}
static PyObject *meth_MeshView_yaw(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        MeshView *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_MeshView, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->yaw(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_MeshView, sipName_yaw, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MeshView(void *, const sipTypeDef *);}
static void *cast_MeshView(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_MeshView)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MeshView(void *, int);}
static void release_MeshView(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<MeshView *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_MeshView(void *, SIP_SSIZE_T, const void *);}
static void assign_MeshView(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<MeshView *>(sipDst)[sipDstIdx] = *reinterpret_cast<const MeshView *>(sipSrc);
}


extern "C" {static void *array_MeshView(SIP_SSIZE_T);}
static void *array_MeshView(SIP_SSIZE_T sipNrElem)
{
    return new MeshView[sipNrElem];
}


extern "C" {static void *copy_MeshView(const void *, SIP_SSIZE_T);}
static void *copy_MeshView(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new MeshView(reinterpret_cast<const MeshView *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_MeshView(sipSimpleWrapper *);}
static void dealloc_MeshView(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_MeshView(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_MeshView(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_MeshView(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    MeshView *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new MeshView();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const MeshView* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_MeshView, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new MeshView(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_MeshView[] = {
    {SIP_MLNAME_CAST(sipName_attach_color_bar), meth_MeshView_attach_color_bar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_backward), meth_MeshView_backward, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_detach_color_bar), meth_MeshView_detach_color_bar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_down), meth_MeshView_down, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_forward), meth_MeshView_forward, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get_background_color), meth_MeshView_get_background_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get_position), meth_MeshView_get_position, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get_size), meth_MeshView_get_size, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_home), meth_MeshView_home, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_left), meth_MeshView_left, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pitch), meth_MeshView_pitch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_resize), meth_MeshView_resize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_right), meth_MeshView_right, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_roll), meth_MeshView_roll, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_background_color), meth_MeshView_set_background_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_position), meth_MeshView_set_position, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_size), meth_MeshView_set_size, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_up), meth_MeshView_up, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_yaw), meth_MeshView_yaw, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_zoom), meth_MeshView_zoom, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef__moogli_MeshView = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_MeshView,
        {0}
    },
    {
        sipNameNr_MeshView,
        {0, 0, 1},
        20, methods_MeshView,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_MeshView,
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
    dealloc_MeshView,
    assign_MeshView,
    array_MeshView,
    copy_MeshView,
    release_MeshView,
    cast_MeshView,
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

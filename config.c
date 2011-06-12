/* Generated automatically from ./Modules/config.c.in by makesetup. */
/* -*- C -*- ***********************************************
Copyright (c) 2000, BeOpen.com.
Copyright (c) 1995-2000, Corporation for National Research Initiatives.
Copyright (c) 1990-1995, Stichting Mathematisch Centrum.
All rights reserved.

See the file "Misc/COPYRIGHT" for information on usage and
redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
******************************************************************/

/* Module configuration */

/* !!! !!! !!! This file is edited by the makesetup script !!! !!! !!! */

/* This file contains the table of built-in modules.
   See init_builtin() in import.c. */

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef WITH_THREAD
extern void initthread(void);
#endif
extern void initsignal(void);
extern void initposix(void);
extern void initerrno(void);
extern void initoperator(void);
extern void inittime(void);
extern void init_functools(void);
extern void init_collections(void);

/* -- ADDMODULE MARKER 1 -- */

extern void PyMarshal_Init(void);
extern void initimp(void);
extern void initgc(void);
extern void init_ast(void);
extern void init_sre(void);

struct _inittab _PyImport_Inittab[] = {

#ifdef WITH_THREAD
	{"thread", initthread},
#endif
	//{"signal", initsignal},
	{"posix", initposix},
	{"errno", initerrno},
	{"time", inittime},
        {"operator", initoperator},

/* -- ADDMODULE MARKER 2 -- */

	/* This module lives in marshal.c */
	{"marshal", PyMarshal_Init},

	/* This lives in import.c */
	{"imp", initimp},

	/* This lives in Python/Python-ast.c */
	{"_ast", init_ast},

	/* These entries are here for sys.builtin_module_names */
	{"__main__", NULL},
	{"__builtin__", NULL},
	{"sys", NULL},
	{"exceptions", NULL},
	{"_functools", init_functools},
        {"_collections", init_collections},
	{"_sre", init_sre},

	/* This lives in gcmodule.c */
	{"gc", initgc},

	/* Sentinel */
	{0, 0}
};


#ifdef __cplusplus
}
#endif


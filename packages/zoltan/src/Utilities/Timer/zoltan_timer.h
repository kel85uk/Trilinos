/*****************************************************************************
 * Zoltan Library for Parallel Applications                                  *
 * Copyright (c) 2000,2001,2002, Sandia National Laboratories.               *
 * This software is distributed under the GNU Lesser General Public License. *
 * For more info, see the README file in the top-level Zoltan directory.     *
 *****************************************************************************/
/*****************************************************************************
 * CVS File Information :
 *    $RCSfile$
 *    $Author$
 *    $Date$
 *    $Revision$
 ****************************************************************************/

#ifndef __ZOLTANTIMER_H
#define __ZOLTANTIMER_H

#include <stdio.h>
#include <mpi.h>


#ifdef __cplusplus
/* if C++, define the rest of this header file as extern C */
extern "C" {
#endif

/* Constants used in Zoltan timer routines */
#define ZOLTAN_TIME_WALL 1
#define ZOLTAN_TIME_CPU  2
#define ZOLTAN_TIME_USER 3

/* Function prototypes */

struct Zoltan_Timer;

struct Zoltan_Timer *Zoltan_Timer_Create(int);
int Zoltan_Timer_Init(struct Zoltan_Timer *, int, int, char *);
int Zoltan_Timer_Reset(struct Zoltan_Timer *, int, int, int, char*);
int Zoltan_Timer_Start(struct Zoltan_Timer *, int, int, MPI_Comm);
int Zoltan_Timer_Stop(struct Zoltan_Timer *, int, int, MPI_Comm);
int Zoltan_Timer_Print(struct Zoltan_Timer *, int, int);
int Zoltan_Timer_PrintAll(struct Zoltan_Timer *, int);
void Zoltan_Timer_Destroy(struct Zoltan_Timer **);

extern double Zoltan_Time(int);
extern double Zoltan_Time_Resolution(int);

#ifdef __cplusplus
} /* closing bracket for extern "C" */
#endif

#endif

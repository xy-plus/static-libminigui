///////////////////////////////////////////////////////////////////////////////
//
//                          IMPORTANT NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
 * \file vxworks_semaphore.h
 * \author Wei Yongming <vincent@minigui.org>
 * \date 2005/01/11
 * 
 * \brief This is the POSIX semaphore implementation in order to 
 *        run MiniGUI on VxWorks.
 *
 *  This header contains all the definitions needed to support
 *  POSIX semaphore under ThreadX. The reader is referred to the POSIX
 *  standard or equivalent documentation for details of the
 *  functionality contained herein.
 *
 \verbatim

    This header contains all the definitions needed to support
    POSIX semaphore under ThreadX. The reader is referred to the POSIX
    standard or equivalent documentation for details of the
    functionality contained herein.
 
    We do this work in order to run MiniGUI on VxWorks.

    This file is part of MiniGUI, a mature cross-platform windowing 
    and Graphics User Interface (GUI) support system for embedded systems
    and smart IoT devices.

    Copyright (C) 2005~2018, Beijing FMSoft Technologies Co., Ltd.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Or,

    As this program is a library, any link to this program must follow
    GNU General Public License version 3 (GPLv3). If you cannot accept
    GPLv3, you need to be licensed from FMSoft.

    If you have got a commercial license of this program, please use it
    under the terms and conditions of the commercial license.

    For more information about the commercial license, please refer to
    <http://www.minigui.com/en/about/licensing-policy/>.

 \endverbatim
 */

/*
 * $Id: vxworks_semaphore.h 13674 2010-12-06 06:45:01Z wanzheng $
 *
 *      MiniGUI for Linux/uClinux, eCos, uC/OS-II, VxWorks, 
 *      pSOS, ThreadX, NuCleus, OSE, and Win32.
 */

#ifndef FMVX_SEMAPHORE_H
#define FMVX_SEMAPHORE_H

#ifdef _MGUSE_OWN_SEMAPHORE
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

typedef struct _sem_t
{
    SEM_ID          semid;
    unsigned int    value;
} sem_t;

#define SEM_VALUE_MAX	UINT_MAX

/*-----------------------------------------------------------------------------
** Semaphore functions
*/

/* Initialize semaphore to value. */
int sem_init  (sem_t *sem, int pshared, unsigned int value);

/* Destroy the semaphore. */
int sem_destroy  (sem_t *sem);

/* Decrement value if >0 or wait for a post. */
int sem_wait  (sem_t *sem);

/* Decrement value if >0, return -1 if not. */
int sem_trywait  (sem_t *sem);

/* Increment value and wake a waiter if one is present. */
int sem_post  (sem_t *sem);

/* Get current value */
int sem_getvalue  (sem_t *sem, int *sval);

#endif /* FMVX_SEMAPHORE_H */
#endif

/* End of pthread.h */
/******************************************************************************

    @file    StateOS: osdefs.h
    @author  Rajmund Szymanski
    @date    16.07.2018
    @brief   StateOS port file for ARM Cotrex-M uC.

 ******************************************************************************

   Copyright (c) 2018 Rajmund Szymanski. All rights reserved.

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to
   deal in the Software without restriction, including without limitation the
   rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
   sell copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
   OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.

 ******************************************************************************/

#ifndef __STATEOSDEFS_H
#define __STATEOSDEFS_H

/* -------------------------------------------------------------------------- */

#if   defined(__CSMC__)

#ifndef __CONSTRUCTOR
#define __CONSTRUCTOR
#warning No compiler specific solution for __CONSTRUCTOR. __CONSTRUCTOR is ignored.
#endif

#elif defined(__ICCARM__)

#ifndef __CONSTRUCTOR
#define __CONSTRUCTOR
#endif

#else

#ifndef __CONSTRUCTOR
#define __CONSTRUCTOR       __attribute__((constructor))
#endif

#endif

/* -------------------------------------------------------------------------- */

#endif//__STATEOSDEFS_H
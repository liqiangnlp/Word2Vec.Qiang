/*
 * $Id:
 * 0024
 *
 * $File:
 * multi_threads.cpp
 *
 * $Proj:
 *
 * $Func:
 *
 *
 * $Version:
 * 1.0.0
 *
 * $Created by:
 * Qiang Li
 *
 * $Email
 * liqiangneu@gmail.com
 *
 * $Last Modified by:
 * 2014-09-12, 11:43
 */

#include "multi_threads.h"

namespace word2vector_multi_threads {

/*
 * $Name: Join
 * $Function: Join multi threads
 * $Date: 2014-09-12
 */
void MultiThreads::Join() {
#ifdef HAVE_PTHREAD_H
  pthread_join(hnd_, 0);
#else
#ifdef _WIN32
  WaitForSingleObject(hnd_, INFINITE);
  CloseHandle(hnd_);
#endif
#endif
}

}


/*

*/
#ifndef NODELET_NODELET_MACRO_H
#define NODELET_NODELET_MACRO_H

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS // ros is being built around shared libraries
  #ifdef nodeletlib_EXPORTS // we are building a shared lib/dll
    #define NODELET_DECL ROS_HELPER_EXPORT
  #else // we are using shared lib/dll
    #define NODELET_DECL ROS_HELPER_IMPORT
  #endif
#else // ros is being built around static libraries
  #define NODELET_DECL
#endif


#endif //NODELET_NODELET_H

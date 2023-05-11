
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnection || defined(INCLUDE_PSConnection))
#define PSConnection_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;

@protocol PSConnection < JavaIoCloseable, JavaObject >

- (JavaIoInputStream *)getInputStream;

- (JavaIoOutputStream *)getOutputStream;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnection)

J2OBJC_TYPE_LITERAL_HEADER(PSConnection)

#define ComDevexpertsPipestoneCommonIoConnection PSConnection

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnection")

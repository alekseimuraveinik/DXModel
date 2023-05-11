
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStream || defined(INCLUDE_PSCompactInputStream))
#define PSCompactInputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase 1
#define INCLUDE_PSCompactInputStreamBase 1
#include "PSCompactInputStreamBase.h"

@class JavaIoInputStream;

@interface PSCompactInputStream : PSCompactInputStreamBase

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactInputStream)

FOUNDATION_EXPORT void PSCompactInputStream_initWithJavaIoInputStream_(PSCompactInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT PSCompactInputStream *new_PSCompactInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactInputStream *create_PSCompactInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactInputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactInputStream PSCompactInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStream")

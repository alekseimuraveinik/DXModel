
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCustomInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomInputStream || defined(INCLUDE_PSCustomInputStream))
#define PSCustomInputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase 1
#define INCLUDE_PSCompactInputStreamBase 1
#include "PSCompactInputStreamBase.h"

@class JavaIoInputStream;
@protocol PSCustomSerializable;

@interface PSCustomInputStream : PSCompactInputStreamBase

#pragma mark Public

- (void)cleanup;

- (jint)getProtocolVersion;

- (id<PSCustomSerializable>)readCustomSerializable;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCustomInputStream)

FOUNDATION_EXPORT void PSCustomInputStream_initWithJavaIoInputStream_(PSCustomInputStream *self, JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSCustomInputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoCustomCustomInputStream PSCustomInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomInputStream")

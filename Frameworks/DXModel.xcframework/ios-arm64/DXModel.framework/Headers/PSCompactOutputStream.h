
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream || defined(INCLUDE_PSCompactOutputStream))
#define PSCompactOutputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase 1
#define INCLUDE_PSCompactOutputStreamBase 1
#include "PSCompactOutputStreamBase.h"

@class JavaIoOutputStream;

@interface PSCompactOutputStream : PSCompactOutputStreamBase

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactOutputStream)

FOUNDATION_EXPORT void PSCompactOutputStream_initWithJavaIoOutputStream_(PSCompactOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT PSCompactOutputStream *new_PSCompactOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactOutputStream *create_PSCompactOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactOutputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactOutputStream PSCompactOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStream")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCustomOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream || defined(INCLUDE_PSCustomOutputStream))
#define PSCustomOutputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase 1
#define INCLUDE_PSCompactOutputStreamBase 1
#include "PSCompactOutputStreamBase.h"

@class JavaIoOutputStream;
@protocol PSCustomSerializable;

@interface PSCustomOutputStream : PSCompactOutputStreamBase

#pragma mark Public

- (jint)getProtocolVersion;

- (void)writeCustomSerializableWithPSCustomSerializable:(id<PSCustomSerializable>)cs;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCustomOutputStream)

FOUNDATION_EXPORT void PSCustomOutputStream_initWithJavaIoOutputStream_(PSCustomOutputStream *self, JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSCustomOutputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoCustomCustomOutputStream PSCustomOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream")

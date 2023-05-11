
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactOutputStreamBase_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase || defined(INCLUDE_PSCompactOutputStreamBase))
#define PSCompactOutputStreamBase_

#define RESTRICT_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream 1
#define INCLUDE_PSFilteringOutputStream 1
#include "PSFilteringOutputStream.h"

@class JavaIoOutputStream;

@interface PSCompactOutputStreamBase : PSFilteringOutputStream

#pragma mark Public

- (void)writeBooleanWithBoolean:(jboolean)b;

- (void)writeCharWithChar:(jchar)c;

- (void)writeCompactIntWithInt:(jint)i;

- (void)writeCompactLongWithLong:(jlong)i;

- (void)writeShortWithShort:(jshort)s;

- (void)writeStringWithNSString:(NSString *)s;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactOutputStreamBase)

FOUNDATION_EXPORT void PSCompactOutputStreamBase_initWithJavaIoOutputStream_(PSCompactOutputStreamBase *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT PSCompactOutputStreamBase *new_PSCompactOutputStreamBase_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactOutputStreamBase *create_PSCompactOutputStreamBase_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactOutputStreamBase)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase PSCompactOutputStreamBase;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactOutputStreamBase")

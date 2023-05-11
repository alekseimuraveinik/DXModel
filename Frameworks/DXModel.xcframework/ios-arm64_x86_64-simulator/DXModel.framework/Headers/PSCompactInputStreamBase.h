
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactInputStreamBase_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase || defined(INCLUDE_PSCompactInputStreamBase))
#define PSCompactInputStreamBase_

#define RESTRICT_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream 1
#define INCLUDE_PSFilteringInputStream 1
#include "PSFilteringInputStream.h"

@class JavaIoInputStream;

@interface PSCompactInputStreamBase : PSFilteringInputStream

#pragma mark Public

- (jboolean)readBoolean;

- (jchar)readChar;

- (jint)readCompactInt;

- (jlong)readCompactLong;

- (jshort)readShort;

- (NSString *)readString;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactInputStreamBase)

FOUNDATION_EXPORT void PSCompactInputStreamBase_initWithJavaIoInputStream_(PSCompactInputStreamBase *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT PSCompactInputStreamBase *new_PSCompactInputStreamBase_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactInputStreamBase *create_PSCompactInputStreamBase_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactInputStreamBase)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase PSCompactInputStreamBase;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactInputStreamBase")

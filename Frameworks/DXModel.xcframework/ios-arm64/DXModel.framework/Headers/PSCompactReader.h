
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactReader")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactReader
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactReader 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactReader 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactReader

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactReader_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactReader || defined(INCLUDE_PSCompactReader))
#define PSCompactReader_

@class JavaIoInputStream;

@interface PSCompactReader : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)readBooleanWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jbyte)readByteWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jchar)readCharWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jint)readCompactIntWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jlong)readCompactLongWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jshort)readShortWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (NSString *)readStringWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jchar)readUtfCharWithJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactReader)

FOUNDATION_EXPORT void PSCompactReader_init(PSCompactReader *self);

FOUNDATION_EXPORT PSCompactReader *new_PSCompactReader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactReader *create_PSCompactReader_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactReader)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactReader PSCompactReader;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactReader")

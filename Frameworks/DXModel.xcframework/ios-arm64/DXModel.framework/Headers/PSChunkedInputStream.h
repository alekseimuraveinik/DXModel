
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSChunkedInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream || defined(INCLUDE_PSChunkedInputStream))
#define PSChunkedInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

@interface PSChunkedInputStream : JavaIoFilterInputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jint)available;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (jboolean)waitChunkWithBoolean:(jboolean)blocking;

@end

J2OBJC_EMPTY_STATIC_INIT(PSChunkedInputStream)

FOUNDATION_EXPORT void PSChunkedInputStream_initWithJavaIoInputStream_(PSChunkedInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT PSChunkedInputStream *new_PSChunkedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSChunkedInputStream *create_PSChunkedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSChunkedInputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream PSChunkedInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedInputStream")

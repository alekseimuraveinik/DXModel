
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSChunkedOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream || defined(INCLUDE_PSChunkedOutputStream))
#define PSChunkedOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class IOSByteArray;

@interface PSChunkedOutputStream : JavaIoOutputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)close;

- (void)endChunk;

- (void)flush;

- (void)startChunk;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSChunkedOutputStream)

FOUNDATION_EXPORT void PSChunkedOutputStream_initWithJavaIoOutputStream_(PSChunkedOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT PSChunkedOutputStream *new_PSChunkedOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSChunkedOutputStream *create_PSChunkedOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSChunkedOutputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream PSChunkedOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedOutputStream")

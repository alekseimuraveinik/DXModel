
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoPipedPipedInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoPipedPipedInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPipedInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedInputStream || defined(INCLUDE_PSPipedInputStream))
#define PSPipedInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;
@class JavaLangException;
@class PSCircularByteBuffer;
@class PSPipedOutputStream;

@interface PSPipedInputStream : JavaIoInputStream {
 @public
  PSCircularByteBuffer *pipe_;
}

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)size;

- (instancetype __nonnull)initWithPSPipedOutputStream:(PSPipedOutputStream *)outArg;

- (jint)available;

- (void)close;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (jlong)skipWithLong:(jlong)len;

#pragma mark Protected

- (jint)onExceptionWithJavaLangException:(JavaLangException *)e;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPipedInputStream)

J2OBJC_FIELD_SETTER(PSPipedInputStream, pipe_, PSCircularByteBuffer *)

FOUNDATION_EXPORT void PSPipedInputStream_initWithInt_(PSPipedInputStream *self, jint size);

FOUNDATION_EXPORT PSPipedInputStream *new_PSPipedInputStream_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipedInputStream *create_PSPipedInputStream_initWithInt_(jint size);

FOUNDATION_EXPORT void PSPipedInputStream_initWithPSPipedOutputStream_(PSPipedInputStream *self, PSPipedOutputStream *outArg);

FOUNDATION_EXPORT PSPipedInputStream *new_PSPipedInputStream_initWithPSPipedOutputStream_(PSPipedOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipedInputStream *create_PSPipedInputStream_initWithPSPipedOutputStream_(PSPipedOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSPipedInputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoPipedPipedInputStream PSPipedInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedInputStream")

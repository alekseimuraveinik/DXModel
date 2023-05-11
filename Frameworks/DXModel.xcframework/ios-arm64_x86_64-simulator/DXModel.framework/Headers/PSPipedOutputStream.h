
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPipedOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream || defined(INCLUDE_PSPipedOutputStream))
#define PSPipedOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class IOSByteArray;
@class JavaLangException;
@class PSCircularByteBuffer;
@class PSPipedInputStream;

@interface PSPipedOutputStream : JavaIoOutputStream {
 @public
  PSCircularByteBuffer *pipe_;
}

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)size;

- (instancetype __nonnull)initWithPSPipedInputStream:(PSPipedInputStream *)inArg;

- (void)close;

- (void)flush;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

#pragma mark Protected

- (void)onExceptionWithJavaLangException:(JavaLangException *)e;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPipedOutputStream)

J2OBJC_FIELD_SETTER(PSPipedOutputStream, pipe_, PSCircularByteBuffer *)

FOUNDATION_EXPORT void PSPipedOutputStream_initWithInt_(PSPipedOutputStream *self, jint size);

FOUNDATION_EXPORT PSPipedOutputStream *new_PSPipedOutputStream_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipedOutputStream *create_PSPipedOutputStream_initWithInt_(jint size);

FOUNDATION_EXPORT void PSPipedOutputStream_initWithPSPipedInputStream_(PSPipedOutputStream *self, PSPipedInputStream *inArg);

FOUNDATION_EXPORT PSPipedOutputStream *new_PSPipedOutputStream_initWithPSPipedInputStream_(PSPipedInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipedOutputStream *create_PSPipedOutputStream_initWithPSPipedInputStream_(PSPipedInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSPipedOutputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoPipedPipedOutputStream PSPipedOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedOutputStream")

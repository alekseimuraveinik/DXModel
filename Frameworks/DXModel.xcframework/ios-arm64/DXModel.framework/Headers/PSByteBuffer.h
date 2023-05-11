
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSByteBuffer_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer || defined(INCLUDE_PSByteBuffer))
#define PSByteBuffer_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class PSCircularByteBuffer;

@interface PSByteBuffer : NSObject
@property (readonly, class) jint WRITE_BUFFER_SIZE NS_SWIFT_NAME(WRITE_BUFFER_SIZE);

+ (jint)WRITE_BUFFER_SIZE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)initialSize;

- (jbyte)byteAtWithInt:(jint)pos;

- (jboolean)isEqual:(id)obj;

- (PSByteBuffer *)extractWithInt:(jint)from;

- (PSByteBuffer *)extractWithInt:(jint)from
                         withInt:(jint)length;

- (NSUInteger)hash;

- (void)readWithPSCircularByteBuffer:(PSCircularByteBuffer *)buffer
                             withInt:(jint)off
                             withInt:(jint)len;

- (jint)readWithInt:(jint)off
      withByteArray:(IOSByteArray *)b
            withInt:(jint)boff
            withInt:(jint)len;

- (void)readWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (PSByteBuffer *)reset;

- (jint)size;

- (NSString *)description;

- (void)writeWithByte:(jbyte)b;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithPSCircularByteBuffer:(PSCircularByteBuffer *)buffer
                              withInt:(jint)len;

- (jint)writeWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (void)writeWithJavaIoInputStream:(JavaIoInputStream *)inArg
                           withInt:(jint)len;

- (void)writeWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(PSByteBuffer)

inline jint PSByteBuffer_get_WRITE_BUFFER_SIZE(void);
#define PSByteBuffer_WRITE_BUFFER_SIZE 131072
J2OBJC_STATIC_FIELD_CONSTANT(PSByteBuffer, WRITE_BUFFER_SIZE, jint)

FOUNDATION_EXPORT void PSByteBuffer_init(PSByteBuffer *self);

FOUNDATION_EXPORT PSByteBuffer *new_PSByteBuffer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSByteBuffer *create_PSByteBuffer_init(void);

FOUNDATION_EXPORT void PSByteBuffer_initWithInt_(PSByteBuffer *self, jint initialSize);

FOUNDATION_EXPORT PSByteBuffer *new_PSByteBuffer_initWithInt_(jint initialSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSByteBuffer *create_PSByteBuffer_initWithInt_(jint initialSize);

J2OBJC_TYPE_LITERAL_HEADER(PSByteBuffer)

@compatibility_alias ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer PSByteBuffer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersByteBuffer")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCircularByteBuffer_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer || defined(INCLUDE_PSCircularByteBuffer))
#define PSCircularByteBuffer_

@class IOSByteArray;

@interface PSCircularByteBuffer : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)size;

- (instancetype __nonnull)initWithInt:(jint)size
                              withInt:(jint)expansionStep;

- (jint)available;

- (jint)capacity;

- (void)close;

- (void)closeWrite;

- (jbyte)read;

- (jint)readWithByteArray:(IOSByteArray *)b;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (jlong)skipWithLong:(jlong)n;

- (void)writeWithByte:(jbyte)b;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCircularByteBuffer)

FOUNDATION_EXPORT void PSCircularByteBuffer_initWithInt_withInt_(PSCircularByteBuffer *self, jint size, jint expansionStep);

FOUNDATION_EXPORT PSCircularByteBuffer *new_PSCircularByteBuffer_initWithInt_withInt_(jint size, jint expansionStep) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCircularByteBuffer *create_PSCircularByteBuffer_initWithInt_withInt_(jint size, jint expansionStep);

FOUNDATION_EXPORT void PSCircularByteBuffer_initWithInt_(PSCircularByteBuffer *self, jint size);

FOUNDATION_EXPORT PSCircularByteBuffer *new_PSCircularByteBuffer_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCircularByteBuffer *create_PSCircularByteBuffer_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(PSCircularByteBuffer)

@compatibility_alias ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer PSCircularByteBuffer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilBuffersCircularCircularByteBuffer")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilLongListTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilLongListTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilLongListTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilLongListTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilLongListTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLongListTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilLongListTO || defined(INCLUDE_PSLongListTO))
#define PSLongListTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface PSLongListTO : PSBaseTransferObject
@property (readonly, class, strong) PSLongListTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSLongListTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)capacity;

- (jboolean)addBitsWithDouble:(jdouble)d;

- (jboolean)addDoubleWithDouble:(jdouble)d;

- (void)addDoubleWithInt:(jint)index
              withDouble:(jdouble)element;

- (void)addLongWithInt:(jint)index
              withLong:(jlong)value;

- (jboolean)addLongWithLong:(jlong)value;

- (PSLongListTO *)change;

- (void)clear;

- (PSBaseTransferObject *)java_clone;

- (jboolean)containsWithLong:(jlong)value;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSLongListTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (void)ensureCapacityWithInt:(jint)capacity;

- (jboolean)isEqual:(id)o;

- (jdouble)getBitsWithInt:(jint)index;

- (jdouble)getDoubleWithInt:(jint)index;

- (jlong)getLongWithInt:(jint)index;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (jlong)removeAtWithInt:(jint)index;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (jdouble)setBitsWithInt:(jint)index
               withDouble:(jdouble)d;

- (jdouble)setDoubleWithInt:(jint)index
                 withDouble:(jdouble)element;

- (jlong)setLongWithInt:(jint)index
               withLong:(jlong)value;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSLongListTO)

inline PSLongListTO *PSLongListTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSLongListTO *PSLongListTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSLongListTO, EMPTY, PSLongListTO *)

FOUNDATION_EXPORT void PSLongListTO_init(PSLongListTO *self);

FOUNDATION_EXPORT PSLongListTO *new_PSLongListTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSLongListTO *create_PSLongListTO_init(void);

FOUNDATION_EXPORT void PSLongListTO_initWithInt_(PSLongListTO *self, jint capacity);

FOUNDATION_EXPORT PSLongListTO *new_PSLongListTO_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSLongListTO *create_PSLongListTO_initWithInt_(jint capacity);

J2OBJC_TYPE_LITERAL_HEADER(PSLongListTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilLongListTO PSLongListTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilLongListTO")

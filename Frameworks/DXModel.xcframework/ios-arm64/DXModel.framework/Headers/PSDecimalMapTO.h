
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilDecimalMapTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilDecimalMapTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilDecimalMapTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilDecimalMapTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilDecimalMapTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDecimalMapTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilDecimalMapTO || defined(INCLUDE_PSDecimalMapTO))
#define PSDecimalMapTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSBaseEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilSet;
@protocol PSTransferObject;

@interface PSDecimalMapTO : PSBaseTransferObject
@property (readonly, class, strong) PSDecimalMapTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSDecimalMapTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSDecimalMapTO:(PSDecimalMapTO *)map;

- (instancetype __nonnull)initWithInt:(jint)maxExpectedOrdinal;

- (PSDecimalMapTO *)change;

- (PSBaseTransferObject *)java_clone;

- (jboolean)containsWithPSBaseEnum:(PSBaseEnum *)key;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSDecimalMapTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

+ (PSDecimalMapTO *)empty;

- (void)ensureCapacityWithInt:(jint)maxExpectedOrdinal;

- (jboolean)isEqual:(id)o;

- (jlong)getWithPSBaseEnum:(PSBaseEnum *)key;

- (jdouble)getDoubleWithPSBaseEnum:(PSBaseEnum *)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (jboolean)makeReadOnly;

- (jlong)putWithPSBaseEnum:(PSBaseEnum *)key
                  withLong:(jlong)value;

- (void)putAllWithPSDecimalMapTO:(PSDecimalMapTO *)otherMap;

- (jdouble)putDoubleWithPSBaseEnum:(PSBaseEnum *)key
                        withDouble:(jdouble)value;

- (jdouble)putDoubleWithPSBaseEnum:(PSBaseEnum *)key
                        withDouble:(jdouble)value
                           withInt:(jint)minPrecision
                           withInt:(jint)maxPrecision;

- (jboolean)removeWithPSBaseEnum:(PSBaseEnum *)key;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSDecimalMapTO)

inline PSDecimalMapTO *PSDecimalMapTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSDecimalMapTO *PSDecimalMapTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSDecimalMapTO, EMPTY, PSDecimalMapTO *)

FOUNDATION_EXPORT void PSDecimalMapTO_init(PSDecimalMapTO *self);

FOUNDATION_EXPORT PSDecimalMapTO *new_PSDecimalMapTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDecimalMapTO *create_PSDecimalMapTO_init(void);

FOUNDATION_EXPORT void PSDecimalMapTO_initWithInt_(PSDecimalMapTO *self, jint maxExpectedOrdinal);

FOUNDATION_EXPORT PSDecimalMapTO *new_PSDecimalMapTO_initWithInt_(jint maxExpectedOrdinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDecimalMapTO *create_PSDecimalMapTO_initWithInt_(jint maxExpectedOrdinal);

FOUNDATION_EXPORT void PSDecimalMapTO_initWithPSDecimalMapTO_(PSDecimalMapTO *self, PSDecimalMapTO *map);

FOUNDATION_EXPORT PSDecimalMapTO *new_PSDecimalMapTO_initWithPSDecimalMapTO_(PSDecimalMapTO *map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDecimalMapTO *create_PSDecimalMapTO_initWithPSDecimalMapTO_(PSDecimalMapTO *map);

FOUNDATION_EXPORT PSDecimalMapTO *PSDecimalMapTO_empty(void);

J2OBJC_TYPE_LITERAL_HEADER(PSDecimalMapTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilDecimalMapTO PSDecimalMapTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilDecimalMapTO")

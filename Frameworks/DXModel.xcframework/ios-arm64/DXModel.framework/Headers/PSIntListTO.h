
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilIntListTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilIntListTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilIntListTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilIntListTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilIntListTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSIntListTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilIntListTO || defined(INCLUDE_PSIntListTO))
#define PSIntListTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface PSIntListTO : PSBaseTransferObject
@property (readonly, class, strong) PSIntListTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSIntListTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)capacity;

- (jboolean)addIntWithInt:(jint)value;

- (void)addIntWithInt:(jint)index
              withInt:(jint)value;

- (PSIntListTO *)change;

- (void)clear;

- (jboolean)containsWithLong:(jlong)value;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSIntListTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (void)ensureCapacityWithInt:(jint)capacity;

- (jboolean)isEqual:(id)o;

- (jint)getIntWithInt:(jint)index;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (jint)removeAtWithInt:(jint)index;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (jint)setIntWithInt:(jint)index
              withInt:(jint)value;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSIntListTO)

inline PSIntListTO *PSIntListTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSIntListTO *PSIntListTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSIntListTO, EMPTY, PSIntListTO *)

FOUNDATION_EXPORT void PSIntListTO_init(PSIntListTO *self);

FOUNDATION_EXPORT PSIntListTO *new_PSIntListTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSIntListTO *create_PSIntListTO_init(void);

FOUNDATION_EXPORT void PSIntListTO_initWithInt_(PSIntListTO *self, jint capacity);

FOUNDATION_EXPORT PSIntListTO *new_PSIntListTO_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSIntListTO *create_PSIntListTO_initWithInt_(jint capacity);

J2OBJC_TYPE_LITERAL_HEADER(PSIntListTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilIntListTO PSIntListTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilIntListTO")

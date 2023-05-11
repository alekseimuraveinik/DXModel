
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilBitSetTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilBitSetTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilBitSetTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilBitSetTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilBitSetTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBitSetTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilBitSetTO || defined(INCLUDE_PSBitSetTO))
#define PSBitSetTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface PSBitSetTO : PSBaseTransferObject
@property (readonly, class, strong) PSBitSetTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSBitSetTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)expectedCapacity;

- (PSBitSetTO *)change;

- (void)clear;

- (PSBaseTransferObject *)java_clone;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSBitSetTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getCardinality;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (jboolean)isSetWithInt:(jint)index;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (jboolean)setWithInt:(jint)index
           withBoolean:(jboolean)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSBitSetTO)

inline PSBitSetTO *PSBitSetTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSBitSetTO *PSBitSetTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSBitSetTO, EMPTY, PSBitSetTO *)

FOUNDATION_EXPORT void PSBitSetTO_init(PSBitSetTO *self);

FOUNDATION_EXPORT PSBitSetTO *new_PSBitSetTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBitSetTO *create_PSBitSetTO_init(void);

FOUNDATION_EXPORT void PSBitSetTO_initWithInt_(PSBitSetTO *self, jint expectedCapacity);

FOUNDATION_EXPORT PSBitSetTO *new_PSBitSetTO_initWithInt_(jint expectedCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSBitSetTO *create_PSBitSetTO_initWithInt_(jint expectedCapacity);

J2OBJC_TYPE_LITERAL_HEADER(PSBitSetTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilBitSetTO PSBitSetTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilBitSetTO")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEventsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO || defined(INCLUDE_DXEventsRequestTO))
#define DXEventsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXEventsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXEventsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEventsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithLong:(jlong)lastTimeStamp;

- (DXEventsRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXEventsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getLastTimeStamp;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLastTimeStampWithLong:(jlong)lastTimeStamp;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXEventsRequestTO)

inline DXEventsRequestTO *DXEventsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventsRequestTO *DXEventsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventsRequestTO, EMPTY, DXEventsRequestTO *)

FOUNDATION_EXPORT void DXEventsRequestTO_initWithLong_(DXEventsRequestTO *self, jlong lastTimeStamp);

FOUNDATION_EXPORT DXEventsRequestTO *new_DXEventsRequestTO_initWithLong_(jlong lastTimeStamp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventsRequestTO *create_DXEventsRequestTO_initWithLong_(jlong lastTimeStamp);

FOUNDATION_EXPORT void DXEventsRequestTO_init(DXEventsRequestTO *self);

FOUNDATION_EXPORT DXEventsRequestTO *new_DXEventsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventsRequestTO *create_DXEventsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEventsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsEventsRequestTO DXEventsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsRequestTO")

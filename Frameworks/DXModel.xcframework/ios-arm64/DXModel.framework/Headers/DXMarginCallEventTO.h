
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarginCallEventTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO || defined(INCLUDE_DXMarginCallEventTO))
#define DXMarginCallEventTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTO 1
#define INCLUDE_DXEventTO 1
#include "DXEventTO.h"

@class DXAccountTO;
@class DXMarginCallEventTypeEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMarginCallEventTO : DXEventTO
@property (readonly, class, strong) DXMarginCallEventTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarginCallEventTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarginCallEventTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarginCallEventTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountTO *)getAccount;

- (jlong)getActualRiskLevel;

- (DXMarginCallEventTypeEnum *)getEventSubType;

- (jlong)getRiskLevelThreshold;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountWithDXAccountTO:(DXAccountTO *)account;

- (void)setActualRiskLevelWithLong:(jlong)actualRiskLevel;

- (void)setEventSubTypeWithDXMarginCallEventTypeEnum:(DXMarginCallEventTypeEnum *)eventSubType;

- (void)setRiskLevelThresholdWithLong:(jlong)riskLevelThreshold;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarginCallEventTO)

inline DXMarginCallEventTO *DXMarginCallEventTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTO *DXMarginCallEventTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTO, EMPTY, DXMarginCallEventTO *)

FOUNDATION_EXPORT void DXMarginCallEventTO_init(DXMarginCallEventTO *self);

FOUNDATION_EXPORT DXMarginCallEventTO *new_DXMarginCallEventTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarginCallEventTO *create_DXMarginCallEventTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarginCallEventTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO DXMarginCallEventTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTO")

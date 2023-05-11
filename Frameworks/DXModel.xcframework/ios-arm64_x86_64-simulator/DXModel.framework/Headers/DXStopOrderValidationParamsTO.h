
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStopOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO || defined(INCLUDE_DXStopOrderValidationParamsTO))
#define DXStopOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 1
#define INCLUDE_DXPricedOrderValidationParamsTO 1
#include "DXPricedOrderValidationParamsTO.h"

@class DXParameterRuleTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStopOrderValidationParamsTO : DXPricedOrderValidationParamsTO
@property (readonly, class, strong) DXStopOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStopOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStopOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStopOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getSlaveBuyPriceRuleOfTrailing;

- (DXParameterRuleTO *)getSlaveSellPriceRuleOfTrailing;

- (DXParameterRuleTO *)getTrailingValueRule;

- (NSUInteger)hash;

- (jboolean)isDefaultTrailingModeEnabled;

- (jboolean)isTrailingModeSwitchable;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDefaultTrailingModeEnabledWithBoolean:(jboolean)defaultTrailingModeEnabled;

- (void)setSlaveBuyPriceRuleOfTrailingWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPriceRuleOfTrailing;

- (void)setSlaveSellPriceRuleOfTrailingWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPriceRuleOfTrailing;

- (void)setTrailingModeSwitchableWithBoolean:(jboolean)trailingModeSwitchable;

- (void)setTrailingValueRuleWithDXParameterRuleTO:(DXParameterRuleTO *)trailingValueRule;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStopOrderValidationParamsTO)

inline DXStopOrderValidationParamsTO *DXStopOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopOrderValidationParamsTO *DXStopOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopOrderValidationParamsTO, EMPTY, DXStopOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXStopOrderValidationParamsTO_init(DXStopOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXStopOrderValidationParamsTO *new_DXStopOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopOrderValidationParamsTO *create_DXStopOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStopOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO DXStopOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopOrderValidationParamsTO")

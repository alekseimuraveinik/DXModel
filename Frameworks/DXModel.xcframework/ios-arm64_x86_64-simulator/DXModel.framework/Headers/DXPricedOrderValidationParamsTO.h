
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPricedOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO || defined(INCLUDE_DXPricedOrderValidationParamsTO))
#define DXPricedOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO 1
#define INCLUDE_DXSizedOrderValidationParamsTO 1
#include "DXSizedOrderValidationParamsTO.h"

@class DXCashAccountOrderValidationParamsTO;
@class DXOrderOperationEnum;
@class DXParameterRuleTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPricedOrderValidationParamsTO : DXSizedOrderValidationParamsTO

#pragma mark Public

- (DXPricedOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getBuyPriceRule;

- (DXCashAccountOrderValidationParamsTO *)getCashAccountOrderValidation;

- (DXOrderOperationEnum *)getDefaultSide;

- (DXParameterRuleTO *)getRequiredMarginRule;

- (DXParameterRuleTO *)getSellPriceRule;

- (NSUInteger)hash;

- (jboolean)isPriceEditable;

- (jboolean)isSideEditable;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setBuyPriceRuleWithDXParameterRuleTO:(DXParameterRuleTO *)buyPriceRule;

- (void)setCashAccountOrderValidationWithDXCashAccountOrderValidationParamsTO:(DXCashAccountOrderValidationParamsTO *)cashAccountOrderValidation;

- (void)setDefaultSideWithDXOrderOperationEnum:(DXOrderOperationEnum *)defaultSide;

- (void)setPriceEditableWithBoolean:(jboolean)priceEditable;

- (void)setRequiredMarginRuleWithDXParameterRuleTO:(DXParameterRuleTO *)requiredMarginRule;

- (void)setSellPriceRuleWithDXParameterRuleTO:(DXParameterRuleTO *)sellPriceRule;

- (void)setSideEditableWithBoolean:(jboolean)sideEditable;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXPricedOrderValidationParamsTO)

FOUNDATION_EXPORT void DXPricedOrderValidationParamsTO_init(DXPricedOrderValidationParamsTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXPricedOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO DXPricedOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO")

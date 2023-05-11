
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAttachOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO || defined(INCLUDE_DXAttachOrderValidationParamsTO))
#define DXAttachOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationPricedOrderValidationParamsTO 1
#define INCLUDE_DXPricedOrderValidationParamsTO 1
#include "DXPricedOrderValidationParamsTO.h"

@class DXParameterRuleTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAttachOrderValidationParamsTO : DXPricedOrderValidationParamsTO

#pragma mark Public

- (DXAttachOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getPercentOfBalanceRule;

- (DXParameterRuleTO *)getPlRule;

- (DXParameterRuleTO *)getPriceOffsetRule;

- (DXParameterRuleTO *)getSlaveBuyOffsetRuleOfPercentOfBalance;

- (DXParameterRuleTO *)getSlaveBuyOffsetRuleOfPl;

- (DXParameterRuleTO *)getSlaveBuyOffsetRuleOfPrice;

- (DXParameterRuleTO *)getSlaveBuyPlRuleOfOffset;

- (DXParameterRuleTO *)getSlaveBuyPlRuleOfPercentOfBalance;

- (DXParameterRuleTO *)getSlaveBuyPlRuleOfPrice;

- (DXParameterRuleTO *)getSlaveBuyPriceRuleOfOffset;

- (DXParameterRuleTO *)getSlaveBuyPriceRuleOfPercentOfBalance;

- (DXParameterRuleTO *)getSlaveBuyPriceRuleOfPl;

- (DXParameterRuleTO *)getSlaveSellOffsetRuleOfPercentOfBalance;

- (DXParameterRuleTO *)getSlaveSellOffsetRuleOfPl;

- (DXParameterRuleTO *)getSlaveSellOffsetRuleOfPrice;

- (DXParameterRuleTO *)getSlaveSellPlRuleOfOffset;

- (DXParameterRuleTO *)getSlaveSellPlRuleOfPercentOfBalance;

- (DXParameterRuleTO *)getSlaveSellPlRuleOfPrice;

- (DXParameterRuleTO *)getSlaveSellPriceRuleOfOffset;

- (DXParameterRuleTO *)getSlaveSellPriceRuleOfPercentOfBalance;

- (DXParameterRuleTO *)getSlaveSellPriceRuleOfPl;

- (NSUInteger)hash;

- (jboolean)isPriceOffsetEditable;

- (jboolean)isPriceOffsetMasterByDefault;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPercentOfBalanceRuleWithDXParameterRuleTO:(DXParameterRuleTO *)percentOfBalanceRule;

- (void)setPlRuleWithDXParameterRuleTO:(DXParameterRuleTO *)plRule;

- (void)setPriceOffsetEditableWithBoolean:(jboolean)priceOffsetEditable;

- (void)setPriceOffsetMasterByDefaultWithBoolean:(jboolean)priceOffsetMasterByDefault;

- (void)setPriceOffsetRuleWithDXParameterRuleTO:(DXParameterRuleTO *)priceOffsetRule;

- (void)setSlaveBuyOffsetRuleOfPercentOfBalanceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyOffsetRuleOfPercentOfBalance;

- (void)setSlaveBuyOffsetRuleOfPlWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyOffsetRuleOfPl;

- (void)setSlaveBuyOffsetRuleOfPriceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyOffsetRuleOfPrice;

- (void)setSlaveBuyPlRuleOfOffsetWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPlRuleOfOffset;

- (void)setSlaveBuyPlRuleOfPercentOfBalanceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPlRuleOfPercentOfBalance;

- (void)setSlaveBuyPlRuleOfPriceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPlRuleOfPrice;

- (void)setSlaveBuyPriceRuleOfOffsetWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPriceRuleOfOffset;

- (void)setSlaveBuyPriceRuleOfPercentOfBalanceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPriceRuleOfPercentOfBalance;

- (void)setSlaveBuyPriceRuleOfPlWithDXParameterRuleTO:(DXParameterRuleTO *)slaveBuyPriceRuleOfPl;

- (void)setSlaveSellOffsetRuleOfPercentOfBalanceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellOffsetRuleOfPercentOfBalance;

- (void)setSlaveSellOffsetRuleOfPlWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellOffsetRuleOfPl;

- (void)setSlaveSellOffsetRuleOfPriceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellOffsetRuleOfPrice;

- (void)setSlaveSellPlRuleOfOffsetWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPlRuleOfOffset;

- (void)setSlaveSellPlRuleOfPercentOfBalanceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPlRuleOfPercentOfBalance;

- (void)setSlaveSellPlRuleOfPriceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPlRuleOfPrice;

- (void)setSlaveSellPriceRuleOfOffsetWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPriceRuleOfOffset;

- (void)setSlaveSellPriceRuleOfPercentOfBalanceWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPriceRuleOfPercentOfBalance;

- (void)setSlaveSellPriceRuleOfPlWithDXParameterRuleTO:(DXParameterRuleTO *)slaveSellPriceRuleOfPl;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAttachOrderValidationParamsTO)

FOUNDATION_EXPORT void DXAttachOrderValidationParamsTO_init(DXAttachOrderValidationParamsTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXAttachOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO DXAttachOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO")

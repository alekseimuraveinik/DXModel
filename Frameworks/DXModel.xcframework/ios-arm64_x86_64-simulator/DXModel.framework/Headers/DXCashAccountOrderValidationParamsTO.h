
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCashAccountOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO || defined(INCLUDE_DXCashAccountOrderValidationParamsTO))
#define DXCashAccountOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXParameterRuleTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCashAccountOrderValidationParamsTO : PSBaseTransferObject
@property (readonly, class, strong) DXCashAccountOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCashAccountOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCashAccountOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCashAccountOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getBuyProscpectiveCostRule;

- (DXParameterRuleTO *)getCommissionRule;

- (DXParameterRuleTO *)getSellProscpectiveCostRule;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setBuyProscpectiveCostRuleWithDXParameterRuleTO:(DXParameterRuleTO *)buyProscpectiveCostRule;

- (void)setCommissionRuleWithDXParameterRuleTO:(DXParameterRuleTO *)commissionRule;

- (void)setSellProscpectiveCostRuleWithDXParameterRuleTO:(DXParameterRuleTO *)sellProscpectiveCostRule;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCashAccountOrderValidationParamsTO)

inline DXCashAccountOrderValidationParamsTO *DXCashAccountOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCashAccountOrderValidationParamsTO *DXCashAccountOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCashAccountOrderValidationParamsTO, EMPTY, DXCashAccountOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXCashAccountOrderValidationParamsTO_init(DXCashAccountOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXCashAccountOrderValidationParamsTO *new_DXCashAccountOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCashAccountOrderValidationParamsTO *create_DXCashAccountOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCashAccountOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO DXCashAccountOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCashAccountOrderValidationParamsTO")

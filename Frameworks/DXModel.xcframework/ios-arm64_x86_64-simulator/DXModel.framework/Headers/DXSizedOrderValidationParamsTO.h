
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSizedOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO || defined(INCLUDE_DXSizedOrderValidationParamsTO))
#define DXSizedOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationOrderValidationParamsTO 1
#define INCLUDE_DXOrderValidationParamsTO 1
#include "DXOrderValidationParamsTO.h"

@class DXParameterRuleTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXSizedOrderValidationParamsTO : DXOrderValidationParamsTO

#pragma mark Public

- (DXSizedOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getQuantityRule;

- (NSUInteger)hash;

- (jboolean)isQuantityEditable;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setQuantityEditableWithBoolean:(jboolean)quantityEditable;

- (void)setQuantityRuleWithDXParameterRuleTO:(DXParameterRuleTO *)quantityRule;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXSizedOrderValidationParamsTO)

FOUNDATION_EXPORT void DXSizedOrderValidationParamsTO_init(DXSizedOrderValidationParamsTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXSizedOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO DXSizedOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO")

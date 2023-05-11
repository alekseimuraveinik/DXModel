
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCloseOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO || defined(INCLUDE_DXCloseOrderValidationParamsTO))
#define DXCloseOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO 1
#define INCLUDE_DXSizedOrderValidationParamsTO 1
#include "DXSizedOrderValidationParamsTO.h"

@class DXParameterRuleTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCloseOrderValidationParamsTO : DXSizedOrderValidationParamsTO
@property (readonly, class, strong) DXCloseOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCloseOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCloseOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCloseOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getRequiredMarginRule;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setRequiredMarginRuleWithDXParameterRuleTO:(DXParameterRuleTO *)requiredMarginRule;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCloseOrderValidationParamsTO)

inline DXCloseOrderValidationParamsTO *DXCloseOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCloseOrderValidationParamsTO *DXCloseOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCloseOrderValidationParamsTO, EMPTY, DXCloseOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXCloseOrderValidationParamsTO_init(DXCloseOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXCloseOrderValidationParamsTO *new_DXCloseOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseOrderValidationParamsTO *create_DXCloseOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCloseOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO DXCloseOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationCloseOrderValidationParamsTO")

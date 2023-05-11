
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXParameterRuleTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO || defined(INCLUDE_DXParameterRuleTO))
#define DXParameterRuleTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXParameterRuleBoundTO;
@class DXParameterRuleExpressionTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXParameterRuleTO : PSBaseTransferObject
@property (readonly, class, strong) DXParameterRuleTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXParameterRuleTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXParameterRuleTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXParameterRuleTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleExpressionTO *)getDefaultValueExpression;

- (DXParameterRuleBoundTO *)getLeftBound;

- (DXParameterRuleBoundTO *)getRightBound;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDefaultValueExpressionWithDXParameterRuleExpressionTO:(DXParameterRuleExpressionTO *)defaultValueExpression;

- (void)setLeftBoundWithDXParameterRuleBoundTO:(DXParameterRuleBoundTO *)leftBound;

- (void)setRightBoundWithDXParameterRuleBoundTO:(DXParameterRuleBoundTO *)rightBound;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXParameterRuleTO)

inline DXParameterRuleTO *DXParameterRuleTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXParameterRuleTO *DXParameterRuleTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXParameterRuleTO, EMPTY, DXParameterRuleTO *)

FOUNDATION_EXPORT void DXParameterRuleTO_init(DXParameterRuleTO *self);

FOUNDATION_EXPORT DXParameterRuleTO *new_DXParameterRuleTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXParameterRuleTO *create_DXParameterRuleTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXParameterRuleTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO DXParameterRuleTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleTO")

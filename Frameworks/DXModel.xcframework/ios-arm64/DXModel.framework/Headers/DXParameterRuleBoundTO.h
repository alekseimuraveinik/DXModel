
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXParameterRuleBoundTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO || defined(INCLUDE_DXParameterRuleBoundTO))
#define DXParameterRuleBoundTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXParameterRuleExpressionTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXParameterRuleBoundTO : PSBaseTransferObject
@property (readonly, class, strong) DXParameterRuleBoundTO *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class) jint SIGN_L NS_SWIFT_NAME(SIGN_L);
@property (readonly, class) jint SIGN_G NS_SWIFT_NAME(SIGN_G);
@property (readonly, class) jint SIGN_LoE NS_SWIFT_NAME(SIGN_LoE);
@property (readonly, class) jint SIGN_GoE NS_SWIFT_NAME(SIGN_GoE);

+ (DXParameterRuleBoundTO *)EMPTY;

+ (jint)SIGN_L;

+ (jint)SIGN_G;

+ (jint)SIGN_LoE;

+ (jint)SIGN_GoE;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXParameterRuleBoundTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXParameterRuleBoundTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getBoundSign;

- (DXParameterRuleExpressionTO *)getExpressionLeft;

- (DXParameterRuleExpressionTO *)getExpressionRight;

- (NSUInteger)hash;

- (jboolean)isHintBound;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setBoundSignWithInt:(jint)boundSign;

- (void)setExpressionLeftWithDXParameterRuleExpressionTO:(DXParameterRuleExpressionTO *)expressionLeft;

- (void)setExpressionRightWithDXParameterRuleExpressionTO:(DXParameterRuleExpressionTO *)expressionRight;

- (void)setHintBoundWithBoolean:(jboolean)isHintBound;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXParameterRuleBoundTO)

inline DXParameterRuleBoundTO *DXParameterRuleBoundTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXParameterRuleBoundTO *DXParameterRuleBoundTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXParameterRuleBoundTO, EMPTY, DXParameterRuleBoundTO *)

inline jint DXParameterRuleBoundTO_get_SIGN_L(void);
#define DXParameterRuleBoundTO_SIGN_L 1
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBoundTO, SIGN_L, jint)

inline jint DXParameterRuleBoundTO_get_SIGN_G(void);
#define DXParameterRuleBoundTO_SIGN_G 2
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBoundTO, SIGN_G, jint)

inline jint DXParameterRuleBoundTO_get_SIGN_LoE(void);
#define DXParameterRuleBoundTO_SIGN_LoE 3
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBoundTO, SIGN_LoE, jint)

inline jint DXParameterRuleBoundTO_get_SIGN_GoE(void);
#define DXParameterRuleBoundTO_SIGN_GoE 4
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBoundTO, SIGN_GoE, jint)

FOUNDATION_EXPORT void DXParameterRuleBoundTO_init(DXParameterRuleBoundTO *self);

FOUNDATION_EXPORT DXParameterRuleBoundTO *new_DXParameterRuleBoundTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXParameterRuleBoundTO *create_DXParameterRuleBoundTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXParameterRuleBoundTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO DXParameterRuleBoundTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBoundTO")

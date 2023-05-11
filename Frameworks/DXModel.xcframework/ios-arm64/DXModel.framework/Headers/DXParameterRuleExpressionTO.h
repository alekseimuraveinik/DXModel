
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXParameterRuleExpressionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO || defined(INCLUDE_DXParameterRuleExpressionTO))
#define DXParameterRuleExpressionTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSIntListTO;
@class PSLongListTO;
@protocol PSTransferObject;

@interface DXParameterRuleExpressionTO : PSBaseTransferObject
@property (readonly, class, strong) DXParameterRuleExpressionTO *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class) jint MASK_OP_TYPE NS_SWIFT_NAME(MASK_OP_TYPE);
@property (readonly, class) jint _OP_UNARY NS_SWIFT_NAME(_OP_UNARY);
@property (readonly, class) jint _OP_BINARY NS_SWIFT_NAME(_OP_BINARY);
@property (readonly, class) jint _OP_TERNARY NS_SWIFT_NAME(_OP_TERNARY);
@property (readonly, class) jint TOKEN_OP NS_SWIFT_NAME(TOKEN_OP);
@property (readonly, class) jint TOKEN_VALUE NS_SWIFT_NAME(TOKEN_VALUE);
@property (readonly, class) jint TOKEN_VARIABLE NS_SWIFT_NAME(TOKEN_VARIABLE);
@property (readonly, class) jint OP_PLUS NS_SWIFT_NAME(OP_PLUS);
@property (readonly, class) jint OP_MINUS NS_SWIFT_NAME(OP_MINUS);
@property (readonly, class) jint OP_MUL NS_SWIFT_NAME(OP_MUL);
@property (readonly, class) jint OP_DIV NS_SWIFT_NAME(OP_DIV);
@property (readonly, class) jint OP_IF NS_SWIFT_NAME(OP_IF);
@property (readonly, class) jint OP_EQ NS_SWIFT_NAME(OP_EQ);
@property (readonly, class) jint OP_NOT NS_SWIFT_NAME(OP_NOT);
@property (readonly, class) jint OP_AND NS_SWIFT_NAME(OP_AND);
@property (readonly, class) jint OP_OR NS_SWIFT_NAME(OP_OR);
@property (readonly, class) jint OP_ABS NS_SWIFT_NAME(OP_ABS);
@property (readonly, class) jint OP_LESS NS_SWIFT_NAME(OP_LESS);
@property (readonly, class) jint OP_MORE NS_SWIFT_NAME(OP_MORE);
@property (readonly, class) jint OP_LESS_EQ NS_SWIFT_NAME(OP_LESS_EQ);
@property (readonly, class) jint OP_MORE_EQ NS_SWIFT_NAME(OP_MORE_EQ);

+ (DXParameterRuleExpressionTO *)EMPTY;

+ (jint)MASK_OP_TYPE;

+ (jint)_OP_UNARY;

+ (jint)_OP_BINARY;

+ (jint)_OP_TERNARY;

+ (jint)TOKEN_OP;

+ (jint)TOKEN_VALUE;

+ (jint)TOKEN_VARIABLE;

+ (jint)OP_PLUS;

+ (jint)OP_MINUS;

+ (jint)OP_MUL;

+ (jint)OP_DIV;

+ (jint)OP_IF;

+ (jint)OP_EQ;

+ (jint)OP_NOT;

+ (jint)OP_AND;

+ (jint)OP_OR;

+ (jint)OP_ABS;

+ (jint)OP_LESS;

+ (jint)OP_MORE;

+ (jint)OP_LESS_EQ;

+ (jint)OP_MORE_EQ;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXParameterRuleExpressionTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXParameterRuleExpressionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSIntListTO *)getTokens;

- (PSLongListTO *)getValues;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTokensWithPSIntListTO:(PSIntListTO *)tokens;

- (void)setValuesWithPSLongListTO:(PSLongListTO *)values;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXParameterRuleExpressionTO)

inline DXParameterRuleExpressionTO *DXParameterRuleExpressionTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXParameterRuleExpressionTO *DXParameterRuleExpressionTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXParameterRuleExpressionTO, EMPTY, DXParameterRuleExpressionTO *)

inline jint DXParameterRuleExpressionTO_get_MASK_OP_TYPE(void);
#define DXParameterRuleExpressionTO_MASK_OP_TYPE -65536
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, MASK_OP_TYPE, jint)

inline jint DXParameterRuleExpressionTO_get__OP_UNARY(void);
#define DXParameterRuleExpressionTO__OP_UNARY 65536
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, _OP_UNARY, jint)

inline jint DXParameterRuleExpressionTO_get__OP_BINARY(void);
#define DXParameterRuleExpressionTO__OP_BINARY 131072
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, _OP_BINARY, jint)

inline jint DXParameterRuleExpressionTO_get__OP_TERNARY(void);
#define DXParameterRuleExpressionTO__OP_TERNARY 196608
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, _OP_TERNARY, jint)

inline jint DXParameterRuleExpressionTO_get_TOKEN_OP(void);
#define DXParameterRuleExpressionTO_TOKEN_OP 1
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, TOKEN_OP, jint)

inline jint DXParameterRuleExpressionTO_get_TOKEN_VALUE(void);
#define DXParameterRuleExpressionTO_TOKEN_VALUE 2
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, TOKEN_VALUE, jint)

inline jint DXParameterRuleExpressionTO_get_TOKEN_VARIABLE(void);
#define DXParameterRuleExpressionTO_TOKEN_VARIABLE 3
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, TOKEN_VARIABLE, jint)

inline jint DXParameterRuleExpressionTO_get_OP_PLUS(void);
#define DXParameterRuleExpressionTO_OP_PLUS 131073
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_PLUS, jint)

inline jint DXParameterRuleExpressionTO_get_OP_MINUS(void);
#define DXParameterRuleExpressionTO_OP_MINUS 131074
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_MINUS, jint)

inline jint DXParameterRuleExpressionTO_get_OP_MUL(void);
#define DXParameterRuleExpressionTO_OP_MUL 131075
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_MUL, jint)

inline jint DXParameterRuleExpressionTO_get_OP_DIV(void);
#define DXParameterRuleExpressionTO_OP_DIV 131076
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_DIV, jint)

inline jint DXParameterRuleExpressionTO_get_OP_IF(void);
#define DXParameterRuleExpressionTO_OP_IF 196613
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_IF, jint)

inline jint DXParameterRuleExpressionTO_get_OP_EQ(void);
#define DXParameterRuleExpressionTO_OP_EQ 131078
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_EQ, jint)

inline jint DXParameterRuleExpressionTO_get_OP_NOT(void);
#define DXParameterRuleExpressionTO_OP_NOT 65543
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_NOT, jint)

inline jint DXParameterRuleExpressionTO_get_OP_AND(void);
#define DXParameterRuleExpressionTO_OP_AND 131080
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_AND, jint)

inline jint DXParameterRuleExpressionTO_get_OP_OR(void);
#define DXParameterRuleExpressionTO_OP_OR 131081
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_OR, jint)

inline jint DXParameterRuleExpressionTO_get_OP_ABS(void);
#define DXParameterRuleExpressionTO_OP_ABS 65546
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_ABS, jint)

inline jint DXParameterRuleExpressionTO_get_OP_LESS(void);
#define DXParameterRuleExpressionTO_OP_LESS 131083
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_LESS, jint)

inline jint DXParameterRuleExpressionTO_get_OP_MORE(void);
#define DXParameterRuleExpressionTO_OP_MORE 131084
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_MORE, jint)

inline jint DXParameterRuleExpressionTO_get_OP_LESS_EQ(void);
#define DXParameterRuleExpressionTO_OP_LESS_EQ 131085
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_LESS_EQ, jint)

inline jint DXParameterRuleExpressionTO_get_OP_MORE_EQ(void);
#define DXParameterRuleExpressionTO_OP_MORE_EQ 131086
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleExpressionTO, OP_MORE_EQ, jint)

FOUNDATION_EXPORT void DXParameterRuleExpressionTO_init(DXParameterRuleExpressionTO *self);

FOUNDATION_EXPORT DXParameterRuleExpressionTO *new_DXParameterRuleExpressionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXParameterRuleExpressionTO *create_DXParameterRuleExpressionTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXParameterRuleExpressionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO DXParameterRuleExpressionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleExpressionTO")

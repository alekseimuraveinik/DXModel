
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXParameterRuleBuilder_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder || defined(INCLUDE_DXParameterRuleBuilder))
#define DXParameterRuleBuilder_

@class DXParameterRuleTO;

@protocol DXParameterRuleBuilder < JavaObject >

- (id<DXParameterRuleBuilder>)beginWithInt:(jint)what;

- (id<DXParameterRuleBuilder>)varWithInt:(jint)i;

- (id<DXParameterRuleBuilder>)valueWithDouble:(jdouble)value;

- (id<DXParameterRuleBuilder>)doOpWithInt:(jint)op;

- (id<DXParameterRuleBuilder>)signWithInt:(jint)sign;

- (void)end;

- (DXParameterRuleTO *)build;

- (id<DXParameterRuleBuilder>)setHintBoundWithInt:(jint)bound;

@end

@interface DXParameterRuleBuilder : NSObject
@property (readonly, class) jint LEFT_BOUND NS_SWIFT_NAME(LEFT_BOUND);
@property (readonly, class) jint RIGHT_BOUND NS_SWIFT_NAME(RIGHT_BOUND);
@property (readonly, class) jint DEFAULT NS_SWIFT_NAME(DEFAULT);

+ (jint)LEFT_BOUND;

+ (jint)RIGHT_BOUND;

+ (jint)DEFAULT;

@end

J2OBJC_EMPTY_STATIC_INIT(DXParameterRuleBuilder)

inline jint DXParameterRuleBuilder_get_LEFT_BOUND(void);
#define DXParameterRuleBuilder_LEFT_BOUND 1
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBuilder, LEFT_BOUND, jint)

inline jint DXParameterRuleBuilder_get_RIGHT_BOUND(void);
#define DXParameterRuleBuilder_RIGHT_BOUND 2
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBuilder, RIGHT_BOUND, jint)

inline jint DXParameterRuleBuilder_get_DEFAULT(void);
#define DXParameterRuleBuilder_DEFAULT 3
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleBuilder, DEFAULT, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXParameterRuleBuilder)

#define ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder DXParameterRuleBuilder

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder")

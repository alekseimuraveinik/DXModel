
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXBinaryParameterRuleBuilder_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder || defined(INCLUDE_DXBinaryParameterRuleBuilder))
#define DXBinaryParameterRuleBuilder_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleBuilder 1
#define INCLUDE_DXParameterRuleBuilder 1
#include "DXParameterRuleBuilder.h"

@class DXParameterRuleTO;

@interface DXBinaryParameterRuleBuilder : NSObject < DXParameterRuleBuilder >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<DXParameterRuleBuilder>)beginWithInt:(jint)what;

- (DXParameterRuleTO *)build;

- (id<DXParameterRuleBuilder>)doOpWithInt:(jint)op;

- (id<DXParameterRuleBuilder>)doOpWithNSString:(NSString *)op;

- (void)end;

- (id<DXParameterRuleBuilder>)setHintBoundWithInt:(jint)bound;

- (id<DXParameterRuleBuilder>)signWithInt:(jint)sign;

- (id<DXParameterRuleBuilder>)signWithNSString:(NSString *)sign;

- (id<DXParameterRuleBuilder>)valueWithDouble:(jdouble)value;

- (id<DXParameterRuleBuilder>)varWithInt:(jint)i;

@end

J2OBJC_EMPTY_STATIC_INIT(DXBinaryParameterRuleBuilder)

FOUNDATION_EXPORT void DXBinaryParameterRuleBuilder_init(DXBinaryParameterRuleBuilder *self);

FOUNDATION_EXPORT DXBinaryParameterRuleBuilder *new_DXBinaryParameterRuleBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXBinaryParameterRuleBuilder *create_DXBinaryParameterRuleBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXBinaryParameterRuleBuilder)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder DXBinaryParameterRuleBuilder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleBuilder")

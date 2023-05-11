
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXBinaryParameterRuleChecker_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker || defined(INCLUDE_DXBinaryParameterRuleChecker))
#define DXBinaryParameterRuleChecker_

#define RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker 1
#define INCLUDE_DXParameterRuleChecker 1
#include "DXParameterRuleChecker.h"

@class DXParameterRuleTO;
@class IOSLongArray;
@protocol DXDecimalFormatter;

@interface DXBinaryParameterRuleChecker : NSObject < DXParameterRuleChecker >

#pragma mark Public

- (instancetype __nonnull)initWithDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter;

- (jboolean)checkBounds;

- (jlong)getDefaultValue;

- (NSString *)getFirstViolatedBoundString;

- (NSString *)getHintBound;

- (NSString *)getSecondViolatedBoundString;

- (void)setParamsWithLongArray:(IOSLongArray *)params
                       withInt:(jint)prec;

- (void)setRuleWithDXParameterRuleTO:(DXParameterRuleTO *)rule;

- (void)setViolatedBoundsModeWithInt:(jint)mode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXBinaryParameterRuleChecker)

FOUNDATION_EXPORT void DXBinaryParameterRuleChecker_initWithDXDecimalFormatter_(DXBinaryParameterRuleChecker *self, id<DXDecimalFormatter> decimalFormatter);

FOUNDATION_EXPORT DXBinaryParameterRuleChecker *new_DXBinaryParameterRuleChecker_initWithDXDecimalFormatter_(id<DXDecimalFormatter> decimalFormatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXBinaryParameterRuleChecker *create_DXBinaryParameterRuleChecker_initWithDXDecimalFormatter_(id<DXDecimalFormatter> decimalFormatter);

J2OBJC_TYPE_LITERAL_HEADER(DXBinaryParameterRuleChecker)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker DXBinaryParameterRuleChecker;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationBinaryParameterRuleChecker")

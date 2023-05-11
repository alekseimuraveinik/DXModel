
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXParameterRuleChecker_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker || defined(INCLUDE_DXParameterRuleChecker))
#define DXParameterRuleChecker_

@class DXParameterRuleTO;
@class IOSLongArray;

@protocol DXParameterRuleChecker < JavaObject >

- (void)setParamsWithLongArray:(IOSLongArray *)params
                       withInt:(jint)prec;

- (void)setViolatedBoundsModeWithInt:(jint)mode;

- (void)setRuleWithDXParameterRuleTO:(DXParameterRuleTO *)rule;

- (jboolean)checkBounds;

- (NSString *)getHintBound;

- (NSString *)getFirstViolatedBoundString;

- (NSString *)getSecondViolatedBoundString;

- (jlong)getDefaultValue;

@end

@interface DXParameterRuleChecker : NSObject
@property (readonly, class) jint VIOLATED_BOUNDS_CALCULATED NS_SWIFT_NAME(VIOLATED_BOUNDS_CALCULATED);
@property (readonly, class) jint VIOLATED_BOUNDS_UNCHANGED NS_SWIFT_NAME(VIOLATED_BOUNDS_UNCHANGED);

+ (jint)VIOLATED_BOUNDS_CALCULATED;

+ (jint)VIOLATED_BOUNDS_UNCHANGED;

@end

J2OBJC_EMPTY_STATIC_INIT(DXParameterRuleChecker)

inline jint DXParameterRuleChecker_get_VIOLATED_BOUNDS_CALCULATED(void);
#define DXParameterRuleChecker_VIOLATED_BOUNDS_CALCULATED 0
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleChecker, VIOLATED_BOUNDS_CALCULATED, jint)

inline jint DXParameterRuleChecker_get_VIOLATED_BOUNDS_UNCHANGED(void);
#define DXParameterRuleChecker_VIOLATED_BOUNDS_UNCHANGED 1
J2OBJC_STATIC_FIELD_CONSTANT(DXParameterRuleChecker, VIOLATED_BOUNDS_UNCHANGED, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXParameterRuleChecker)

#define ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker DXParameterRuleChecker

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationParameterRuleChecker")

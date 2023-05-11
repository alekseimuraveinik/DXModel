
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEntryValue_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue || defined(INCLUDE_DXMARKETOrderEntryValue))
#define DXMARKETOrderEntryValue_

@class DXMARKETValidationInfo;
@protocol DXDecimalFormatter;
@protocol DXMARKETOrderEntryValueListener;
@protocol DXMARKETOrderEntryValueParamsResolver;
@protocol DXParameterRuleChecker;

@interface DXMARKETOrderEntryValue : NSObject
@property (readonly, class) jint BUY NS_SWIFT_NAME(BUY);
@property (readonly, class) jint SELL NS_SWIFT_NAME(SELL);

+ (jint)BUY;

+ (jint)SELL;

#pragma mark Public

- (instancetype __nonnull)initWithDXParameterRuleChecker:(id<DXParameterRuleChecker>)checker
                                                 withInt:(jint)precision
                     withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
               withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                                  withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

- (instancetype __nonnull)initWithDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerBuy
                              withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerSell
                                                 withInt:(jint)precision
                     withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
               withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                                  withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

- (instancetype __nonnull)initWithDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerBuy
                              withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerSell
                     withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
               withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                                  withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checker
                                   withInt:(jint)precision
       withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
 withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                    withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerBuy
                withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerSell
                                   withInt:(jint)precision
       withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
 withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                    withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerBuy
                withDXParameterRuleChecker:(id<DXParameterRuleChecker>)checkerSell
       withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
 withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                    withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

- (void)addDependentValueWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                          withDXParameterRuleChecker:(id<DXParameterRuleChecker>)buyRule
                          withDXParameterRuleChecker:(id<DXParameterRuleChecker>)sellRule;

- (void)clearDependentValues;

- (jlong)getDecimalValue;

- (jdouble)getIncrement;

- (jint)getPrecision;

- (DXMARKETValidationInfo *)getValidationInfo;

- (jboolean)hasError;

- (jboolean)isEditable;

- (void)refreshWithInt:(jint)side;

- (void)reset;

- (void)setEditableWithBoolean:(jboolean)editable;

- (void)setIncrementWithDouble:(jdouble)increment;

- (jboolean)setNewValueFromInputWithInt:(jint)side
                           withNSString:(NSString *)value
                           withNSString:(NSString *)regex;

- (void)setPrecisionWithInt:(jint)precision;

- (void)stepWithInt:(jint)side
        withBoolean:(jboolean)forward
       withNSString:(NSString *)regex;

- (void)stopAutoUpdate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEntryValue)

inline jint DXMARKETOrderEntryValue_get_BUY(void);
#define DXMARKETOrderEntryValue_BUY 0
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderEntryValue, BUY, jint)

inline jint DXMARKETOrderEntryValue_get_SELL(void);
#define DXMARKETOrderEntryValue_SELL 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderEntryValue, SELL, jint)

FOUNDATION_EXPORT void DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(DXMARKETOrderEntryValue *self, NSString *name, id<DXParameterRuleChecker> checker, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT DXMARKETOrderEntryValue *new_DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(NSString *name, id<DXParameterRuleChecker> checker, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryValue *create_DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(NSString *name, id<DXParameterRuleChecker> checker, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT void DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(DXMARKETOrderEntryValue *self, id<DXParameterRuleChecker> checker, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT DXMARKETOrderEntryValue *new_DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(id<DXParameterRuleChecker> checker, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryValue *create_DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(id<DXParameterRuleChecker> checker, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT void DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withDXParameterRuleChecker_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(DXMARKETOrderEntryValue *self, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT DXMARKETOrderEntryValue *new_DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withDXParameterRuleChecker_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryValue *create_DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withDXParameterRuleChecker_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT void DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withDXParameterRuleChecker_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(DXMARKETOrderEntryValue *self, NSString *name, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT DXMARKETOrderEntryValue *new_DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withDXParameterRuleChecker_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(NSString *name, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryValue *create_DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withDXParameterRuleChecker_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(NSString *name, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT void DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(DXMARKETOrderEntryValue *self, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT DXMARKETOrderEntryValue *new_DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryValue *create_DXMARKETOrderEntryValue_initWithDXParameterRuleChecker_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT void DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(DXMARKETOrderEntryValue *self, NSString *name, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

FOUNDATION_EXPORT DXMARKETOrderEntryValue *new_DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(NSString *name, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryValue *create_DXMARKETOrderEntryValue_initWithNSString_withDXParameterRuleChecker_withDXParameterRuleChecker_withInt_withDXMARKETOrderEntryValueListener_withDXMARKETOrderEntryValueParamsResolver_withDXDecimalFormatter_(NSString *name, id<DXParameterRuleChecker> checkerBuy, id<DXParameterRuleChecker> checkerSell, jint precision, id<DXMARKETOrderEntryValueListener> listener, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXDecimalFormatter> formatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEntryValue)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue DXMARKETOrderEntryValue;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValue")

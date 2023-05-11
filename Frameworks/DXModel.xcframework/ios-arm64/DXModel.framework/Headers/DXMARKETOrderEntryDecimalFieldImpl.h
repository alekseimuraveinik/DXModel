
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEntryDecimalFieldImpl_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl || defined(INCLUDE_DXMARKETOrderEntryDecimalFieldImpl))
#define DXMARKETOrderEntryDecimalFieldImpl_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField 1
#define INCLUDE_DXMARKETOrderEntryDecimalField 1
#include "DXMARKETOrderEntryDecimalField.h"

@class DXDecimalFieldDescriptorTO;
@class DXMARKETOrderEntryValue;
@class IOSObjectArray;
@protocol DXDecimalFormatter;
@protocol DXMARKETOrderEntryValueListener;
@protocol DXMARKETOrderEntryValueParamsResolver;

@interface DXMARKETOrderEntryDecimalFieldImpl : NSObject < DXMARKETOrderEntryDecimalField > {
 @public
  id<DXDecimalFormatter> decimalFormatter_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter
                                             withInt:(jint)violatedBoundsMode
           withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                 withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
                                             withInt:(jint)precision;

- (instancetype __nonnull)initWithDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter
                                             withInt:(jint)violatedBoundsMode
           withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                 withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
                                             withInt:(jint)buyPrecision
                                             withInt:(jint)sellPrecision;

- (instancetype __nonnull)initWithDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter
                                             withInt:(jint)violatedBoundsMode
           withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                 withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
                                        withNSString:(NSString *)inputValidationRegex
                                             withInt:(jint)precision;

- (instancetype __nonnull)initWithDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter
                                             withInt:(jint)violatedBoundsMode
           withDXMARKETOrderEntryValueParamsResolver:(id<DXMARKETOrderEntryValueParamsResolver>)resolver
                 withDXMARKETOrderEntryValueListener:(id<DXMARKETOrderEntryValueListener>)listener
                                        withNSString:(NSString *)buyInputValidationRegex
                                        withNSString:(NSString *)sellInputValidationRegex
                                             withInt:(jint)buyPrecision
                                             withInt:(jint)sellPrecision;

- (void)dependsOnWithDXMARKETOrderEntryDecimalFieldArray:(IOSObjectArray *)fields;

- (jint)getBuyPrecision;

- (jlong)getDecimalValue;

- (jint)getSellPrecision;

- (NSString *)getStringValue;

- (DXMARKETOrderEntryValue *)getValue;

- (void)refreshValueWithBoolean:(jboolean)isBuy;

- (void)sendUpdate;

- (void)setRulesDescriptorWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)descriptor
                                             withBoolean:(jboolean)isBuy
                                             withBoolean:(jboolean)refresh;

- (void)setStringValueWithNSString:(NSString *)value
                       withBoolean:(jboolean)isBuy;

- (void)stepValueWithBoolean:(jboolean)forward
                 withBoolean:(jboolean)isBuy;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEntryDecimalFieldImpl)

J2OBJC_FIELD_SETTER(DXMARKETOrderEntryDecimalFieldImpl, decimalFormatter_, id<DXDecimalFormatter>)

FOUNDATION_EXPORT void DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withInt_(DXMARKETOrderEntryDecimalFieldImpl *self, id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, jint precision);

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *new_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, jint precision) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *create_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, jint precision);

FOUNDATION_EXPORT void DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withInt_withInt_(DXMARKETOrderEntryDecimalFieldImpl *self, id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, jint buyPrecision, jint sellPrecision);

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *new_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withInt_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, jint buyPrecision, jint sellPrecision) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *create_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withInt_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, jint buyPrecision, jint sellPrecision);

FOUNDATION_EXPORT void DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withNSString_withInt_(DXMARKETOrderEntryDecimalFieldImpl *self, id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, NSString *inputValidationRegex, jint precision);

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *new_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withNSString_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, NSString *inputValidationRegex, jint precision) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *create_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withNSString_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, NSString *inputValidationRegex, jint precision);

FOUNDATION_EXPORT void DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withNSString_withNSString_withInt_withInt_(DXMARKETOrderEntryDecimalFieldImpl *self, id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, NSString *buyInputValidationRegex, NSString *sellInputValidationRegex, jint buyPrecision, jint sellPrecision);

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *new_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withNSString_withNSString_withInt_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, NSString *buyInputValidationRegex, NSString *sellInputValidationRegex, jint buyPrecision, jint sellPrecision) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEntryDecimalFieldImpl *create_DXMARKETOrderEntryDecimalFieldImpl_initWithDXDecimalFormatter_withInt_withDXMARKETOrderEntryValueParamsResolver_withDXMARKETOrderEntryValueListener_withNSString_withNSString_withInt_withInt_(id<DXDecimalFormatter> decimalFormatter, jint violatedBoundsMode, id<DXMARKETOrderEntryValueParamsResolver> resolver, id<DXMARKETOrderEntryValueListener> listener, NSString *buyInputValidationRegex, NSString *sellInputValidationRegex, jint buyPrecision, jint sellPrecision);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEntryDecimalFieldImpl)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl DXMARKETOrderEntryDecimalFieldImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalFieldImpl")

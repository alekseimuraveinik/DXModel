
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEntryDecimalField_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField || defined(INCLUDE_DXMARKETOrderEntryDecimalField))
#define DXMARKETOrderEntryDecimalField_

@class DXDecimalFieldDescriptorTO;
@class DXMARKETOrderEntryValue;
@class IOSObjectArray;

@protocol DXMARKETOrderEntryDecimalField < JavaObject >

- (jint)getBuyPrecision;

- (jint)getSellPrecision;

- (NSString *)getStringValue;

- (jlong)getDecimalValue;

- (void)dependsOnWithDXMARKETOrderEntryDecimalFieldArray:(IOSObjectArray *)fields;

- (DXMARKETOrderEntryValue *)getValue;

- (void)refreshValueWithBoolean:(jboolean)isBuy;

- (void)sendUpdate;

- (void)setStringValueWithNSString:(NSString *)value
                       withBoolean:(jboolean)isBuy;

- (void)setRulesDescriptorWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)descriptor
                                             withBoolean:(jboolean)isBuy
                                             withBoolean:(jboolean)toRefresh;

- (void)stepValueWithBoolean:(jboolean)forward
                 withBoolean:(jboolean)isBuy;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEntryDecimalField)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEntryDecimalField)

#define ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField DXMARKETOrderEntryDecimalField

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryDecimalField")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCashOrderErrorBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder || defined(INCLUDE_DXMARKETCashOrderErrorBuilder))
#define DXMARKETCashOrderErrorBuilder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder 1
#define INCLUDE_DXMARKETErrorBuilder 1
#include "DXMARKETErrorBuilder.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETOrderEntryValue;
@protocol DXMARKETOrderEntryDecimalField;

@interface DXMARKETCashOrderErrorBuilder : NSObject < DXMARKETErrorBuilder >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order
                        withDXMARKETOrderEntryDecimalField:(id<DXMARKETOrderEntryDecimalField>)spend
                        withDXMARKETOrderEntryDecimalField:(id<DXMARKETOrderEntryDecimalField>)price
                        withDXMARKETOrderEntryDecimalField:(id<DXMARKETOrderEntryDecimalField>)receive
                                                   withInt:(jint)pipSize;

- (NSString *)buildErrorWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                 withNSString:(NSString *)bounds;

- (NSString *)buildErrorWithMinIncrementWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                       withNSString:(NSString *)increment;

- (NSString *)buildHintWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                withNSString:(NSString *)bounds;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCashOrderErrorBuilder)

FOUNDATION_EXPORT void DXMARKETCashOrderErrorBuilder_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_withDXMARKETOrderEntryDecimalField_withDXMARKETOrderEntryDecimalField_withDXMARKETOrderEntryDecimalField_withInt_(DXMARKETCashOrderErrorBuilder *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *order, id<DXMARKETOrderEntryDecimalField> spend, id<DXMARKETOrderEntryDecimalField> price, id<DXMARKETOrderEntryDecimalField> receive, jint pipSize);

FOUNDATION_EXPORT DXMARKETCashOrderErrorBuilder *new_DXMARKETCashOrderErrorBuilder_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_withDXMARKETOrderEntryDecimalField_withDXMARKETOrderEntryDecimalField_withDXMARKETOrderEntryDecimalField_withInt_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *order, id<DXMARKETOrderEntryDecimalField> spend, id<DXMARKETOrderEntryDecimalField> price, id<DXMARKETOrderEntryDecimalField> receive, jint pipSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCashOrderErrorBuilder *create_DXMARKETCashOrderErrorBuilder_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_withDXMARKETOrderEntryDecimalField_withDXMARKETOrderEntryDecimalField_withDXMARKETOrderEntryDecimalField_withInt_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *order, id<DXMARKETOrderEntryDecimalField> spend, id<DXMARKETOrderEntryDecimalField> price, id<DXMARKETOrderEntryDecimalField> receive, jint pipSize);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCashOrderErrorBuilder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder DXMARKETCashOrderErrorBuilder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueCashOrderErrorBuilder")

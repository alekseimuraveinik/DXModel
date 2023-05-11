
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAttachedLimitOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder || defined(INCLUDE_DXMARKETAttachedLimitOrder))
#define DXMARKETAttachedLimitOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder 1
#define INCLUDE_DXMARKETAttachedOrder 1
#include "DXMARKETAttachedOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXPricedOrderTemplateTO;
@protocol DXMARKETOrderErrorStringProvider;

@interface DXMARKETAttachedLimitOrder : DXMARKETAttachedOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params;

#pragma mark Protected

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

- (NSString *)offsetErrorWithDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (NSString *)priceErrorWithBoolean:(jboolean)relative
withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

#pragma mark Package-Private

- (jlong)getTpBasePrice;

- (void)updateTpBasePriceWithLong:(jlong)tpPrice;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAttachedLimitOrder)

FOUNDATION_EXPORT void DXMARKETAttachedLimitOrder_initWithDXMARKETOrderEditorModel_(DXMARKETAttachedLimitOrder *self, DXMARKETOrderEditorModel *params);

FOUNDATION_EXPORT DXMARKETAttachedLimitOrder *new_DXMARKETAttachedLimitOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAttachedLimitOrder *create_DXMARKETAttachedLimitOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAttachedLimitOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder DXMARKETAttachedLimitOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedLimitOrder")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAttachedStopOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder || defined(INCLUDE_DXMARKETAttachedStopOrder))
#define DXMARKETAttachedStopOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder 1
#define INCLUDE_DXMARKETAttachedOrder 1
#include "DXMARKETAttachedOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderTemplateTO;
@class DXStopTypeEnum;
@protocol DXMARKETOrderData;
@protocol DXMARKETOrderErrorStringProvider;

@interface DXMARKETAttachedStopOrder : DXMARKETAttachedOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params;

- (jlong)getPipsValidationDistance;

- (DXStopTypeEnum *)getStopType;

- (jboolean)isPriceChangeable;

- (jboolean)isStopTypeEditable;

- (jboolean)isTrail;

- (jboolean)isTrailModeEditable;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (void)setPipsValidationDistanceWithLong:(jlong)pipsValidationDistance;

- (void)setStopTypeWithDXStopTypeEnum:(DXStopTypeEnum *)type;

- (void)setTrailWithBoolean:(jboolean)trail;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

#pragma mark Protected

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

- (NSString *)offsetErrorWithDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (NSString *)priceErrorWithBoolean:(jboolean)relative
withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

#pragma mark Package-Private

- (jlong)getSlBasePrice;

- (void)updateSlBasePriceWithLong:(jlong)slPrice;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAttachedStopOrder)

FOUNDATION_EXPORT void DXMARKETAttachedStopOrder_initWithDXMARKETOrderEditorModel_(DXMARKETAttachedStopOrder *self, DXMARKETOrderEditorModel *params);

FOUNDATION_EXPORT DXMARKETAttachedStopOrder *new_DXMARKETAttachedStopOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAttachedStopOrder *create_DXMARKETAttachedStopOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAttachedStopOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder DXMARKETAttachedStopOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedStopOrder")

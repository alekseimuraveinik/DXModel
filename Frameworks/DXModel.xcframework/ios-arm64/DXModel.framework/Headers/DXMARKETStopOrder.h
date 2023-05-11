
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseStopOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseStopOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStopOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopOrder || defined(INCLUDE_DXMARKETStopOrder))
#define DXMARKETStopOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder 1
#define INCLUDE_DXMARKETProtectedOrder 1
#include "DXMARKETProtectedOrder.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderTemplateTO;

@interface DXMARKETStopOrder : DXMARKETProtectedOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)type;

- (NSString *)getTrailValueString;

- (DXMARKETValidationInfo *)getTrailValueValidationInfo;

- (jboolean)isPriceChangeable;

- (jboolean)isStopLossToggleChangeable;

- (jboolean)isTakeProfitToggleChangeable;

- (jboolean)isTrail;

- (jboolean)isTrailModeEditable;

- (void)setTrailWithBoolean:(jboolean)trail;

- (jboolean)setTrailValueWithNSString:(NSString *)trailValueStr;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

- (void)updateStateWithPriceWithLong:(jlong)price;

#pragma mark Protected

- (jboolean)checkIfCorrectWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)typeTO;

- (void)clearPrimaryList;

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

- (void)onBuyUpdatedWithBoolean:(jboolean)buy;

- (void)onQuantityChanged;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

- (jboolean)validateImpl;

#pragma mark Package-Private

- (jlong)getDecimalTrailValue;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStopOrder)

FOUNDATION_EXPORT void DXMARKETStopOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETStopOrder *self, DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type);

FOUNDATION_EXPORT DXMARKETStopOrder *new_DXMARKETStopOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStopOrder *create_DXMARKETStopOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStopOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseStopOrder DXMARKETStopOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopOrder")

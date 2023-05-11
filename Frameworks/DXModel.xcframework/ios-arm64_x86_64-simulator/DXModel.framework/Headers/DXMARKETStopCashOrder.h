
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStopCashOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder || defined(INCLUDE_DXMARKETStopCashOrder))
#define DXMARKETStopCashOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder 1
#define INCLUDE_DXMARKETAbstractCashOrder 1
#include "DXMARKETAbstractCashOrder.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice 1
#define INCLUDE_DXMARKETWithEditablePrice 1
#include "DXMARKETWithEditablePrice.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;

@interface DXMARKETStopCashOrder : DXMARKETAbstractCashOrder < DXMARKETWithEditablePrice >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (NSString *)getPrice;

- (DXMARKETValidationInfo *)getPriceValidationInfo;

- (jlong)getPriseValue;

- (void)setPriceWithNSString:(NSString *)price;

- (void)stepPraisWithBoolean:(jboolean)forward;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStopCashOrder)

FOUNDATION_EXPORT void DXMARKETStopCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETStopCashOrder *self, DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

FOUNDATION_EXPORT DXMARKETStopCashOrder *new_DXMARKETStopCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETStopCashOrder *create_DXMARKETStopCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStopCashOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder DXMARKETStopCashOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseStopCashOrder")

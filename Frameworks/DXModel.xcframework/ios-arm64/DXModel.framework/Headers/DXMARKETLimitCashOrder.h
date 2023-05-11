
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLimitCashOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder || defined(INCLUDE_DXMARKETLimitCashOrder))
#define DXMARKETLimitCashOrder_

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

@interface DXMARKETLimitCashOrder : DXMARKETAbstractCashOrder < DXMARKETWithEditablePrice >

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

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLimitCashOrder)

FOUNDATION_EXPORT void DXMARKETLimitCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETLimitCashOrder *self, DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

FOUNDATION_EXPORT DXMARKETLimitCashOrder *new_DXMARKETLimitCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETLimitCashOrder *create_DXMARKETLimitCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLimitCashOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder DXMARKETLimitCashOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitCashOrder")

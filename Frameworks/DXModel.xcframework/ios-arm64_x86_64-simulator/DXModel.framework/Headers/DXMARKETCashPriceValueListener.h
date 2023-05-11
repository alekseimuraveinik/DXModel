
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCashPriceValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener || defined(INCLUDE_DXMARKETCashPriceValueListener))
#define DXMARKETCashPriceValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;

@interface DXMARKETCashPriceValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)abstractCashOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCashPriceValueListener)

FOUNDATION_EXPORT void DXMARKETCashPriceValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETCashPriceValueListener *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

FOUNDATION_EXPORT DXMARKETCashPriceValueListener *new_DXMARKETCashPriceValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCashPriceValueListener *create_DXMARKETCashPriceValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCashPriceValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener DXMARKETCashPriceValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashPriceValueListener")

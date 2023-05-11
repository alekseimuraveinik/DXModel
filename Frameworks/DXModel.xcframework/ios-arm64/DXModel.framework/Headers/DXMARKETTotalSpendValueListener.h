
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETTotalSpendValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener || defined(INCLUDE_DXMARKETTotalSpendValueListener))
#define DXMARKETTotalSpendValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;

@interface DXMARKETTotalSpendValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)abstractCashOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETTotalSpendValueListener)

FOUNDATION_EXPORT void DXMARKETTotalSpendValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETTotalSpendValueListener *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

FOUNDATION_EXPORT DXMARKETTotalSpendValueListener *new_DXMARKETTotalSpendValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETTotalSpendValueListener *create_DXMARKETTotalSpendValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETTotalSpendValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener DXMARKETTotalSpendValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseTotalSpendValueListener")

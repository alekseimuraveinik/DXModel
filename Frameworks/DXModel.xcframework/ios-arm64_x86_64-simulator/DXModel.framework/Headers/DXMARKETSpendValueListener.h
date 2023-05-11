
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSpendValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener || defined(INCLUDE_DXMARKETSpendValueListener))
#define DXMARKETSpendValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;

@interface DXMARKETSpendValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)abstractCashOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSpendValueListener)

FOUNDATION_EXPORT void DXMARKETSpendValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETSpendValueListener *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

FOUNDATION_EXPORT DXMARKETSpendValueListener *new_DXMARKETSpendValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSpendValueListener *create_DXMARKETSpendValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSpendValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener DXMARKETSpendValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSpendValueListener")

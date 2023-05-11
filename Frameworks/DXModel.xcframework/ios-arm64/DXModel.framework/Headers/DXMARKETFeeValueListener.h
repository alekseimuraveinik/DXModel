
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETFeeValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener || defined(INCLUDE_DXMARKETFeeValueListener))
#define DXMARKETFeeValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;

@interface DXMARKETFeeValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)abstractCashOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETFeeValueListener)

FOUNDATION_EXPORT void DXMARKETFeeValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETFeeValueListener *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

FOUNDATION_EXPORT DXMARKETFeeValueListener *new_DXMARKETFeeValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETFeeValueListener *create_DXMARKETFeeValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETFeeValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener DXMARKETFeeValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseFeeValueListener")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETReceiveValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener || defined(INCLUDE_DXMARKETReceiveValueListener))
#define DXMARKETReceiveValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;

@interface DXMARKETReceiveValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)abstractCashOrder;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETReceiveValueListener)

FOUNDATION_EXPORT void DXMARKETReceiveValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETReceiveValueListener *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

FOUNDATION_EXPORT DXMARKETReceiveValueListener *new_DXMARKETReceiveValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETReceiveValueListener *create_DXMARKETReceiveValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *abstractCashOrder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETReceiveValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener DXMARKETReceiveValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseReceiveValueListener")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCashOrderEntryBuySellFieldImpl_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl || defined(INCLUDE_DXMARKETCashOrderEntryBuySellFieldImpl))
#define DXMARKETCashOrderEntryBuySellFieldImpl_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField 1
#define INCLUDE_DXMARKETOrderEntryBuySellField 1
#include "DXMARKETOrderEntryBuySellField.h"

@class DXMARKETAbstractCashOrder;
@class DXMARKETOrderEditorModel;

@interface DXMARKETCashOrderEntryBuySellFieldImpl : NSObject < DXMARKETOrderEntryBuySellField > {
 @public
  DXMARKETOrderEditorModel *model_;
  DXMARKETAbstractCashOrder *order_;
  jboolean isBuy_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                             withDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order
                                               withBoolean:(jboolean)defaultIsBuy;

- (jboolean)getBuy;

- (void)setBuyWithBoolean:(jboolean)isBuy;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCashOrderEntryBuySellFieldImpl)

J2OBJC_FIELD_SETTER(DXMARKETCashOrderEntryBuySellFieldImpl, model_, DXMARKETOrderEditorModel *)
J2OBJC_FIELD_SETTER(DXMARKETCashOrderEntryBuySellFieldImpl, order_, DXMARKETAbstractCashOrder *)

FOUNDATION_EXPORT void DXMARKETCashOrderEntryBuySellFieldImpl_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_withBoolean_(DXMARKETCashOrderEntryBuySellFieldImpl *self, DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *order, jboolean defaultIsBuy);

FOUNDATION_EXPORT DXMARKETCashOrderEntryBuySellFieldImpl *new_DXMARKETCashOrderEntryBuySellFieldImpl_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_withBoolean_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *order, jboolean defaultIsBuy) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCashOrderEntryBuySellFieldImpl *create_DXMARKETCashOrderEntryBuySellFieldImpl_initWithDXMARKETOrderEditorModel_withDXMARKETAbstractCashOrder_withBoolean_(DXMARKETOrderEditorModel *model, DXMARKETAbstractCashOrder *order, jboolean defaultIsBuy);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCashOrderEntryBuySellFieldImpl)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl DXMARKETCashOrderEntryBuySellFieldImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashCashOrderEntryBuySellFieldImpl")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPricedOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO || defined(INCLUDE_DXPricedOrderTemplateTO))
#define DXPricedOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO 1
#define INCLUDE_DXSizedOrderTemplateTO 1
#include "DXSizedOrderTemplateTO.h"

@class DXOrderOperationEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPricedOrderTemplateTO : DXSizedOrderTemplateTO

#pragma mark Public

- (DXPricedOrderTemplateTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (DXOrderOperationEnum *)getOperation;

- (jlong)getPrice;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOperationWithDXOrderOperationEnum:(DXOrderOperationEnum *)operation;

- (void)setPriceWithLong:(jlong)price;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXPricedOrderTemplateTO)

FOUNDATION_EXPORT void DXPricedOrderTemplateTO_init(DXPricedOrderTemplateTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXPricedOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO DXPricedOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAttachOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO || defined(INCLUDE_DXAttachOrderTemplateTO))
#define DXAttachOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 1
#define INCLUDE_DXPricedOrderTemplateTO 1
#include "DXPricedOrderTemplateTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAttachOrderTemplateTO : DXPricedOrderTemplateTO

#pragma mark Public

- (DXAttachOrderTemplateTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (jlong)getPriceOffset;

- (NSUInteger)hash;

- (jboolean)isOffsetOrder;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPriceOffsetWithLong:(jlong)priceOffset;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAttachOrderTemplateTO)

FOUNDATION_EXPORT void DXAttachOrderTemplateTO_init(DXAttachOrderTemplateTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXAttachOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO DXAttachOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO")

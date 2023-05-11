
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSizedOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO || defined(INCLUDE_DXSizedOrderTemplateTO))
#define DXSizedOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO 1
#define INCLUDE_DXOrderTemplateTO 1
#include "DXOrderTemplateTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXSizedOrderTemplateTO : DXOrderTemplateTO

#pragma mark Public

- (DXSizedOrderTemplateTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (jlong)getQuantity;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setQuantityWithLong:(jlong)quantity;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXSizedOrderTemplateTO)

FOUNDATION_EXPORT void DXSizedOrderTemplateTO_init(DXSizedOrderTemplateTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXSizedOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO DXSizedOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO")

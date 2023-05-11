
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO || defined(INCLUDE_DXOrderTemplateTO))
#define DXOrderTemplateTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXOrderValidationParamsTO;
@protocol DXOrderTemplateVisitor;

@interface DXOrderTemplateTO : PSBaseTransferObject

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderValidationParamsTO *)constructParams;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderTemplateTO)

FOUNDATION_EXPORT void DXOrderTemplateTO_init(DXOrderTemplateTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO DXOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO")

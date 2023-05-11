
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLimitAttachOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO || defined(INCLUDE_DXLimitAttachOrderTemplateTO))
#define DXLimitAttachOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO 1
#define INCLUDE_DXAttachOrderTemplateTO 1
#include "DXAttachOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXLimitAttachOrderTemplateTO : DXAttachOrderTemplateTO
@property (readonly, class, strong) DXLimitAttachOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLimitAttachOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXLimitAttachOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (DXLimitAttachOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXLimitAttachOrderTemplateTO)

inline DXLimitAttachOrderTemplateTO *DXLimitAttachOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLimitAttachOrderTemplateTO *DXLimitAttachOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLimitAttachOrderTemplateTO, EMPTY, DXLimitAttachOrderTemplateTO *)

FOUNDATION_EXPORT void DXLimitAttachOrderTemplateTO_init(DXLimitAttachOrderTemplateTO *self);

FOUNDATION_EXPORT DXLimitAttachOrderTemplateTO *new_DXLimitAttachOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLimitAttachOrderTemplateTO *create_DXLimitAttachOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLimitAttachOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO DXLimitAttachOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitAttachOrderTemplateTO")

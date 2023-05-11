
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLimitOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO || defined(INCLUDE_DXLimitOrderTemplateTO))
#define DXLimitOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 1
#define INCLUDE_DXPricedOrderTemplateTO 1
#include "DXPricedOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXLimitOrderTemplateTO : DXPricedOrderTemplateTO
@property (readonly, class, strong) DXLimitOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLimitOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXLimitOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (DXLimitOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXLimitOrderTemplateTO)

inline DXLimitOrderTemplateTO *DXLimitOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLimitOrderTemplateTO *DXLimitOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLimitOrderTemplateTO, EMPTY, DXLimitOrderTemplateTO *)

FOUNDATION_EXPORT void DXLimitOrderTemplateTO_init(DXLimitOrderTemplateTO *self);

FOUNDATION_EXPORT DXLimitOrderTemplateTO *new_DXLimitOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLimitOrderTemplateTO *create_DXLimitOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLimitOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO DXLimitOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateLimitOrderTemplateTO")

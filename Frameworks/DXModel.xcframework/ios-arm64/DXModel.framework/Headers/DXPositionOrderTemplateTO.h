
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO || defined(INCLUDE_DXPositionOrderTemplateTO))
#define DXPositionOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 1
#define INCLUDE_DXPricedOrderTemplateTO 1
#include "DXPricedOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXPositionOrderTemplateTO : DXPricedOrderTemplateTO
@property (readonly, class, strong) DXPositionOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPositionOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (DXPositionOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXPositionOrderTemplateTO)

inline DXPositionOrderTemplateTO *DXPositionOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionOrderTemplateTO *DXPositionOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionOrderTemplateTO, EMPTY, DXPositionOrderTemplateTO *)

FOUNDATION_EXPORT void DXPositionOrderTemplateTO_init(DXPositionOrderTemplateTO *self);

FOUNDATION_EXPORT DXPositionOrderTemplateTO *new_DXPositionOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionOrderTemplateTO *create_DXPositionOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO DXPositionOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplatePositionOrderTemplateTO")

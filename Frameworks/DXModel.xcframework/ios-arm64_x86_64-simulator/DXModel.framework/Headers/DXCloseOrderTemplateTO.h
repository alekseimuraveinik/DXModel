
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCloseOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO || defined(INCLUDE_DXCloseOrderTemplateTO))
#define DXCloseOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO 1
#define INCLUDE_DXSizedOrderTemplateTO 1
#include "DXSizedOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXCloseOrderTemplateTO : DXSizedOrderTemplateTO
@property (readonly, class, strong) DXCloseOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCloseOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCloseOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (DXCloseOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXCloseOrderTemplateTO)

inline DXCloseOrderTemplateTO *DXCloseOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCloseOrderTemplateTO *DXCloseOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCloseOrderTemplateTO, EMPTY, DXCloseOrderTemplateTO *)

FOUNDATION_EXPORT void DXCloseOrderTemplateTO_init(DXCloseOrderTemplateTO *self);

FOUNDATION_EXPORT DXCloseOrderTemplateTO *new_DXCloseOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseOrderTemplateTO *create_DXCloseOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCloseOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO DXCloseOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateCloseOrderTemplateTO")

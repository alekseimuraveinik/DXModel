
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEmptyOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO || defined(INCLUDE_DXEmptyOrderTemplateTO))
#define DXEmptyOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO 1
#define INCLUDE_DXOrderTemplateTO 1
#include "DXOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXEmptyOrderTemplateTO : DXOrderTemplateTO
@property (readonly, class, strong) DXEmptyOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEmptyOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXEmptyOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (DXEmptyOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXEmptyOrderTemplateTO)

inline DXEmptyOrderTemplateTO *DXEmptyOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEmptyOrderTemplateTO *DXEmptyOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEmptyOrderTemplateTO, EMPTY, DXEmptyOrderTemplateTO *)

FOUNDATION_EXPORT void DXEmptyOrderTemplateTO_init(DXEmptyOrderTemplateTO *self);

FOUNDATION_EXPORT DXEmptyOrderTemplateTO *new_DXEmptyOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEmptyOrderTemplateTO *create_DXEmptyOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEmptyOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO DXEmptyOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateEmptyOrderTemplateTO")

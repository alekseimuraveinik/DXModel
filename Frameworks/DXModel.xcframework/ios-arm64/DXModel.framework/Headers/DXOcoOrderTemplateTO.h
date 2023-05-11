
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOcoOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO || defined(INCLUDE_DXOcoOrderTemplateTO))
#define DXOcoOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateSizedOrderTemplateTO 1
#define INCLUDE_DXSizedOrderTemplateTO 1
#include "DXSizedOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXOcoOrderTemplateTO : DXSizedOrderTemplateTO
@property (readonly, class, strong) DXOcoOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOcoOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOcoOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOcoOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOrdersWithPSListTO:(PSListTO *)orders;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOcoOrderTemplateTO)

inline DXOcoOrderTemplateTO *DXOcoOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOcoOrderTemplateTO *DXOcoOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOcoOrderTemplateTO, EMPTY, DXOcoOrderTemplateTO *)

FOUNDATION_EXPORT void DXOcoOrderTemplateTO_init(DXOcoOrderTemplateTO *self);

FOUNDATION_EXPORT DXOcoOrderTemplateTO *new_DXOcoOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOcoOrderTemplateTO *create_DXOcoOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOcoOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO DXOcoOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOcoOrderTemplateTO")

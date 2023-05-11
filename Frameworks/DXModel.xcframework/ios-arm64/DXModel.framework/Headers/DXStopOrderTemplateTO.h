
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStopOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO || defined(INCLUDE_DXStopOrderTemplateTO))
#define DXStopOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplatePricedOrderTemplateTO 1
#define INCLUDE_DXPricedOrderTemplateTO 1
#include "DXPricedOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@class DXStopTypeEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXStopOrderTemplateTO : DXPricedOrderTemplateTO
@property (readonly, class, strong) DXStopOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStopOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStopOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStopOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXStopTypeEnum *)getStopType;

- (jlong)getTrailingOffset;

- (NSUInteger)hash;

- (jboolean)isTrailingStop;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setStopTypeWithDXStopTypeEnum:(DXStopTypeEnum *)stopType;

- (void)setTrailingOffsetWithLong:(jlong)trailingOffset;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStopOrderTemplateTO)

inline DXStopOrderTemplateTO *DXStopOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopOrderTemplateTO *DXStopOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopOrderTemplateTO, EMPTY, DXStopOrderTemplateTO *)

FOUNDATION_EXPORT void DXStopOrderTemplateTO_init(DXStopOrderTemplateTO *self);

FOUNDATION_EXPORT DXStopOrderTemplateTO *new_DXStopOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopOrderTemplateTO *create_DXStopOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStopOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO DXStopOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopOrderTemplateTO")

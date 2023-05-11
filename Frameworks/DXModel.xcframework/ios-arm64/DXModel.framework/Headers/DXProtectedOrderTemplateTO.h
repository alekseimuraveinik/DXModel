
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXProtectedOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO || defined(INCLUDE_DXProtectedOrderTemplateTO))
#define DXProtectedOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateTO 1
#define INCLUDE_DXOrderTemplateTO 1
#include "DXOrderTemplateTO.h"

@class DXLimitAttachOrderTemplateTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderTemplateTO;
@class DXStopAttachOrderTemplateTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXProtectedOrderTemplateTO : DXOrderTemplateTO
@property (readonly, class, strong) DXProtectedOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXProtectedOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXProtectedOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXProtectedOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXPricedOrderTemplateTO *)getOrderTemplate;

- (DXStopAttachOrderTemplateTO *)getStopLossTemplate;

- (DXLimitAttachOrderTemplateTO *)getTakeProfitTemplate;

- (NSUInteger)hash;

- (jboolean)isStopLossEnabled;

- (jboolean)isTakeProfitEnabled;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOrderTemplateWithDXPricedOrderTemplateTO:(DXPricedOrderTemplateTO *)orderTemplate;

- (void)setStopLossEnabledWithBoolean:(jboolean)stopLossEnabled;

- (void)setStopLossTemplateWithDXStopAttachOrderTemplateTO:(DXStopAttachOrderTemplateTO *)stopLossTemplate;

- (void)setTakeProfitEnabledWithBoolean:(jboolean)takeProfitEnabled;

- (void)setTakeProfitTemplateWithDXLimitAttachOrderTemplateTO:(DXLimitAttachOrderTemplateTO *)takeProfitTemplate;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXProtectedOrderTemplateTO)

inline DXProtectedOrderTemplateTO *DXProtectedOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXProtectedOrderTemplateTO *DXProtectedOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXProtectedOrderTemplateTO, EMPTY, DXProtectedOrderTemplateTO *)

FOUNDATION_EXPORT void DXProtectedOrderTemplateTO_init(DXProtectedOrderTemplateTO *self);

FOUNDATION_EXPORT DXProtectedOrderTemplateTO *new_DXProtectedOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXProtectedOrderTemplateTO *create_DXProtectedOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXProtectedOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO DXProtectedOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateProtectedOrderTemplateTO")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStopAttachOrderTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO || defined(INCLUDE_DXStopAttachOrderTemplateTO))
#define DXStopAttachOrderTemplateTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateAttachOrderTemplateTO 1
#define INCLUDE_DXAttachOrderTemplateTO 1
#include "DXAttachOrderTemplateTO.h"

@class DXOrderValidationParamsTO;
@class DXStopTypeEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXOrderTemplateVisitor;
@protocol PSTransferObject;

@interface DXStopAttachOrderTemplateTO : DXAttachOrderTemplateTO
@property (readonly, class, strong) DXStopAttachOrderTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStopAttachOrderTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStopAttachOrderTemplateTO *)change;

- (DXOrderValidationParamsTO *)constructParams;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStopAttachOrderTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXStopTypeEnum *)getStopType;

- (NSUInteger)hash;

- (jboolean)isTrailing;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setStopTypeWithDXStopTypeEnum:(DXStopTypeEnum *)stopType;

- (void)setTrailingWithBoolean:(jboolean)trailing;

- (NSString *)description;

- (void)visitByWithDXOrderTemplateVisitor:(id<DXOrderTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStopAttachOrderTemplateTO)

inline DXStopAttachOrderTemplateTO *DXStopAttachOrderTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopAttachOrderTemplateTO *DXStopAttachOrderTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopAttachOrderTemplateTO, EMPTY, DXStopAttachOrderTemplateTO *)

FOUNDATION_EXPORT void DXStopAttachOrderTemplateTO_init(DXStopAttachOrderTemplateTO *self);

FOUNDATION_EXPORT DXStopAttachOrderTemplateTO *new_DXStopAttachOrderTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopAttachOrderTemplateTO *create_DXStopAttachOrderTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStopAttachOrderTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO DXStopAttachOrderTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateStopAttachOrderTemplateTO")

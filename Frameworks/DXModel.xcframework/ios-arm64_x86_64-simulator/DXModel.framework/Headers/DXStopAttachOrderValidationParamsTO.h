
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStopAttachOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO || defined(INCLUDE_DXStopAttachOrderValidationParamsTO))
#define DXStopAttachOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationAttachOrderValidationParamsTO 1
#define INCLUDE_DXAttachOrderValidationParamsTO 1
#include "DXAttachOrderValidationParamsTO.h"

@class DXStopTypeEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStopAttachOrderValidationParamsTO : DXAttachOrderValidationParamsTO
@property (readonly, class, strong) DXStopAttachOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStopAttachOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStopAttachOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStopAttachOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXStopTypeEnum *)getDefaultStopType;

- (NSUInteger)hash;

- (jboolean)isStopTypeEditable;

- (jboolean)isTrailingByDefault;

- (jboolean)isTrailingFlagEditable;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDefaultStopTypeWithDXStopTypeEnum:(DXStopTypeEnum *)defaultStopType;

- (void)setStopTypeEditableWithBoolean:(jboolean)stopTypeEditable;

- (void)setTrailingByDefaultWithBoolean:(jboolean)trailingByDefault;

- (void)setTrailingFlagEditableWithBoolean:(jboolean)trailingFlagEditable;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStopAttachOrderValidationParamsTO)

inline DXStopAttachOrderValidationParamsTO *DXStopAttachOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopAttachOrderValidationParamsTO *DXStopAttachOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopAttachOrderValidationParamsTO, EMPTY, DXStopAttachOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXStopAttachOrderValidationParamsTO_init(DXStopAttachOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXStopAttachOrderValidationParamsTO *new_DXStopAttachOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopAttachOrderValidationParamsTO *create_DXStopAttachOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStopAttachOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO DXStopAttachOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationStopAttachOrderValidationParamsTO")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOcoOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO || defined(INCLUDE_DXOcoOrderValidationParamsTO))
#define DXOcoOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationSizedOrderValidationParamsTO 1
#define INCLUDE_DXSizedOrderValidationParamsTO 1
#include "DXSizedOrderValidationParamsTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOcoOrderValidationParamsTO : DXSizedOrderValidationParamsTO
@property (readonly, class, strong) DXOcoOrderValidationParamsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOcoOrderValidationParamsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOcoOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOcoOrderValidationParamsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getAvailableTypes;

- (PSListTO *)getParams;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAvailableTypesWithPSListTO:(PSListTO *)availableTypes;

- (void)setParamsWithPSListTO:(PSListTO *)params;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOcoOrderValidationParamsTO)

inline DXOcoOrderValidationParamsTO *DXOcoOrderValidationParamsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOcoOrderValidationParamsTO *DXOcoOrderValidationParamsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOcoOrderValidationParamsTO, EMPTY, DXOcoOrderValidationParamsTO *)

FOUNDATION_EXPORT void DXOcoOrderValidationParamsTO_init(DXOcoOrderValidationParamsTO *self);

FOUNDATION_EXPORT DXOcoOrderValidationParamsTO *new_DXOcoOrderValidationParamsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOcoOrderValidationParamsTO *create_DXOcoOrderValidationParamsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOcoOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO DXOcoOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorValidationOcoOrderValidationParamsTO")

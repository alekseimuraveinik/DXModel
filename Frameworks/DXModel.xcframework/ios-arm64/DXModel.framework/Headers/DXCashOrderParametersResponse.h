
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCashOrderParametersResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse || defined(INCLUDE_DXCashOrderParametersResponse))
#define DXCashOrderParametersResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCashOrderEditorParametersTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCashOrderParametersResponse : PSBaseTransferObject
@property (readonly, class, strong) DXCashOrderParametersResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCashOrderParametersResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCashOrderParametersResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCashOrderParametersResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXCashOrderEditorParametersTO *)getParameters;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setParametersWithDXCashOrderEditorParametersTO:(DXCashOrderEditorParametersTO *)parameters;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCashOrderParametersResponse)

inline DXCashOrderParametersResponse *DXCashOrderParametersResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCashOrderParametersResponse *DXCashOrderParametersResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCashOrderParametersResponse, EMPTY, DXCashOrderParametersResponse *)

FOUNDATION_EXPORT void DXCashOrderParametersResponse_init(DXCashOrderParametersResponse *self);

FOUNDATION_EXPORT DXCashOrderParametersResponse *new_DXCashOrderParametersResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCashOrderParametersResponse *create_DXCashOrderParametersResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCashOrderParametersResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse DXCashOrderParametersResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersResponse")

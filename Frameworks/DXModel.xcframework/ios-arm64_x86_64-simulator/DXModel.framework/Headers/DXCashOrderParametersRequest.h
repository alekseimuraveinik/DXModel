
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCashOrderParametersRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest || defined(INCLUDE_DXCashOrderParametersRequest))
#define DXCashOrderParametersRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCashOrderParametersRequest : PSBaseTransferObject
@property (readonly, class, strong) DXCashOrderParametersRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCashOrderParametersRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCashOrderParametersRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCashOrderParametersRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCashOrderParametersRequest)

inline DXCashOrderParametersRequest *DXCashOrderParametersRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCashOrderParametersRequest *DXCashOrderParametersRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCashOrderParametersRequest, EMPTY, DXCashOrderParametersRequest *)

FOUNDATION_EXPORT void DXCashOrderParametersRequest_init(DXCashOrderParametersRequest *self);

FOUNDATION_EXPORT DXCashOrderParametersRequest *new_DXCashOrderParametersRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCashOrderParametersRequest *create_DXCashOrderParametersRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCashOrderParametersRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest DXCashOrderParametersRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequest")

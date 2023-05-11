
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderHistoryResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse || defined(INCLUDE_DXOrderHistoryResponse))
#define DXOrderHistoryResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOrderHistoryResponse : PSBaseTransferObject
@property (readonly, class, strong) DXOrderHistoryResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderHistoryResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderHistoryResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderHistoryResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getResult;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setResultWithPSListTO:(PSListTO *)result;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderHistoryResponse)

inline DXOrderHistoryResponse *DXOrderHistoryResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryResponse *DXOrderHistoryResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryResponse, EMPTY, DXOrderHistoryResponse *)

FOUNDATION_EXPORT void DXOrderHistoryResponse_init(DXOrderHistoryResponse *self);

FOUNDATION_EXPORT DXOrderHistoryResponse *new_DXOrderHistoryResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderHistoryResponse *create_DXOrderHistoryResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderHistoryResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse DXOrderHistoryResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryResponse")

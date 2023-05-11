
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderHistoryRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest || defined(INCLUDE_DXOrderHistoryRequest))
#define DXOrderHistoryRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderHistoryRequest : PSBaseTransferObject
@property (readonly, class, strong) DXOrderHistoryRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderHistoryRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderHistoryRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderHistoryRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getOrderId;

- (jlong)getTimeFrom;

- (jlong)getTimeTo;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOrderIdWithNSString:(NSString *)orderId;

- (void)setTimeFromWithLong:(jlong)timeFrom;

- (void)setTimeToWithLong:(jlong)timeTo;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderHistoryRequest)

inline DXOrderHistoryRequest *DXOrderHistoryRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryRequest *DXOrderHistoryRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryRequest, EMPTY, DXOrderHistoryRequest *)

FOUNDATION_EXPORT void DXOrderHistoryRequest_init(DXOrderHistoryRequest *self);

FOUNDATION_EXPORT DXOrderHistoryRequest *new_DXOrderHistoryRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderHistoryRequest *create_DXOrderHistoryRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderHistoryRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest DXOrderHistoryRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryRequest")

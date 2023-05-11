
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTradeHistoryRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest || defined(INCLUDE_DXTradeHistoryRequest))
#define DXTradeHistoryRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXTradeHistoryRequest : PSBaseTransferObject
@property (readonly, class, strong) DXTradeHistoryRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXTradeHistoryRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXTradeHistoryRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXTradeHistoryRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getTimeFrom;

- (jlong)getTimeTo;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTimeFromWithLong:(jlong)timeFrom;

- (void)setTimeToWithLong:(jlong)timeTo;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXTradeHistoryRequest)

inline DXTradeHistoryRequest *DXTradeHistoryRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeHistoryRequest *DXTradeHistoryRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeHistoryRequest, EMPTY, DXTradeHistoryRequest *)

FOUNDATION_EXPORT void DXTradeHistoryRequest_init(DXTradeHistoryRequest *self);

FOUNDATION_EXPORT DXTradeHistoryRequest *new_DXTradeHistoryRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTradeHistoryRequest *create_DXTradeHistoryRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXTradeHistoryRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest DXTradeHistoryRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryRequest")

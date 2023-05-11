
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderCancelRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest || defined(INCLUDE_DXOrderCancelRequest))
#define DXOrderCancelRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXOrderCancelRequestVisitor;
@protocol PSTransferObject;

@interface DXOrderCancelRequest : PSBaseTransferObject
@property (readonly, class, strong) DXOrderCancelRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderCancelRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderCancelRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderCancelRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getCancelOrderId;

- (NSUInteger)hash;

- (jboolean)isCancelAll;

- (void)makeAllOrdersCancelRequest;

- (void)makeSingleOrderCancelRequestWithNSString:(NSString *)cancelOrderId;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCancelAllWithBoolean:(jboolean)cancelAll;

- (void)setCancelOrderIdWithNSString:(NSString *)cancelOrderId;

- (NSString *)description;

- (void)visitWithWithDXOrderCancelRequestVisitor:(id<DXOrderCancelRequestVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderCancelRequest)

inline DXOrderCancelRequest *DXOrderCancelRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderCancelRequest *DXOrderCancelRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderCancelRequest, EMPTY, DXOrderCancelRequest *)

FOUNDATION_EXPORT void DXOrderCancelRequest_init(DXOrderCancelRequest *self);

FOUNDATION_EXPORT DXOrderCancelRequest *new_DXOrderCancelRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderCancelRequest *create_DXOrderCancelRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderCancelRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest DXOrderCancelRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequest")

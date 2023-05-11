
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSubscriptionRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest || defined(INCLUDE_PSSubscriptionRequest))
#define PSSubscriptionRequest_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest 1
#define INCLUDE_PSRequest 1
#include "PSRequest.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSRequest_Visitor;
@protocol PSTransferObject;

@interface PSSubscriptionRequest : PSRequest
@property (readonly, class, strong) PSSubscriptionRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSSubscriptionRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)feedId
                              withInt:(jint)version_
                 withPSTransferObject:(id<PSTransferObject>)subscription;

- (void)acceptWithPSRequest_Visitor:(id<PSRequest_Visitor>)visitor;

- (PSSubscriptionRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSSubscriptionRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getFeedId;

- (id<PSTransferObject>)getSubscription;

- (jint)getVersion;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setFeedIdWithInt:(jint)feedId;

- (void)setSubscriptionWithPSTransferObject:(id<PSTransferObject>)subscription;

- (void)setVersionWithInt:(jint)version_;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSSubscriptionRequest)

inline PSSubscriptionRequest *PSSubscriptionRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSSubscriptionRequest *PSSubscriptionRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSubscriptionRequest, EMPTY, PSSubscriptionRequest *)

FOUNDATION_EXPORT void PSSubscriptionRequest_init(PSSubscriptionRequest *self);

FOUNDATION_EXPORT PSSubscriptionRequest *new_PSSubscriptionRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSubscriptionRequest *create_PSSubscriptionRequest_init(void);

FOUNDATION_EXPORT void PSSubscriptionRequest_initWithInt_withInt_withPSTransferObject_(PSSubscriptionRequest *self, jint feedId, jint version_, id<PSTransferObject> subscription);

FOUNDATION_EXPORT PSSubscriptionRequest *new_PSSubscriptionRequest_initWithInt_withInt_withPSTransferObject_(jint feedId, jint version_, id<PSTransferObject> subscription) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSubscriptionRequest *create_PSSubscriptionRequest_initWithInt_withInt_withPSTransferObject_(jint feedId, jint version_, id<PSTransferObject> subscription);

J2OBJC_TYPE_LITERAL_HEADER(PSSubscriptionRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest PSSubscriptionRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionRequest")

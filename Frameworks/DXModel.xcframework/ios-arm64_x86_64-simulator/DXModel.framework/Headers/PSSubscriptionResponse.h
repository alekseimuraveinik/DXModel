
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSubscriptionResponse_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse || defined(INCLUDE_PSSubscriptionResponse))
#define PSSubscriptionResponse_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataResponse 1
#define INCLUDE_PSResponse 1
#include "PSResponse.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSResponse_Visitor;
@protocol PSTransferObject;

@interface PSSubscriptionResponse : PSResponse
@property (readonly, class, strong) PSSubscriptionResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSSubscriptionResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)feedId
                              withInt:(jint)requestVersion
                              withInt:(jint)responseVersion
                        withPSErrorTO:(PSErrorTO *)error;

- (instancetype __nonnull)initWithInt:(jint)feedId
                              withInt:(jint)requestVersion
                              withInt:(jint)responseVersion
                 withPSTransferObject:(id<PSTransferObject>)response;

- (void)acceptWithPSResponse_Visitor:(id<PSResponse_Visitor>)visitor;

- (PSSubscriptionResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSSubscriptionResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (jint)getFeedId;

- (jint)getRequestVersion;

- (id<PSTransferObject>)getResponse;

- (jint)getResponseVersion;

- (jboolean)hasError;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setFeedIdWithInt:(jint)feedId;

- (void)setRequestVersionWithInt:(jint)requestVersion;

- (void)setResponseWithPSTransferObject:(id<PSTransferObject>)response;

- (void)setResponseVersionWithInt:(jint)responseVersion;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSSubscriptionResponse)

inline PSSubscriptionResponse *PSSubscriptionResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSSubscriptionResponse *PSSubscriptionResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSubscriptionResponse, EMPTY, PSSubscriptionResponse *)

FOUNDATION_EXPORT void PSSubscriptionResponse_init(PSSubscriptionResponse *self);

FOUNDATION_EXPORT PSSubscriptionResponse *new_PSSubscriptionResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSubscriptionResponse *create_PSSubscriptionResponse_init(void);

FOUNDATION_EXPORT void PSSubscriptionResponse_initWithInt_withInt_withInt_withPSErrorTO_(PSSubscriptionResponse *self, jint feedId, jint requestVersion, jint responseVersion, PSErrorTO *error);

FOUNDATION_EXPORT PSSubscriptionResponse *new_PSSubscriptionResponse_initWithInt_withInt_withInt_withPSErrorTO_(jint feedId, jint requestVersion, jint responseVersion, PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSubscriptionResponse *create_PSSubscriptionResponse_initWithInt_withInt_withInt_withPSErrorTO_(jint feedId, jint requestVersion, jint responseVersion, PSErrorTO *error);

FOUNDATION_EXPORT void PSSubscriptionResponse_initWithInt_withInt_withInt_withPSTransferObject_(PSSubscriptionResponse *self, jint feedId, jint requestVersion, jint responseVersion, id<PSTransferObject> response);

FOUNDATION_EXPORT PSSubscriptionResponse *new_PSSubscriptionResponse_initWithInt_withInt_withInt_withPSTransferObject_(jint feedId, jint requestVersion, jint responseVersion, id<PSTransferObject> response) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSubscriptionResponse *create_PSSubscriptionResponse_initWithInt_withInt_withInt_withPSTransferObject_(jint feedId, jint requestVersion, jint responseVersion, id<PSTransferObject> response);

J2OBJC_TYPE_LITERAL_HEADER(PSSubscriptionResponse)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse PSSubscriptionResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSubscriptionResponse")

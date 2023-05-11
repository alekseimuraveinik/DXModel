
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataActionActionRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataActionActionRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionRequest || defined(INCLUDE_PSActionRequest))
#define PSActionRequest_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest 1
#define INCLUDE_PSRequest 1
#include "PSRequest.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSRequest_Visitor;
@protocol PSTransferObject;

@interface PSActionRequest : PSRequest
@property (readonly, class, strong) PSActionRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSActionRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)actionTypeId
                              withInt:(jint)performerId
                              withInt:(jint)actionId
                 withPSTransferObject:(id<PSTransferObject>)payload;

- (void)acceptWithPSRequest_Visitor:(id<PSRequest_Visitor>)visitor;

- (PSActionRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSActionRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getActionId;

- (jint)getActionTypeId;

- (id<PSTransferObject>)getPayload;

- (jint)getPerformerId;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setActionIdWithInt:(jint)actionId;

- (void)setActionTypeIdWithInt:(jint)actionTypeId;

- (void)setPayloadWithPSTransferObject:(id<PSTransferObject>)payload;

- (void)setPerformerIdWithInt:(jint)performerId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSActionRequest)

inline PSActionRequest *PSActionRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSActionRequest *PSActionRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSActionRequest, EMPTY, PSActionRequest *)

FOUNDATION_EXPORT void PSActionRequest_init(PSActionRequest *self);

FOUNDATION_EXPORT PSActionRequest *new_PSActionRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionRequest *create_PSActionRequest_init(void);

FOUNDATION_EXPORT void PSActionRequest_initWithInt_withInt_withInt_withPSTransferObject_(PSActionRequest *self, jint actionTypeId, jint performerId, jint actionId, id<PSTransferObject> payload);

FOUNDATION_EXPORT PSActionRequest *new_PSActionRequest_initWithInt_withInt_withInt_withPSTransferObject_(jint actionTypeId, jint performerId, jint actionId, id<PSTransferObject> payload) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionRequest *create_PSActionRequest_initWithInt_withInt_withInt_withPSTransferObject_(jint actionTypeId, jint performerId, jint actionId, id<PSTransferObject> payload);

J2OBJC_TYPE_LITERAL_HEADER(PSActionRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataActionActionRequest PSActionRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionRequest")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionResult")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataActionActionResult
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionResult 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionResult 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataActionActionResult

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionResult_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionResult || defined(INCLUDE_PSActionResult))
#define PSActionResult_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataResponse 1
#define INCLUDE_PSResponse 1
#include "PSResponse.h"

@class PSActionRequest;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSResponse_Visitor;
@protocol PSTransferObject;

@interface PSActionResult : PSResponse
@property (readonly, class, strong) PSActionResult *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSActionResult *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSActionRequest:(PSActionRequest *)request
                             withPSTransferObject:(id<PSTransferObject>)payload;

- (void)acceptWithPSResponse_Visitor:(id<PSResponse_Visitor>)visitor;

- (PSActionResult *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSActionResult *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getActionId;

- (id<PSTransferObject>)getPayload;

- (jint)getPerformerId;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setActionIdWithInt:(jint)actionId;

- (void)setPayloadWithPSTransferObject:(id<PSTransferObject>)payload;

- (void)setPerformerIdWithInt:(jint)performerId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSActionResult)

inline PSActionResult *PSActionResult_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSActionResult *PSActionResult_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSActionResult, EMPTY, PSActionResult *)

FOUNDATION_EXPORT void PSActionResult_init(PSActionResult *self);

FOUNDATION_EXPORT PSActionResult *new_PSActionResult_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionResult *create_PSActionResult_init(void);

FOUNDATION_EXPORT void PSActionResult_initWithPSActionRequest_withPSTransferObject_(PSActionResult *self, PSActionRequest *request, id<PSTransferObject> payload);

FOUNDATION_EXPORT PSActionResult *new_PSActionResult_initWithPSActionRequest_withPSTransferObject_(PSActionRequest *request, id<PSTransferObject> payload) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionResult *create_PSActionResult_initWithPSActionRequest_withPSTransferObject_(PSActionRequest *request, id<PSTransferObject> payload);

J2OBJC_TYPE_LITERAL_HEADER(PSActionResult)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataActionActionResult PSActionResult;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataActionActionResult")

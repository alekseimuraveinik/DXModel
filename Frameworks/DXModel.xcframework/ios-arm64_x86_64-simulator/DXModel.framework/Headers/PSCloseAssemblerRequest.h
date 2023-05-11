
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCloseAssemblerRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest || defined(INCLUDE_PSCloseAssemblerRequest))
#define PSCloseAssemblerRequest_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest 1
#define INCLUDE_PSRequest 1
#include "PSRequest.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSRequest_Visitor;
@protocol PSTransferObject;

@interface PSCloseAssemblerRequest : PSRequest
@property (readonly, class, strong) PSCloseAssemblerRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSCloseAssemblerRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)feedId;

- (void)acceptWithPSRequest_Visitor:(id<PSRequest_Visitor>)visitor;

- (PSCloseAssemblerRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSCloseAssemblerRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getFeedId;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setFeedIdWithInt:(jint)feedId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSCloseAssemblerRequest)

inline PSCloseAssemblerRequest *PSCloseAssemblerRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSCloseAssemblerRequest *PSCloseAssemblerRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCloseAssemblerRequest, EMPTY, PSCloseAssemblerRequest *)

FOUNDATION_EXPORT void PSCloseAssemblerRequest_init(PSCloseAssemblerRequest *self);

FOUNDATION_EXPORT PSCloseAssemblerRequest *new_PSCloseAssemblerRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCloseAssemblerRequest *create_PSCloseAssemblerRequest_init(void);

FOUNDATION_EXPORT void PSCloseAssemblerRequest_initWithInt_(PSCloseAssemblerRequest *self, jint feedId);

FOUNDATION_EXPORT PSCloseAssemblerRequest *new_PSCloseAssemblerRequest_initWithInt_(jint feedId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCloseAssemblerRequest *create_PSCloseAssemblerRequest_initWithInt_(jint feedId);

J2OBJC_TYPE_LITERAL_HEADER(PSCloseAssemblerRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest PSCloseAssemblerRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCloseAssemblerRequest")

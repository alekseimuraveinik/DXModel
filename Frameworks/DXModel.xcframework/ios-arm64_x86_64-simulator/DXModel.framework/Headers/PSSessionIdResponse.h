
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionIdResponse_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse || defined(INCLUDE_PSSessionIdResponse))
#define PSSessionIdResponse_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest 1
#define INCLUDE_PSSessionIdRequest 1
#include "PSSessionIdRequest.h"

@class PSPacket;
@protocol PSTransferObject;

@interface PSSessionIdResponse : PSSessionIdRequest
@property (readonly, class, strong) PSSessionIdResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSSessionIdResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)sessionId;

- (PSSessionIdResponse *)change;

- (PSSessionIdResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                                   withInt:(jint)arg1
                              withPSPacket:(PSPacket *)arg2 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSSessionIdResponse)

inline PSSessionIdResponse *PSSessionIdResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSSessionIdResponse *PSSessionIdResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSessionIdResponse, EMPTY, PSSessionIdResponse *)

FOUNDATION_EXPORT void PSSessionIdResponse_initWithNSString_(PSSessionIdResponse *self, NSString *sessionId);

FOUNDATION_EXPORT PSSessionIdResponse *new_PSSessionIdResponse_initWithNSString_(NSString *sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionIdResponse *create_PSSessionIdResponse_initWithNSString_(NSString *sessionId);

FOUNDATION_EXPORT void PSSessionIdResponse_init(PSSessionIdResponse *self);

FOUNDATION_EXPORT PSSessionIdResponse *new_PSSessionIdResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionIdResponse *create_PSSessionIdResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionIdResponse)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse PSSessionIdResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdResponse")

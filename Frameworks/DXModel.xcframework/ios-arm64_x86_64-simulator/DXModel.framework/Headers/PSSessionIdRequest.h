
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionIdRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest || defined(INCLUDE_PSSessionIdRequest))
#define PSSessionIdRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSPacket;
@protocol PSTransferObject;

@interface PSSessionIdRequest : PSBaseTransferObject
@property (readonly, class, strong) PSSessionIdRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSSessionIdRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)sessionId
                                   withInt:(jint)serverPacketVersion
                              withPSPacket:(PSPacket *)lastClientPacket;

- (PSSessionIdRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSSessionIdRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSPacket *)getLastClientPacket;

- (jint)getPacketVersion;

- (NSString *)getSessionId;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLastClientPacketWithPSPacket:(PSPacket *)lastClientPacket;

- (void)setPacketVersionWithInt:(jint)packetVersion;

- (void)setSessionIdWithNSString:(NSString *)sessionId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSSessionIdRequest)

inline PSSessionIdRequest *PSSessionIdRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSSessionIdRequest *PSSessionIdRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSessionIdRequest, EMPTY, PSSessionIdRequest *)

FOUNDATION_EXPORT void PSSessionIdRequest_initWithNSString_withInt_withPSPacket_(PSSessionIdRequest *self, NSString *sessionId, jint serverPacketVersion, PSPacket *lastClientPacket);

FOUNDATION_EXPORT PSSessionIdRequest *new_PSSessionIdRequest_initWithNSString_withInt_withPSPacket_(NSString *sessionId, jint serverPacketVersion, PSPacket *lastClientPacket) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionIdRequest *create_PSSessionIdRequest_initWithNSString_withInt_withPSPacket_(NSString *sessionId, jint serverPacketVersion, PSPacket *lastClientPacket);

FOUNDATION_EXPORT void PSSessionIdRequest_init(PSSessionIdRequest *self);

FOUNDATION_EXPORT PSSessionIdRequest *new_PSSessionIdRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionIdRequest *create_PSSessionIdRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionIdRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest PSSessionIdRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionSessionIdRequest")

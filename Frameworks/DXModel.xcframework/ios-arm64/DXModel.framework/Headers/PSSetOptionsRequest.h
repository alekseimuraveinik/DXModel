
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSetOptionsRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest || defined(INCLUDE_PSSetOptionsRequest))
#define PSSetOptionsRequest_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest 1
#define INCLUDE_PSRequest 1
#include "PSRequest.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSRequest_Visitor;
@protocol PSTransferObject;

@interface PSSetOptionsRequest : PSRequest
@property (readonly, class, strong) PSSetOptionsRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSSetOptionsRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithBoolean:(jboolean)sendOnlyDifference;

- (void)acceptWithPSRequest_Visitor:(id<PSRequest_Visitor>)visitor;

- (PSSetOptionsRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSSetOptionsRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)isSendOnlyDifference;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSendOnlyDifferenceWithBoolean:(jboolean)sendOnlyDifference;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSSetOptionsRequest)

inline PSSetOptionsRequest *PSSetOptionsRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSSetOptionsRequest *PSSetOptionsRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSetOptionsRequest, EMPTY, PSSetOptionsRequest *)

FOUNDATION_EXPORT void PSSetOptionsRequest_init(PSSetOptionsRequest *self);

FOUNDATION_EXPORT PSSetOptionsRequest *new_PSSetOptionsRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSetOptionsRequest *create_PSSetOptionsRequest_init(void);

FOUNDATION_EXPORT void PSSetOptionsRequest_initWithBoolean_(PSSetOptionsRequest *self, jboolean sendOnlyDifference);

FOUNDATION_EXPORT PSSetOptionsRequest *new_PSSetOptionsRequest_initWithBoolean_(jboolean sendOnlyDifference) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSetOptionsRequest *create_PSSetOptionsRequest_initWithBoolean_(jboolean sendOnlyDifference);

J2OBJC_TYPE_LITERAL_HEADER(PSSetOptionsRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest PSSetOptionsRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSetOptionsRequest")

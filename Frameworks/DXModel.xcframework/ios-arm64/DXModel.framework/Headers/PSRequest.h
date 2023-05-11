
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataRequest || defined(INCLUDE_PSRequest))
#define PSRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSRequest_Visitor;

@interface PSRequest : PSBaseTransferObject

#pragma mark Public

- (void)acceptWithPSRequest_Visitor:(id<PSRequest_Visitor>)visitor;

#pragma mark Protected

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(PSRequest)

FOUNDATION_EXPORT void PSRequest_init(PSRequest *self);

J2OBJC_TYPE_LITERAL_HEADER(PSRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataRequest PSRequest;

#endif

#if !defined (PSRequest_Visitor_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataRequest || defined(INCLUDE_PSRequest_Visitor))
#define PSRequest_Visitor_

@class PSActionRequest;
@class PSCloseAssemblerRequest;
@class PSCreateAssemblerRequest;
@class PSSetOptionsRequest;
@class PSSubscriptionRequest;

@protocol PSRequest_Visitor < JavaObject >

- (void)visitWithPSCreateAssemblerRequest:(PSCreateAssemblerRequest *)request;

- (void)visitWithPSCloseAssemblerRequest:(PSCloseAssemblerRequest *)request;

- (void)visitWithPSSubscriptionRequest:(PSSubscriptionRequest *)request;

- (void)visitWithPSActionRequest:(PSActionRequest *)request;

- (void)visitWithPSSetOptionsRequest:(PSSetOptionsRequest *)request;

@end

J2OBJC_EMPTY_STATIC_INIT(PSRequest_Visitor)

J2OBJC_TYPE_LITERAL_HEADER(PSRequest_Visitor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataRequest")

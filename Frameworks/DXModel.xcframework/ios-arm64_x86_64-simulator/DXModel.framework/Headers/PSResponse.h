
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataResponse")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataResponse
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataResponse 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSResponse_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataResponse || defined(INCLUDE_PSResponse))
#define PSResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSResponse_Visitor;

@interface PSResponse : PSBaseTransferObject

#pragma mark Public

- (void)acceptWithPSResponse_Visitor:(id<PSResponse_Visitor>)visitor;

#pragma mark Protected

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(PSResponse)

FOUNDATION_EXPORT void PSResponse_init(PSResponse *self);

J2OBJC_TYPE_LITERAL_HEADER(PSResponse)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataResponse PSResponse;

#endif

#if !defined (PSResponse_Visitor_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataResponse || defined(INCLUDE_PSResponse_Visitor))
#define PSResponse_Visitor_

@class PSActionResult;
@class PSSessionClosedNotification;
@class PSSubscriptionResponse;

@protocol PSResponse_Visitor < JavaObject >

- (void)visitWithPSSubscriptionResponse:(PSSubscriptionResponse *)response;

- (void)visitWithPSActionResult:(PSActionResult *)result;

- (void)visitWithPSSessionClosedNotification:(PSSessionClosedNotification *)response;

@end

J2OBJC_EMPTY_STATIC_INIT(PSResponse_Visitor)

J2OBJC_TYPE_LITERAL_HEADER(PSResponse_Visitor)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataResponse")

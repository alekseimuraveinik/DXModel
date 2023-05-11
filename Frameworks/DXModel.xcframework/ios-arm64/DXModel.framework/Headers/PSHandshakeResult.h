
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeResult")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolHandshakeResult
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeResult 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeResult 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolHandshakeResult

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSHandshakeResult_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeResult || defined(INCLUDE_PSHandshakeResult))
#define PSHandshakeResult_

@class PSAcceptedOptions;
@class PSCompactInputStream;
@class PSCompactOutputStream;
@class PSHandshakeError;

@interface PSHandshakeResult : NSObject

#pragma mark Public

+ (PSHandshakeResult *)failedWithPSHandshakeError:(PSHandshakeError *)error;

- (PSHandshakeError *)getError;

- (PSAcceptedOptions *)getOptions;

- (jboolean)isSuccessful;

+ (PSHandshakeResult *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

+ (PSHandshakeResult *)successWithPSAcceptedOptions:(PSAcceptedOptions *)options;

- (NSString *)description;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSHandshakeResult)

FOUNDATION_EXPORT PSHandshakeResult *PSHandshakeResult_successWithPSAcceptedOptions_(PSAcceptedOptions *options);

FOUNDATION_EXPORT PSHandshakeResult *PSHandshakeResult_failedWithPSHandshakeError_(PSHandshakeError *error);

FOUNDATION_EXPORT PSHandshakeResult *PSHandshakeResult_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSHandshakeResult)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolHandshakeResult PSHandshakeResult;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeResult")

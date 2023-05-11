
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionConfigurator_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator || defined(INCLUDE_PSConnectionConfigurator))
#define PSConnectionConfigurator_

@class PSAcceptedOptions;
@protocol PSClassFactoryConnection;
@protocol PSConnection;

@protocol PSConnectionConfigurator < JavaObject >

- (id<PSClassFactoryConnection>)applyOptionsWithPSConnection:(id<PSConnection>)connection
                                       withPSAcceptedOptions:(PSAcceptedOptions *)options;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionConfigurator)

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionConfigurator)

#define ComDevexpertsPipestoneCommonProtocolConnectionConfigurator PSConnectionConfigurator

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfigurator")

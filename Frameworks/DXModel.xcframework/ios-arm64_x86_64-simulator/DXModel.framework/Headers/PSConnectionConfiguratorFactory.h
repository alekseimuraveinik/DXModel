
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionConfiguratorFactory_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory || defined(INCLUDE_PSConnectionConfiguratorFactory))
#define PSConnectionConfiguratorFactory_

@class PSAcceptedOptions;
@protocol PSConfiguration;
@protocol PSConnectionConfigurator;

@protocol PSConnectionConfiguratorFactory < JavaObject >

- (id<PSConnectionConfigurator>)newConfiguratorWithPSConfiguration:(id<PSConfiguration>)configuration
                                             withPSAcceptedOptions:(PSAcceptedOptions *)options OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionConfiguratorFactory)

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionConfiguratorFactory)

#define ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory PSConnectionConfiguratorFactory

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConnectionConfiguratorFactory")

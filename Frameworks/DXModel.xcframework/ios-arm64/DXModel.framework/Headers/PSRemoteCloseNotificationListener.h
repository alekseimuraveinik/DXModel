
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSRemoteCloseNotificationListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener || defined(INCLUDE_PSRemoteCloseNotificationListener))
#define PSRemoteCloseNotificationListener_

@class PSSessionClosedNotification;

@protocol PSRemoteCloseNotificationListener < JavaObject >

- (void)onCloseNotificationReceivedWithPSSessionClosedNotification:(PSSessionClosedNotification *)closedNotification;

@end

J2OBJC_EMPTY_STATIC_INIT(PSRemoteCloseNotificationListener)

J2OBJC_TYPE_LITERAL_HEADER(PSRemoteCloseNotificationListener)

#define ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener PSRemoteCloseNotificationListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionRemoteCloseNotificationListener")

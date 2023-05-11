
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertActionResponseVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor || defined(INCLUDE_DXAlertActionResponseVisitor))
#define DXAlertActionResponseVisitor_

@class PSErrorTO;

@protocol DXAlertActionResponseVisitor < JavaObject >

- (void)onSuccess;

- (void)onErrorWithPSErrorTO:(PSErrorTO *)error;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAlertActionResponseVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXAlertActionResponseVisitor)

#define ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor DXAlertActionResponseVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseVisitor")

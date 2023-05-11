
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertActionRequestVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor || defined(INCLUDE_DXAlertActionRequestVisitor))
#define DXAlertActionRequestVisitor_

@class DXAlertTemplateTO;

@protocol DXAlertActionRequestVisitor < JavaObject >

- (void)onCreateAlertWithDXAlertTemplateTO:(DXAlertTemplateTO *)alertTemplateTO;

- (void)onModifyAlertWithLong:(jlong)alertId
        withDXAlertTemplateTO:(DXAlertTemplateTO *)alertTemplateTO;

- (void)onCancelAlertWithLong:(jlong)alertId;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAlertActionRequestVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXAlertActionRequestVisitor)

#define ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor DXAlertActionRequestVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestVisitor")

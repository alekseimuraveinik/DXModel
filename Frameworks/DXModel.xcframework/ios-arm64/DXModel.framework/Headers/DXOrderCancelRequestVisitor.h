
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderCancelRequestVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor || defined(INCLUDE_DXOrderCancelRequestVisitor))
#define DXOrderCancelRequestVisitor_

@protocol DXOrderCancelRequestVisitor < JavaObject >

- (void)cancelAllOrdersRequested;

- (void)cancelOrderRequestedWithNSString:(NSString *)cancelOrderId;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderCancelRequestVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXOrderCancelRequestVisitor)

#define ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor DXOrderCancelRequestVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelRequestVisitor")

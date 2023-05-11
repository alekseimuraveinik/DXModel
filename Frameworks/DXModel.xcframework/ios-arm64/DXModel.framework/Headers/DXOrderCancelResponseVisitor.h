
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderCancelResponseVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor || defined(INCLUDE_DXOrderCancelResponseVisitor))
#define DXOrderCancelResponseVisitor_

@protocol DXOrderCancelResponseVisitor < JavaObject >

- (void)onCancelSuccess;

- (void)onCancelFailedWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderCancelResponseVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXOrderCancelResponseVisitor)

#define ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor DXOrderCancelResponseVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponseVisitor")

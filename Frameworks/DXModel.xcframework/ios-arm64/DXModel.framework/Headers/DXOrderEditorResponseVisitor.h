
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorResponseVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor || defined(INCLUDE_DXOrderEditorResponseVisitor))
#define DXOrderEditorResponseVisitor_

@class DXOrderIssueDetailsTO;
@class DXOrderValidationDetailsTO;
@class PSErrorTO;

@protocol DXOrderEditorResponseVisitor < JavaObject >

- (void)onValidationResponseWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (void)onIssueResponseWithDXOrderIssueDetailsTO:(DXOrderIssueDetailsTO *)details;

- (void)onErrorResponseWithPSErrorTO:(PSErrorTO *)error;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderEditorResponseVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorResponseVisitor)

#define ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor DXOrderEditorResponseVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor")

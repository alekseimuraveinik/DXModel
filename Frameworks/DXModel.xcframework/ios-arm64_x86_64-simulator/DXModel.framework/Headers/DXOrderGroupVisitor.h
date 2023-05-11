
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderGroupVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor || defined(INCLUDE_DXOrderGroupVisitor))
#define DXOrderGroupVisitor_

@class DXIfThenOcoOrderGroupTO;
@class DXIfThenOrderGroupTO;
@class DXOcoOrderGroupTO;
@class DXSingleOrderGroupTO;

@protocol DXOrderGroupVisitor < JavaObject >

- (void)onSingleGroupWithDXSingleOrderGroupTO:(DXSingleOrderGroupTO *)singleOrderGroup;

- (void)onIfThenGroupWithDXIfThenOrderGroupTO:(DXIfThenOrderGroupTO *)ifThenOrderGroupTO;

- (void)onOcoGroupWithDXOcoOrderGroupTO:(DXOcoOrderGroupTO *)ocoOrderGroupTO;

- (void)onIfThenOcoGroupWithDXIfThenOcoOrderGroupTO:(DXIfThenOcoOrderGroupTO *)ifThenOcoOrderGroupTO;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderGroupVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXOrderGroupVisitor)

#define ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor DXOrderGroupVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupVisitor")

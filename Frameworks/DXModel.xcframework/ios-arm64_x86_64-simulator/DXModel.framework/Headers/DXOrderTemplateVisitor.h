
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderTemplateVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor || defined(INCLUDE_DXOrderTemplateVisitor))
#define DXOrderTemplateVisitor_

@class DXCloseOrderTemplateTO;
@class DXEmptyOrderTemplateTO;
@class DXLimitAttachOrderTemplateTO;
@class DXLimitOrderTemplateTO;
@class DXMarketOrderTemplateTO;
@class DXOcoOrderTemplateTO;
@class DXPositionOrderTemplateTO;
@class DXProtectedOrderTemplateTO;
@class DXStopAttachOrderTemplateTO;
@class DXStopOrderTemplateTO;

@protocol DXOrderTemplateVisitor < JavaObject >

- (void)visitWithDXMarketOrderTemplateTO:(DXMarketOrderTemplateTO *)template_;

- (void)visitWithDXLimitOrderTemplateTO:(DXLimitOrderTemplateTO *)template_;

- (void)visitWithDXStopOrderTemplateTO:(DXStopOrderTemplateTO *)template_;

- (void)visitWithDXLimitAttachOrderTemplateTO:(DXLimitAttachOrderTemplateTO *)template_;

- (void)visitWithDXStopAttachOrderTemplateTO:(DXStopAttachOrderTemplateTO *)template_;

- (void)visitWithDXProtectedOrderTemplateTO:(DXProtectedOrderTemplateTO *)template_;

- (void)visitWithDXPositionOrderTemplateTO:(DXPositionOrderTemplateTO *)template_;

- (void)visitWithDXCloseOrderTemplateTO:(DXCloseOrderTemplateTO *)template_;

- (void)visitWithDXEmptyOrderTemplateTO:(DXEmptyOrderTemplateTO *)template_;

- (void)visitWithDXOcoOrderTemplateTO:(DXOcoOrderTemplateTO *)template_;

@end

J2OBJC_EMPTY_STATIC_INIT(DXOrderTemplateVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXOrderTemplateVisitor)

#define ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor DXOrderTemplateVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorTemplateOrderTemplateVisitor")


#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAlertEditorModelListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener || defined(INCLUDE_DXMARKETAlertEditorModelListener))
#define DXMARKETAlertEditorModelListener_

@protocol DXMARKETAlertEditorModelListener < JavaObject >

- (void)dataChanged;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAlertEditorModelListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAlertEditorModelListener)

#define ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener DXMARKETAlertEditorModelListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModelListener")
